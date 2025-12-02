/********************************************************************************
** Form generated from reading UI file 'TaskLinkDim.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLINKDIM_H
#define UI_TASKLINKDIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskLinkDim
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLinkThis;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *lblFeature;
    QLineEdit *leFeature1;
    QLabel *label;
    QLineEdit *leGeometry1;
    QLabel *lblGeometry;
    QLineEdit *leFeature2;
    QLabel *label_2;
    QLineEdit *leGeometry2;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblToThese;
    QHBoxLayout *horizontalLayout_2;
    Gui::ActionSelector *selector;

    void setupUi(QWidget *TechDrawGui__TaskLinkDim)
    {
        if (TechDrawGui__TaskLinkDim->objectName().isEmpty())
            TechDrawGui__TaskLinkDim->setObjectName("TechDrawGui__TaskLinkDim");
        TechDrawGui__TaskLinkDim->resize(400, 472);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskLinkDim->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskLinkDim->setSizePolicy(sizePolicy);
        TechDrawGui__TaskLinkDim->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__TaskLinkDim);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(TechDrawGui__TaskLinkDim);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblLinkThis = new QLabel(frame);
        lblLinkThis->setObjectName("lblLinkThis");

        horizontalLayout_3->addWidget(lblLinkThis);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        lblFeature = new QLabel(frame);
        lblFeature->setObjectName("lblFeature");

        gridLayout->addWidget(lblFeature, 0, 0, 1, 1);

        leFeature1 = new QLineEdit(frame);
        leFeature1->setObjectName("leFeature1");
        leFeature1->setFocusPolicy(Qt::NoFocus);
        leFeature1->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        leFeature1->setReadOnly(true);

        gridLayout->addWidget(leFeature1, 0, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        leGeometry1 = new QLineEdit(frame);
        leGeometry1->setObjectName("leGeometry1");
        leGeometry1->setFocusPolicy(Qt::NoFocus);
        leGeometry1->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        leGeometry1->setReadOnly(true);

        gridLayout->addWidget(leGeometry1, 1, 1, 1, 1);

        lblGeometry = new QLabel(frame);
        lblGeometry->setObjectName("lblGeometry");

        gridLayout->addWidget(lblGeometry, 2, 0, 1, 1);

        leFeature2 = new QLineEdit(frame);
        leFeature2->setObjectName("leFeature2");
        leFeature2->setFocusPolicy(Qt::NoFocus);
        leFeature2->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        leFeature2->setReadOnly(true);

        gridLayout->addWidget(leFeature2, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        leGeometry2 = new QLineEdit(frame);
        leGeometry2->setObjectName("leGeometry2");
        leGeometry2->setFocusPolicy(Qt::NoFocus);
        leGeometry2->setStyleSheet(QString::fromUtf8("color: rgb(120, 120, 120);"));
        leGeometry2->setReadOnly(true);

        gridLayout->addWidget(leGeometry2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        lblToThese = new QLabel(frame);
        lblToThese->setObjectName("lblToThese");

        verticalLayout_4->addWidget(lblToThese);


        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        selector = new Gui::ActionSelector(frame);
        selector->setObjectName("selector");

        horizontalLayout_2->addWidget(selector);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(TechDrawGui__TaskLinkDim);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskLinkDim);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskLinkDim)
    {
        TechDrawGui__TaskLinkDim->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Link Dimension", nullptr));
        lblLinkThis->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Link This 3D Geometry", nullptr));
        lblFeature->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Feature1:", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Geometry1:", nullptr));
        lblGeometry->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Feature2:", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "Geometry2:", nullptr));
        lblToThese->setText(QCoreApplication::translate("TechDrawGui::TaskLinkDim", "To These Dimensions", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskLinkDim: public Ui_TaskLinkDim {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKLINKDIM_H
