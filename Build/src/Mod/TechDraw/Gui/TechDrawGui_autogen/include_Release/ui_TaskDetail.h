/********************************************************************************
** Form generated from reading UI file 'TaskDetail.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDETAIL_H
#define UI_TASKDETAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskDetail
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *leBaseView;
    QLabel *label;
    QLineEdit *leDetailView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDragger;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    Gui::QuantitySpinBox *qsbX;
    QLabel *label_3;
    Gui::QuantitySpinBox *qsbY;
    QLabel *label_6;
    Gui::QuantitySpinBox *qsbRadius;
    QLabel *label_9;
    QComboBox *cbScaleType;
    QLabel *label_8;
    Gui::QuantitySpinBox *qsbScale;
    QLabel *label_7;
    QLineEdit *leReference;

    void setupUi(QWidget *TechDrawGui__TaskDetail)
    {
        if (TechDrawGui__TaskDetail->objectName().isEmpty())
            TechDrawGui__TaskDetail->setObjectName("TechDrawGui__TaskDetail");
        TechDrawGui__TaskDetail->resize(300, 264);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_DetailView.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TechDrawGui__TaskDetail->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskDetail);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(TechDrawGui__TaskDetail);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        leBaseView = new QLineEdit(TechDrawGui__TaskDetail);
        leBaseView->setObjectName("leBaseView");
        leBaseView->setEnabled(false);
        leBaseView->setMouseTracking(false);
        leBaseView->setFocusPolicy(Qt::NoFocus);
        leBaseView->setAcceptDrops(false);

        gridLayout->addWidget(leBaseView, 0, 1, 1, 1);

        label = new QLabel(TechDrawGui__TaskDetail);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        leDetailView = new QLineEdit(TechDrawGui__TaskDetail);
        leDetailView->setObjectName("leDetailView");
        leDetailView->setEnabled(false);

        gridLayout->addWidget(leDetailView, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbDragger = new QPushButton(TechDrawGui__TaskDetail);
        pbDragger->setObjectName("pbDragger");

        horizontalLayout->addWidget(pbDragger);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TechDrawGui__TaskDetail);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(TechDrawGui__TaskDetail);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        qsbX = new Gui::QuantitySpinBox(TechDrawGui__TaskDetail);
        qsbX->setObjectName("qsbX");
        qsbX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbX->setKeyboardTracking(false);
        qsbX->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbX->setValue(0.000000000000000);

        gridLayout_2->addWidget(qsbX, 0, 2, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskDetail);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        qsbY = new Gui::QuantitySpinBox(TechDrawGui__TaskDetail);
        qsbY->setObjectName("qsbY");
        qsbY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbY->setKeyboardTracking(false);
        qsbY->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(qsbY, 1, 2, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskDetail);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        qsbRadius = new Gui::QuantitySpinBox(TechDrawGui__TaskDetail);
        qsbRadius->setObjectName("qsbRadius");
        qsbRadius->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbRadius->setKeyboardTracking(false);
        qsbRadius->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbRadius->setValue(10.000000000000000);

        gridLayout_2->addWidget(qsbRadius, 2, 2, 1, 1);

        label_9 = new QLabel(TechDrawGui__TaskDetail);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        cbScaleType = new QComboBox(TechDrawGui__TaskDetail);
        cbScaleType->addItem(QString());
        cbScaleType->addItem(QString());
        cbScaleType->addItem(QString());
        cbScaleType->setObjectName("cbScaleType");

        gridLayout_2->addWidget(cbScaleType, 3, 2, 1, 1);

        label_8 = new QLabel(TechDrawGui__TaskDetail);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        qsbScale = new Gui::QuantitySpinBox(TechDrawGui__TaskDetail);
        qsbScale->setObjectName("qsbScale");
        qsbScale->setEnabled(false);
        qsbScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbScale->setKeyboardTracking(false);
        qsbScale->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbScale->setSingleStep(1.000000000000000);
        qsbScale->setValue(1.000000000000000);

        gridLayout_2->addWidget(qsbScale, 4, 2, 1, 1);

        label_7 = new QLabel(TechDrawGui__TaskDetail);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        leReference = new QLineEdit(TechDrawGui__TaskDetail);
        leReference->setObjectName("leReference");
        leReference->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(leReference, 5, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);

        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(TechDrawGui__TaskDetail);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskDetail);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskDetail)
    {
        TechDrawGui__TaskDetail->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskDetail", "Detail Anchor", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Base View", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Detail View", nullptr));
#if QT_CONFIG(tooltip)
        pbDragger->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "Click to drag detail highlight to new position", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDragger->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Drag Highlight", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "X", nullptr));
#if QT_CONFIG(tooltip)
        qsbX->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "x position of detail highlight within view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Y", nullptr));
#if QT_CONFIG(tooltip)
        qsbY->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "y position of detail highlight within view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Radius", nullptr));
#if QT_CONFIG(tooltip)
        qsbRadius->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "size of detail view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Scale Type", nullptr));
        cbScaleType->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskDetail", "Page", nullptr));
        cbScaleType->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskDetail", "Automatic", nullptr));
        cbScaleType->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskDetail", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        cbScaleType->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "Page: scale factor of page is used\n"
"Automatic: if the detail view is larger than the page,\n"
"                   it will be scaled down to fit into the page\n"
"Custom: custom scale factor is used", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Scale Factor", nullptr));
#if QT_CONFIG(tooltip)
        qsbScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "scale factor for detail view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskDetail", "Reference", nullptr));
#if QT_CONFIG(tooltip)
        leReference->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDetail", "reference label", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskDetail: public Ui_TaskDetail {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKDETAIL_H
