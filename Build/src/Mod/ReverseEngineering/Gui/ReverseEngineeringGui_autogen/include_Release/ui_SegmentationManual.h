/********************************************************************************
** Form generated from reading UI file 'SegmentationManual.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATIONMANUAL_H
#define UI_SEGMENTATIONMANUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace ReverseEngineeringGui {

class Ui_SegmentationManual
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QPushButton *selectRegion;
    QSpacerItem *spacerItem;
    QPushButton *selectAll;
    QSpacerItem *spacerItem1;
    QPushButton *selectComponents;
    QLabel *label;
    QSpinBox *spSelectComp;
    QPushButton *selectTriangle;
    QCheckBox *cbSelectComp;
    QPushButton *deselectAll;
    QGroupBox *groupBoxPln;
    QGridLayout *gridLayoutPln;
    QPushButton *planeDetect;
    QLabel *label_2;
    QDoubleSpinBox *tolPln;
    QLabel *label_3;
    QSpinBox *numPln;
    QGroupBox *groupBoxCyl;
    QGridLayout *gridLayoutCyl;
    QPushButton *cylinderDetect;
    QLabel *label_4;
    QDoubleSpinBox *tolCyl;
    QLabel *label_5;
    QSpinBox *numCyl;
    QGroupBox *groupBoxSph;
    QGridLayout *gridLayoutSph;
    QPushButton *sphereDetect;
    QLabel *label_7;
    QDoubleSpinBox *tolSph;
    QLabel *label_8;
    QSpinBox *numSph;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayoutReg;
    QCheckBox *visibleTriangles;
    QCheckBox *screenTriangles;
    QGroupBox *groupBoxSegm;
    QGridLayout *gridLayoutSegm;
    QCheckBox *checkBoxCutSegm;
    QCheckBox *checkBoxHideSegm;

    void setupUi(QWidget *ReverseEngineeringGui__SegmentationManual)
    {
        if (ReverseEngineeringGui__SegmentationManual->objectName().isEmpty())
            ReverseEngineeringGui__SegmentationManual->setObjectName("ReverseEngineeringGui__SegmentationManual");
        ReverseEngineeringGui__SegmentationManual->resize(346, 833);
        gridLayout = new QGridLayout(ReverseEngineeringGui__SegmentationManual);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBox->setObjectName("groupBox");
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        selectRegion = new QPushButton(groupBox);
        selectRegion->setObjectName("selectRegion");

        gridLayout1->addWidget(selectRegion, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(161, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 1, 1, 2);

        selectAll = new QPushButton(groupBox);
        selectAll->setObjectName("selectAll");

        gridLayout1->addWidget(selectAll, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(161, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 1, 1, 2);

        selectComponents = new QPushButton(groupBox);
        selectComponents->setObjectName("selectComponents");

        gridLayout1->addWidget(selectComponents, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout1->addWidget(label, 2, 1, 1, 1);

        spSelectComp = new QSpinBox(groupBox);
        spSelectComp->setObjectName("spSelectComp");

        gridLayout1->addWidget(spSelectComp, 2, 2, 1, 1);

        selectTriangle = new QPushButton(groupBox);
        selectTriangle->setObjectName("selectTriangle");

        gridLayout1->addWidget(selectTriangle, 3, 0, 1, 1);

        cbSelectComp = new QCheckBox(groupBox);
        cbSelectComp->setObjectName("cbSelectComp");

        gridLayout1->addWidget(cbSelectComp, 3, 1, 1, 2);

        deselectAll = new QPushButton(groupBox);
        deselectAll->setObjectName("deselectAll");

        gridLayout1->addWidget(deselectAll, 4, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBoxPln = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBoxPln->setObjectName("groupBoxPln");
        gridLayoutPln = new QGridLayout(groupBoxPln);
        gridLayoutPln->setObjectName("gridLayoutPln");
        planeDetect = new QPushButton(groupBoxPln);
        planeDetect->setObjectName("planeDetect");

        gridLayoutPln->addWidget(planeDetect, 0, 1, 1, 1);

        label_2 = new QLabel(groupBoxPln);
        label_2->setObjectName("label_2");

        gridLayoutPln->addWidget(label_2, 1, 0, 1, 1);

        tolPln = new QDoubleSpinBox(groupBoxPln);
        tolPln->setObjectName("tolPln");
        tolPln->setDecimals(3);
        tolPln->setSingleStep(0.010000000000000);
        tolPln->setValue(0.010000000000000);

        gridLayoutPln->addWidget(tolPln, 1, 1, 1, 1);

        label_3 = new QLabel(groupBoxPln);
        label_3->setObjectName("label_3");

        gridLayoutPln->addWidget(label_3, 2, 0, 1, 1);

        numPln = new QSpinBox(groupBoxPln);
        numPln->setObjectName("numPln");
        numPln->setMaximum(100000);
        numPln->setValue(100);

        gridLayoutPln->addWidget(numPln, 2, 1, 1, 1);


        gridLayout->addWidget(groupBoxPln, 1, 0, 1, 1);

        groupBoxCyl = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBoxCyl->setObjectName("groupBoxCyl");
        gridLayoutCyl = new QGridLayout(groupBoxCyl);
        gridLayoutCyl->setObjectName("gridLayoutCyl");
        cylinderDetect = new QPushButton(groupBoxCyl);
        cylinderDetect->setObjectName("cylinderDetect");

        gridLayoutCyl->addWidget(cylinderDetect, 0, 1, 1, 1);

        label_4 = new QLabel(groupBoxCyl);
        label_4->setObjectName("label_4");

        gridLayoutCyl->addWidget(label_4, 1, 0, 1, 1);

        tolCyl = new QDoubleSpinBox(groupBoxCyl);
        tolCyl->setObjectName("tolCyl");
        tolCyl->setDecimals(3);
        tolCyl->setSingleStep(0.010000000000000);
        tolCyl->setValue(0.010000000000000);

        gridLayoutCyl->addWidget(tolCyl, 1, 1, 1, 1);

        label_5 = new QLabel(groupBoxCyl);
        label_5->setObjectName("label_5");

        gridLayoutCyl->addWidget(label_5, 2, 0, 1, 1);

        numCyl = new QSpinBox(groupBoxCyl);
        numCyl->setObjectName("numCyl");
        numCyl->setMaximum(100000);
        numCyl->setValue(100);

        gridLayoutCyl->addWidget(numCyl, 2, 1, 1, 1);


        gridLayout->addWidget(groupBoxCyl, 2, 0, 1, 1);

        groupBoxSph = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBoxSph->setObjectName("groupBoxSph");
        gridLayoutSph = new QGridLayout(groupBoxSph);
        gridLayoutSph->setObjectName("gridLayoutSph");
        sphereDetect = new QPushButton(groupBoxSph);
        sphereDetect->setObjectName("sphereDetect");

        gridLayoutSph->addWidget(sphereDetect, 0, 1, 1, 1);

        label_7 = new QLabel(groupBoxSph);
        label_7->setObjectName("label_7");

        gridLayoutSph->addWidget(label_7, 1, 0, 1, 1);

        tolSph = new QDoubleSpinBox(groupBoxSph);
        tolSph->setObjectName("tolSph");
        tolSph->setDecimals(3);
        tolSph->setSingleStep(0.010000000000000);
        tolSph->setValue(0.010000000000000);

        gridLayoutSph->addWidget(tolSph, 1, 1, 1, 1);

        label_8 = new QLabel(groupBoxSph);
        label_8->setObjectName("label_8");

        gridLayoutSph->addWidget(label_8, 2, 0, 1, 1);

        numSph = new QSpinBox(groupBoxSph);
        numSph->setObjectName("numSph");
        numSph->setMaximum(100000);
        numSph->setValue(100);

        gridLayoutSph->addWidget(numSph, 2, 1, 1, 1);


        gridLayout->addWidget(groupBoxSph, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBox_3->setObjectName("groupBox_3");
        gridLayoutReg = new QGridLayout(groupBox_3);
        gridLayoutReg->setObjectName("gridLayoutReg");
        visibleTriangles = new QCheckBox(groupBox_3);
        visibleTriangles->setObjectName("visibleTriangles");
        visibleTriangles->setChecked(false);

        gridLayoutReg->addWidget(visibleTriangles, 0, 0, 1, 1);

        screenTriangles = new QCheckBox(groupBox_3);
        screenTriangles->setObjectName("screenTriangles");
        screenTriangles->setChecked(true);

        gridLayoutReg->addWidget(screenTriangles, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 4, 0, 1, 1);

        groupBoxSegm = new QGroupBox(ReverseEngineeringGui__SegmentationManual);
        groupBoxSegm->setObjectName("groupBoxSegm");
        gridLayoutSegm = new QGridLayout(groupBoxSegm);
        gridLayoutSegm->setObjectName("gridLayoutSegm");
        checkBoxCutSegm = new QCheckBox(groupBoxSegm);
        checkBoxCutSegm->setObjectName("checkBoxCutSegm");
        checkBoxCutSegm->setChecked(true);

        gridLayoutSegm->addWidget(checkBoxCutSegm, 0, 0, 1, 1);

        checkBoxHideSegm = new QCheckBox(groupBoxSegm);
        checkBoxHideSegm->setObjectName("checkBoxHideSegm");
        checkBoxHideSegm->setChecked(true);

        gridLayoutSegm->addWidget(checkBoxHideSegm, 1, 0, 1, 1);


        gridLayout->addWidget(groupBoxSegm, 5, 0, 1, 1);

        QWidget::setTabOrder(selectRegion, selectAll);
        QWidget::setTabOrder(selectAll, selectComponents);
        QWidget::setTabOrder(selectComponents, spSelectComp);
        QWidget::setTabOrder(spSelectComp, selectTriangle);
        QWidget::setTabOrder(selectTriangle, cbSelectComp);

        retranslateUi(ReverseEngineeringGui__SegmentationManual);

        QMetaObject::connectSlotsByName(ReverseEngineeringGui__SegmentationManual);
    } // setupUi

    void retranslateUi(QWidget *ReverseEngineeringGui__SegmentationManual)
    {
        ReverseEngineeringGui__SegmentationManual->setWindowTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Manual segmentation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Select", nullptr));
        selectRegion->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Region", nullptr));
        selectAll->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "All", nullptr));
        selectComponents->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Components", nullptr));
        label->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "< faces than", nullptr));
        selectTriangle->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Pick triangle", nullptr));
        cbSelectComp->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Select whole component", nullptr));
        deselectAll->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Clear", nullptr));
        groupBoxPln->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Plane", nullptr));
        planeDetect->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Detect", nullptr));
        label_2->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Tolerance", nullptr));
        label_3->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Minimum number of faces", nullptr));
        groupBoxCyl->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Cylinder", nullptr));
        cylinderDetect->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Detect", nullptr));
        label_4->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Tolerance", nullptr));
        label_5->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Minimum number of faces", nullptr));
        groupBoxSph->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Sphere", nullptr));
        sphereDetect->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Detect", nullptr));
        label_7->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Tolerance", nullptr));
        label_8->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Minimum number of faces", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Region options", nullptr));
        visibleTriangles->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Respect only visible triangles", nullptr));
        screenTriangles->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Respect only triangles with normals facing screen", nullptr));
        groupBoxSegm->setTitle(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Segmentation", nullptr));
        checkBoxCutSegm->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Cut segment from mesh", nullptr));
        checkBoxHideSegm->setText(QCoreApplication::translate("ReverseEngineeringGui::SegmentationManual", "Hide segment", nullptr));
    } // retranslateUi

};

} // namespace ReverseEngineeringGui

namespace ReverseEngineeringGui {
namespace Ui {
    class SegmentationManual: public Ui_SegmentationManual {};
} // namespace Ui
} // namespace ReverseEngineeringGui

#endif // UI_SEGMENTATIONMANUAL_H
