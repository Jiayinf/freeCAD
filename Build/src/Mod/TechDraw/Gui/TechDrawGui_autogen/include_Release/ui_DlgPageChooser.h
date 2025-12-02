/********************************************************************************
** Form generated from reading UI file 'DlgPageChooser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPAGECHOOSER_H
#define UI_DLGPAGECHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

namespace TechDrawGui {

class Ui_DlgPageChooser
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lPrompt;
    QListWidget *lwPages;
    QDialogButtonBox *bbButtons;

    void setupUi(QDialog *TechDrawGui__DlgPageChooser)
    {
        if (TechDrawGui__DlgPageChooser->objectName().isEmpty())
            TechDrawGui__DlgPageChooser->setObjectName("TechDrawGui__DlgPageChooser");
        TechDrawGui__DlgPageChooser->setWindowModality(Qt::WindowModal);
        TechDrawGui__DlgPageChooser->resize(360, 280);
        TechDrawGui__DlgPageChooser->setModal(true);
        verticalLayout = new QVBoxLayout(TechDrawGui__DlgPageChooser);
        verticalLayout->setObjectName("verticalLayout");
        lPrompt = new QLabel(TechDrawGui__DlgPageChooser);
        lPrompt->setObjectName("lPrompt");
        lPrompt->setWordWrap(true);

        verticalLayout->addWidget(lPrompt);

        lwPages = new QListWidget(TechDrawGui__DlgPageChooser);
        lwPages->setObjectName("lwPages");

        verticalLayout->addWidget(lwPages);

        bbButtons = new QDialogButtonBox(TechDrawGui__DlgPageChooser);
        bbButtons->setObjectName("bbButtons");
        bbButtons->setOrientation(Qt::Horizontal);
        bbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        bbButtons->setCenterButtons(false);

        verticalLayout->addWidget(bbButtons);


        retranslateUi(TechDrawGui__DlgPageChooser);
        QObject::connect(bbButtons, &QDialogButtonBox::accepted, TechDrawGui__DlgPageChooser, qOverload<>(&QDialog::accept));
        QObject::connect(bbButtons, &QDialogButtonBox::rejected, TechDrawGui__DlgPageChooser, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPageChooser);
    } // setupUi

    void retranslateUi(QDialog *TechDrawGui__DlgPageChooser)
    {
        TechDrawGui__DlgPageChooser->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPageChooser", "Page Chooser", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgPageChooser->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lPrompt->setText(QCoreApplication::translate("TechDrawGui::DlgPageChooser", "FreeCAD could not determine which Page to use.  Please select a Page.", nullptr));
#if QT_CONFIG(tooltip)
        lwPages->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPageChooser", "Select a Page that should be used", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPageChooser: public Ui_DlgPageChooser {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPAGECHOOSER_H
