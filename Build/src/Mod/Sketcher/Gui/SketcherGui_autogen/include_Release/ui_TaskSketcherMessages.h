/********************************************************************************
** Form generated from reading UI file 'TaskSketcherMessages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERMESSAGES_H
#define UI_TASKSKETCHERMESSAGES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

QT_BEGIN_NAMESPACE

class Ui_TaskSketcherMessages
{
public:
    QHBoxLayout *horizontalLayout;
    Gui::StatefulLabel *labelConstrainStatus;
    Gui::UrlLabel *labelConstrainStatusLink;
    QToolButton *manualUpdate;

    void setupUi(QWidget *TaskSketcherMessages)
    {
        if (TaskSketcherMessages->objectName().isEmpty())
            TaskSketcherMessages->setObjectName("TaskSketcherMessages");
        TaskSketcherMessages->resize(253, 48);
        TaskSketcherMessages->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(TaskSketcherMessages);
        horizontalLayout->setObjectName("horizontalLayout");
        labelConstrainStatus = new Gui::StatefulLabel(TaskSketcherMessages);
        labelConstrainStatus->setObjectName("labelConstrainStatus");

        horizontalLayout->addWidget(labelConstrainStatus);

        labelConstrainStatusLink = new Gui::UrlLabel(TaskSketcherMessages);
        labelConstrainStatusLink->setObjectName("labelConstrainStatusLink");

        horizontalLayout->addWidget(labelConstrainStatusLink);

        manualUpdate = new QToolButton(TaskSketcherMessages);
        manualUpdate->setObjectName("manualUpdate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(manualUpdate->sizePolicy().hasHeightForWidth());
        manualUpdate->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/view-refresh.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        manualUpdate->setIcon(icon);
        manualUpdate->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(manualUpdate);


        retranslateUi(TaskSketcherMessages);

        QMetaObject::connectSlotsByName(TaskSketcherMessages);
    } // setupUi

    void retranslateUi(QWidget *TaskSketcherMessages)
    {
        labelConstrainStatus->setText(QCoreApplication::translate("TaskSketcherMessages", "DOF", nullptr));
        labelConstrainStatusLink->setText(QCoreApplication::translate("TaskSketcherMessages", "Link", nullptr));
#if QT_CONFIG(tooltip)
        manualUpdate->setToolTip(QCoreApplication::translate("TaskSketcherMessages", "Forces recomputation of active document", nullptr));
#endif // QT_CONFIG(tooltip)
        manualUpdate->setText(QString());
        (void)TaskSketcherMessages;
    } // retranslateUi

};

namespace Ui {
    class TaskSketcherMessages: public Ui_TaskSketcherMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSKETCHERMESSAGES_H
