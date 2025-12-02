/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintFixed.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTFIXED_H
#define UI_TASKFEMCONSTRAINTFIXED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintFixed
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;

    void setupUi(QWidget *TaskFemConstraintFixed)
    {
        if (TaskFemConstraintFixed->objectName().isEmpty())
            TaskFemConstraintFixed->setObjectName("TaskFemConstraintFixed");
        TaskFemConstraintFixed->resize(300, 137);
        TaskFemConstraintFixed->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintFixed);
        verticalLayout->setObjectName("verticalLayout");
        lbl_info = new QLabel(TaskFemConstraintFixed);
        lbl_info->setObjectName("lbl_info");

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName("hLayout1");
        btnAdd = new QToolButton(TaskFemConstraintFixed);
        btnAdd->setObjectName("btnAdd");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintFixed);
        btnRemove->setObjectName("btnRemove");
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintFixed);
        lw_references->setObjectName("lw_references");

        verticalLayout->addWidget(lw_references);


        retranslateUi(TaskFemConstraintFixed);

        QMetaObject::connectSlotsByName(TaskFemConstraintFixed);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintFixed)
    {
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintFixed", "Click Add or Remove and select geometric element(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintFixed", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintFixed", "Remove", nullptr));
        (void)TaskFemConstraintFixed;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintFixed: public Ui_TaskFemConstraintFixed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTFIXED_H
