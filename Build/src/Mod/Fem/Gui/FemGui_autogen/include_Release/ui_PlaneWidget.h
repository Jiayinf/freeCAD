/********************************************************************************
** Form generated from reading UI file 'PlaneWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANEWIDGET_H
#define UI_PLANEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_PlaneWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    Gui::PrefQuantitySpinBox *originX;
    QLabel *label_8;
    Gui::PrefQuantitySpinBox *originY;
    QLabel *label_9;
    Gui::PrefQuantitySpinBox *originZ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::PrefQuantitySpinBox *normalX;
    QLabel *label_2;
    Gui::PrefQuantitySpinBox *normalY;
    QLabel *label_3;
    Gui::PrefQuantitySpinBox *normalZ;

    void setupUi(QWidget *PlaneWidget)
    {
        if (PlaneWidget->objectName().isEmpty())
            PlaneWidget->setObjectName("PlaneWidget");
        PlaneWidget->resize(224, 318);
        PlaneWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PlaneWidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(PlaneWidget);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        originX = new Gui::PrefQuantitySpinBox(groupBox);
        originX->setObjectName("originX");
        originX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        originX->setKeyboardTracking(false);

        gridLayout_2->addWidget(originX, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        originY = new Gui::PrefQuantitySpinBox(groupBox);
        originY->setObjectName("originY");
        originY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        originY->setKeyboardTracking(false);

        gridLayout_2->addWidget(originY, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        originZ = new Gui::PrefQuantitySpinBox(groupBox);
        originZ->setObjectName("originZ");
        originZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        originZ->setKeyboardTracking(false);

        gridLayout_2->addWidget(originZ, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PlaneWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        normalX = new Gui::PrefQuantitySpinBox(groupBox_2);
        normalX->setObjectName("normalX");
        normalX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        normalX->setKeyboardTracking(false);

        gridLayout_3->addWidget(normalX, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        normalY = new Gui::PrefQuantitySpinBox(groupBox_2);
        normalY->setObjectName("normalY");
        normalY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        normalY->setKeyboardTracking(false);

        gridLayout_3->addWidget(normalY, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        normalZ = new Gui::PrefQuantitySpinBox(groupBox_2);
        normalZ->setObjectName("normalZ");
        normalZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        normalZ->setKeyboardTracking(false);

        gridLayout_3->addWidget(normalZ, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(PlaneWidget);

        QMetaObject::connectSlotsByName(PlaneWidget);
    } // setupUi

    void retranslateUi(QWidget *PlaneWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("PlaneWidget", "Origin", nullptr));
        label_7->setText(QCoreApplication::translate("PlaneWidget", "x", nullptr));
        label_8->setText(QCoreApplication::translate("PlaneWidget", "y", nullptr));
        label_9->setText(QCoreApplication::translate("PlaneWidget", "z", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PlaneWidget", "Normal", nullptr));
        label->setText(QCoreApplication::translate("PlaneWidget", "x", nullptr));
        label_2->setText(QCoreApplication::translate("PlaneWidget", "y", nullptr));
        label_3->setText(QCoreApplication::translate("PlaneWidget", "z", nullptr));
        (void)PlaneWidget;
    } // retranslateUi

};

namespace Ui {
    class PlaneWidget: public Ui_PlaneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANEWIDGET_H
