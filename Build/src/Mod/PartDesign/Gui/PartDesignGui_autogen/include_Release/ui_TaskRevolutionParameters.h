/********************************************************************************
** Form generated from reading UI file 'TaskRevolutionParameters.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKREVOLUTIONPARAMETERS_H
#define UI_TASKREVOLUTIONPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace PartDesignGui {

class Ui_TaskRevolutionParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutMode;
    QLabel *textLabelMode;
    QComboBox *changeMode;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QComboBox *axis;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAngle;
    Gui::QuantitySpinBox *revolveAngle;
    QCheckBox *checkBoxMidplane;
    QCheckBox *checkBoxReversed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAngle2;
    Gui::QuantitySpinBox *revolveAngle2;
    QGridLayout *gridLayout_5;
    QPushButton *buttonFace;
    QLineEdit *lineFaceName;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskRevolutionParameters)
    {
        if (PartDesignGui__TaskRevolutionParameters->objectName().isEmpty())
            PartDesignGui__TaskRevolutionParameters->setObjectName("PartDesignGui__TaskRevolutionParameters");
        PartDesignGui__TaskRevolutionParameters->resize(278, 193);
        PartDesignGui__TaskRevolutionParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskRevolutionParameters);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayoutMode = new QHBoxLayout();
        horizontalLayoutMode->setObjectName("horizontalLayoutMode");
        textLabelMode = new QLabel(PartDesignGui__TaskRevolutionParameters);
        textLabelMode->setObjectName("textLabelMode");

        horizontalLayoutMode->addWidget(textLabelMode);

        changeMode = new QComboBox(PartDesignGui__TaskRevolutionParameters);
        changeMode->addItem(QString());
        changeMode->setObjectName("changeMode");

        horizontalLayoutMode->addWidget(changeMode);


        verticalLayout->addLayout(horizontalLayoutMode);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textLabel1 = new QLabel(PartDesignGui__TaskRevolutionParameters);
        textLabel1->setObjectName("textLabel1");

        horizontalLayout->addWidget(textLabel1);

        axis = new QComboBox(PartDesignGui__TaskRevolutionParameters);
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->setObjectName("axis");

        horizontalLayout->addWidget(axis);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelAngle = new QLabel(PartDesignGui__TaskRevolutionParameters);
        labelAngle->setObjectName("labelAngle");

        horizontalLayout_3->addWidget(labelAngle);

        revolveAngle = new Gui::QuantitySpinBox(PartDesignGui__TaskRevolutionParameters);
        revolveAngle->setObjectName("revolveAngle");
        revolveAngle->setKeyboardTracking(false);
        revolveAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        revolveAngle->setMinimum(0.000000000000000);
        revolveAngle->setMaximum(360.000000000000000);
        revolveAngle->setSingleStep(10.000000000000000);
        revolveAngle->setValue(360.000000000000000);

        horizontalLayout_3->addWidget(revolveAngle);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxMidplane = new QCheckBox(PartDesignGui__TaskRevolutionParameters);
        checkBoxMidplane->setObjectName("checkBoxMidplane");
        checkBoxMidplane->setEnabled(true);

        verticalLayout->addWidget(checkBoxMidplane);

        checkBoxReversed = new QCheckBox(PartDesignGui__TaskRevolutionParameters);
        checkBoxReversed->setObjectName("checkBoxReversed");

        verticalLayout->addWidget(checkBoxReversed);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelAngle2 = new QLabel(PartDesignGui__TaskRevolutionParameters);
        labelAngle2->setObjectName("labelAngle2");

        horizontalLayout_4->addWidget(labelAngle2);

        revolveAngle2 = new Gui::QuantitySpinBox(PartDesignGui__TaskRevolutionParameters);
        revolveAngle2->setObjectName("revolveAngle2");
        revolveAngle2->setKeyboardTracking(false);
        revolveAngle2->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        revolveAngle2->setMinimum(0.000000000000000);
        revolveAngle2->setMaximum(360.000000000000000);
        revolveAngle2->setSingleStep(10.000000000000000);
        revolveAngle2->setValue(60.000000000000000);

        horizontalLayout_4->addWidget(revolveAngle2);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        buttonFace = new QPushButton(PartDesignGui__TaskRevolutionParameters);
        buttonFace->setObjectName("buttonFace");
        buttonFace->setCheckable(true);

        gridLayout_5->addWidget(buttonFace, 0, 0, 1, 1);

        lineFaceName = new QLineEdit(PartDesignGui__TaskRevolutionParameters);
        lineFaceName->setObjectName("lineFaceName");

        gridLayout_5->addWidget(lineFaceName, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        line = new QFrame(PartDesignGui__TaskRevolutionParameters);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskRevolutionParameters);
        checkBoxUpdateView->setObjectName("checkBoxUpdateView");
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        QWidget::setTabOrder(axis, revolveAngle);
        QWidget::setTabOrder(revolveAngle, checkBoxMidplane);
        QWidget::setTabOrder(checkBoxMidplane, checkBoxReversed);
        QWidget::setTabOrder(checkBoxReversed, checkBoxUpdateView);

        retranslateUi(PartDesignGui__TaskRevolutionParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskRevolutionParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskRevolutionParameters)
    {
        textLabelMode->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Type", nullptr));
        changeMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Dimension", nullptr));

        textLabel1->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Axis:", nullptr));
        axis->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Base X axis", nullptr));
        axis->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Base Y axis", nullptr));
        axis->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Base Z axis", nullptr));
        axis->setItemText(3, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Horizontal sketch axis", nullptr));
        axis->setItemText(4, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Vertical sketch axis", nullptr));
        axis->setItemText(5, QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Select reference...", nullptr));

        labelAngle->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Angle:", nullptr));
        checkBoxMidplane->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Symmetric to plane", nullptr));
        checkBoxReversed->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Reversed", nullptr));
        labelAngle2->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "2nd angle", nullptr));
        buttonFace->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Face", nullptr));
        checkBoxUpdateView->setText(QCoreApplication::translate("PartDesignGui::TaskRevolutionParameters", "Update view", nullptr));
        (void)PartDesignGui__TaskRevolutionParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskRevolutionParameters: public Ui_TaskRevolutionParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKREVOLUTIONPARAMETERS_H
