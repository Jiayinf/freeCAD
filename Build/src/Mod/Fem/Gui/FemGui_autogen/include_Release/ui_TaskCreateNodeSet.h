/********************************************************************************
** Form generated from reading UI file 'TaskCreateNodeSet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCREATENODESET_H
#define UI_TASKCREATENODESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskCreateNodeSet
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_NodesNbr;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_Poly;
    QToolButton *toolButton_Box;
    QToolButton *toolButton_Pick;
    QCheckBox *checkBox_Add;
    QGroupBox *groupBox_AngleSearch;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_AngleSearch;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxSizing;

    void setupUi(QWidget *TaskCreateNodeSet)
    {
        if (TaskCreateNodeSet->objectName().isEmpty())
            TaskCreateNodeSet->setObjectName("TaskCreateNodeSet");
        TaskCreateNodeSet->resize(179, 180);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskCreateNodeSet->sizePolicy().hasHeightForWidth());
        TaskCreateNodeSet->setSizePolicy(sizePolicy);
        TaskCreateNodeSet->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskCreateNodeSet);
        verticalLayout->setObjectName("verticalLayout");
        comboBox = new QComboBox(TaskCreateNodeSet);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_NodesNbr = new QLabel(TaskCreateNodeSet);
        label_NodesNbr->setObjectName("label_NodesNbr");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_NodesNbr->setFont(font);

        horizontalLayout_3->addWidget(label_NodesNbr);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButton_Poly = new QToolButton(TaskCreateNodeSet);
        toolButton_Poly->setObjectName("toolButton_Poly");

        horizontalLayout->addWidget(toolButton_Poly);

        toolButton_Box = new QToolButton(TaskCreateNodeSet);
        toolButton_Box->setObjectName("toolButton_Box");
        toolButton_Box->setEnabled(false);

        horizontalLayout->addWidget(toolButton_Box);

        toolButton_Pick = new QToolButton(TaskCreateNodeSet);
        toolButton_Pick->setObjectName("toolButton_Pick");
        toolButton_Pick->setEnabled(false);

        horizontalLayout->addWidget(toolButton_Pick);

        checkBox_Add = new QCheckBox(TaskCreateNodeSet);
        checkBox_Add->setObjectName("checkBox_Add");

        horizontalLayout->addWidget(checkBox_Add);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_AngleSearch = new QGroupBox(TaskCreateNodeSet);
        groupBox_AngleSearch->setObjectName("groupBox_AngleSearch");
        verticalLayout_2 = new QVBoxLayout(groupBox_AngleSearch);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkBox_AngleSearch = new QCheckBox(groupBox_AngleSearch);
        checkBox_AngleSearch->setObjectName("checkBox_AngleSearch");

        verticalLayout_2->addWidget(checkBox_AngleSearch);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_AngleSearch);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxSizing = new QDoubleSpinBox(groupBox_AngleSearch);
        doubleSpinBoxSizing->setObjectName("doubleSpinBoxSizing");
        doubleSpinBoxSizing->setDecimals(0);
        doubleSpinBoxSizing->setMinimum(0.000000000000000);
        doubleSpinBoxSizing->setMaximum(1800.000000000000000);
        doubleSpinBoxSizing->setSingleStep(10.000000000000000);
        doubleSpinBoxSizing->setValue(60.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxSizing);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_AngleSearch);


        retranslateUi(TaskCreateNodeSet);

        QMetaObject::connectSlotsByName(TaskCreateNodeSet);
    } // setupUi

    void retranslateUi(QWidget *TaskCreateNodeSet)
    {
        comboBox->setItemText(0, QCoreApplication::translate("TaskCreateNodeSet", "Volume", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TaskCreateNodeSet", "Surface", nullptr));

        label_NodesNbr->setText(QCoreApplication::translate("TaskCreateNodeSet", "Nodes: 0", nullptr));
        toolButton_Poly->setText(QCoreApplication::translate("TaskCreateNodeSet", "Poly", nullptr));
        toolButton_Box->setText(QCoreApplication::translate("TaskCreateNodeSet", "Box", nullptr));
        toolButton_Pick->setText(QCoreApplication::translate("TaskCreateNodeSet", "Pick", nullptr));
        checkBox_Add->setText(QCoreApplication::translate("TaskCreateNodeSet", "Add", nullptr));
        groupBox_AngleSearch->setTitle(QCoreApplication::translate("TaskCreateNodeSet", "Angle-search", nullptr));
        checkBox_AngleSearch->setText(QCoreApplication::translate("TaskCreateNodeSet", "Collect adjacent nodes", nullptr));
        label_2->setText(QCoreApplication::translate("TaskCreateNodeSet", "Stop angle:", nullptr));
        doubleSpinBoxSizing->setSuffix(QString());
        (void)TaskCreateNodeSet;
    } // retranslateUi

};

namespace Ui {
    class TaskCreateNodeSet: public Ui_TaskCreateNodeSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKCREATENODESET_H
