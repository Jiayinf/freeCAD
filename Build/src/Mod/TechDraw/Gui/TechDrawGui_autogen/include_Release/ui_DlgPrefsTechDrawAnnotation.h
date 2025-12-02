/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawAnnotation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWANNOTATION_H
#define UI_DLGPREFSTECHDRAWANNOTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawAnnotationImp
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    Gui::PrefUnitSpinBox *pdsbBalloonKink;
    Gui::PrefCheckBox *pcbDetailHighlight;
    QLabel *label_19;
    Gui::PrefComboBox *pcbBalloonArrow;
    QLabel *label_3;
    Gui::PrefCheckBox *cb_IncludeCutLine;
    QSpacerItem *horizontalSpacer_2;
    Gui::PrefCheckBox *cbComplexMarks;
    Gui::PrefCheckBox *pcbDetailMatting;
    Gui::PrefCheckBox *cb_ShowSectionLine;
    QLabel *label;
    Gui::PrefCheckBox *cbPyramidOrtho;
    Gui::PrefCheckBox *cbPrintCenterMarks;
    Gui::PrefCheckBox *cbAutoHoriz;
    Gui::PrefCheckBox *cbShowCenterMarks;
    QLabel *label_5;
    Gui::PrefComboBox *cbCutSurface;
    Gui::PrefComboBox *pcbMatting;
    Gui::PrefComboBox *pcbBalloonShape;
    QLabel *label_18;
    QLabel *label_11;
    Gui::PrefComboBox *pcbBreakType;
    QGroupBox *gbLines;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    Gui::PrefComboBox *pcbHiddenStyle;
    QLabel *label_4;
    Gui::PrefComboBox *pcbLineStandard;
    Gui::PrefComboBox *pcbLineGroup;
    Gui::PrefComboBox *pcbHighlightStyle;
    QLabel *label_20;
    QLabel *label_6;
    Gui::PrefComboBox *pcbSectionStyle;
    QLabel *label_2;
    Gui::PrefComboBox *cbEndCap;
    Gui::PrefComboBox *pcbCenterStyle;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    Gui::PrefComboBox *pcbBreakStyle;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawAnnotationImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawAnnotationImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawAnnotationImp->setObjectName("TechDrawGui__DlgPrefsTechDrawAnnotationImp");
        TechDrawGui__DlgPrefsTechDrawAnnotationImp->resize(580, 795);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawAnnotationImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawAnnotationImp->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawAnnotationImp);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(TechDrawGui__DlgPrefsTechDrawAnnotationImp);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pdsbBalloonKink = new Gui::PrefUnitSpinBox(groupBox);
        pdsbBalloonKink->setObjectName("pdsbBalloonKink");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pdsbBalloonKink->sizePolicy().hasHeightForWidth());
        pdsbBalloonKink->setSizePolicy(sizePolicy1);
        pdsbBalloonKink->setValue(5.000000000000000);
        pdsbBalloonKink->setProperty("prefEntry", QVariant(QByteArray("BalloonKink")));
        pdsbBalloonKink->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout_2->addWidget(pdsbBalloonKink, 9, 2, 1, 1);

        pcbDetailHighlight = new Gui::PrefCheckBox(groupBox);
        pcbDetailHighlight->setObjectName("pcbDetailHighlight");
        pcbDetailHighlight->setChecked(true);
        pcbDetailHighlight->setProperty("prefEntry", QVariant(QByteArray("ShowDetailHighlight")));
        pcbDetailHighlight->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout_2->addWidget(pcbDetailHighlight, 6, 0, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        QFont font;
        font.setItalic(true);
        label_19->setFont(font);

        gridLayout_2->addWidget(label_19, 0, 0, 1, 1);

        pcbBalloonArrow = new Gui::PrefComboBox(groupBox);
        pcbBalloonArrow->setObjectName("pcbBalloonArrow");
        sizePolicy1.setHeightForWidth(pcbBalloonArrow->sizePolicy().hasHeightForWidth());
        pcbBalloonArrow->setSizePolicy(sizePolicy1);
        pcbBalloonArrow->setProperty("prefEntry", QVariant(QByteArray("BalloonArrow")));
        pcbBalloonArrow->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(pcbBalloonArrow, 8, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 8, 0, 1, 1);

        cb_IncludeCutLine = new Gui::PrefCheckBox(groupBox);
        cb_IncludeCutLine->setObjectName("cb_IncludeCutLine");
        cb_IncludeCutLine->setFont(font);
        cb_IncludeCutLine->setChecked(true);
        cb_IncludeCutLine->setProperty("prefEntry", QVariant(QByteArray("IncludeCutLine")));
        cb_IncludeCutLine->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cb_IncludeCutLine, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 1, 1, 1);

        cbComplexMarks = new Gui::PrefCheckBox(groupBox);
        cbComplexMarks->setObjectName("cbComplexMarks");
        cbComplexMarks->setFont(font);
        cbComplexMarks->setChecked(true);
        cbComplexMarks->setProperty("prefEntry", QVariant(QByteArray("SectionLineMarks")));
        cbComplexMarks->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cbComplexMarks, 3, 0, 1, 1);

        pcbDetailMatting = new Gui::PrefCheckBox(groupBox);
        pcbDetailMatting->setObjectName("pcbDetailMatting");
        pcbDetailMatting->setChecked(true);
        pcbDetailMatting->setProperty("prefEntry", QVariant(QByteArray("ShowDetailMatting")));
        pcbDetailMatting->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout_2->addWidget(pcbDetailMatting, 5, 0, 1, 1);

        cb_ShowSectionLine = new Gui::PrefCheckBox(groupBox);
        cb_ShowSectionLine->setObjectName("cb_ShowSectionLine");
        cb_ShowSectionLine->setFont(font);
        cb_ShowSectionLine->setChecked(true);
        cb_ShowSectionLine->setProperty("prefEntry", QVariant(QByteArray("ShowSectionLine")));
        cb_ShowSectionLine->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cb_ShowSectionLine, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setItalic(false);
        label->setFont(font1);

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        cbPyramidOrtho = new Gui::PrefCheckBox(groupBox);
        cbPyramidOrtho->setObjectName("cbPyramidOrtho");
        sizePolicy1.setHeightForWidth(cbPyramidOrtho->sizePolicy().hasHeightForWidth());
        cbPyramidOrtho->setSizePolicy(sizePolicy1);
        cbPyramidOrtho->setChecked(true);
        cbPyramidOrtho->setProperty("prefEntry", QVariant(QByteArray("PyramidOrtho")));
        cbPyramidOrtho->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cbPyramidOrtho, 10, 0, 1, 1);

        cbPrintCenterMarks = new Gui::PrefCheckBox(groupBox);
        cbPrintCenterMarks->setObjectName("cbPrintCenterMarks");
        sizePolicy1.setHeightForWidth(cbPrintCenterMarks->sizePolicy().hasHeightForWidth());
        cbPrintCenterMarks->setSizePolicy(sizePolicy1);
        cbPrintCenterMarks->setProperty("prefEntry", QVariant(QByteArray("PrintCenterMarks")));
        cbPrintCenterMarks->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cbPrintCenterMarks, 12, 2, 1, 1);

        cbAutoHoriz = new Gui::PrefCheckBox(groupBox);
        cbAutoHoriz->setObjectName("cbAutoHoriz");
        sizePolicy1.setHeightForWidth(cbAutoHoriz->sizePolicy().hasHeightForWidth());
        cbAutoHoriz->setSizePolicy(sizePolicy1);
        cbAutoHoriz->setFont(font);
        cbAutoHoriz->setChecked(true);
        cbAutoHoriz->setProperty("prefEntry", QVariant(QByteArray("AutoHorizontal")));
        cbAutoHoriz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/LeaderLine")));

        gridLayout_2->addWidget(cbAutoHoriz, 10, 2, 1, 1);

        cbShowCenterMarks = new Gui::PrefCheckBox(groupBox);
        cbShowCenterMarks->setObjectName("cbShowCenterMarks");
        sizePolicy1.setHeightForWidth(cbShowCenterMarks->sizePolicy().hasHeightForWidth());
        cbShowCenterMarks->setSizePolicy(sizePolicy1);
        cbShowCenterMarks->setFont(font);
        cbShowCenterMarks->setChecked(true);
        cbShowCenterMarks->setProperty("prefEntry", QVariant(QByteArray("ShowCenterMarks")));
        cbShowCenterMarks->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cbShowCenterMarks, 12, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);

        cbCutSurface = new Gui::PrefComboBox(groupBox);
        cbCutSurface->addItem(QString());
        cbCutSurface->addItem(QString());
        cbCutSurface->addItem(QString());
        cbCutSurface->addItem(QString());
        cbCutSurface->setObjectName("cbCutSurface");
        cbCutSurface->setProperty("prefEntry", QVariant(QByteArray("CutSurfaceDisplay")));
        cbCutSurface->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(cbCutSurface, 0, 2, 1, 1);

        pcbMatting = new Gui::PrefComboBox(groupBox);
        pcbMatting->setObjectName("pcbMatting");
        sizePolicy1.setHeightForWidth(pcbMatting->sizePolicy().hasHeightForWidth());
        pcbMatting->setSizePolicy(sizePolicy1);
        pcbMatting->setProperty("prefEntry", QVariant(QByteArray("MattingStyle")));
        pcbMatting->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(pcbMatting, 4, 2, 1, 1);

        pcbBalloonShape = new Gui::PrefComboBox(groupBox);
        pcbBalloonShape->setObjectName("pcbBalloonShape");
        sizePolicy1.setHeightForWidth(pcbBalloonShape->sizePolicy().hasHeightForWidth());
        pcbBalloonShape->setSizePolicy(sizePolicy1);
        pcbBalloonShape->setProperty("prefEntry", QVariant(QByteArray("BalloonShape")));
        pcbBalloonShape->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(pcbBalloonShape, 7, 2, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        gridLayout_2->addWidget(label_18, 9, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 11, 0, 1, 1);

        pcbBreakType = new Gui::PrefComboBox(groupBox);
        pcbBreakType->addItem(QString());
        pcbBreakType->addItem(QString());
        pcbBreakType->addItem(QString());
        pcbBreakType->setObjectName("pcbBreakType");
        pcbBreakType->setProperty("prefEntry", QVariant(QByteArray("BreakType")));
        pcbBreakType->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_2->addWidget(pcbBreakType, 11, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        gbLines = new QGroupBox(TechDrawGui__DlgPrefsTechDrawAnnotationImp);
        gbLines->setObjectName("gbLines");
        sizePolicy1.setHeightForWidth(gbLines->sizePolicy().hasHeightForWidth());
        gbLines->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(gbLines);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        pcbHiddenStyle = new Gui::PrefComboBox(gbLines);
        pcbHiddenStyle->setObjectName("pcbHiddenStyle");
        sizePolicy1.setHeightForWidth(pcbHiddenStyle->sizePolicy().hasHeightForWidth());
        pcbHiddenStyle->setSizePolicy(sizePolicy1);
        pcbHiddenStyle->setMaxVisibleItems(6);
        pcbHiddenStyle->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        pcbHiddenStyle->setIconSize(QSize(32, 32));
        pcbHiddenStyle->setProperty("prefEntry", QVariant(QByteArray("LineStyleHidden")));
        pcbHiddenStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbHiddenStyle, 2, 2, 1, 1);

        label_4 = new QLabel(gbLines);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 5, 0, 1, 1);

        pcbLineStandard = new Gui::PrefComboBox(gbLines);
        pcbLineStandard->setObjectName("pcbLineStandard");
        sizePolicy1.setHeightForWidth(pcbLineStandard->sizePolicy().hasHeightForWidth());
        pcbLineStandard->setSizePolicy(sizePolicy1);
        pcbLineStandard->setProperty("prefEntry", QVariant(QByteArray("LineStandard")));
        pcbLineStandard->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Standards")));

        gridLayout_4->addWidget(pcbLineStandard, 0, 2, 1, 1);

        pcbLineGroup = new Gui::PrefComboBox(gbLines);
        pcbLineGroup->setObjectName("pcbLineGroup");
        sizePolicy1.setHeightForWidth(pcbLineGroup->sizePolicy().hasHeightForWidth());
        pcbLineGroup->setSizePolicy(sizePolicy1);
        pcbLineGroup->setProperty("prefEntry", QVariant(QByteArray("LineGroup")));
        pcbLineGroup->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbLineGroup, 1, 2, 1, 1);

        pcbHighlightStyle = new Gui::PrefComboBox(gbLines);
        pcbHighlightStyle->setObjectName("pcbHighlightStyle");
        sizePolicy1.setHeightForWidth(pcbHighlightStyle->sizePolicy().hasHeightForWidth());
        pcbHighlightStyle->setSizePolicy(sizePolicy1);
        pcbHighlightStyle->setMaxVisibleItems(6);
        pcbHighlightStyle->setIconSize(QSize(32, 32));
        pcbHighlightStyle->setProperty("prefEntry", QVariant(QByteArray("LineStyleHighlight")));
        pcbHighlightStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbHighlightStyle, 4, 2, 1, 1);

        label_20 = new QLabel(gbLines);
        label_20->setObjectName("label_20");
        label_20->setFont(font);

        gridLayout_4->addWidget(label_20, 4, 0, 1, 1);

        label_6 = new QLabel(gbLines);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        pcbSectionStyle = new Gui::PrefComboBox(gbLines);
        pcbSectionStyle->setObjectName("pcbSectionStyle");
        sizePolicy1.setHeightForWidth(pcbSectionStyle->sizePolicy().hasHeightForWidth());
        pcbSectionStyle->setSizePolicy(sizePolicy1);
        pcbSectionStyle->setMaxVisibleItems(6);
        pcbSectionStyle->setIconSize(QSize(32, 32));
        pcbSectionStyle->setProperty("prefEntry", QVariant(QByteArray("LineStyleSection")));
        pcbSectionStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbSectionStyle, 3, 2, 1, 1);

        label_2 = new QLabel(gbLines);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        cbEndCap = new Gui::PrefComboBox(gbLines);
        cbEndCap->addItem(QString());
        cbEndCap->addItem(QString());
        cbEndCap->addItem(QString());
        cbEndCap->setObjectName("cbEndCap");
        sizePolicy1.setHeightForWidth(cbEndCap->sizePolicy().hasHeightForWidth());
        cbEndCap->setSizePolicy(sizePolicy1);
        cbEndCap->setFont(font1);
        cbEndCap->setProperty("prefEntry", QVariant(QByteArray("EdgeCapStyle")));
        cbEndCap->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_4->addWidget(cbEndCap, 7, 2, 1, 1);

        pcbCenterStyle = new Gui::PrefComboBox(gbLines);
        pcbCenterStyle->setObjectName("pcbCenterStyle");
        sizePolicy1.setHeightForWidth(pcbCenterStyle->sizePolicy().hasHeightForWidth());
        pcbCenterStyle->setSizePolicy(sizePolicy1);
        pcbCenterStyle->setMaxVisibleItems(6);
        pcbCenterStyle->setIconSize(QSize(32, 32));
        pcbCenterStyle->setProperty("prefEntry", QVariant(QByteArray("LineStyleCenter")));
        pcbCenterStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbCenterStyle, 5, 2, 1, 1);

        label_13 = new QLabel(gbLines);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setFont(font);

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        label_9 = new QLabel(gbLines);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        gridLayout_4->addWidget(label_9, 7, 0, 1, 1);

        label_7 = new QLabel(gbLines);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_10 = new QLabel(gbLines);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout_4->addWidget(label_10, 6, 0, 1, 1);

        pcbBreakStyle = new Gui::PrefComboBox(gbLines);
        pcbBreakStyle->setObjectName("pcbBreakStyle");
        pcbBreakStyle->setIconSize(QSize(32, 32));
        pcbBreakStyle->setProperty("prefEntry", QVariant(QByteArray("LineStyleBreak")));
        pcbBreakStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout_4->addWidget(pcbBreakStyle, 6, 2, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(2, 2);

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(gbLines);

        label_8 = new QLabel(TechDrawGui__DlgPrefsTechDrawAnnotationImp);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawAnnotationImp);

        cbCutSurface->setCurrentIndex(2);
        pcbBreakType->setCurrentIndex(2);
        pcbLineStandard->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawAnnotationImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawAnnotationImp)
    {
        TechDrawGui__DlgPrefsTechDrawAnnotationImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Annotation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Annotation", nullptr));
#if QT_CONFIG(tooltip)
        pdsbBalloonKink->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Length of balloon leader line kink", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbDetailHighlight->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "This checkbox controls whether or not to display a highlight around the detail area in the detail's source view.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbDetailHighlight->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Detail Source Show Highlight", nullptr));
        label_19->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Section Cut Surface", nullptr));
#if QT_CONFIG(tooltip)
        pcbBalloonArrow->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Style for balloon leader line ends", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Balloon Leader End", nullptr));
#if QT_CONFIG(tooltip)
        cb_IncludeCutLine->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "If checked, the cut line will be drawn on the Source view.  If unchecked, only the change marks, arrows and symbols will be displayed.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_IncludeCutLine->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Include Cut Line in Section Annotation", nullptr));
#if QT_CONFIG(tooltip)
        cbComplexMarks->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Show or hide marks at direction changes on ComplexSection lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbComplexMarks->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Complex Section Line Marks", nullptr));
#if QT_CONFIG(tooltip)
        pcbDetailMatting->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "This checkbox controls whether or not to display the outline around a detail view.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbDetailMatting->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Detail View Show Matting", nullptr));
#if QT_CONFIG(tooltip)
        cb_ShowSectionLine->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "If checked, the section annotation will be drawn on the Source view.  If unchecked, no section line, arrows or symbol will be shown in the Source view.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_ShowSectionLine->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Show Section Line in Source View", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Detail View Outline Shape", nullptr));
#if QT_CONFIG(tooltip)
        cbPyramidOrtho->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Restrict Filled Triangle line end to vertical or horizontal directions", nullptr));
#endif // QT_CONFIG(tooltip)
        cbPyramidOrtho->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Balloon Orthogonal Triangle", nullptr));
#if QT_CONFIG(tooltip)
        cbPrintCenterMarks->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Show arc centers in printed output", nullptr));
#endif // QT_CONFIG(tooltip)
        cbPrintCenterMarks->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Print Center Marks", nullptr));
#if QT_CONFIG(tooltip)
        cbAutoHoriz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Forces last leader line segment to be horizontal", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutoHoriz->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Leader Line Auto Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        cbShowCenterMarks->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Show arc center marks in views", nullptr));
#endif // QT_CONFIG(tooltip)
        cbShowCenterMarks->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Show Center Marks", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Balloon Shape", nullptr));
        cbCutSurface->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Hide", nullptr));
        cbCutSurface->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Solid Color", nullptr));
        cbCutSurface->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "SVG Hatch", nullptr));
        cbCutSurface->setItemText(3, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "PAT Hatch", nullptr));

#if QT_CONFIG(tooltip)
        cbCutSurface->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Default appearance of cut surface in section view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbMatting->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Outline shape for detail views", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbBalloonShape->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Shape of balloon annotations", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Length of horizontal portion of Balloon leader", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Balloon Leader Kink Length", nullptr));
        label_11->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Broken View Break Type", nullptr));
        pcbBreakType->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "No Break Lines", nullptr));
        pcbBreakType->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "ZigZag Lines", nullptr));
        pcbBreakType->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Simple Lines", nullptr));

        gbLines->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Lines", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Center Line Style", nullptr));
#if QT_CONFIG(tooltip)
        pcbLineStandard->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Standard to be used to draw non-continuous lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbLineGroup->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Line style of detail highlight on base view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Detail Highlight Style", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Section Line Style", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Line Standard", nullptr));
        cbEndCap->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Round", nullptr));
        cbEndCap->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Square", nullptr));
        cbEndCap->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Flat", nullptr));

#if QT_CONFIG(tooltip)
        cbEndCap->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Shape of line end caps.  The default (round) should almost\n"
"always be the right choice.   Flat or square caps are useful \n"
"if you are planning to use a drawing as a 1:1 cutting guide.\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Line group used to set line widths", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Line Width Group", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Line End Cap Shape", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Hidden Line Style", nullptr));
        label_10->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Break Line Style", nullptr));
#if QT_CONFIG(tooltip)
        pcbBreakStyle->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "Style of line to be used in BrokenView.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAnnotationImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawAnnotationImp: public Ui_DlgPrefsTechDrawAnnotationImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWANNOTATION_H
