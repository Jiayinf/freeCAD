/***************************************************************************
 *   Copyright (c) 2017 Werner Mayer <wmayer[at]users.sourceforge.net>     *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#include "PreCompiled.h"

#ifndef _PreComp_
#include <string>
#include <QAction>
#include <QMenu>
#include <Inventor/draggers/SoDragger.h>
#include <Inventor/nodes/SoPickStyle.h>
#include <Inventor/nodes/SoTransform.h>
#endif

#include <App/GeoFeature.h>
#include <Base/Placement.h>
#include "Gui/ViewParams.h"

#include "Application.h"
#include "BitmapFactory.h"
#include "Control.h"
#include "Document.h"
#include "SoFCCSysDragger.h"
#include "SoFCUnifiedSelection.h"
#include "TaskCSysDragger.h"
#include "View3DInventorViewer.h"
#include "ViewProviderDragger.h"


using namespace Gui;

PROPERTY_SOURCE(Gui::ViewProviderDragger, Gui::ViewProviderDocumentObject)

ViewProviderDragger::ViewProviderDragger() = default;

ViewProviderDragger::~ViewProviderDragger() = default;
// ViewProviderDragger::ViewProviderDragger()
//{
//     // 构造函数中仅初始化指针，不添加场景图节点（避免 attach 前根节点未就绪）
//     m_pTempAnnotation = nullptr;
//     m_pTranslationSwitch = nullptr;
//     m_pRotationSwitch = nullptr;
//     m_pTextSwitch = nullptr;
// }

// ViewProviderDragger::~ViewProviderDragger()
//{
//     cleanupTempGeometry();
// }

void ViewProviderDragger::updateData(const App::Property* prop)
{
    if (prop->isDerivedFrom(App::PropertyPlacement::getClassTypeId())
        && strcmp(prop->getName(), "Placement") == 0) {
        // Note: If R is the rotation, c the rotation center and t the translation
        // vector then Inventor applies the following transformation: R*(x-c)+c+t
        // In FreeCAD a placement only has a rotation and a translation part but
        // no rotation center. This means that the following equation must be ful-
        // filled: R * (x-c) + c + t = R * x + t
        //    <==> R * x + t - R * c + c = R * x + t
        //    <==> (I-R) * c = 0 ==> c = 0
        // This means that the center point must be the origin!
        Base::Placement p = static_cast<const App::PropertyPlacement*>(prop)->getValue();
        updateTransform(p, pcTransform);
    }

    ViewProviderDocumentObject::updateData(prop);
}

bool ViewProviderDragger::doubleClicked()
{
    Gui::Application::Instance->activeDocument()->setEdit(this, (int)ViewProvider::Default);
    return true;
}

void ViewProviderDragger::setupContextMenu(QMenu* menu, QObject* receiver, const char* member)
{
    QIcon iconObject =
        mergeGreyableOverlayIcons(Gui::BitmapFactory().pixmap("Std_TransformManip.svg"));
    QAction* act = menu->addAction(iconObject, QObject::tr("Transform"), receiver, member);
    act->setData(QVariant((int)ViewProvider::Transform));
    ViewProviderDocumentObject::setupContextMenu(menu, receiver, member);
}

ViewProvider* ViewProviderDragger::startEditing(int mode)
{
    _linkDragger = nullptr;
    auto ret = ViewProviderDocumentObject::startEditing(mode);
    if (!ret) {
        return ret;
    }
    return _linkDragger ? _linkDragger : ret;
}

bool ViewProviderDragger::checkLink()
{
    // Trying to detect if the editing request is forwarded by a link object,
    // usually by doubleClicked(). If so, we route the request back. There shall
    // be no risk of infinite recursion, as ViewProviderLink handles
    // ViewProvider::Transform request by itself.
    ViewProviderDocumentObject* vpParent = nullptr;
    std::string subname;
    auto doc = Application::Instance->editDocument();
    if (!doc) {
        return false;
    }
    doc->getInEdit(&vpParent, &subname);
    if (!vpParent) {
        return false;
    }
    auto sobj = vpParent->getObject()->getSubObject(subname.c_str());
    if (!sobj || sobj == getObject() || sobj->getLinkedObject(true) != getObject()) {
        return false;
    }
    auto vp = Application::Instance->getViewProvider(sobj);
    if (!vp) {
        return false;
    }
    _linkDragger = vp->startEditing(ViewProvider::Transform);
    if (_linkDragger) {
        return true;
    }
    return false;
}

bool ViewProviderDragger::setEdit(int ModNum)
{
    Q_UNUSED(ModNum);

    if (checkLink()) {
        return true;
    }

    App::DocumentObject* genericObject = this->getObject();

    if (genericObject->isDerivedFrom(App::GeoFeature::getClassTypeId())) {
        auto geoFeature = static_cast<App::GeoFeature*>(genericObject);
        const Base::Placement& placement = geoFeature->Placement.getValue();
        auto tempTransform = new SoTransform();
        tempTransform->ref();
        updateTransform(placement, tempTransform);

        assert(!csysDragger);
        csysDragger = new SoFCCSysDragger();
        csysDragger->setAxisColors(Gui::ViewParams::instance()->getAxisXColor(),
                                   Gui::ViewParams::instance()->getAxisYColor(),
                                   Gui::ViewParams::instance()->getAxisZColor());
        csysDragger->draggerSize.setValue(ViewParams::instance()->getDraggerScale());
        csysDragger->translation.setValue(tempTransform->translation.getValue());
        csysDragger->rotation.setValue(tempTransform->rotation.getValue());

        tempTransform->unref();

        pcTransform->translation.connectFrom(&csysDragger->translation);
        pcTransform->rotation.connectFrom(&csysDragger->rotation);

        // --- 修改：添加所有必要的回调 ---
        csysDragger->addStartCallback(dragStartCallback, this);
        csysDragger->addMotionCallback(dragMotionCallback, this);

        csysDragger->addFinishCallback(dragFinishCallback, this);

        //// 如果尚未记录初始坐标，则记录当前坐标
        //if (!m_hasInitialDragger) {
        //    m_initialDraggerWorld = csysDragger->translation.getValue();  // 记录初始坐标
        //    m_hasInitialDragger = true;  // 设置标志，确保只记录一次

        //}

        csysDragger->ref();

        auto task = new TaskCSysDragger(this, csysDragger);
        Gui::Control().showDialog(task);
    }

    return true;
}

void ViewProviderDragger::unsetEdit(int ModNum)
{
    Q_UNUSED(ModNum);

    // 新增：退出编辑模式时，清理屏幕上的 angle / distance 图形和文字
    cleanupTempGeometry();
    m_bIsDragging = false;

    if (csysDragger) {

        // --- 修改：移除所有回调 ---
        csysDragger->removeStartCallback(dragStartCallback, this);
        csysDragger->removeMotionCallback(dragMotionCallback, this);
        csysDragger->removeFinishCallback(dragFinishCallback, this);

        pcTransform->translation.disconnect(&csysDragger->translation);
        pcTransform->rotation.disconnect(&csysDragger->rotation);

        // dragger node is added to viewer's editing root in setEditViewer
        // pcRoot->removeChild(csysDragger); //should delete csysDragger
        csysDragger->unref();
        csysDragger = nullptr;
    }
    Gui::Control().closeDialog();
}

void ViewProviderDragger::setEditViewer(Gui::View3DInventorViewer* viewer, int ModNum)
{
    Q_UNUSED(ModNum);

    if (csysDragger && viewer) {
        auto rootPickStyle = new SoPickStyle();
        rootPickStyle->style = SoPickStyle::UNPICKABLE;
        auto selection = static_cast<SoGroup*>(viewer->getSceneGraph());
        selection->insertChild(rootPickStyle, 0);
        viewer->setSelectionEnabled(false);
        csysDragger->setUpAutoScale(viewer->getSoRenderManager()->getCamera());

        auto mat = viewer->getDocument()->getEditingTransform();
        viewer->getDocument()->setEditingTransform(mat);
        auto feat = dynamic_cast<App::GeoFeature*>(getObject());
        if (feat) {
            auto matInverse = feat->Placement.getValue().toMatrix();
            matInverse.inverse();
            mat *= matInverse;
        }
        viewer->setupEditingRoot(csysDragger, &mat);
    }
}

void ViewProviderDragger::unsetEditViewer(Gui::View3DInventorViewer* viewer)
{
    auto selection = static_cast<SoGroup*>(viewer->getSceneGraph());
    SoNode* child = selection->getChild(0);
    if (child && child->isOfType(SoPickStyle::getClassTypeId())) {
        selection->removeChild(child);
        viewer->setSelectionEnabled(true);
    }
}

void ViewProviderDragger::dragStartCallback(void* data, SoDragger* d)
{
    auto* vp = static_cast<ViewProviderDragger*>(data);
    auto* dragger = static_cast<SoFCCSysDragger*>(d);
    if (!vp || !dragger) {
        return;
    }

    vp->m_bIsDragging = true;

    // ① 用 dragger 自带的 local→world 矩阵，把 (0,0,0) 变换到世界坐标
    SbMatrix lwMat = dragger->getLocalToWorldMatrix();
    SbVec3f originLocal(0.0f, 0.0f, 0.0f);
    SbVec3f originWorld(0.0f, 0.0f, 0.0f);
    lwMat.multVecMatrix(originLocal, originWorld);

    // ② 记录原点世界坐标，后面画线都从这里开始
    vp->m_initialWorldOrigin = originWorld;

    // ③ 初始化一次临时几何（里面会重建线段/文字节点）
    vp->initTempGeometry();
}


void ViewProviderDragger::dragMotionCallback(void* data, SoDragger* d)
{
    auto* vp = static_cast<ViewProviderDragger*>(data);
    auto* dragger = static_cast<SoFCCSysDragger*>(d);
    if (!vp || !dragger || !vp->m_bIsDragging) {
        return;
    }

    // 保存当前 local→world 矩阵，updateTranslationGeometry 里也可以用到
    vp->m_currentLocalToWorldMat = dragger->getLocalToWorldMatrix();

    // 保证线/弧/文字是黑色
    if (vp->m_pLineMat) {
        vp->m_pLineMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);
    }
    if (vp->m_pArcMat) {
        vp->m_pArcMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);
    }
    if (vp->m_pTextMat) {
        vp->m_pTextMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);
    }

    // 判断这一步是平移还是旋转（沿用你原来的增量计数法）
    bool isTranslate = (dragger->translationIncrementCountX.getValue() != 0)
        || (dragger->translationIncrementCountY.getValue() != 0)
        || (dragger->translationIncrementCountZ.getValue() != 0);

    bool isRotate = (dragger->rotationIncrementCountX.getValue() != 0)
        || (dragger->rotationIncrementCountY.getValue() != 0)
        || (dragger->rotationIncrementCountZ.getValue() != 0);

    if (isTranslate && !isRotate) {
        vp->updateTranslationGeometry(dragger);
    }
    else if (isRotate && !isTranslate) {
        SbRotation currentRot = dragger->rotation.getValue();
        vp->updateRotationGeometry(currentRot, vp->m_initialWorldOrigin);
    }
}




void ViewProviderDragger::dragFinishCallback(void* data, SoDragger* d)
{
    //// This is called when a manipulator has done manipulating
    //auto sudoThis = static_cast<ViewProviderDragger*>(data);
    //auto dragger = static_cast<SoFCCSysDragger*>(d);

    //sudoThis->initTempGeometry();

    //updatePlacementFromDragger(sudoThis, dragger);

    //// Gui::Application::Instance->activeDocument()->commitCommand();


    ViewProviderDragger* vp = static_cast<ViewProviderDragger*>(data);
    SoFCCSysDragger* dragger = static_cast<SoFCCSysDragger*>(d);
    if (!vp || !dragger) {
        return;
    }

    // 1. 设置拖拽状态为非活动，防止 motion 回调继续触发
    vp->m_bIsDragging = false;

    // 2. 更新对象的Placement（这部分逻辑保留）
    updatePlacementFromDragger(vp, dragger);

}

void ViewProviderDragger::updatePlacementFromDragger(ViewProviderDragger* sudoThis,
                                                     SoFCCSysDragger* draggerIn)
{
    App::DocumentObject* genericObject = sudoThis->getObject();
    if (!genericObject->isDerivedFrom(App::GeoFeature::getClassTypeId())) {
        return;
    }
    auto geoFeature = static_cast<App::GeoFeature*>(genericObject);
    Base::Placement originalPlacement = geoFeature->Placement.getValue();
    double pMatrix[16];
    originalPlacement.toMatrix().getMatrix(pMatrix);
    Base::Placement freshPlacement = originalPlacement;

    // local cache for brevity.
    double translationIncrement = draggerIn->translationIncrement.getValue();
    double rotationIncrement = draggerIn->rotationIncrement.getValue();
    int tCountX = draggerIn->translationIncrementCountX.getValue();
    int tCountY = draggerIn->translationIncrementCountY.getValue();
    int tCountZ = draggerIn->translationIncrementCountZ.getValue();
    int rCountX = draggerIn->rotationIncrementCountX.getValue();
    int rCountY = draggerIn->rotationIncrementCountY.getValue();
    int rCountZ = draggerIn->rotationIncrementCountZ.getValue();

    // just as a little sanity check make sure only 1 or 2 fields has changed.
    int numberOfFieldChanged = 0;
    if (tCountX) {
        numberOfFieldChanged++;
    }
    if (tCountY) {
        numberOfFieldChanged++;
    }
    if (tCountZ) {
        numberOfFieldChanged++;
    }
    if (rCountX) {
        numberOfFieldChanged++;
    }
    if (rCountY) {
        numberOfFieldChanged++;
    }
    if (rCountZ) {
        numberOfFieldChanged++;
    }
    if (numberOfFieldChanged == 0) {
        return;
    }
    assert(numberOfFieldChanged == 1 || numberOfFieldChanged == 2);

    // 3. 拖动开始时，记录物体和拖动器的起始状态
    // if (!sudoThis->m_bIsDragging) {
    //    sudoThis->m_vStartPos = fcPosSb;                      // 物体起始位置
    //    sudoThis->m_rStartRot = fcRotSb;                      // 物体起始旋转
    //    sudoThis->m_draggerStartTrans = fcPosSb;              // 拖动器起始平移
    //    sudoThis->m_draggerStartRot = fcRotSb;                // 拖动器起始旋转
    //    sudoThis->m_bIsDragging = true;
    //    //return;  // 首次调用仅记录状态，不更新图形
    //}

    //// 4. 计算拖动器的变化量（判断拖动类型的核心）
    // SbVec3f transDelta = draggerCurrentTrans - sudoThis->m_draggerStartTrans;  // 平移变化量
    // SbRotation rotDelta = draggerCurrentRot * sudoThis->m_draggerStartRot.inverse();  //
    // 旋转变化量

    //// 5. 判断拖动类型：通过变化量的“有效程度”判断（避免浮点误差）
    // const float EPS = 1e-6f;                         // 浮点误差阈值
    // bool isTranslate = (transDelta.length() > EPS);  // 平移变化量大于阈值 → 平移
    //// 通过四元数分量判断是否为单位矩阵
    // float qx, qy, qz, qw;
    // rotDelta.getValue(qx, qy, qz, qw);  // 获取旋转变化量的四元数分量（x,y,z,w）
    //// 单位矩阵的四元数为 (0,0,0,1)，允许微小浮点误差
    // bool isRotate = !(fabs(qx) < EPS && fabs(qy) < EPS && fabs(qz) < EPS && fabs(qw - 1.0f) <
    // EPS);


    // helper lambdas.
    auto getVectorX = [&pMatrix]() {
        return Base::Vector3d(pMatrix[0], pMatrix[4], pMatrix[8]);
    };
    auto getVectorY = [&pMatrix]() {
        return Base::Vector3d(pMatrix[1], pMatrix[5], pMatrix[9]);
    };
    auto getVectorZ = [&pMatrix]() {
        return Base::Vector3d(pMatrix[2], pMatrix[6], pMatrix[10]);
    };
    bool isTranslate = false;
    bool isRotate = false;

    if (tCountX) {
        Base::Vector3d movementVector(getVectorX());
        movementVector *= (tCountX * translationIncrement);
        freshPlacement.move(movementVector);
        geoFeature->Placement.setValue(freshPlacement);
        isTranslate = true;
    }
    if (tCountY) {
        Base::Vector3d movementVector(getVectorY());
        movementVector *= (tCountY * translationIncrement);
        freshPlacement.move(movementVector);
        geoFeature->Placement.setValue(freshPlacement);
        isTranslate = true;
    }
    if (tCountZ) {
        Base::Vector3d movementVector(getVectorZ());
        movementVector *= (tCountZ * translationIncrement);
        freshPlacement.move(movementVector);
        geoFeature->Placement.setValue(freshPlacement);
        isTranslate = true;
    }
    if (rCountX) {
        Base::Vector3d rotationVector(getVectorX());
        Base::Rotation rotation(rotationVector, rCountX * rotationIncrement);
        freshPlacement.setRotation(rotation * freshPlacement.getRotation());
        geoFeature->Placement.setValue(freshPlacement);
        isRotate = true;
    }
    if (rCountY) {
        Base::Vector3d rotationVector(getVectorY());
        Base::Rotation rotation(rotationVector, rCountY * rotationIncrement);
        freshPlacement.setRotation(rotation * freshPlacement.getRotation());
        geoFeature->Placement.setValue(freshPlacement);
        isRotate = true;
    }
    if (rCountZ) {
        Base::Vector3d rotationVector(getVectorZ());
        Base::Rotation rotation(rotationVector, rCountZ * rotationIncrement);
        freshPlacement.setRotation(rotation * freshPlacement.getRotation());
        geoFeature->Placement.setValue(freshPlacement);
        isRotate = true;
    }

    if (numberOfFieldChanged == 1) {
        // 1. 获取 FreeCAD 物体的初始 Placement 并转换为 Coin3D 类型
        Base::Vector3d fcPos = originalPlacement.getPosition();
        Base::Rotation fcRot = originalPlacement.getRotation();
        SbVec3f fcPosSb(fcPos.x, fcPos.y, fcPos.z);
        SbRotation fcRotSb(fcRot.getValue()[0],
                           fcRot.getValue()[1],
                           fcRot.getValue()[2],
                           fcRot.getValue()[3]);

        // 1. 获取 FreeCAD 物体的当前 Placement 并转换为 Coin3D 类型
        Base::Vector3d fcPosCurrent = freshPlacement.getPosition();
        Base::Rotation fcRotCurrent = freshPlacement.getRotation();
        SbVec3f fcPosSbCurrent(fcPosCurrent.x, fcPosCurrent.y, fcPosCurrent.z);
        SbRotation fcRotSbCurrent(fcRotCurrent.getValue()[0],
                                  fcRotCurrent.getValue()[1],
                                  fcRotCurrent.getValue()[2],
                                  fcRotCurrent.getValue()[3]);

        // 2. 获取拖动器当前状态（局部位置 + 全局变换矩阵）
        SbVec3f draggerCurrentTrans = draggerIn->translation.getValue();
        SbRotation draggerCurrentRot = draggerIn->rotation.getValue();
        sudoThis->m_currentLocalToWorldMat =
            draggerIn->getLocalToWorldMatrix();  // 实时全局变换矩阵

        // 4. 计算物体的变化量（判断拖动类型的核心）
        SbVec3f transDelta = fcPosSbCurrent - fcPosSb;             // 平移变化量
        SbRotation rotDelta = fcRotSbCurrent * fcRotSb.inverse();  // 旋转变化量

        // 6. 计算拖动器起始的全局位置和旋转
        // SbVec3f currentStartPos = draggerCurrentTrans - transDelta;  // 拖动器起始位置 = 当前位置
        // - 平移变化量
        SbVec3f currentStartPos = draggerIn->getWorldStartingPoint();
        SbRotation currentStartRot =
            draggerCurrentRot * rotDelta.inverse();  // 拖动器起始旋转 = 当前旋转 / 旋转变化量
        // SbVec3f rotationCenter = sudoThis->m_vStartPos;  // 旋转中心：物体起始位置（可调整）


        if (!sudoThis->m_bIsDragging) {
            sudoThis->m_vStartPos = fcPosSb;                                       // 物体起始位置
            sudoThis->m_rStartRot = fcRotSb;                                       // 物体起始旋转
            sudoThis->m_draggerStartTrans = currentStartPos;                       // 拖动器起始平移
            sudoThis->m_draggerStartRot = currentStartRot;                         // 拖动器起始旋转
            sudoThis->m_startLocalToWorldMat = draggerIn->getStartMotionMatrix();  // 初始全局变换
            sudoThis->m_bIsDragging = true;
        }

        // 7. 根据拖动类型更新辅助图形
        if (isTranslate && !isRotate) {
            // 仅平移：更新平移直线和距离标注
            sudoThis->updateTranslationGeometry(draggerIn);
        }
        else if (isRotate && !isTranslate) {
            // 仅旋转：更新旋转圆弧和角度标注
            sudoThis->updateRotationGeometry(draggerCurrentRot, currentStartPos);
        }
    }

    // sudoThis->cleanupTempGeometry();

    draggerIn->clearIncrementCounts();
}

void ViewProviderDragger::updateTransform(const Base::Placement& from, SoTransform* to)
{
    auto q0 = (float)from.getRotation().getValue()[0];
    auto q1 = (float)from.getRotation().getValue()[1];
    auto q2 = (float)from.getRotation().getValue()[2];
    auto q3 = (float)from.getRotation().getValue()[3];
    auto px = (float)from.getPosition().x;
    auto py = (float)from.getPosition().y;
    auto pz = (float)from.getPosition().z;
    to->rotation.setValue(q0, q1, q2, q3);
    to->translation.setValue(px, py, pz);
    to->center.setValue(0.0f, 0.0f, 0.0f);
    to->scaleFactor.setValue(1.0f, 1.0f, 1.0f);
}

void ViewProviderDragger::initTempGeometry()
{
    if (m_pTempAnnotation) {
        cleanupTempGeometry();
    }

    // 2. 创建标注容器（SoAnnotation 确保辅助图形始终在最上层）
    m_pTempAnnotation = new SoAnnotation();
    if (!m_pTempAnnotation) {
        return;
    }
    m_pTempAnnotation->ref();

    // -------------------------- 平移组件（添加到 pAuxRoot）--------------------------
    m_pTranslationSwitch = new SoSwitch();
    if (!m_pTranslationSwitch) {
        return;
    }
    setComponentVisible(m_pTranslationSwitch, false);

    m_pLineMat = new SoMaterial();
    if (!m_pLineMat) {
        return;
    }
    m_pLineMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);

    SoVertexProperty* pLineVtx = new SoVertexProperty();
    if (!pLineVtx) {
        return;
    }

    m_pTranslationLine = new SoLineSet();
    if (!m_pTranslationLine) {
        return;
    }
    m_pTranslationLine->vertexProperty.setValue(pLineVtx);

    if (m_pTranslationSwitch && m_pLineMat && m_pTranslationLine) {
        m_pTranslationSwitch->addChild(m_pLineMat);
        m_pTranslationSwitch->addChild(m_pTranslationLine);
        m_pTempAnnotation->addChild(m_pTranslationSwitch);
    }

    // -------------------------- 旋转组件（添加到 pAuxRoot）--------------------------
    m_pRotationSwitch = new SoSwitch();
    if (!m_pRotationSwitch) {
        return;
    }
    setComponentVisible(m_pRotationSwitch, false);

    m_pArcDrawStyle = new SoDrawStyle();
    if (!m_pArcDrawStyle) {
        return;
    }
    m_pArcDrawStyle->lineWidth.setValue(2.0f);
    m_pArcDrawStyle->linePattern.setValue(0xAAAA);

    m_pArcMat = new SoMaterial();
    if (!m_pArcMat) {
        return;
    }
    m_pArcMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);

    SoVertexProperty* pArcVtx = new SoVertexProperty();
    if (!pArcVtx) {
        return;
    }

    m_pRotationArc = new SoIndexedLineSet();
    if (!m_pRotationArc) {
        return;
    }
    m_pRotationArc->vertexProperty.setValue(pArcVtx);

    if (m_pRotationSwitch && m_pArcDrawStyle && m_pArcMat && m_pRotationArc) {
        m_pRotationSwitch->addChild(m_pArcDrawStyle);
        m_pRotationSwitch->addChild(m_pArcMat);
        m_pRotationSwitch->addChild(m_pRotationArc);
        m_pTempAnnotation->addChild(m_pRotationSwitch);
    }

    // -------------------------- 文本组件（添加到 pAuxRoot）--------------------------
    m_pTextSwitch = new SoSwitch();
    if (!m_pTextSwitch) {
        return;
    }
    setComponentVisible(m_pTextSwitch, false);

    m_pTextTransform = new SoTransform();
    if (!m_pTextTransform) {
        return;
    }
    m_pTextTransform->scaleFactor.setValue(5.0f, 5.0f, 5.0f);

    m_pTextMat = new SoMaterial();
    if (!m_pTextMat) {
        return;
    }
    m_pTextMat->diffuseColor.setValue(0.0f, 0.0f, 0.0f);

    m_pDimensionText = new SoText2();
    if (!m_pDimensionText) {
        return;
    }

    if (m_pTextSwitch && m_pTextTransform && m_pTextMat && m_pDimensionText) {
        m_pTextSwitch->addChild(m_pTextTransform);
        m_pTextSwitch->addChild(m_pTextMat);
        m_pTextSwitch->addChild(m_pDimensionText);
        m_pTempAnnotation->addChild(m_pTextSwitch);
    }

    // -------------------------- 标注容器添加到场景根节点 --------------------------
    SoSeparator* pRoot = this->getRoot();
    if (pRoot) {
        pRoot->addChild(m_pTempAnnotation);
    }

    this->m_bIsDragging = false;
    // 隐藏辅助图形
    setComponentVisible(m_pTranslationSwitch, false);
    setComponentVisible(m_pRotationSwitch, false);
    setComponentVisible(m_pTextSwitch, false);
    // 可选：重置拖动器起始状态（避免残留）
    this->m_draggerStartTrans = SbVec3f(0, 0, 0);
    this->m_draggerStartRot = SbRotation();
}

void ViewProviderDragger::cleanupTempGeometry()
{
    if (m_pTempAnnotation) {
        // 关键修改：从根节点移除临时标注节点
        SoSeparator* pRoot = this->getRoot();
        if (pRoot) {
            pRoot->removeChild(m_pTempAnnotation);
        }
        m_pTempAnnotation->unref();
        m_pTempAnnotation = nullptr;
    }

    // 重置其他指针（Coin3D 节点通过 ref/unref 管理内存，无需手动删除子节点）
    m_pTranslationSwitch = nullptr;
    m_pTranslationLine = nullptr;
    m_pLineMat = nullptr;
    m_pRotationSwitch = nullptr;
    m_pRotationArc = nullptr;
    m_pArcMat = nullptr;
    m_pArcDrawStyle = nullptr;
    m_pTextSwitch = nullptr;
    m_pDimensionText = nullptr;
    m_pTextTransform = nullptr;
    m_pTextMat = nullptr;
}

void ViewProviderDragger::updateTranslationGeometry(SoFCCSysDragger* draggerIn)
{
    // 校验核心节点非空
    if (!m_pTranslationLine || !m_pDimensionText || !m_pTextTransform) {
        return;
    }

    // 关键1：获取 vertexProperty 并转换为 SoVertexProperty*（必须转换才能访问 vertex）
    SoSFNode& vertexPropNode = m_pTranslationLine->vertexProperty;
    SoVertexProperty* pVtx = dynamic_cast<SoVertexProperty*>(vertexPropNode.getValue());
    if (!pVtx) {
        // 容错：若转换失败，创建新的 SoVertexProperty 并绑定
        pVtx = new SoVertexProperty();
        if (!pVtx) {
            return;
        }
        m_pTranslationLine->vertexProperty.setValue(pVtx);
    }

    // 关键2：获取拖动器当前局部位置（修正之前的重复定义问题）
    // SoFCCSysDragger* dragger = dynamic_cast<SoFCCSysDragger*>(this->getDragger());
    // if (!dragger) {
    //    return;  // 拖动器获取失败，直接返回
    //}
    // 关键2：获取拖动器当前局部位置（修正之前的重复定义问题）
    //SbVec3f currentDraggerTrans = draggerIn->translation.getValue();  // 保留这行，虽然下面不再使用它


    //// 1. 拖动起点：m_draggerStartTrans 已经是世界坐标，直接使用
    //SbVec3f startGlobalPos = m_draggerStartTrans;

    //// 2. 拖动当前点：用当前的 localToWorld 矩阵把原点变换到世界坐标
    //SbVec3f currentGlobalPos;
    //SbVec3f origin(0.0f, 0.0f, 0.0f);
    //m_currentLocalToWorldMat.multVecMatrix(origin, currentGlobalPos);


    // --- 关键修改：获取起点和终点 ---
    // 3. 起点：使用在 dragStartCallback 中记录的初始世界坐标
    SbVec3f startGlobalPos = this->m_initialWorldOrigin;

    //// 2. 终点：使用辅助函数获取当前的世界坐标
    //SbVec3f currentGlobalPos = this->getDraggerWorldPosition(draggerIn);

    // // 3. 设置轨迹线顶点
    //SoVertexProperty* pVtx =
    //    dynamic_cast<SoVertexProperty*>(m_pTranslationLine->vertexProperty.getValue());
    //if (!pVtx) {
    //    return;
    //}

    // 4. 终点：使用当前的 local→world 矩阵，把 (0,0,0) 变换到世界坐标
    SbMatrix lwMat = draggerIn->getLocalToWorldMatrix();
    SbVec3f originLocal(0.0f, 0.0f, 0.0f);
    SbVec3f currentGlobalPos(0.0f, 0.0f, 0.0f);
    lwMat.multVecMatrix(originLocal, currentGlobalPos);

    
    // 5. 设置线段两个端点
    pVtx->vertex.set1Value(0, startGlobalPos);    // 拖动起点（全局）
    pVtx->vertex.set1Value(1, currentGlobalPos);  // 拖动当前点（全局）

    // 线集参数设置
    m_pTranslationLine->numVertices.setNum(1);
    m_pTranslationLine->numVertices.set1Value(0, 2);

    // 轨迹距离计算（全局坐标两点距离）
    float distance = (currentGlobalPos - startGlobalPos).length();
    QString dimText = QString::fromUtf8("Drag Distance: %1 mm").arg(distance, 0, 'f', 3);
    m_pDimensionText->string.setValue(dimText.toUtf8().constData());

    // 文本位置：全局轨迹中点 + 向上偏移5mm
    SbVec3f textGlobalPos = (startGlobalPos + currentGlobalPos) / 2.0f;
    textGlobalPos += SbVec3f(0.0f, 5.0f, 0.0f);  // 避免遮挡轨迹线
    m_pTextTransform->translation.setValue(textGlobalPos);

    // 显示轨迹和文本
    setComponentVisible(m_pTranslationSwitch, true);
    setComponentVisible(m_pRotationSwitch, false);
    setComponentVisible(m_pTextSwitch, true);
}

void ViewProviderDragger::updateRotationGeometry(const SbRotation& currentRot,
                                                 const SbVec3f& center)
{
    // 校验核心节点非空
    if (!m_pRotationArc || !m_pDimensionText || !m_pTextTransform) {
        return;
    }

    // 计算旋转轴和角度
    SbRotation rotDiff = m_draggerStartRot.inverse() * currentRot;
    SbVec3f axis;
    float angleRad;
    rotDiff.getValue(axis, angleRad);

    // 手动定义 π 常量 + 弧度转角度（零依赖，无需任何头文件）
    const float PI = 3.14159265358979323846f;   // 高精度 π 常量（足够满足可视化需求）
    float angleDeg = angleRad * (180.0f / PI);  // 弧度 → 角度：角度 = 弧度 × (180/π)

    // 通过 getValue() 获取节点，再动态转换为 SoVertexProperty*
    SoSFNode& vertexProp = m_pRotationArc->vertexProperty;
    SoVertexProperty* pArcVtx = dynamic_cast<SoVertexProperty*>(vertexProp.getValue());
    if (!pArcVtx) {
        return;  // 空指针检查
    }

    // 生成圆弧顶点
    const int arcPoints = 36;
    float radius = 20.0f;
    pArcVtx->vertex.setNum(arcPoints + 1);  // 设置顶点数量
    SbVec3f startDir(1.0f, 0.0f, 0.0f);
    for (int i = 0; i <= arcPoints; ++i) {
        float t = (float)i / arcPoints;
        // 拆分临时实例，显式调用 multVec（成员函数）
        SbRotation stepRot(axis, t * angleRad);  // 先创建旋转实例
        // 使用输出参数版 multVec（无返回值，通过引用赋值）
        SbVec3f currentDir;                     // 声明结果向量
        stepRot.multVec(startDir, currentDir);  // 第二个参数是输出引用
        SbVec3f point = center + currentDir * radius;
        pArcVtx->vertex.set1Value(i, point);
    }

    // 生成索引数组（校验内存分配成功）
    int* indices = new (std::nothrow) int[arcPoints + 1];  // 不抛出异常的分配
    if (!indices) {
        return;  // 内存分配失败直接返回
    }

    for (int i = 0; i <= arcPoints; ++i) {
        indices[i] = i;
    }

    // 校验 coordIndex 可写
    m_pRotationArc->coordIndex.setValues(0, arcPoints + 1, indices);
    delete[] indices;  // 立即释放，避免内存泄漏

    // 设置标注文本
    QString dimText = QString::fromUtf8("Angle: %1 rad (%2 \u00B0)")
                          .arg(angleRad, 0, 'f', 3)
                          .arg(angleDeg, 0, 'f', 1);
    m_pDimensionText->string.setValue(dimText.toUtf8().constData());

    // 文本方向向量，同样使用输出参数版 multVec
    SbRotation textRot(axis, angleRad / 2.0f);
    SbVec3f textDir;                     // 声明结果向量
    textRot.multVec(startDir, textDir);  // 输出参数赋值

    SbVec3f textPos = center + textDir * (radius + 10.0f);
    m_pTextTransform->translation.setValue(textPos);

    // 控制组件显示
    setComponentVisible(m_pRotationSwitch, true);
    setComponentVisible(m_pTranslationSwitch, false);
    setComponentVisible(m_pTextSwitch, true);
}

// 控制 SoSwitch 包裹的组件显示/隐藏
void ViewProviderDragger::setComponentVisible(SoSwitch* pSwitch, bool visible)
{
    if (!pSwitch) {
        return;
    }
    // SO_SWITCH_NONE：隐藏所有子节点；SO_SWITCH_ALL：显示所有子节点
    pSwitch->whichChild = visible ? SO_SWITCH_ALL : SO_SWITCH_NONE;
}


// attach 方法
// void ViewProviderDragger::attach(Gui::ViewProviderDocumentObject* parent)
//{
//    if (!parent) {
//        return;
//    }
//    Gui::ViewProviderDocumentObject::attach(parent);
//
//    initTempGeometry();
//
//    SoFCCSysDragger* dragger = dynamic_cast<SoFCCSysDragger*>(this->getDragger());
//    if (dragger) {
//        QObject::connect(dragger, &SoFCCSysDragger::finishDrag, [this]() {
//            this->m_bIsDragging = false;
//            setComponentVisible(m_pTranslationSwitch, false);
//            setComponentVisible(m_pRotationSwitch, false);
//            setComponentVisible(m_pTextSwitch, false);
//        });
//    }
//}




//SbVec3f ViewProviderDragger::getDraggerWorldPosition(SoFCCSysDragger* dragger)
//{
//    if (!dragger) {
//        return SbVec3f(0, 0, 0);
//    }
//
//    // 获取当前活动的3D视图和viewer
//    // 在回调中，这是获取viewer最可靠的方式
//    View3DInventor* view = dynamic_cast<View3DInventor*>(Application::Instance->activeView());
//    if (!view) {
//        return SbVec3f(0, 0, 0);
//    }
//    View3DInventorViewer* viewer = view->getViewer();
//
//    // 使用 SoGetMatrixAction 计算世界坐标
//    // apply(node, dragger) 计算从 node 到 dragger 的变换矩阵
//    // 我们需要从场景根节点到拖拽器的变换
//    SoGetMatrixAction getMatrix(viewer->getViewportRegion());
//    getMatrix.apply(viewer->getSceneGraph(), dragger);
//    SbMatrix worldMatrix = getMatrix.getMatrix();
//
//    // 从矩阵中提取平移部分，这就是世界坐标
//    return worldMatrix.getTranslation();
//}

