/********************************************************************************
** Form generated from reading UI file 'TaskLineDecor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLINEDECOR_H
#define UI_TASKLINEDECOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskLineDecor
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    Gui::ColorButton *cc_Color;
    QLabel *label_15;
    QLabel *label_10;
    QComboBox *cb_Visible;
    QLabel *label_14;
    QLabel *label_4;
    QComboBox *cb_Style;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    Gui::QuantitySpinBox *dsb_Weight;
    QLabel *label;
    QLineEdit *le_Lines;
    QLineEdit *le_View;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__TaskLineDecor)
    {
        if (TechDrawGui__TaskLineDecor->objectName().isEmpty())
            TechDrawGui__TaskLineDecor->setObjectName("TechDrawGui__TaskLineDecor");
        TechDrawGui__TaskLineDecor->resize(355, 311);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskLineDecor->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskLineDecor->setSizePolicy(sizePolicy);
        TechDrawGui__TaskLineDecor->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskLineDecor);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        cc_Color = new Gui::ColorButton(TechDrawGui__TaskLineDecor);
        cc_Color->setObjectName("cc_Color");
        cc_Color->setColor(QColor(0, 0, 0));

        gridLayout->addWidget(cc_Color, 5, 2, 1, 1);

        label_15 = new QLabel(TechDrawGui__TaskLineDecor);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 6, 0, 1, 1);

        label_10 = new QLabel(TechDrawGui__TaskLineDecor);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        cb_Visible = new QComboBox(TechDrawGui__TaskLineDecor);
        cb_Visible->addItem(QString());
        cb_Visible->addItem(QString());
        cb_Visible->setObjectName("cb_Visible");
        cb_Visible->setMaxVisibleItems(2);
        cb_Visible->setMaxCount(2);
        cb_Visible->setMinimumContentsLength(2);

        gridLayout->addWidget(cb_Visible, 7, 2, 1, 1);

        label_14 = new QLabel(TechDrawGui__TaskLineDecor);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        label_4 = new QLabel(TechDrawGui__TaskLineDecor);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        cb_Style = new QComboBox(TechDrawGui__TaskLineDecor);
        cb_Style->setObjectName("cb_Style");
        cb_Style->setIconSize(QSize(32, 32));

        gridLayout->addWidget(cb_Style, 4, 2, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskLineDecor);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 1, 1, 1);

        line = new QFrame(TechDrawGui__TaskLineDecor);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);

        dsb_Weight = new Gui::QuantitySpinBox(TechDrawGui__TaskLineDecor);
        dsb_Weight->setObjectName("dsb_Weight");
        dsb_Weight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_Weight->setValue(0.500000000000000);

        gridLayout->addWidget(dsb_Weight, 6, 2, 1, 1);

        label = new QLabel(TechDrawGui__TaskLineDecor);
        label->setObjectName("label");

        gridLayout->addWidget(label, 7, 0, 1, 1);

        le_Lines = new QLineEdit(TechDrawGui__TaskLineDecor);
        le_Lines->setObjectName("le_Lines");
        le_Lines->setEnabled(false);

        gridLayout->addWidget(le_Lines, 1, 2, 1, 1);

        le_View = new QLineEdit(TechDrawGui__TaskLineDecor);
        le_View->setObjectName("le_View");
        le_View->setEnabled(false);
        le_View->setMouseTracking(false);
        le_View->setFocusPolicy(Qt::NoFocus);
        le_View->setAcceptDrops(false);

        gridLayout->addWidget(le_View, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__TaskLineDecor);

        cb_Visible->setCurrentIndex(1);
        cb_Style->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskLineDecor);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskLineDecor)
    {
        TechDrawGui__TaskLineDecor->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Line Decoration", nullptr));
        label_15->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Weight", nullptr));
        label_10->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Lines", nullptr));
        cb_Visible->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskLineDecor", "False", nullptr));
        cb_Visible->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskLineDecor", "True", nullptr));

        label_14->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Color", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "View", nullptr));
#if QT_CONFIG(tooltip)
        cb_Style->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "The use of the Qt line style is being phased out.  Please use a standard line style instead.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Style", nullptr));
#if QT_CONFIG(tooltip)
        dsb_Weight->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Thickness of pattern lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::TaskLineDecor", "Visible", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskLineDecor: public Ui_TaskLineDecor {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKLINEDECOR_H
