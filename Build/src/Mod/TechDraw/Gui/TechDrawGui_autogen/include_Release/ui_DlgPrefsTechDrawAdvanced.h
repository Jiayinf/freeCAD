/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWADVANCED_H
#define UI_DLGPREFSTECHDRAWADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawAdvancedImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbDim;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    Gui::PrefCheckBox *cbCrazyEdges;
    Gui::PrefSpinBox *sbMaxTiles;
    Gui::PrefDoubleSpinBox *pdsbMarkFuzz;
    Gui::PrefCheckBox *cbDebugSection;
    Gui::PrefCheckBox *cbNewFaceFinder;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    Gui::PrefCheckBox *cbReportProgress;
    QLabel *label_5;
    QLabel *label_4;
    Gui::PrefCheckBox *cbShowSectionEdges;
    Gui::PrefSpinBox *sbMaxPat;
    Gui::PrefCheckBox *cbAutoCorrectRefs;
    Gui::PrefDoubleSpinBox *pdsbEdgeFuzz;
    Gui::PrefCheckBox *cbFuseBeforeSection;
    Gui::PrefSpinBox *sbScrubCount;
    Gui::PrefCheckBox *cbDetectFaces;
    Gui::PrefCheckBox *cbDebugDetail;
    QLabel *label_2;
    Gui::PrefCheckBox *cbSwitchWB;
    QGroupBox *gbBehaviour;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QCheckBox *cbBalloonDefault;
    QLabel *label_8;
    QLabel *label_6;
    QCheckBox *cbBalloonAlt;
    QCheckBox *cbBalloonShift;
    QCheckBox *cbBalloonMeta;
    QCheckBox *cbBalloonControl;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawAdvancedImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawAdvancedImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawAdvancedImp->setObjectName("TechDrawGui__DlgPrefsTechDrawAdvancedImp");
        TechDrawGui__DlgPrefsTechDrawAdvancedImp->resize(700, 810);
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gbDim = new QGroupBox(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        gbDim->setObjectName("gbDim");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbDim->sizePolicy().hasHeightForWidth());
        gbDim->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(gbDim);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(gbDim);
        label_3->setObjectName("label_3");
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        cbCrazyEdges = new Gui::PrefCheckBox(gbDim);
        cbCrazyEdges->setObjectName("cbCrazyEdges");
        sizePolicy.setHeightForWidth(cbCrazyEdges->sizePolicy().hasHeightForWidth());
        cbCrazyEdges->setSizePolicy(sizePolicy);
        cbCrazyEdges->setProperty("prefEntry", QVariant(QByteArray("allowCrazyEdge")));
        cbCrazyEdges->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbCrazyEdges, 3, 0, 1, 1);

        sbMaxTiles = new Gui::PrefSpinBox(gbDim);
        sbMaxTiles->setObjectName("sbMaxTiles");
        sbMaxTiles->setAlignment(Qt::AlignmentFlag::AlignRight);
        sbMaxTiles->setMinimum(1);
        sbMaxTiles->setMaximum(1000000);
        sbMaxTiles->setSingleStep(100);
        sbMaxTiles->setValue(10000);
        sbMaxTiles->setProperty("prefEntry", QVariant(QByteArray("MaxSVGTile")));
        sbMaxTiles->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout->addWidget(sbMaxTiles, 10, 2, 1, 1);

        pdsbMarkFuzz = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbMarkFuzz->setObjectName("pdsbMarkFuzz");
        sizePolicy.setHeightForWidth(pdsbMarkFuzz->sizePolicy().hasHeightForWidth());
        pdsbMarkFuzz->setSizePolicy(sizePolicy);
        pdsbMarkFuzz->setMinimumSize(QSize(174, 0));
        pdsbMarkFuzz->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pdsbMarkFuzz->setValue(5.000000000000000);
        pdsbMarkFuzz->setProperty("prefEntry", QVariant(QByteArray("MarkFuzz")));
        pdsbMarkFuzz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbMarkFuzz, 9, 2, 1, 1);

        cbDebugSection = new Gui::PrefCheckBox(gbDim);
        cbDebugSection->setObjectName("cbDebugSection");
        sizePolicy.setHeightForWidth(cbDebugSection->sizePolicy().hasHeightForWidth());
        cbDebugSection->setSizePolicy(sizePolicy);
        cbDebugSection->setProperty("prefEntry", QVariant(QByteArray("debugSection")));
        cbDebugSection->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbDebugSection, 4, 0, 1, 1);

        cbNewFaceFinder = new Gui::PrefCheckBox(gbDim);
        cbNewFaceFinder->setObjectName("cbNewFaceFinder");
        cbNewFaceFinder->setChecked(true);
        cbNewFaceFinder->setProperty("prefEntry", QVariant(QByteArray("NewFaceFinder")));
        cbNewFaceFinder->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbNewFaceFinder, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 1, 1, 1);

        label = new QLabel(gbDim);
        label->setObjectName("label");

        gridLayout->addWidget(label, 10, 0, 1, 1);

        cbReportProgress = new Gui::PrefCheckBox(gbDim);
        cbReportProgress->setObjectName("cbReportProgress");
        cbReportProgress->setProperty("prefEntry", QVariant(QByteArray("ReportProgress")));
        cbReportProgress->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbReportProgress, 0, 2, 1, 1);

        label_5 = new QLabel(gbDim);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_4 = new QLabel(gbDim);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        cbShowSectionEdges = new Gui::PrefCheckBox(gbDim);
        cbShowSectionEdges->setObjectName("cbShowSectionEdges");
        sizePolicy.setHeightForWidth(cbShowSectionEdges->sizePolicy().hasHeightForWidth());
        cbShowSectionEdges->setSizePolicy(sizePolicy);
        cbShowSectionEdges->setChecked(true);
        cbShowSectionEdges->setProperty("prefEntry", QVariant(QByteArray("ShowSectionEdges")));
        cbShowSectionEdges->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbShowSectionEdges, 2, 0, 1, 1);

        sbMaxPat = new Gui::PrefSpinBox(gbDim);
        sbMaxPat->setObjectName("sbMaxPat");
        sbMaxPat->setAlignment(Qt::AlignmentFlag::AlignRight);
        sbMaxPat->setMinimum(1);
        sbMaxPat->setMaximum(1000000);
        sbMaxPat->setSingleStep(100);
        sbMaxPat->setValue(10000);
        sbMaxPat->setProperty("prefEntry", QVariant(QByteArray("MaxSeg")));
        sbMaxPat->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/PAT")));

        gridLayout->addWidget(sbMaxPat, 11, 2, 1, 1);

        cbAutoCorrectRefs = new Gui::PrefCheckBox(gbDim);
        cbAutoCorrectRefs->setObjectName("cbAutoCorrectRefs");
        cbAutoCorrectRefs->setChecked(true);
        cbAutoCorrectRefs->setProperty("prefEntry", QVariant(QByteArray("AutoCorrectRefs")));
        cbAutoCorrectRefs->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(cbAutoCorrectRefs, 1, 2, 1, 1);

        pdsbEdgeFuzz = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbEdgeFuzz->setObjectName("pdsbEdgeFuzz");
        sizePolicy.setHeightForWidth(pdsbEdgeFuzz->sizePolicy().hasHeightForWidth());
        pdsbEdgeFuzz->setSizePolicy(sizePolicy);
        pdsbEdgeFuzz->setMinimumSize(QSize(174, 0));
        pdsbEdgeFuzz->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pdsbEdgeFuzz->setValue(10.000000000000000);
        pdsbEdgeFuzz->setProperty("prefEntry", QVariant(QByteArray("EdgeFuzz")));
        pdsbEdgeFuzz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbEdgeFuzz, 8, 2, 1, 1);

        cbFuseBeforeSection = new Gui::PrefCheckBox(gbDim);
        cbFuseBeforeSection->setObjectName("cbFuseBeforeSection");
        sizePolicy.setHeightForWidth(cbFuseBeforeSection->sizePolicy().hasHeightForWidth());
        cbFuseBeforeSection->setSizePolicy(sizePolicy);
        cbFuseBeforeSection->setFont(font);
        cbFuseBeforeSection->setProperty("prefEntry", QVariant(QByteArray("SectionFuseFirst")));
        cbFuseBeforeSection->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbFuseBeforeSection, 2, 2, 1, 1);

        sbScrubCount = new Gui::PrefSpinBox(gbDim);
        sbScrubCount->setObjectName("sbScrubCount");
        sbScrubCount->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        sbScrubCount->setValue(1);
        sbScrubCount->setProperty("prefEntry", QVariant(QByteArray("ScrubCount")));
        sbScrubCount->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(sbScrubCount, 7, 2, 1, 1);

        cbDetectFaces = new Gui::PrefCheckBox(gbDim);
        cbDetectFaces->setObjectName("cbDetectFaces");
        sizePolicy.setHeightForWidth(cbDetectFaces->sizePolicy().hasHeightForWidth());
        cbDetectFaces->setSizePolicy(sizePolicy);
        cbDetectFaces->setChecked(true);
        cbDetectFaces->setProperty("prefEntry", QVariant(QByteArray("HandleFaces")));
        cbDetectFaces->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbDetectFaces, 0, 0, 1, 1);

        cbDebugDetail = new Gui::PrefCheckBox(gbDim);
        cbDebugDetail->setObjectName("cbDebugDetail");
        sizePolicy.setHeightForWidth(cbDebugDetail->sizePolicy().hasHeightForWidth());
        cbDebugDetail->setSizePolicy(sizePolicy);
        cbDebugDetail->setProperty("prefEntry", QVariant(QByteArray("debugDetail")));
        cbDebugDetail->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbDebugDetail, 4, 2, 1, 1);

        label_2 = new QLabel(gbDim);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        cbSwitchWB = new Gui::PrefCheckBox(gbDim);
        cbSwitchWB->setObjectName("cbSwitchWB");
        cbSwitchWB->setChecked(true);
        cbSwitchWB->setProperty("prefEntry", QVariant(QByteArray("SwitchToWB")));
        cbSwitchWB->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbSwitchWB, 5, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(gbDim);

        gbBehaviour = new QGroupBox(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        gbBehaviour->setObjectName("gbBehaviour");
        verticalLayout_3 = new QVBoxLayout(gbBehaviour);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        cbBalloonDefault = new QCheckBox(gbBehaviour);
        cbBalloonDefault->setObjectName("cbBalloonDefault");
        cbBalloonDefault->setChecked(true);

        gridLayout_2->addWidget(cbBalloonDefault, 1, 0, 1, 1);

        label_8 = new QLabel(gbBehaviour);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_6 = new QLabel(gbBehaviour);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        cbBalloonAlt = new QCheckBox(gbBehaviour);
        cbBalloonAlt->setObjectName("cbBalloonAlt");

        gridLayout_2->addWidget(cbBalloonAlt, 1, 1, 1, 1);

        cbBalloonShift = new QCheckBox(gbBehaviour);
        cbBalloonShift->setObjectName("cbBalloonShift");

        gridLayout_2->addWidget(cbBalloonShift, 0, 1, 1, 1);

        cbBalloonMeta = new QCheckBox(gbBehaviour);
        cbBalloonMeta->setObjectName("cbBalloonMeta");

        gridLayout_2->addWidget(cbBalloonMeta, 1, 2, 1, 1);

        cbBalloonControl = new QCheckBox(gbBehaviour);
        cbBalloonControl->setObjectName("cbBalloonControl");

        gridLayout_2->addWidget(cbBalloonControl, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(gbBehaviour);

        label_17 = new QLabel(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        label_17->setObjectName("label_17");
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_17->setFont(font1);
        label_17->setTextFormat(Qt::TextFormat::RichText);
        label_17->setWordWrap(true);

        verticalLayout_2->addWidget(label_17);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawAdvancedImp);

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawAdvancedImp)
    {
        TechDrawGui__DlgPrefsTechDrawAdvancedImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Advanced", nullptr));
        gbDim->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Advanced", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Overlap Edges Scrub Passes", nullptr));
#if QT_CONFIG(tooltip)
        cbCrazyEdges->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Include edges with unexpected geometry (zero length etc.) in results", nullptr));
#endif // QT_CONFIG(tooltip)
        cbCrazyEdges->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Allow Crazy Edges", nullptr));
#if QT_CONFIG(tooltip)
        sbMaxTiles->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Limit of 64x64 pixel SVG tiles used to hatch a single face.\n"
"For large scalings you might get an error about too many SVG tiles.\n"
"Then you need to increase the tile limit.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pdsbMarkFuzz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Selection area around center marks\n"
"Each unit is approx. 0.1 mm wide", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pdsbMarkFuzz->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cbDebugSection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Dump intermediate results during Section view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDebugSection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Debug Section", nullptr));
#if QT_CONFIG(tooltip)
        cbNewFaceFinder->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, FreeCAD will use the new face finder algorithm.  If not checked, FreeCAD will use the original face finder.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbNewFaceFinder->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Use New Face Finder Algorithm", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Max SVG Hatch Tiles", nullptr));
#if QT_CONFIG(tooltip)
        cbReportProgress->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Issue progress messages while building View geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        cbReportProgress->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Report Progress", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Edge Fuzz", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Mark Fuzz", nullptr));
#if QT_CONFIG(tooltip)
        cbShowSectionEdges->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Highlights border of section cut in section views", nullptr));
#endif // QT_CONFIG(tooltip)
        cbShowSectionEdges->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Show Section Edges", nullptr));
#if QT_CONFIG(tooltip)
        sbMaxPat->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Maximum hatch line segments to use\n"
"when hatching a face with a PAT pattern", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbAutoCorrectRefs->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, system will attempt to automatically correct dimension references when the model changes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbAutoCorrectRefs->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        cbAutoCorrectRefs->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Auto Correct Dimension Refs", nullptr));
#if QT_CONFIG(tooltip)
        pdsbEdgeFuzz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Size of selection area around edges\n"
"Each unit is approx. 0.1 mm wide", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pdsbEdgeFuzz->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cbFuseBeforeSection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Perform a fuse operation on input shape(s) before Section view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbFuseBeforeSection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Fuse Before Section", nullptr));
#if QT_CONFIG(tooltip)
        sbScrubCount->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "The number of times FreeCAD should try to remove overlapping edges returned by the Hidden Line Removal algorithm. A value of 0 indicates no scrubbing, 1 indicates a single pass and 2 indicates a second pass should be performed. Values above 2 are generally not productive. Each pass adds to the time required to produce the drawing.", nullptr));
#endif // QT_CONFIG(tooltip)
        sbScrubCount->setSuffix(QString());
        sbScrubCount->setPrefix(QString());
#if QT_CONFIG(tooltip)
        cbDetectFaces->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, TechDraw will attempt to build faces using the\n"
"line segments returned by the hidden line removal algorithm.\n"
"Faces must be detected in order to use hatching, but there\n"
"can be a performance penalty in complex models.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDetectFaces->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Detect Faces", nullptr));
#if QT_CONFIG(tooltip)
        cbDebugDetail->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Dump intermediate results during Detail view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDebugDetail->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Debug Detail", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Max PAT Hatch Segments", nullptr));
#if QT_CONFIG(tooltip)
        cbSwitchWB->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If this box is checked, double clicking on a page in the tree will automatically switch to TechDraw and the page will be made visible.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbSwitchWB->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Switch Workbench on Click", nullptr));
#if QT_CONFIG(tooltip)
        gbBehaviour->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "<html><head/><body><p>Some combinations of OS and Navigation style key bindings may conflict with the default modifier keys for Ballon dragging and View snapping override.  You can make adjustments here to find a non-conflicting key binding.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        gbBehaviour->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Behaviour Overrides", nullptr));
#if QT_CONFIG(tooltip)
        cbBalloonDefault->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Check this box to use the default modifier keys.  Uncheck this box to set a different key combination.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbBalloonDefault->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Use Default", nullptr));
        label_8->setText(QString());
        label_6->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Balloon Drag", nullptr));
#if QT_CONFIG(tooltip)
        cbBalloonAlt->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Check this box to include the Alt key in the modifiers.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbBalloonAlt->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Alt", nullptr));
#if QT_CONFIG(tooltip)
        cbBalloonShift->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Check this box to include the Shift key in the modifiers.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbBalloonShift->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Shift", nullptr));
#if QT_CONFIG(tooltip)
        cbBalloonMeta->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Check this box to include the Meta/Start/Super key in the modifiers.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbBalloonMeta->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Meta", nullptr));
#if QT_CONFIG(tooltip)
        cbBalloonControl->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Check this box to include the Control key in the modifiers.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbBalloonControl->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Control", nullptr));
        label_17->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawAdvancedImp: public Ui_DlgPrefsTechDrawAdvancedImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWADVANCED_H
