/********************************************************************************
** Form generated from reading UI file 'TaskSurfaceFinishSymbols.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSURFACEFINISHSYMBOLS_H
#define UI_TASKSURFACEFINISHSYMBOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace TechDrawGui {

class Ui_TaskSurfaceFinishSymbols
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pbIcon05;
    QPushButton *pbIcon04;
    QPushButton *pbIcon06;
    QPushButton *pbIcon03;
    QPushButton *pbIcon02;
    QPushButton *pbIcon01;
    QGridLayout *gridLayout_2;
    QLabel *lbAngle;
    QLineEdit *leAngle;
    QRadioButton *rbISO;
    QRadioButton *rbASME;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *TechDrawGui__TaskSurfaceFinishSymbols)
    {
        if (TechDrawGui__TaskSurfaceFinishSymbols->objectName().isEmpty())
            TechDrawGui__TaskSurfaceFinishSymbols->setObjectName("TechDrawGui__TaskSurfaceFinishSymbols");
        TechDrawGui__TaskSurfaceFinishSymbols->resize(429, 534);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskSurfaceFinishSymbols->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskSurfaceFinishSymbols->setSizePolicy(sizePolicy);
        TechDrawGui__TaskSurfaceFinishSymbols->setMinimumSize(QSize(250, 534));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskSurfaceFinishSymbols);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pbIcon05 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon05->setObjectName("pbIcon05");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbIcon05->sizePolicy().hasHeightForWidth());
        pbIcon05->setSizePolicy(sizePolicy1);
        pbIcon05->setMinimumSize(QSize(0, 70));
        pbIcon05->setMaximumSize(QSize(16777215, 70));
        pbIcon05->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon05, 1, 1, 1, 1);

        pbIcon04 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon04->setObjectName("pbIcon04");
        sizePolicy1.setHeightForWidth(pbIcon04->sizePolicy().hasHeightForWidth());
        pbIcon04->setSizePolicy(sizePolicy1);
        pbIcon04->setMinimumSize(QSize(0, 70));
        pbIcon04->setMaximumSize(QSize(16777215, 70));
        pbIcon04->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon04, 1, 0, 1, 1);

        pbIcon06 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon06->setObjectName("pbIcon06");
        sizePolicy1.setHeightForWidth(pbIcon06->sizePolicy().hasHeightForWidth());
        pbIcon06->setSizePolicy(sizePolicy1);
        pbIcon06->setMinimumSize(QSize(0, 70));
        pbIcon06->setMaximumSize(QSize(16777215, 70));
        pbIcon06->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon06, 1, 2, 1, 1);

        pbIcon03 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon03->setObjectName("pbIcon03");
        sizePolicy1.setHeightForWidth(pbIcon03->sizePolicy().hasHeightForWidth());
        pbIcon03->setSizePolicy(sizePolicy1);
        pbIcon03->setMinimumSize(QSize(0, 70));
        pbIcon03->setMaximumSize(QSize(16777215, 70));
        pbIcon03->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon03, 0, 2, 1, 1);

        pbIcon02 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon02->setObjectName("pbIcon02");
        sizePolicy1.setHeightForWidth(pbIcon02->sizePolicy().hasHeightForWidth());
        pbIcon02->setSizePolicy(sizePolicy1);
        pbIcon02->setMinimumSize(QSize(0, 70));
        pbIcon02->setMaximumSize(QSize(16777215, 70));
        pbIcon02->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon02, 0, 1, 1, 1);

        pbIcon01 = new QPushButton(TechDrawGui__TaskSurfaceFinishSymbols);
        pbIcon01->setObjectName("pbIcon01");
        sizePolicy1.setHeightForWidth(pbIcon01->sizePolicy().hasHeightForWidth());
        pbIcon01->setSizePolicy(sizePolicy1);
        pbIcon01->setMinimumSize(QSize(0, 70));
        pbIcon01->setMaximumSize(QSize(16777215, 70));
        pbIcon01->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pbIcon01, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        lbAngle = new QLabel(TechDrawGui__TaskSurfaceFinishSymbols);
        lbAngle->setObjectName("lbAngle");

        gridLayout_2->addWidget(lbAngle, 0, 0, 1, 1);

        leAngle = new QLineEdit(TechDrawGui__TaskSurfaceFinishSymbols);
        leAngle->setObjectName("leAngle");
        leAngle->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(leAngle, 0, 1, 1, 1);

        rbISO = new QRadioButton(TechDrawGui__TaskSurfaceFinishSymbols);
        rbISO->setObjectName("rbISO");
        rbISO->setChecked(true);

        gridLayout_2->addWidget(rbISO, 1, 0, 1, 1);

        rbASME = new QRadioButton(TechDrawGui__TaskSurfaceFinishSymbols);
        rbASME->setObjectName("rbASME");

        gridLayout_2->addWidget(rbASME, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        graphicsView = new QGraphicsView(TechDrawGui__TaskSurfaceFinishSymbols);
        graphicsView->setObjectName("graphicsView");
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(0, 300));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        graphicsView->setAcceptDrops(false);
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setLineWidth(0);
        graphicsView->setSceneRect(QRectF(0, 0, 3, 0));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(TechDrawGui__TaskSurfaceFinishSymbols);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskSurfaceFinishSymbols);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskSurfaceFinishSymbols)
    {
        TechDrawGui__TaskSurfaceFinishSymbols->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Surface Finish Symbols", nullptr));
#if QT_CONFIG(tooltip)
        pbIcon05->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Material removal prohibited, whole part", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon05->setText(QString());
#if QT_CONFIG(tooltip)
        pbIcon04->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Any method allowed, whole part", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon04->setText(QString());
#if QT_CONFIG(tooltip)
        pbIcon06->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Material removal required, whole part", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon06->setText(QString());
#if QT_CONFIG(tooltip)
        pbIcon03->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Material removal required", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon03->setText(QString());
#if QT_CONFIG(tooltip)
        pbIcon02->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Material removal prohibited", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon02->setText(QString());
#if QT_CONFIG(tooltip)
        pbIcon01->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Any method allowed", nullptr));
#endif // QT_CONFIG(tooltip)
        pbIcon01->setText(QString());
        lbAngle->setText(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Symbol angle:", nullptr));
#if QT_CONFIG(tooltip)
        leAngle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Rotation angle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rbISO->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Use ISO standard", nullptr));
#endif // QT_CONFIG(tooltip)
        rbISO->setText(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "ISO", nullptr));
#if QT_CONFIG(tooltip)
        rbASME->setToolTip(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "Use ASME standard", nullptr));
#endif // QT_CONFIG(tooltip)
        rbASME->setText(QCoreApplication::translate("TechDrawGui::TaskSurfaceFinishSymbols", "ASME", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskSurfaceFinishSymbols: public Ui_TaskSurfaceFinishSymbols {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKSURFACEFINISHSYMBOLS_H
