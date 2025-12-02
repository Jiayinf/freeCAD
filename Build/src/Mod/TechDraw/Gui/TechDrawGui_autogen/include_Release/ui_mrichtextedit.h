/********************************************************************************
** Form generated from reading UI file 'mrichtextedit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRICHTEXTEDIT_H
#define UI_MRICHTEXTEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MRichTextEdit
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *f_toolbar;
    QHBoxLayout *horizontalLayout;
    QToolButton *f_save;
    QToolButton *f_exit;
    QFrame *line_7;
    QComboBox *f_paragraph;
    QFrame *line_4;
    QToolButton *f_undo;
    QToolButton *f_redo;
    QToolButton *f_cut;
    QToolButton *f_copy;
    QToolButton *f_paste;
    QFrame *line;
    QToolButton *f_link;
    QFrame *line_3;
    QToolButton *f_bold;
    QToolButton *f_italic;
    QToolButton *f_underline;
    QToolButton *f_strikeout;
    QFrame *line_5;
    QToolButton *f_list_bullet;
    QToolButton *f_list_ordered;
    QToolButton *f_indent_dec;
    QToolButton *f_indent_inc;
    QFrame *line_2;
    QToolButton *f_fgcolor;
    QToolButton *f_bgcolor;
    QComboBox *f_fontsize;
    QFrame *line_6;
    QToolButton *f_image;
    QSpacerItem *horizontalSpacer;
    QToolButton *f_menu;
    MTextEdit *f_textedit;

    void setupUi(QWidget *MRichTextEdit)
    {
        if (MRichTextEdit->objectName().isEmpty())
            MRichTextEdit->setObjectName("MRichTextEdit");
        MRichTextEdit->resize(879, 312);
        MRichTextEdit->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MRichTextEdit);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName("verticalLayout");
        f_toolbar = new QWidget(MRichTextEdit);
        f_toolbar->setObjectName("f_toolbar");
        horizontalLayout = new QHBoxLayout(f_toolbar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        f_save = new QToolButton(f_toolbar);
        f_save->setObjectName("f_save");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/MRTE/document-save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_save->setIcon(icon);

        horizontalLayout->addWidget(f_save);

        f_exit = new QToolButton(f_toolbar);
        f_exit->setObjectName("f_exit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/MRTE/application-exit.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_exit->setIcon(icon1);

        horizontalLayout->addWidget(f_exit);

        line_7 = new QFrame(f_toolbar);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_7);

        f_paragraph = new QComboBox(f_toolbar);
        f_paragraph->setObjectName("f_paragraph");
        f_paragraph->setFocusPolicy(Qt::ClickFocus);
        f_paragraph->setEditable(true);

        horizontalLayout->addWidget(f_paragraph);

        line_4 = new QFrame(f_toolbar);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_4);

        f_undo = new QToolButton(f_toolbar);
        f_undo->setObjectName("f_undo");
        f_undo->setEnabled(false);
        f_undo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/MRTE/edit-undo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_undo->setIcon(icon2);
        f_undo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_undo);

        f_redo = new QToolButton(f_toolbar);
        f_redo->setObjectName("f_redo");
        f_redo->setEnabled(false);
        f_redo->setFocusPolicy(Qt::ClickFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/MRTE/edit-redo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_redo->setIcon(icon3);
        f_redo->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_redo);

        f_cut = new QToolButton(f_toolbar);
        f_cut->setObjectName("f_cut");
        f_cut->setFocusPolicy(Qt::ClickFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/MRTE/edit-cut.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_cut->setIcon(icon4);
        f_cut->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_cut);

        f_copy = new QToolButton(f_toolbar);
        f_copy->setObjectName("f_copy");
        f_copy->setFocusPolicy(Qt::ClickFocus);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/MRTE/edit-copy.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_copy->setIcon(icon5);
        f_copy->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_copy);

        f_paste = new QToolButton(f_toolbar);
        f_paste->setObjectName("f_paste");
        f_paste->setFocusPolicy(Qt::ClickFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/MRTE/edit-paste.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_paste->setIcon(icon6);
        f_paste->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_paste);

        line = new QFrame(f_toolbar);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        f_link = new QToolButton(f_toolbar);
        f_link->setObjectName("f_link");
        f_link->setFocusPolicy(Qt::ClickFocus);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/MRTE/internet-web-browser.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_link->setIcon(icon7);
        f_link->setIconSize(QSize(16, 16));
        f_link->setCheckable(true);

        horizontalLayout->addWidget(f_link);

        line_3 = new QFrame(f_toolbar);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_3);

        f_bold = new QToolButton(f_toolbar);
        f_bold->setObjectName("f_bold");
        f_bold->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        f_bold->setToolTip(QString::fromUtf8("Bold (CTRL+B)"));
#endif // QT_CONFIG(tooltip)
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/MRTE/textBold.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_bold->setIcon(icon8);
        f_bold->setIconSize(QSize(16, 16));
        f_bold->setCheckable(true);

        horizontalLayout->addWidget(f_bold);

        f_italic = new QToolButton(f_toolbar);
        f_italic->setObjectName("f_italic");
        f_italic->setFocusPolicy(Qt::ClickFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/MRTE/textItalic.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_italic->setIcon(icon9);
        f_italic->setIconSize(QSize(16, 16));
        f_italic->setCheckable(true);

        horizontalLayout->addWidget(f_italic);

        f_underline = new QToolButton(f_toolbar);
        f_underline->setObjectName("f_underline");
        f_underline->setFocusPolicy(Qt::ClickFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/MRTE/textUnderline.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_underline->setIcon(icon10);
        f_underline->setIconSize(QSize(16, 16));
        f_underline->setCheckable(true);

        horizontalLayout->addWidget(f_underline);

        f_strikeout = new QToolButton(f_toolbar);
        f_strikeout->setObjectName("f_strikeout");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/MRTE/textStrike.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_strikeout->setIcon(icon11);
        f_strikeout->setIconSize(QSize(16, 16));
        f_strikeout->setCheckable(true);

        horizontalLayout->addWidget(f_strikeout);

        line_5 = new QFrame(f_toolbar);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_5);

        f_list_bullet = new QToolButton(f_toolbar);
        f_list_bullet->setObjectName("f_list_bullet");
        f_list_bullet->setFocusPolicy(Qt::ClickFocus);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/MRTE/listBullet.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_list_bullet->setIcon(icon12);
        f_list_bullet->setIconSize(QSize(16, 16));
        f_list_bullet->setCheckable(true);

        horizontalLayout->addWidget(f_list_bullet);

        f_list_ordered = new QToolButton(f_toolbar);
        f_list_ordered->setObjectName("f_list_ordered");
        f_list_ordered->setFocusPolicy(Qt::ClickFocus);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/MRTE/listNumber.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_list_ordered->setIcon(icon13);
        f_list_ordered->setIconSize(QSize(16, 16));
        f_list_ordered->setCheckable(true);

        horizontalLayout->addWidget(f_list_ordered);

        f_indent_dec = new QToolButton(f_toolbar);
        f_indent_dec->setObjectName("f_indent_dec");
        f_indent_dec->setFocusPolicy(Qt::ClickFocus);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/MRTE/indentLess.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_indent_dec->setIcon(icon14);
        f_indent_dec->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_indent_dec);

        f_indent_inc = new QToolButton(f_toolbar);
        f_indent_inc->setObjectName("f_indent_inc");
        f_indent_inc->setFocusPolicy(Qt::ClickFocus);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/MRTE/indentMore.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_indent_inc->setIcon(icon15);
        f_indent_inc->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_indent_inc);

        line_2 = new QFrame(f_toolbar);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_2);

        f_fgcolor = new QToolButton(f_toolbar);
        f_fgcolor->setObjectName("f_fgcolor");
        f_fgcolor->setMinimumSize(QSize(0, 0));
        f_fgcolor->setFocusPolicy(Qt::ClickFocus);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/MRTE/fgColor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_fgcolor->setIcon(icon16);
        f_fgcolor->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(f_fgcolor);

        f_bgcolor = new QToolButton(f_toolbar);
        f_bgcolor->setObjectName("f_bgcolor");
        f_bgcolor->setFocusPolicy(Qt::ClickFocus);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/MRTE/bgColor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_bgcolor->setIcon(icon17);
        f_bgcolor->setIconSize(QSize(16, 16));
        f_bgcolor->setToolButtonStyle(Qt::ToolButtonIconOnly);
        f_bgcolor->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(f_bgcolor);

        f_fontsize = new QComboBox(f_toolbar);
        f_fontsize->setObjectName("f_fontsize");
        f_fontsize->setFocusPolicy(Qt::ClickFocus);
        f_fontsize->setEditable(true);

        horizontalLayout->addWidget(f_fontsize);

        line_6 = new QFrame(f_toolbar);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_6);

        f_image = new QToolButton(f_toolbar);
        f_image->setObjectName("f_image");
        f_image->setText(QString::fromUtf8(""));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/MRTE/insertImage.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_image->setIcon(icon18);

        horizontalLayout->addWidget(f_image);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        f_menu = new QToolButton(f_toolbar);
        f_menu->setObjectName("f_menu");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/MRTE/menu.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        f_menu->setIcon(icon19);

        horizontalLayout->addWidget(f_menu);

        f_paragraph->raise();
        line_4->raise();
        f_undo->raise();
        f_redo->raise();
        f_cut->raise();
        f_copy->raise();
        f_paste->raise();
        line->raise();
        f_link->raise();
        line_3->raise();
        f_italic->raise();
        f_underline->raise();
        line_2->raise();
        f_fontsize->raise();
        line_5->raise();
        f_list_bullet->raise();
        f_list_ordered->raise();
        f_indent_dec->raise();
        f_indent_inc->raise();
        f_bold->raise();
        f_bgcolor->raise();
        f_strikeout->raise();
        f_image->raise();
        line_6->raise();
        f_menu->raise();
        f_fgcolor->raise();
        f_save->raise();
        f_exit->raise();
        line_7->raise();

        verticalLayout->addWidget(f_toolbar);

        f_textedit = new MTextEdit(MRichTextEdit);
        f_textedit->setObjectName("f_textedit");
        f_textedit->setAutoFormatting(QTextEdit::AutoNone);
        f_textedit->setTabChangesFocus(true);

        verticalLayout->addWidget(f_textedit);

        QWidget::setTabOrder(f_textedit, f_strikeout);
        QWidget::setTabOrder(f_strikeout, f_image);
        QWidget::setTabOrder(f_image, f_menu);

        retranslateUi(MRichTextEdit);

        QMetaObject::connectSlotsByName(MRichTextEdit);
    } // setupUi

    void retranslateUi(QWidget *MRichTextEdit)
    {
#if QT_CONFIG(tooltip)
        f_save->setToolTip(QCoreApplication::translate("MRichTextEdit", "Save changes", nullptr));
#endif // QT_CONFIG(tooltip)
        f_save->setText(QString());
#if QT_CONFIG(tooltip)
        f_exit->setToolTip(QCoreApplication::translate("MRichTextEdit", "Close editor", nullptr));
#endif // QT_CONFIG(tooltip)
        f_exit->setText(QString());
#if QT_CONFIG(tooltip)
        f_paragraph->setToolTip(QCoreApplication::translate("MRichTextEdit", "Paragraph formatting", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        f_undo->setToolTip(QCoreApplication::translate("MRichTextEdit", "Undo (CTRL+Z)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_undo->setText(QCoreApplication::translate("MRichTextEdit", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        f_redo->setToolTip(QCoreApplication::translate("MRichTextEdit", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
        f_redo->setText(QCoreApplication::translate("MRichTextEdit", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        f_cut->setToolTip(QCoreApplication::translate("MRichTextEdit", "Cut (CTRL+X)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_cut->setText(QCoreApplication::translate("MRichTextEdit", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        f_copy->setToolTip(QCoreApplication::translate("MRichTextEdit", "Copy (CTRL+C)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_copy->setText(QCoreApplication::translate("MRichTextEdit", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        f_paste->setToolTip(QCoreApplication::translate("MRichTextEdit", "Paste (CTRL+V)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_paste->setText(QCoreApplication::translate("MRichTextEdit", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        f_link->setToolTip(QCoreApplication::translate("MRichTextEdit", "Link (CTRL+L)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_link->setText(QCoreApplication::translate("MRichTextEdit", "Link", nullptr));
        f_bold->setText(QCoreApplication::translate("MRichTextEdit", "Bold", nullptr));
#if QT_CONFIG(tooltip)
        f_italic->setToolTip(QCoreApplication::translate("MRichTextEdit", "Italic (CTRL+I)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_italic->setText(QCoreApplication::translate("MRichTextEdit", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        f_underline->setToolTip(QCoreApplication::translate("MRichTextEdit", "Underline (CTRL+U)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_underline->setText(QCoreApplication::translate("MRichTextEdit", "Underline", nullptr));
#if QT_CONFIG(tooltip)
        f_strikeout->setToolTip(QCoreApplication::translate("MRichTextEdit", "Strikethrough", nullptr));
#endif // QT_CONFIG(tooltip)
        f_strikeout->setText(QCoreApplication::translate("MRichTextEdit", "Strike Out", nullptr));
#if QT_CONFIG(tooltip)
        f_list_bullet->setToolTip(QCoreApplication::translate("MRichTextEdit", "Bullet list (CTRL+-)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_list_bullet->setText(QString());
#if QT_CONFIG(tooltip)
        f_list_ordered->setToolTip(QCoreApplication::translate("MRichTextEdit", "Ordered list (CTRL+=)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_list_ordered->setText(QString());
#if QT_CONFIG(tooltip)
        f_indent_dec->setToolTip(QCoreApplication::translate("MRichTextEdit", "Decrease indentation (CTRL+,)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_indent_dec->setText(QCoreApplication::translate("MRichTextEdit", "Decrease indentation", nullptr));
#if QT_CONFIG(tooltip)
        f_indent_inc->setToolTip(QCoreApplication::translate("MRichTextEdit", "Increase indentation (CTRL+.)", nullptr));
#endif // QT_CONFIG(tooltip)
        f_indent_inc->setText(QCoreApplication::translate("MRichTextEdit", "Increase indentation", nullptr));
#if QT_CONFIG(tooltip)
        f_fgcolor->setToolTip(QCoreApplication::translate("MRichTextEdit", "Text foreground color", nullptr));
#endif // QT_CONFIG(tooltip)
        f_fgcolor->setText(QString());
#if QT_CONFIG(tooltip)
        f_bgcolor->setToolTip(QCoreApplication::translate("MRichTextEdit", "Text background color", nullptr));
#endif // QT_CONFIG(tooltip)
        f_bgcolor->setText(QCoreApplication::translate("MRichTextEdit", "Background", nullptr));
#if QT_CONFIG(tooltip)
        f_fontsize->setToolTip(QCoreApplication::translate("MRichTextEdit", "Font size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        f_menu->setToolTip(QCoreApplication::translate("MRichTextEdit", "More functions", nullptr));
#endif // QT_CONFIG(tooltip)
        f_menu->setText(QString());
#if QT_CONFIG(tooltip)
        f_textedit->setToolTip(QCoreApplication::translate("MRichTextEdit", "More functions", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)MRichTextEdit;
    } // retranslateUi

};

namespace Ui {
    class MRichTextEdit: public Ui_MRichTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRICHTEXTEDIT_H
