/********************************************************************************
** Form generated from reading UI file 'FitBSplineSurface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITBSPLINESURFACE_H
#define UI_FITBSPLINESURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace ReenGui {

class Ui_FitBSplineSurface
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxU;
    QGridLayout *gridLayout;
    QLabel *label;
    Gui::PrefSpinBox *degreeU;
    QLabel *label_2;
    Gui::PrefSpinBox *polesU;
    QGroupBox *groupBoxV;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    Gui::PrefSpinBox *degreeV;
    QLabel *label_4;
    Gui::PrefSpinBox *polesV;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    Gui::PrefSpinBox *iterations;
    QLabel *label_6;
    Gui::PrefDoubleSpinBox *sizeFactor;
    Gui::PrefCheckBox *uvdir;
    QPushButton *makePlacement;
    QGroupBox *groupBoxSmooth;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    Gui::PrefDoubleSpinBox *totalWeight;
    QLabel *label_8;
    Gui::PrefDoubleSpinBox *gradient;
    QLabel *label_9;
    Gui::PrefDoubleSpinBox *bending;
    QLabel *label_10;
    Gui::PrefDoubleSpinBox *curvature;

    void setupUi(QWidget *ReenGui__FitBSplineSurface)
    {
        if (ReenGui__FitBSplineSurface->objectName().isEmpty())
            ReenGui__FitBSplineSurface->setObjectName("ReenGui__FitBSplineSurface");
        ReenGui__FitBSplineSurface->resize(360, 342);
        gridLayout_5 = new QGridLayout(ReenGui__FitBSplineSurface);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxU = new QGroupBox(ReenGui__FitBSplineSurface);
        groupBoxU->setObjectName("groupBoxU");
        gridLayout = new QGridLayout(groupBoxU);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBoxU);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        degreeU = new Gui::PrefSpinBox(groupBoxU);
        degreeU->setObjectName("degreeU");
        degreeU->setMinimum(1);
        degreeU->setMaximum(11);
        degreeU->setValue(2);
        degreeU->setProperty("prefEntry", QVariant(QByteArray("UDegree")));
        degreeU->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout->addWidget(degreeU, 0, 1, 1, 1);

        label_2 = new QLabel(groupBoxU);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        polesU = new Gui::PrefSpinBox(groupBoxU);
        polesU->setObjectName("polesU");
        polesU->setMinimum(2);
        polesU->setMaximum(100);
        polesU->setValue(6);
        polesU->setProperty("prefEntry", QVariant(QByteArray("NbUPoles")));
        polesU->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout->addWidget(polesU, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBoxU, 0, 0, 1, 1);

        groupBoxV = new QGroupBox(ReenGui__FitBSplineSurface);
        groupBoxV->setObjectName("groupBoxV");
        gridLayout_2 = new QGridLayout(groupBoxV);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(groupBoxV);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        degreeV = new Gui::PrefSpinBox(groupBoxV);
        degreeV->setObjectName("degreeV");
        degreeV->setMinimum(1);
        degreeV->setMaximum(11);
        degreeV->setValue(2);
        degreeV->setProperty("prefEntry", QVariant(QByteArray("VDegree")));
        degreeV->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_2->addWidget(degreeV, 0, 1, 1, 1);

        label_4 = new QLabel(groupBoxV);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        polesV = new Gui::PrefSpinBox(groupBoxV);
        polesV->setObjectName("polesV");
        polesV->setMinimum(2);
        polesV->setMaximum(100);
        polesV->setValue(6);
        polesV->setProperty("prefEntry", QVariant(QByteArray("NbVPoles")));
        polesV->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_2->addWidget(polesV, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBoxV, 0, 1, 1, 1);

        groupBox = new QGroupBox(ReenGui__FitBSplineSurface);
        groupBox->setObjectName("groupBox");
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        iterations = new Gui::PrefSpinBox(groupBox);
        iterations->setObjectName("iterations");
        iterations->setMinimum(-1);
        iterations->setMaximum(100);
        iterations->setValue(5);
        iterations->setProperty("prefEntry", QVariant(QByteArray("Iterations")));
        iterations->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_4->addWidget(iterations, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        sizeFactor = new Gui::PrefDoubleSpinBox(groupBox);
        sizeFactor->setObjectName("sizeFactor");
        sizeFactor->setMinimum(1.000000000000000);
        sizeFactor->setMaximum(2.000000000000000);
        sizeFactor->setSingleStep(0.010000000000000);
        sizeFactor->setProperty("prefEntry", QVariant(QByteArray("Size factor")));
        sizeFactor->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_4->addWidget(sizeFactor, 1, 1, 1, 1);

        uvdir = new Gui::PrefCheckBox(groupBox);
        uvdir->setObjectName("uvdir");
        uvdir->setProperty("prefEntry", QVariant(QByteArray("User-Defined UVDir")));
        uvdir->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_4->addWidget(uvdir, 2, 0, 1, 1);

        makePlacement = new QPushButton(groupBox);
        makePlacement->setObjectName("makePlacement");

        gridLayout_4->addWidget(makePlacement, 2, 1, 1, 1);

        groupBoxSmooth = new QGroupBox(groupBox);
        groupBoxSmooth->setObjectName("groupBoxSmooth");
        groupBoxSmooth->setCheckable(true);
        gridLayout_3 = new QGridLayout(groupBoxSmooth);
        gridLayout_3->setObjectName("gridLayout_3");
        label_7 = new QLabel(groupBoxSmooth);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        totalWeight = new Gui::PrefDoubleSpinBox(groupBoxSmooth);
        totalWeight->setObjectName("totalWeight");
        totalWeight->setMaximum(1000.000000000000000);
        totalWeight->setSingleStep(0.100000000000000);
        totalWeight->setValue(0.100000000000000);
        totalWeight->setProperty("prefEntry", QVariant(QByteArray("Total Weight")));
        totalWeight->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_3->addWidget(totalWeight, 0, 1, 1, 1);

        label_8 = new QLabel(groupBoxSmooth);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        gradient = new Gui::PrefDoubleSpinBox(groupBoxSmooth);
        gradient->setObjectName("gradient");
        gradient->setMaximum(1.000000000000000);
        gradient->setSingleStep(0.100000000000000);
        gradient->setValue(1.000000000000000);
        gradient->setProperty("prefEntry", QVariant(QByteArray("Length of gradient")));
        gradient->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_3->addWidget(gradient, 1, 1, 1, 1);

        label_9 = new QLabel(groupBoxSmooth);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        bending = new Gui::PrefDoubleSpinBox(groupBoxSmooth);
        bending->setObjectName("bending");
        bending->setMaximum(1.000000000000000);
        bending->setSingleStep(0.100000000000000);
        bending->setValue(0.000000000000000);
        bending->setProperty("prefEntry", QVariant(QByteArray("Bending energy")));
        bending->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_3->addWidget(bending, 2, 1, 1, 1);

        label_10 = new QLabel(groupBoxSmooth);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        curvature = new Gui::PrefDoubleSpinBox(groupBoxSmooth);
        curvature->setObjectName("curvature");
        curvature->setMaximum(1.000000000000000);
        curvature->setSingleStep(0.100000000000000);
        curvature->setValue(0.000000000000000);
        curvature->setProperty("prefEntry", QVariant(QByteArray("Curvature variation")));
        curvature->setProperty("prefPath", QVariant(QByteArray("Mod/ReverseEngineering/BSplineFit")));

        gridLayout_3->addWidget(curvature, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxSmooth, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupBox, 1, 0, 1, 2);


        retranslateUi(ReenGui__FitBSplineSurface);

        QMetaObject::connectSlotsByName(ReenGui__FitBSplineSurface);
    } // setupUi

    void retranslateUi(QWidget *ReenGui__FitBSplineSurface)
    {
        ReenGui__FitBSplineSurface->setWindowTitle(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Fit B-spline surface", nullptr));
        groupBoxU->setTitle(QCoreApplication::translate("ReenGui::FitBSplineSurface", "u-Direction", nullptr));
        label->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Degree", nullptr));
        label_2->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Control points", nullptr));
        groupBoxV->setTitle(QCoreApplication::translate("ReenGui::FitBSplineSurface", "v-Direction", nullptr));
        label_3->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Degree", nullptr));
        label_4->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Control points", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Settings", nullptr));
        label_5->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Iterations", nullptr));
        label_6->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Size factor", nullptr));
        uvdir->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "User-defined u/v directions", nullptr));
        makePlacement->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Create placement", nullptr));
        groupBoxSmooth->setTitle(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Smoothing", nullptr));
        label_7->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Total Weight", nullptr));
        label_8->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Length of gradient", nullptr));
        label_9->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Bending energy", nullptr));
        label_10->setText(QCoreApplication::translate("ReenGui::FitBSplineSurface", "Curvature variation", nullptr));
    } // retranslateUi

};

} // namespace ReenGui

namespace ReenGui {
namespace Ui {
    class FitBSplineSurface: public Ui_FitBSplineSurface {};
} // namespace Ui
} // namespace ReenGui

#endif // UI_FITBSPLINESURFACE_H
