/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintFluidBoundary.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H
#define UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintFluidBoundary
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *layoutBoundaryType;
    QLabel *labelBoundaryType;
    QComboBox *comboBoundaryType;
    QLabel *labelSubtype;
    QComboBox *comboSubtype;
    QLabel *lbl_info;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *listReferences;
    QLabel *labelHelpText;
    QTabWidget *tabWidget;
    QWidget *tabBasicBoundary;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelBoundaryValue;
    QHBoxLayout *layoutBoundaryValue;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *spinBoundaryValue;
    QHBoxLayout *layoutDirection;
    QPushButton *buttonDirection;
    QLineEdit *lineDirection;
    QCheckBox *checkReverse;
    QWidget *tabTurbulenceBoundary;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTurbulenceSpecification;
    QComboBox *comboTurbulenceSpecification;
    QFormLayout *formLayout_2;
    QLabel *labelTurbulentIntensityValue;
    QDoubleSpinBox *spinTurbulentIntensityValue;
    QLabel *labelTurbulentLengthValue;
    QDoubleSpinBox *spinTurbulentLengthValue;
    QWidget *tabThermalBoundary;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *labelThermalBoundaryType;
    QComboBox *comboThermalBoundaryType;
    QLabel *labelTemperature;
    QDoubleSpinBox *spinTemperatureValue;
    QLabel *labelHeatFlux;
    QLabel *labelHTCeoff;
    QDoubleSpinBox *spinHTCoeffValue;
    QDoubleSpinBox *spinHeatFluxValue;

    void setupUi(QWidget *TaskFemConstraintFluidBoundary)
    {
        if (TaskFemConstraintFluidBoundary->objectName().isEmpty())
            TaskFemConstraintFluidBoundary->setObjectName("TaskFemConstraintFluidBoundary");
        TaskFemConstraintFluidBoundary->resize(300, 388);
        TaskFemConstraintFluidBoundary->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintFluidBoundary);
        verticalLayout->setObjectName("verticalLayout");
        layoutBoundaryType = new QFormLayout();
        layoutBoundaryType->setObjectName("layoutBoundaryType");
        labelBoundaryType = new QLabel(TaskFemConstraintFluidBoundary);
        labelBoundaryType->setObjectName("labelBoundaryType");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelBoundaryType->sizePolicy().hasHeightForWidth());
        labelBoundaryType->setSizePolicy(sizePolicy);

        layoutBoundaryType->setWidget(0, QFormLayout::LabelRole, labelBoundaryType);

        comboBoundaryType = new QComboBox(TaskFemConstraintFluidBoundary);
        comboBoundaryType->setObjectName("comboBoundaryType");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoundaryType->sizePolicy().hasHeightForWidth());
        comboBoundaryType->setSizePolicy(sizePolicy1);

        layoutBoundaryType->setWidget(0, QFormLayout::FieldRole, comboBoundaryType);

        labelSubtype = new QLabel(TaskFemConstraintFluidBoundary);
        labelSubtype->setObjectName("labelSubtype");
        sizePolicy.setHeightForWidth(labelSubtype->sizePolicy().hasHeightForWidth());
        labelSubtype->setSizePolicy(sizePolicy);

        layoutBoundaryType->setWidget(1, QFormLayout::LabelRole, labelSubtype);

        comboSubtype = new QComboBox(TaskFemConstraintFluidBoundary);
        comboSubtype->setObjectName("comboSubtype");
        sizePolicy1.setHeightForWidth(comboSubtype->sizePolicy().hasHeightForWidth());
        comboSubtype->setSizePolicy(sizePolicy1);

        layoutBoundaryType->setWidget(1, QFormLayout::FieldRole, comboSubtype);


        verticalLayout->addLayout(layoutBoundaryType);

        lbl_info = new QLabel(TaskFemConstraintFluidBoundary);
        lbl_info->setObjectName("lbl_info");

        verticalLayout->addWidget(lbl_info);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnAdd = new QToolButton(TaskFemConstraintFluidBoundary);
        btnAdd->setObjectName("btnAdd");
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);
        btnAdd->setCheckable(true);

        horizontalLayout_2->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintFluidBoundary);
        btnRemove->setObjectName("btnRemove");
        sizePolicy1.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy1);
        btnRemove->setCheckable(true);

        horizontalLayout_2->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        listReferences = new QListWidget(TaskFemConstraintFluidBoundary);
        listReferences->setObjectName("listReferences");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listReferences->sizePolicy().hasHeightForWidth());
        listReferences->setSizePolicy(sizePolicy2);
        listReferences->setMinimumSize(QSize(0, 100));
        listReferences->setMaximumSize(QSize(16777215, 16777215));
        listReferences->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(listReferences);

        labelHelpText = new QLabel(TaskFemConstraintFluidBoundary);
        labelHelpText->setObjectName("labelHelpText");
        labelHelpText->setWordWrap(true);

        verticalLayout->addWidget(labelHelpText);

        tabWidget = new QTabWidget(TaskFemConstraintFluidBoundary);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabBasicBoundary = new QWidget();
        tabBasicBoundary->setObjectName("tabBasicBoundary");
        tabBasicBoundary->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(tabBasicBoundary);
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelBoundaryValue = new QLabel(tabBasicBoundary);
        labelBoundaryValue->setObjectName("labelBoundaryValue");
        labelBoundaryValue->setEnabled(true);
        labelBoundaryValue->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(labelBoundaryValue);

        layoutBoundaryValue = new QHBoxLayout();
        layoutBoundaryValue->setObjectName("layoutBoundaryValue");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutBoundaryValue->addItem(horizontalSpacer);

        spinBoundaryValue = new QDoubleSpinBox(tabBasicBoundary);
        spinBoundaryValue->setObjectName("spinBoundaryValue");
        spinBoundaryValue->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoundaryValue->sizePolicy().hasHeightForWidth());
        spinBoundaryValue->setSizePolicy(sizePolicy3);
        spinBoundaryValue->setMinimumSize(QSize(80, 0));
        spinBoundaryValue->setValue(0.000000000000000);

        layoutBoundaryValue->addWidget(spinBoundaryValue);


        verticalLayout_3->addLayout(layoutBoundaryValue);

        layoutDirection = new QHBoxLayout();
        layoutDirection->setObjectName("layoutDirection");
        buttonDirection = new QPushButton(tabBasicBoundary);
        buttonDirection->setObjectName("buttonDirection");
        sizePolicy3.setHeightForWidth(buttonDirection->sizePolicy().hasHeightForWidth());
        buttonDirection->setSizePolicy(sizePolicy3);
        buttonDirection->setMaximumSize(QSize(16777215, 16777215));

        layoutDirection->addWidget(buttonDirection);

        lineDirection = new QLineEdit(tabBasicBoundary);
        lineDirection->setObjectName("lineDirection");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineDirection->sizePolicy().hasHeightForWidth());
        lineDirection->setSizePolicy(sizePolicy4);
        lineDirection->setMinimumSize(QSize(75, 0));
        lineDirection->setMaximumSize(QSize(16777215, 16777215));
        lineDirection->setBaseSize(QSize(0, 0));

        layoutDirection->addWidget(lineDirection);


        verticalLayout_3->addLayout(layoutDirection);

        checkReverse = new QCheckBox(tabBasicBoundary);
        checkReverse->setObjectName("checkReverse");
        checkReverse->setEnabled(true);
        checkReverse->setMinimumSize(QSize(160, 0));
        checkReverse->setMaximumSize(QSize(200, 16777215));

        verticalLayout_3->addWidget(checkReverse);

        tabWidget->addTab(tabBasicBoundary, QString());
        tabTurbulenceBoundary = new QWidget();
        tabTurbulenceBoundary->setObjectName("tabTurbulenceBoundary");
        verticalLayout_2 = new QVBoxLayout(tabTurbulenceBoundary);
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelTurbulenceSpecification = new QLabel(tabTurbulenceBoundary);
        labelTurbulenceSpecification->setObjectName("labelTurbulenceSpecification");

        verticalLayout_2->addWidget(labelTurbulenceSpecification);

        comboTurbulenceSpecification = new QComboBox(tabTurbulenceBoundary);
        comboTurbulenceSpecification->setObjectName("comboTurbulenceSpecification");
        sizePolicy1.setHeightForWidth(comboTurbulenceSpecification->sizePolicy().hasHeightForWidth());
        comboTurbulenceSpecification->setSizePolicy(sizePolicy1);
        comboTurbulenceSpecification->setFrame(true);

        verticalLayout_2->addWidget(comboTurbulenceSpecification);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        labelTurbulentIntensityValue = new QLabel(tabTurbulenceBoundary);
        labelTurbulentIntensityValue->setObjectName("labelTurbulentIntensityValue");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelTurbulentIntensityValue);

        spinTurbulentIntensityValue = new QDoubleSpinBox(tabTurbulenceBoundary);
        spinTurbulentIntensityValue->setObjectName("spinTurbulentIntensityValue");
        sizePolicy4.setHeightForWidth(spinTurbulentIntensityValue->sizePolicy().hasHeightForWidth());
        spinTurbulentIntensityValue->setSizePolicy(sizePolicy4);
        spinTurbulentIntensityValue->setMinimumSize(QSize(80, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinTurbulentIntensityValue);

        labelTurbulentLengthValue = new QLabel(tabTurbulenceBoundary);
        labelTurbulentLengthValue->setObjectName("labelTurbulentLengthValue");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelTurbulentLengthValue);

        spinTurbulentLengthValue = new QDoubleSpinBox(tabTurbulenceBoundary);
        spinTurbulentLengthValue->setObjectName("spinTurbulentLengthValue");
        sizePolicy1.setHeightForWidth(spinTurbulentLengthValue->sizePolicy().hasHeightForWidth());
        spinTurbulentLengthValue->setSizePolicy(sizePolicy1);
        spinTurbulentLengthValue->setMinimumSize(QSize(80, 0));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinTurbulentLengthValue);


        verticalLayout_2->addLayout(formLayout_2);

        tabWidget->addTab(tabTurbulenceBoundary, QString());
        tabThermalBoundary = new QWidget();
        tabThermalBoundary->setObjectName("tabThermalBoundary");
        verticalLayout_5 = new QVBoxLayout(tabThermalBoundary);
        verticalLayout_5->setObjectName("verticalLayout_5");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelThermalBoundaryType = new QLabel(tabThermalBoundary);
        labelThermalBoundaryType->setObjectName("labelThermalBoundaryType");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelThermalBoundaryType);

        comboThermalBoundaryType = new QComboBox(tabThermalBoundary);
        comboThermalBoundaryType->setObjectName("comboThermalBoundaryType");
        sizePolicy1.setHeightForWidth(comboThermalBoundaryType->sizePolicy().hasHeightForWidth());
        comboThermalBoundaryType->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboThermalBoundaryType);

        labelTemperature = new QLabel(tabThermalBoundary);
        labelTemperature->setObjectName("labelTemperature");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelTemperature);

        spinTemperatureValue = new QDoubleSpinBox(tabThermalBoundary);
        spinTemperatureValue->setObjectName("spinTemperatureValue");
        sizePolicy1.setHeightForWidth(spinTemperatureValue->sizePolicy().hasHeightForWidth());
        spinTemperatureValue->setSizePolicy(sizePolicy1);
        spinTemperatureValue->setMinimum(-273.149999999999977);
        spinTemperatureValue->setMaximum(9999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinTemperatureValue);

        labelHeatFlux = new QLabel(tabThermalBoundary);
        labelHeatFlux->setObjectName("labelHeatFlux");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelHeatFlux);

        labelHTCeoff = new QLabel(tabThermalBoundary);
        labelHTCeoff->setObjectName("labelHTCeoff");

        formLayout->setWidget(3, QFormLayout::LabelRole, labelHTCeoff);

        spinHTCoeffValue = new QDoubleSpinBox(tabThermalBoundary);
        spinHTCoeffValue->setObjectName("spinHTCoeffValue");
        sizePolicy1.setHeightForWidth(spinHTCoeffValue->sizePolicy().hasHeightForWidth());
        spinHTCoeffValue->setSizePolicy(sizePolicy1);
        spinHTCoeffValue->setMinimum(0.000000000000000);
        spinHTCoeffValue->setMaximum(99999.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinHTCoeffValue);

        spinHeatFluxValue = new QDoubleSpinBox(tabThermalBoundary);
        spinHeatFluxValue->setObjectName("spinHeatFluxValue");
        sizePolicy1.setHeightForWidth(spinHeatFluxValue->sizePolicy().hasHeightForWidth());
        spinHeatFluxValue->setSizePolicy(sizePolicy1);
        spinHeatFluxValue->setMinimum(0.000000000000000);
        spinHeatFluxValue->setMaximum(99999.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinHeatFluxValue);


        verticalLayout_5->addLayout(formLayout);

        tabWidget->addTab(tabThermalBoundary, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TaskFemConstraintFluidBoundary);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskFemConstraintFluidBoundary);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintFluidBoundary)
    {
        labelBoundaryType->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Boundary", nullptr));
        labelSubtype->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Subtype", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Select multiple face(s), click Add or Remove", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Remove", nullptr));
        labelHelpText->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Help text", nullptr));
        labelBoundaryValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Value [Unit]", nullptr));
#if QT_CONFIG(tooltip)
        buttonDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Select a planar edge or face, then press this button", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDirection->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Direction", nullptr));
#if QT_CONFIG(tooltip)
        lineDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "The direction of the edge or the direction of the\n"
"normal vector of the face is used as direction", nullptr));
#endif // QT_CONFIG(tooltip)
        checkReverse->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Reverse direction", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBasicBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Tab 1", nullptr));
        labelTurbulenceSpecification->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Turbulence specification", nullptr));
        labelTurbulentIntensityValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Intensity", nullptr));
        labelTurbulentLengthValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Length [m]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTurbulenceBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Page", nullptr));
        labelThermalBoundaryType->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Type", nullptr));
        labelTemperature->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Temperature [K]", nullptr));
        labelHeatFlux->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Heat flux [W/m2]", nullptr));
        labelHTCeoff->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "HT coeff", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabThermalBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Tab 2", nullptr));
        (void)TaskFemConstraintFluidBoundary;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintFluidBoundary: public Ui_TaskFemConstraintFluidBoundary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H
