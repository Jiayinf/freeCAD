/********************************************************************************
** Form generated from reading UI file 'DlgSettingsLightSources.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSLIGHTSOURCES_H
#define UI_DLGSETTINGSLIGHTSOURCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/View3DInventorViewer.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsLightSources
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxDirection;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *z_spnBox;
    QDoubleSpinBox *y_spnBox;
    QLabel *z_label;
    QLabel *x_label;
    QDoubleSpinBox *q1_spnBox;
    QDoubleSpinBox *q2_spnBox;
    QDoubleSpinBox *q0_spnBox;
    QLabel *y_label;
    QLabel *q2_label;
    QLabel *q0_label;
    QDoubleSpinBox *q3_spnBox;
    QLabel *q1_label;
    QLabel *q3_label;
    QDoubleSpinBox *x_spnBox;
    Gui::View3DInventorViewer *viewer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *pushInTB;
    QToolButton *pullOutTB;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *checkBoxLight1;
    Gui::PrefColorButton *light1Color;
    QSpacerItem *horizontalSpacer1;
    QLabel *light1Label;
    Gui::PrefSlider *sliderIntensity1;
    QSpacerItem *bottomSpacer;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsLightSources)
    {
        if (Gui__Dialog__DlgSettingsLightSources->objectName().isEmpty())
            Gui__Dialog__DlgSettingsLightSources->setObjectName("Gui__Dialog__DlgSettingsLightSources");
        Gui__Dialog__DlgSettingsLightSources->resize(484, 515);
        gridLayout_2 = new QGridLayout(Gui__Dialog__DlgSettingsLightSources);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxDirection = new QGroupBox(Gui__Dialog__DlgSettingsLightSources);
        groupBoxDirection->setObjectName("groupBoxDirection");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(groupBoxDirection->sizePolicy().hasHeightForWidth());
        groupBoxDirection->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBoxDirection);
        gridLayout_3->setObjectName("gridLayout_3");
        z_spnBox = new QDoubleSpinBox(groupBoxDirection);
        z_spnBox->setObjectName("z_spnBox");
        z_spnBox->setMinimum(-100.000000000000000);
        z_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(z_spnBox, 2, 1, 1, 1);

        y_spnBox = new QDoubleSpinBox(groupBoxDirection);
        y_spnBox->setObjectName("y_spnBox");
        y_spnBox->setMinimum(-100.000000000000000);
        y_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(y_spnBox, 1, 1, 1, 1);

        z_label = new QLabel(groupBoxDirection);
        z_label->setObjectName("z_label");
        z_label->setText(QString::fromUtf8("z"));

        gridLayout_3->addWidget(z_label, 2, 0, 1, 1);

        x_label = new QLabel(groupBoxDirection);
        x_label->setObjectName("x_label");
        x_label->setText(QString::fromUtf8("x"));

        gridLayout_3->addWidget(x_label, 0, 0, 1, 1);

        q1_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q1_spnBox->setObjectName("q1_spnBox");
        q1_spnBox->setDecimals(2);
        q1_spnBox->setMinimum(-100.000000000000000);
        q1_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q1_spnBox, 1, 4, 1, 1);

        q2_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q2_spnBox->setObjectName("q2_spnBox");
        q2_spnBox->setDecimals(2);
        q2_spnBox->setMinimum(-100.000000000000000);
        q2_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q2_spnBox, 2, 4, 1, 1);

        q0_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q0_spnBox->setObjectName("q0_spnBox");
        q0_spnBox->setDecimals(2);
        q0_spnBox->setMinimum(-100.000000000000000);
        q0_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q0_spnBox, 0, 4, 1, 1);

        y_label = new QLabel(groupBoxDirection);
        y_label->setObjectName("y_label");
        y_label->setText(QString::fromUtf8("y"));

        gridLayout_3->addWidget(y_label, 1, 0, 1, 1);

        q2_label = new QLabel(groupBoxDirection);
        q2_label->setObjectName("q2_label");
        q2_label->setText(QString::fromUtf8("q2"));

        gridLayout_3->addWidget(q2_label, 2, 3, 1, 1);

        q0_label = new QLabel(groupBoxDirection);
        q0_label->setObjectName("q0_label");
        q0_label->setText(QString::fromUtf8("q0"));

        gridLayout_3->addWidget(q0_label, 0, 3, 1, 1);

        q3_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q3_spnBox->setObjectName("q3_spnBox");
        q3_spnBox->setDecimals(2);
        q3_spnBox->setMinimum(-100.000000000000000);
        q3_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q3_spnBox, 3, 4, 1, 1);

        q1_label = new QLabel(groupBoxDirection);
        q1_label->setObjectName("q1_label");
        q1_label->setText(QString::fromUtf8("q1"));

        gridLayout_3->addWidget(q1_label, 1, 3, 1, 1);

        q3_label = new QLabel(groupBoxDirection);
        q3_label->setObjectName("q3_label");
        q3_label->setText(QString::fromUtf8("q3"));

        gridLayout_3->addWidget(q3_label, 3, 3, 1, 1);

        x_spnBox = new QDoubleSpinBox(groupBoxDirection);
        x_spnBox->setObjectName("x_spnBox");
        x_spnBox->setMinimum(-100.000000000000000);
        x_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(x_spnBox, 0, 1, 1, 1);

        viewer = new Gui::View3DInventorViewer(groupBoxDirection);
        viewer->setObjectName("viewer");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(viewer->sizePolicy().hasHeightForWidth());
        viewer->setSizePolicy(sizePolicy1);
        viewer->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(viewer);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, -1, 2, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushInTB = new QToolButton(viewer);
        pushInTB->setObjectName("pushInTB");
        pushInTB->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/FreeCAD-default/scalable/zoom-in.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushInTB->setIcon(icon);
        pushInTB->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushInTB);

        pullOutTB = new QToolButton(viewer);
        pullOutTB->setObjectName("pullOutTB");
        pullOutTB->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/FreeCAD-default/scalable/zoom-out.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pullOutTB->setIcon(icon1);
        pullOutTB->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pullOutTB);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addWidget(viewer, 0, 2, 5, 1);


        gridLayout_2->addWidget(groupBoxDirection, 1, 0, 2, 1);

        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsLightSources);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        checkBoxLight1 = new Gui::PrefCheckBox(groupBox);
        checkBoxLight1->setObjectName("checkBoxLight1");
        checkBoxLight1->setChecked(true);
        checkBoxLight1->setProperty("prefEntry", QVariant(QByteArray("EnableHeadlight")));
        checkBoxLight1->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(checkBoxLight1, 0, 0, 1, 1);

        light1Color = new Gui::PrefColorButton(groupBox);
        light1Color->setObjectName("light1Color");
        light1Color->setProperty("color", QVariant(QColor(255, 255, 255)));
        light1Color->setProperty("prefEntry", QVariant(QByteArray("HeadlightColor")));
        light1Color->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(light1Color, 0, 1, 1, 1);

        horizontalSpacer1 = new QSpacerItem(115, 13, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer1, 0, 2, 1, 1);

        light1Label = new QLabel(groupBox);
        light1Label->setObjectName("light1Label");

        gridLayout->addWidget(light1Label, 0, 3, 1, 1);

        sliderIntensity1 = new Gui::PrefSlider(groupBox);
        sliderIntensity1->setObjectName("sliderIntensity1");
        sliderIntensity1->setMaximum(100);
        sliderIntensity1->setValue(100);
        sliderIntensity1->setOrientation(Qt::Horizontal);
        sliderIntensity1->setTickPosition(QSlider::TicksBelow);
        sliderIntensity1->setTickInterval(10);
        sliderIntensity1->setProperty("prefEntry", QVariant(QByteArray("HeadlightIntensity")));
        sliderIntensity1->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(sliderIntensity1, 0, 4, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        bottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(bottomSpacer, 3, 0, 1, 1);

        QWidget::setTabOrder(checkBoxLight1, light1Color);
        QWidget::setTabOrder(light1Color, sliderIntensity1);
        QWidget::setTabOrder(sliderIntensity1, x_spnBox);
        QWidget::setTabOrder(x_spnBox, y_spnBox);
        QWidget::setTabOrder(y_spnBox, z_spnBox);
        QWidget::setTabOrder(z_spnBox, q0_spnBox);
        QWidget::setTabOrder(q0_spnBox, q1_spnBox);
        QWidget::setTabOrder(q1_spnBox, q2_spnBox);
        QWidget::setTabOrder(q2_spnBox, q3_spnBox);

        retranslateUi(Gui__Dialog__DlgSettingsLightSources);
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), light1Color, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), light1Label, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), sliderIntensity1, SLOT(setEnabled(bool)));
        QObject::connect(q1_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q2_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q3_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q0_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), Gui__Dialog__DlgSettingsLightSources, SLOT(toggleLight(bool)));
        QObject::connect(sliderIntensity1, SIGNAL(valueChanged(int)), Gui__Dialog__DlgSettingsLightSources, SLOT(lightIntensity(int)));
        QObject::connect(light1Color, SIGNAL(changed(void)), Gui__Dialog__DlgSettingsLightSources, SLOT(lightColor(void)));
        QObject::connect(x_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));
        QObject::connect(y_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));
        QObject::connect(z_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));
        QObject::connect(pushInTB, SIGNAL(clicked()), Gui__Dialog__DlgSettingsLightSources, SLOT(pushIn(void)));
        QObject::connect(pullOutTB, SIGNAL(clicked()), Gui__Dialog__DlgSettingsLightSources, SLOT(pullOut(void)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsLightSources);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsLightSources)
    {
        Gui__Dialog__DlgSettingsLightSources->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light Sources", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxDirection->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Adjust the orientation of the directional light source by dragging the handle with the mouse or use the spin boxes for fine tuning.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxDirection->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Direction", nullptr));
#if QT_CONFIG(tooltip)
        pushInTB->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Push In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pullOutTB->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Pull Out", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light sources", nullptr));
        checkBoxLight1->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light source", nullptr));
        light1Label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Intensity", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsLightSources: public Ui_DlgSettingsLightSources {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSLIGHTSOURCES_H
