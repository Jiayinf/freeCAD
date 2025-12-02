/********************************************************************************
** Form generated from reading UI file 'TrajectorySimulate.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAJECTORYSIMULATE_H
#define UI_TRAJECTORYSIMULATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace RobotGui {

class Ui_DlgTrajectorySimulate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ButtonStepStart;
    QPushButton *ButtonStepBack;
    QPushButton *ButtonStepStop;
    QPushButton *ButtonStepRun;
    QPushButton *ButtonStepForward;
    QPushButton *ButtonStepEnd;
    QHBoxLayout *horizontalLayout;
    QSlider *timeSlider;
    QDoubleSpinBox *timeSpinBox;
    QSpinBox *Override;
    QSplitter *splitter;
    QTableWidget *trajectoryTable;
    QTextEdit *Output;

    void setupUi(QWidget *RobotGui__DlgTrajectorySimulate)
    {
        if (RobotGui__DlgTrajectorySimulate->objectName().isEmpty())
            RobotGui__DlgTrajectorySimulate->setObjectName("RobotGui__DlgTrajectorySimulate");
        RobotGui__DlgTrajectorySimulate->resize(274, 466);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotGui__DlgTrajectorySimulate->sizePolicy().hasHeightForWidth());
        RobotGui__DlgTrajectorySimulate->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RobotGui__DlgTrajectorySimulate);
        verticalLayout->setObjectName("verticalLayout");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(1);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName("hboxLayout");
        ButtonStepStart = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepStart->setObjectName("ButtonStepStart");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonStepStart->sizePolicy().hasHeightForWidth());
        ButtonStepStart->setSizePolicy(sizePolicy1);
        ButtonStepStart->setMinimumSize(QSize(30, 20));
        ButtonStepStart->setMaximumSize(QSize(35, 22));
        QFont font;
        font.setBold(true);
        ButtonStepStart->setFont(font);

        hboxLayout->addWidget(ButtonStepStart);

        ButtonStepBack = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepBack->setObjectName("ButtonStepBack");
        sizePolicy1.setHeightForWidth(ButtonStepBack->sizePolicy().hasHeightForWidth());
        ButtonStepBack->setSizePolicy(sizePolicy1);
        ButtonStepBack->setMinimumSize(QSize(30, 20));
        ButtonStepBack->setMaximumSize(QSize(35, 22));
        ButtonStepBack->setFont(font);

        hboxLayout->addWidget(ButtonStepBack);

        ButtonStepStop = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepStop->setObjectName("ButtonStepStop");
        sizePolicy1.setHeightForWidth(ButtonStepStop->sizePolicy().hasHeightForWidth());
        ButtonStepStop->setSizePolicy(sizePolicy1);
        ButtonStepStop->setMinimumSize(QSize(30, 20));
        ButtonStepStop->setMaximumSize(QSize(35, 22));
        ButtonStepStop->setFont(font);
        ButtonStepStop->setText(QString::fromUtf8("||"));

        hboxLayout->addWidget(ButtonStepStop);

        ButtonStepRun = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepRun->setObjectName("ButtonStepRun");
        sizePolicy1.setHeightForWidth(ButtonStepRun->sizePolicy().hasHeightForWidth());
        ButtonStepRun->setSizePolicy(sizePolicy1);
        ButtonStepRun->setMinimumSize(QSize(30, 20));
        ButtonStepRun->setMaximumSize(QSize(35, 22));
        ButtonStepRun->setFont(font);

        hboxLayout->addWidget(ButtonStepRun);

        ButtonStepForward = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepForward->setObjectName("ButtonStepForward");
        sizePolicy1.setHeightForWidth(ButtonStepForward->sizePolicy().hasHeightForWidth());
        ButtonStepForward->setSizePolicy(sizePolicy1);
        ButtonStepForward->setMinimumSize(QSize(30, 20));
        ButtonStepForward->setMaximumSize(QSize(35, 22));
        ButtonStepForward->setFont(font);

        hboxLayout->addWidget(ButtonStepForward);

        ButtonStepEnd = new QPushButton(RobotGui__DlgTrajectorySimulate);
        ButtonStepEnd->setObjectName("ButtonStepEnd");
        sizePolicy1.setHeightForWidth(ButtonStepEnd->sizePolicy().hasHeightForWidth());
        ButtonStepEnd->setSizePolicy(sizePolicy1);
        ButtonStepEnd->setMinimumSize(QSize(30, 20));
        ButtonStepEnd->setMaximumSize(QSize(35, 22));
        ButtonStepEnd->setFont(font);

        hboxLayout->addWidget(ButtonStepEnd);


        verticalLayout->addLayout(hboxLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        timeSlider = new QSlider(RobotGui__DlgTrajectorySimulate);
        timeSlider->setObjectName("timeSlider");
        timeSlider->setMaximum(999);
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(timeSlider);

        timeSpinBox = new QDoubleSpinBox(RobotGui__DlgTrajectorySimulate);
        timeSpinBox->setObjectName("timeSpinBox");

        horizontalLayout->addWidget(timeSpinBox);

        Override = new QSpinBox(RobotGui__DlgTrajectorySimulate);
        Override->setObjectName("Override");
        Override->setSuffix(QString::fromUtf8("%"));
        Override->setMaximum(100);
        Override->setSingleStep(10);
        Override->setValue(100);

        horizontalLayout->addWidget(Override);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(RobotGui__DlgTrajectorySimulate);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        trajectoryTable = new QTableWidget(splitter);
        if (trajectoryTable->columnCount() < 5)
            trajectoryTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        trajectoryTable->setObjectName("trajectoryTable");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(trajectoryTable->sizePolicy().hasHeightForWidth());
        trajectoryTable->setSizePolicy(sizePolicy2);
        splitter->addWidget(trajectoryTable);
        trajectoryTable->horizontalHeader()->setDefaultSectionSize(40);
        trajectoryTable->verticalHeader()->setDefaultSectionSize(22);
        Output = new QTextEdit(splitter);
        Output->setObjectName("Output");
        sizePolicy2.setHeightForWidth(Output->sizePolicy().hasHeightForWidth());
        Output->setSizePolicy(sizePolicy2);
        splitter->addWidget(Output);

        verticalLayout->addWidget(splitter);


        retranslateUi(RobotGui__DlgTrajectorySimulate);

        QMetaObject::connectSlotsByName(RobotGui__DlgTrajectorySimulate);
    } // setupUi

    void retranslateUi(QWidget *RobotGui__DlgTrajectorySimulate)
    {
        RobotGui__DlgTrajectorySimulate->setWindowTitle(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "Simulation", nullptr));
        ButtonStepStart->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "|<", nullptr));
        ButtonStepBack->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "<", nullptr));
        ButtonStepRun->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "|>", nullptr));
        ButtonStepForward->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", ">", nullptr));
        ButtonStepEnd->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", ">|", nullptr));
        QTableWidgetItem *___qtablewidgetitem = trajectoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = trajectoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = trajectoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = trajectoryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = trajectoryTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RobotGui::DlgTrajectorySimulate", "A", nullptr));
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class DlgTrajectorySimulate: public Ui_DlgTrajectorySimulate {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TRAJECTORYSIMULATE_H
