/********************************************************************************
** Form generated from reading UI file 'SketcherSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHERSETTINGS_H
#define UI_SKETCHERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace SketcherGui {

class Ui_SketcherSettings
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    Gui::PrefCheckBox *checkBoxAdvancedSolverTaskBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    Gui::PrefCheckBox *checkBoxRecalculateInitialSolutionWhileDragging;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_22;
    Gui::PrefCheckBox *checkBoxAutoRemoveRedundants;
    Gui::PrefCheckBox *checkBoxEnableEscape;
    Gui::PrefCheckBox *checkBoxDisableShading;
    Gui::PrefCheckBox *checkBoxNotifyConstraintSubstitutions;
    Gui::PrefCheckBox *checkBoxUnifiedCoincident;
    Gui::PrefCheckBox *checkBoxHorVerAuto;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_general;
    QLabel *dimensioningLabel;
    QComboBox *dimensioningMode;
    QLabel *radiusDiameterLabel;
    QComboBox *radiusDiameterMode;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_vis;
    QLabel *ovpVisibilityLabel;
    QComboBox *ovpVisibility;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SketcherGui__SketcherSettings)
    {
        if (SketcherGui__SketcherSettings->objectName().isEmpty())
            SketcherGui__SketcherSettings->setObjectName("SketcherGui__SketcherSettings");
        SketcherGui__SketcherSettings->resize(500, 536);
        gridLayout = new QGridLayout(SketcherGui__SketcherSettings);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(SketcherGui__SketcherSettings);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBoxAdvancedSolverTaskBox = new Gui::PrefCheckBox(groupBox_2);
        checkBoxAdvancedSolverTaskBox->setObjectName("checkBoxAdvancedSolverTaskBox");
        checkBoxAdvancedSolverTaskBox->setProperty("prefEntry", QVariant(QByteArray("ShowSolverAdvancedWidget")));
        checkBoxAdvancedSolverTaskBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_4->addWidget(checkBoxAdvancedSolverTaskBox, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(SketcherGui__SketcherSettings);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName("gridLayout_5");
        checkBoxRecalculateInitialSolutionWhileDragging = new Gui::PrefCheckBox(groupBox_4);
        checkBoxRecalculateInitialSolutionWhileDragging->setObjectName("checkBoxRecalculateInitialSolutionWhileDragging");
        checkBoxRecalculateInitialSolutionWhileDragging->setChecked(true);
        checkBoxRecalculateInitialSolutionWhileDragging->setProperty("prefEntry", QVariant(QByteArray("RecalculateInitialSolutionWhileDragging")));
        checkBoxRecalculateInitialSolutionWhileDragging->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_5->addWidget(checkBoxRecalculateInitialSolutionWhileDragging, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(SketcherGui__SketcherSettings);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMinimumSize(QSize(0, 0));
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5->setBaseSize(QSize(0, 0));
        verticalLayout_22 = new QVBoxLayout(groupBox_5);
        verticalLayout_22->setObjectName("verticalLayout_22");
        checkBoxAutoRemoveRedundants = new Gui::PrefCheckBox(groupBox_5);
        checkBoxAutoRemoveRedundants->setObjectName("checkBoxAutoRemoveRedundants");
        checkBoxAutoRemoveRedundants->setChecked(false);
        checkBoxAutoRemoveRedundants->setProperty("prefEntry", QVariant(QByteArray("AutoRemoveRedundants")));
        checkBoxAutoRemoveRedundants->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        verticalLayout_22->addWidget(checkBoxAutoRemoveRedundants);

        checkBoxEnableEscape = new Gui::PrefCheckBox(groupBox_5);
        checkBoxEnableEscape->setObjectName("checkBoxEnableEscape");
        checkBoxEnableEscape->setChecked(true);
        checkBoxEnableEscape->setProperty("prefEntry", QVariant(QByteArray("LeaveSketchWithEscape")));
        checkBoxEnableEscape->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        verticalLayout_22->addWidget(checkBoxEnableEscape);

        checkBoxDisableShading = new Gui::PrefCheckBox(groupBox_5);
        checkBoxDisableShading->setObjectName("checkBoxDisableShading");
        checkBoxDisableShading->setChecked(true);
        checkBoxDisableShading->setPrefEntry("DisableShadedView");
        checkBoxDisableShading->setPrefPath("Mod/Sketcher/General");

        verticalLayout_22->addWidget(checkBoxDisableShading);

        checkBoxNotifyConstraintSubstitutions = new Gui::PrefCheckBox(groupBox_5);
        checkBoxNotifyConstraintSubstitutions->setObjectName("checkBoxNotifyConstraintSubstitutions");
        checkBoxNotifyConstraintSubstitutions->setChecked(true);
        checkBoxNotifyConstraintSubstitutions->setProperty("prefEntry", QVariant(QByteArray("NotifyConstraintSubstitutions")));
        checkBoxNotifyConstraintSubstitutions->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_22->addWidget(checkBoxNotifyConstraintSubstitutions);

        checkBoxUnifiedCoincident = new Gui::PrefCheckBox(groupBox_5);
        checkBoxUnifiedCoincident->setObjectName("checkBoxUnifiedCoincident");
        checkBoxUnifiedCoincident->setChecked(true);
        checkBoxUnifiedCoincident->setProperty("prefEntry", QVariant(QByteArray("UnifiedCoincident")));
        checkBoxUnifiedCoincident->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/Constraints")));

        verticalLayout_22->addWidget(checkBoxUnifiedCoincident);

        checkBoxHorVerAuto = new Gui::PrefCheckBox(groupBox_5);
        checkBoxHorVerAuto->setObjectName("checkBoxHorVerAuto");
        checkBoxHorVerAuto->setChecked(true);
        checkBoxHorVerAuto->setProperty("prefEntry", QVariant(QByteArray("AutoHorVer")));
        checkBoxHorVerAuto->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/Constraints")));

        verticalLayout_22->addWidget(checkBoxHorVerAuto);


        gridLayout->addWidget(groupBox_5, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(SketcherGui__SketcherSettings);
        groupBox_6->setObjectName("groupBox_6");
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_general = new QGridLayout(groupBox_6);
        gridLayout_general->setObjectName("gridLayout_general");
        dimensioningLabel = new QLabel(groupBox_6);
        dimensioningLabel->setObjectName("dimensioningLabel");

        gridLayout_general->addWidget(dimensioningLabel, 0, 0, 1, 1);

        dimensioningMode = new QComboBox(groupBox_6);
        dimensioningMode->setObjectName("dimensioningMode");

        gridLayout_general->addWidget(dimensioningMode, 0, 1, 1, 1);

        radiusDiameterLabel = new QLabel(groupBox_6);
        radiusDiameterLabel->setObjectName("radiusDiameterLabel");

        gridLayout_general->addWidget(radiusDiameterLabel, 1, 0, 1, 1);

        radiusDiameterMode = new QComboBox(groupBox_6);
        radiusDiameterMode->setObjectName("radiusDiameterMode");

        gridLayout_general->addWidget(radiusDiameterMode, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_6, 3, 0, 1, 1);

        groupBox_7 = new QGroupBox(SketcherGui__SketcherSettings);
        groupBox_7->setObjectName("groupBox_7");
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        gridLayout_vis = new QGridLayout(groupBox_7);
        gridLayout_vis->setObjectName("gridLayout_vis");
        ovpVisibilityLabel = new QLabel(groupBox_7);
        ovpVisibilityLabel->setObjectName("ovpVisibilityLabel");

        gridLayout_vis->addWidget(ovpVisibilityLabel, 0, 0, 1, 1);

        ovpVisibility = new QComboBox(groupBox_7);
        ovpVisibility->setObjectName("ovpVisibility");

        gridLayout_vis->addWidget(ovpVisibility, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_7, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        QWidget::setTabOrder(checkBoxAdvancedSolverTaskBox, checkBoxRecalculateInitialSolutionWhileDragging);
        QWidget::setTabOrder(checkBoxRecalculateInitialSolutionWhileDragging, checkBoxAutoRemoveRedundants);
        QWidget::setTabOrder(checkBoxAutoRemoveRedundants, checkBoxEnableEscape);
        QWidget::setTabOrder(checkBoxEnableEscape, checkBoxNotifyConstraintSubstitutions);

        retranslateUi(SketcherGui__SketcherSettings);

        QMetaObject::connectSlotsByName(SketcherGui__SketcherSettings);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__SketcherSettings)
    {
        SketcherGui__SketcherSettings->setWindowTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "General", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "Task panel widgets", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxAdvancedSolverTaskBox->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Sketcher dialog will have additional section\n"
"'Advanced solver control' to adjust solver settings", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAdvancedSolverTaskBox->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Show section 'Advanced solver control'", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "Dragging performance", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxRecalculateInitialSolutionWhileDragging->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Special solver algorithm will be used while dragging sketch elements.\n"
"Requires to re-enter edit mode to take effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRecalculateInitialSolutionWhileDragging->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Improve solving while dragging", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "General", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxAutoRemoveRedundants->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "New constraints that would be redundant will automatically be removed", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAutoRemoveRedundants->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Auto remove redundants", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxEnableEscape->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Allow to leave sketch edit mode when pressing Esc button", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxEnableEscape->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Esc can leave sketch edit mode", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxDisableShading->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Disables the shaded view when entering the sketch edit mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxDisableShading->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Disable shading in edit mode", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxNotifyConstraintSubstitutions->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Notifies about automatic constraint substitutions", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxNotifyConstraintSubstitutions->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Notify automatic constraint substitutions", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUnifiedCoincident->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Unify Coincident and PointOnObject in a single tool.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUnifiedCoincident->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Unify Coincident and PointOnObject", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHorVerAuto->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Use the automatic horizontal/vertical constraint tool. This create a command group in which you have the auto tool, horizontal and vertical.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHorVerAuto->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Auto tool for Horizontal/Vertical", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "Dimension constraint", nullptr));
        dimensioningLabel->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Dimensioning constraints:", nullptr));
#if QT_CONFIG(tooltip)
        dimensioningMode->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Select the type of dimensioning constraints for your toolbar:\n"
"'Single tool': A single tool for all dimensioning constraints in the toolbar: Distance, Distance X / Y, Angle, Radius. (Others in dropdown)\n"
"'Separated tools': Individual tools for each dimensioning constraint.\n"
"'Both': You will have both the 'Dimension' tool and the separated tools.\n"
"This setting is only for the toolbar. Whichever you choose, all tools are always available in the menu and through shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        radiusDiameterLabel->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "Dimension tool diameter/radius mode:", nullptr));
#if QT_CONFIG(tooltip)
        radiusDiameterMode->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "While using the Dimension tool you may choose how to handle circles and arcs:\n"
"'Auto': The tool will apply radius to arcs and diameter to circles.\n"
"'Diameter': The tool will apply diameter to both arcs and circles.\n"
"'Radius': The tool will apply radius to both arcs and circles.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_7->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettings", "Tool parameters", nullptr));
        ovpVisibilityLabel->setText(QCoreApplication::translate("SketcherGui::SketcherSettings", "On-View-Parameters:", nullptr));
#if QT_CONFIG(tooltip)
        ovpVisibility->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettings", "Choose a visibility mode for the On-View-Parameters:\n"
"'Disabled': On-View-Parameters are completely disabled.\n"
"'Only dimensional': Only dimensional On-View-Parameters are visible. They are the most useful. For example the radius of a circle.\n"
"'All': Both dimensional and positional On-View-Parameters. Positionals are the (x,y) position of the cursor. For example for the center of a circle.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class SketcherSettings: public Ui_SketcherSettings {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_SKETCHERSETTINGS_H
