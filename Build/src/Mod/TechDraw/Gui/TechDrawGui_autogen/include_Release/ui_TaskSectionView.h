/********************************************************************************
** Form generated from reading UI file 'TaskSectionView.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSECTIONVIEW_H
#define UI_TASKSECTIONVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskSectionView
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *leBaseView;
    QLabel *label_2;
    QLineEdit *leSymbol;
    QLabel *label_3;
    QComboBox *cmbScaleType;
    QLabel *label;
    QDoubleSpinBox *sbScale;
    QGroupBox *gbOrientation;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *viewDirectionLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pbUp;
    QPushButton *pbDown;
    QPushButton *pbLeft;
    QPushButton *pbRight;
    QVBoxLayout *compassLayout;
    QGroupBox *gbPlane;
    QVBoxLayout *verticalLayoutPlane;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    Gui::QuantitySpinBox *sbOrgX;
    QLabel *label_11;
    Gui::QuantitySpinBox *sbOrgY;
    QLabel *label_12;
    Gui::QuantitySpinBox *sbOrgZ;
    QGroupBox *gbUpdate;
    QVBoxLayout *verticalLayoutUpdate;
    QGridLayout *gridLayout_5;
    QPushButton *pbUpdateNow;
    QCheckBox *cbLiveUpdate;
    QLabel *lPendingUpdates;

    void setupUi(QWidget *TechDrawGui__TaskSectionView)
    {
        if (TechDrawGui__TaskSectionView->objectName().isEmpty())
            TechDrawGui__TaskSectionView->setObjectName("TechDrawGui__TaskSectionView");
        TechDrawGui__TaskSectionView->resize(370, 508);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskSectionView->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskSectionView->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(TechDrawGui__TaskSectionView);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_7 = new QLabel(TechDrawGui__TaskSectionView);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        leBaseView = new QLineEdit(TechDrawGui__TaskSectionView);
        leBaseView->setObjectName("leBaseView");
        leBaseView->setEnabled(false);
        leBaseView->setMinimumSize(QSize(0, 22));

        gridLayout_4->addWidget(leBaseView, 0, 2, 1, 1);

        label_2 = new QLabel(TechDrawGui__TaskSectionView);
        label_2->setObjectName("label_2");

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        leSymbol = new QLineEdit(TechDrawGui__TaskSectionView);
        leSymbol->setObjectName("leSymbol");
        leSymbol->setMinimumSize(QSize(0, 22));

        gridLayout_4->addWidget(leSymbol, 1, 2, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskSectionView);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        cmbScaleType = new QComboBox(TechDrawGui__TaskSectionView);
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->setObjectName("cmbScaleType");
        cmbScaleType->setMinimumSize(QSize(0, 22));

        gridLayout_4->addWidget(cmbScaleType, 2, 2, 1, 1);

        label = new QLabel(TechDrawGui__TaskSectionView);
        label->setObjectName("label");

        gridLayout_4->addWidget(label, 3, 0, 1, 1);

        sbScale = new QDoubleSpinBox(TechDrawGui__TaskSectionView);
        sbScale->setObjectName("sbScale");
        sbScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScale->setDecimals(6);
        sbScale->setMaximum(999.000000000000000);
        sbScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(sbScale, 3, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        gbOrientation = new QGroupBox(TechDrawGui__TaskSectionView);
        gbOrientation->setObjectName("gbOrientation");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbOrientation->sizePolicy().hasHeightForWidth());
        gbOrientation->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(gbOrientation);
        verticalLayout_2->setObjectName("verticalLayout_2");
        viewDirectionLayout = new QHBoxLayout();
        viewDirectionLayout->setObjectName("viewDirectionLayout");

        verticalLayout_2->addLayout(viewDirectionLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pbUp = new QPushButton(gbOrientation);
        pbUp->setObjectName("pbUp");
        pbUp->setMaximumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/section-up.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pbUp->setIcon(icon);
        pbUp->setIconSize(QSize(48, 48));
        pbUp->setCheckable(true);

        gridLayout_3->addWidget(pbUp, 0, 0, 1, 1);

        pbDown = new QPushButton(gbOrientation);
        pbDown->setObjectName("pbDown");
        pbDown->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/actions/section-down.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pbDown->setIcon(icon1);
        pbDown->setIconSize(QSize(48, 48));
        pbDown->setCheckable(true);

        gridLayout_3->addWidget(pbDown, 0, 1, 1, 1);

        pbLeft = new QPushButton(gbOrientation);
        pbLeft->setObjectName("pbLeft");
        pbLeft->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/actions/section-left.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pbLeft->setIcon(icon2);
        pbLeft->setIconSize(QSize(48, 48));
        pbLeft->setCheckable(true);

        gridLayout_3->addWidget(pbLeft, 0, 2, 1, 1);

        pbRight = new QPushButton(gbOrientation);
        pbRight->setObjectName("pbRight");
        pbRight->setMaximumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/actions/section-right.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pbRight->setIcon(icon3);
        pbRight->setIconSize(QSize(48, 48));
        pbRight->setCheckable(true);

        gridLayout_3->addWidget(pbRight, 0, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        compassLayout = new QVBoxLayout();
        compassLayout->setObjectName("compassLayout");

        verticalLayout_2->addLayout(compassLayout);


        verticalLayout_3->addWidget(gbOrientation);

        gbPlane = new QGroupBox(TechDrawGui__TaskSectionView);
        gbPlane->setObjectName("gbPlane");
        verticalLayoutPlane = new QVBoxLayout(gbPlane);
        verticalLayoutPlane->setObjectName("verticalLayoutPlane");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_10 = new QLabel(gbPlane);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        sbOrgX = new Gui::QuantitySpinBox(gbPlane);
        sbOrgX->setObjectName("sbOrgX");
        sizePolicy.setHeightForWidth(sbOrgX->sizePolicy().hasHeightForWidth());
        sbOrgX->setSizePolicy(sizePolicy);
        sbOrgX->setMinimumSize(QSize(150, 22));
        sbOrgX->setKeyboardTracking(false);
        sbOrgX->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(sbOrgX, 0, 2, 1, 1);

        label_11 = new QLabel(gbPlane);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 2);

        sbOrgY = new Gui::QuantitySpinBox(gbPlane);
        sbOrgY->setObjectName("sbOrgY");
        sizePolicy.setHeightForWidth(sbOrgY->sizePolicy().hasHeightForWidth());
        sbOrgY->setSizePolicy(sizePolicy);
        sbOrgY->setMinimumSize(QSize(150, 22));
        sbOrgY->setKeyboardTracking(false);
        sbOrgY->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(sbOrgY, 1, 2, 1, 1);

        label_12 = new QLabel(gbPlane);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 2);

        sbOrgZ = new Gui::QuantitySpinBox(gbPlane);
        sbOrgZ->setObjectName("sbOrgZ");
        sizePolicy.setHeightForWidth(sbOrgZ->sizePolicy().hasHeightForWidth());
        sbOrgZ->setSizePolicy(sizePolicy);
        sbOrgZ->setMinimumSize(QSize(150, 22));
        sbOrgZ->setKeyboardTracking(false);
        sbOrgZ->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(sbOrgZ, 2, 2, 1, 1);


        verticalLayoutPlane->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(gbPlane);

        gbUpdate = new QGroupBox(TechDrawGui__TaskSectionView);
        gbUpdate->setObjectName("gbUpdate");
        verticalLayoutUpdate = new QVBoxLayout(gbUpdate);
        verticalLayoutUpdate->setObjectName("verticalLayoutUpdate");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        pbUpdateNow = new QPushButton(gbUpdate);
        pbUpdateNow->setObjectName("pbUpdateNow");

        gridLayout_5->addWidget(pbUpdateNow, 0, 1, 1, 1);

        cbLiveUpdate = new QCheckBox(gbUpdate);
        cbLiveUpdate->setObjectName("cbLiveUpdate");

        gridLayout_5->addWidget(cbLiveUpdate, 0, 0, 1, 1);

        lPendingUpdates = new QLabel(gbUpdate);
        lPendingUpdates->setObjectName("lPendingUpdates");
        lPendingUpdates->setEnabled(true);

        gridLayout_5->addWidget(lPendingUpdates, 1, 0, 1, 1);


        verticalLayoutUpdate->addLayout(gridLayout_5);


        verticalLayout_3->addWidget(gbUpdate);


        retranslateUi(TechDrawGui__TaskSectionView);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskSectionView);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskSectionView)
    {
        TechDrawGui__TaskSectionView->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Section Parameters", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "BaseView", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Identifier", nullptr));
#if QT_CONFIG(tooltip)
        leSymbol->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Identifier for this section", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Scale Type", nullptr));
        cmbScaleType->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskSectionView", "Page", nullptr));
        cmbScaleType->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskSectionView", "Automatic", nullptr));
        cmbScaleType->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskSectionView", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        cmbScaleType->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Scale Page/Auto/Custom", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        sbScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Scale factor for the section view", nullptr));
#endif // QT_CONFIG(tooltip)
        gbOrientation->setTitle(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Set View Direction", nullptr));
#if QT_CONFIG(tooltip)
        pbUp->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Preset view direction looking up.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbUp->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pbUp->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pbUp->setText(QString());
#if QT_CONFIG(tooltip)
        pbDown->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Preset view direction looking down.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDown->setText(QString());
#if QT_CONFIG(tooltip)
        pbLeft->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Preset view direction looking left.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLeft->setText(QString());
#if QT_CONFIG(tooltip)
        pbRight->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Preset view direction looking right.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRight->setText(QString());
#if QT_CONFIG(tooltip)
        gbPlane->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Position from the 3D origin of the object in the view", nullptr));
#endif // QT_CONFIG(tooltip)
        gbPlane->setTitle(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Section Plane Location", nullptr));
        label_10->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "X", nullptr));
        label_11->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Y", nullptr));
        label_12->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Z", nullptr));
        gbUpdate->setTitle(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        pbUpdateNow->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "<html><head/><body><p>Rebuild display now.  May be slow for complex models.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbUpdateNow->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Update Now", nullptr));
#if QT_CONFIG(tooltip)
        cbLiveUpdate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Check to update display after every property change.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbLiveUpdate->setText(QCoreApplication::translate("TechDrawGui::TaskSectionView", "Live Update", nullptr));
        lPendingUpdates->setText(QString());
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskSectionView: public Ui_TaskSectionView {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKSECTIONVIEW_H
