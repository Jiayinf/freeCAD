/********************************************************************************
** Form generated from reading UI file 'TaskSelectLineAttributes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSELECTLINEATTRIBUTES_H
#define UI_TASKSELECTLINEATTRIBUTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskSelectLineAttributes
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *lineStyles;
    QLabel *label_styles;
    QComboBox *cbLineStyle;
    QGridLayout *lineWidth;
    QLabel *label_width;
    QRadioButton *rbThin;
    QRadioButton *rbMiddle;
    QRadioButton *rbThick;
    QGridLayout *lineColors;
    Gui::PrefColorButton *cbColor;
    QLabel *label_colors;
    QGridLayout *cascadeValues;
    QLabel *label_spacing;
    QDoubleSpinBox *sbSpacing;
    QLabel *label_stretch;
    QDoubleSpinBox *sbStretch;
    QSpacerItem *verticalSpacer;
    QButtonGroup *bgLineColor;
    QButtonGroup *bgLineWidth;

    void setupUi(QWidget *TechDrawGui__TaskSelectLineAttributes)
    {
        if (TechDrawGui__TaskSelectLineAttributes->objectName().isEmpty())
            TechDrawGui__TaskSelectLineAttributes->setObjectName("TechDrawGui__TaskSelectLineAttributes");
        TechDrawGui__TaskSelectLineAttributes->resize(424, 308);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskSelectLineAttributes->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskSelectLineAttributes->setSizePolicy(sizePolicy);
        TechDrawGui__TaskSelectLineAttributes->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskSelectLineAttributes);
        verticalLayout->setObjectName("verticalLayout");
        lineStyles = new QGridLayout();
        lineStyles->setObjectName("lineStyles");
        label_styles = new QLabel(TechDrawGui__TaskSelectLineAttributes);
        label_styles->setObjectName("label_styles");

        lineStyles->addWidget(label_styles, 0, 0, 1, 1);

        cbLineStyle = new QComboBox(TechDrawGui__TaskSelectLineAttributes);
        cbLineStyle->setObjectName("cbLineStyle");

        lineStyles->addWidget(cbLineStyle, 0, 1, 1, 1);

        lineStyles->setColumnStretch(0, 1);
        lineStyles->setColumnStretch(1, 2);

        verticalLayout->addLayout(lineStyles);

        lineWidth = new QGridLayout();
        lineWidth->setObjectName("lineWidth");
        label_width = new QLabel(TechDrawGui__TaskSelectLineAttributes);
        label_width->setObjectName("label_width");

        lineWidth->addWidget(label_width, 0, 0, 1, 1);

        rbThin = new QRadioButton(TechDrawGui__TaskSelectLineAttributes);
        bgLineWidth = new QButtonGroup(TechDrawGui__TaskSelectLineAttributes);
        bgLineWidth->setObjectName("bgLineWidth");
        bgLineWidth->setExclusive(true);
        bgLineWidth->addButton(rbThin);
        rbThin->setObjectName("rbThin");
        rbThin->setAutoExclusive(true);

        lineWidth->addWidget(rbThin, 1, 0, 1, 1);

        rbMiddle = new QRadioButton(TechDrawGui__TaskSelectLineAttributes);
        bgLineWidth->addButton(rbMiddle);
        rbMiddle->setObjectName("rbMiddle");
        rbMiddle->setChecked(true);
        rbMiddle->setAutoExclusive(true);

        lineWidth->addWidget(rbMiddle, 2, 0, 1, 1);

        rbThick = new QRadioButton(TechDrawGui__TaskSelectLineAttributes);
        bgLineWidth->addButton(rbThick);
        rbThick->setObjectName("rbThick");
        rbThick->setAutoExclusive(true);

        lineWidth->addWidget(rbThick, 3, 0, 1, 1);


        verticalLayout->addLayout(lineWidth);

        lineColors = new QGridLayout();
        lineColors->setObjectName("lineColors");
        cbColor = new Gui::PrefColorButton(TechDrawGui__TaskSelectLineAttributes);
        cbColor->setObjectName("cbColor");

        lineColors->addWidget(cbColor, 0, 1, 1, 1);

        label_colors = new QLabel(TechDrawGui__TaskSelectLineAttributes);
        label_colors->setObjectName("label_colors");

        lineColors->addWidget(label_colors, 0, 0, 1, 1);


        verticalLayout->addLayout(lineColors);

        cascadeValues = new QGridLayout();
        cascadeValues->setObjectName("cascadeValues");
        cascadeValues->setContentsMargins(0, -1, -1, -1);
        label_spacing = new QLabel(TechDrawGui__TaskSelectLineAttributes);
        label_spacing->setObjectName("label_spacing");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_spacing->sizePolicy().hasHeightForWidth());
        label_spacing->setSizePolicy(sizePolicy1);

        cascadeValues->addWidget(label_spacing, 0, 0, 1, 1);

        sbSpacing = new QDoubleSpinBox(TechDrawGui__TaskSelectLineAttributes);
        sbSpacing->setObjectName("sbSpacing");
        sbSpacing->setSingleStep(0.500000000000000);

        cascadeValues->addWidget(sbSpacing, 0, 1, 1, 1);

        label_stretch = new QLabel(TechDrawGui__TaskSelectLineAttributes);
        label_stretch->setObjectName("label_stretch");

        cascadeValues->addWidget(label_stretch, 1, 0, 1, 1);

        sbStretch = new QDoubleSpinBox(TechDrawGui__TaskSelectLineAttributes);
        sbStretch->setObjectName("sbStretch");
        sbStretch->setSingleStep(0.500000000000000);

        cascadeValues->addWidget(sbStretch, 1, 1, 1, 1);


        verticalLayout->addLayout(cascadeValues);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__TaskSelectLineAttributes);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskSelectLineAttributes);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskSelectLineAttributes)
    {
        TechDrawGui__TaskSelectLineAttributes->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Line attributes", nullptr));
        label_styles->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Line style:", nullptr));
        label_width->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Line width:", nullptr));
        rbThin->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Thin 0,18", nullptr));
        rbMiddle->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Middle 0,35", nullptr));
        rbThick->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Thick 0,70", nullptr));
        label_colors->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Line color:", nullptr));
        label_spacing->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Cascade spacing", nullptr));
        label_stretch->setText(QCoreApplication::translate("TechDrawGui::TaskSelectLineAttributes", "Delta distance", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskSelectLineAttributes: public Ui_TaskSelectLineAttributes {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKSELECTLINEATTRIBUTES_H
