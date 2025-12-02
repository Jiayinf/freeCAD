/****************************************************************************
** Meta object code from reading C++ file 'mrichtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/mrichtextedit.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mrichtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMRichTextEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMRichTextEditENDCLASS = QtMocHelpers::stringData(
    "MRichTextEdit",
    "saveText",
    "",
    "revText",
    "editorFinished",
    "setText",
    "text",
    "onSave",
    "onExit",
    "setPlainText",
    "setHtml",
    "textRemoveFormat",
    "textRemoveAllFormat",
    "textBold",
    "textUnderline",
    "textStrikeout",
    "textItalic",
    "textSize",
    "pointsAsString",
    "textLink",
    "checked",
    "textStyle",
    "index",
    "textFgColor",
    "textBgColor",
    "listBullet",
    "listOrdered",
    "slotCurrentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "slotCursorPositionChanged",
    "slotClipboardDataChanged",
    "increaseIndentation",
    "decreaseIndentation",
    "insertImage",
    "textSource",
    "onSelectionChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMRichTextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x06,    1 /* Public */,
       4,    0,  185,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,  186,    2, 0x0a,    4 /* Public */,
       7,    0,  189,    2, 0x09,    6 /* Protected */,
       8,    0,  190,    2, 0x09,    7 /* Protected */,
       9,    1,  191,    2, 0x09,    8 /* Protected */,
      10,    1,  194,    2, 0x09,   10 /* Protected */,
      11,    0,  197,    2, 0x09,   12 /* Protected */,
      12,    0,  198,    2, 0x09,   13 /* Protected */,
      13,    0,  199,    2, 0x09,   14 /* Protected */,
      14,    0,  200,    2, 0x09,   15 /* Protected */,
      15,    0,  201,    2, 0x09,   16 /* Protected */,
      16,    0,  202,    2, 0x09,   17 /* Protected */,
      17,    1,  203,    2, 0x09,   18 /* Protected */,
      19,    1,  206,    2, 0x09,   20 /* Protected */,
      21,    1,  209,    2, 0x09,   22 /* Protected */,
      23,    0,  212,    2, 0x09,   24 /* Protected */,
      24,    0,  213,    2, 0x09,   25 /* Protected */,
      25,    1,  214,    2, 0x09,   26 /* Protected */,
      26,    1,  217,    2, 0x09,   28 /* Protected */,
      27,    1,  220,    2, 0x09,   30 /* Protected */,
      30,    0,  223,    2, 0x09,   32 /* Protected */,
      31,    0,  224,    2, 0x09,   33 /* Protected */,
      32,    0,  225,    2, 0x09,   34 /* Protected */,
      33,    0,  226,    2, 0x09,   35 /* Protected */,
      34,    0,  227,    2, 0x09,   36 /* Protected */,
      35,    0,  228,    2, 0x09,   37 /* Protected */,
      36,    0,  229,    2, 0x09,   38 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MRichTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMRichTextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMRichTextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMRichTextEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MRichTextEdit, std::true_type>,
        // method 'saveText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'editorFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textRemoveFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textRemoveAllFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textBold'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textUnderline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textStrikeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textItalic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'textStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textFgColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textBgColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'listBullet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'listOrdered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotCurrentCharFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCharFormat &, std::false_type>,
        // method 'slotCursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotClipboardDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'increaseIndentation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decreaseIndentation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MRichTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MRichTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->editorFinished(); break;
        case 2: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onSave(); break;
        case 4: _t->onExit(); break;
        case 5: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->textRemoveFormat(); break;
        case 8: _t->textRemoveAllFormat(); break;
        case 9: _t->textBold(); break;
        case 10: _t->textUnderline(); break;
        case 11: _t->textStrikeout(); break;
        case 12: _t->textItalic(); break;
        case 13: _t->textSize((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->textLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->textStyle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->textFgColor(); break;
        case 17: _t->textBgColor(); break;
        case 18: _t->listBullet((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->listOrdered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->slotCurrentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 21: _t->slotCursorPositionChanged(); break;
        case 22: _t->slotClipboardDataChanged(); break;
        case 23: _t->increaseIndentation(); break;
        case 24: _t->decreaseIndentation(); break;
        case 25: _t->insertImage(); break;
        case 26: _t->textSource(); break;
        case 27: _t->onSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MRichTextEdit::*)(QString );
            if (_t _q_method = &MRichTextEdit::saveText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MRichTextEdit::*)();
            if (_t _q_method = &MRichTextEdit::editorFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MRichTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MRichTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMRichTextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MRichTextEdit"))
        return static_cast< Ui::MRichTextEdit*>(this);
    return QWidget::qt_metacast(_clname);
}

int MRichTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MRichTextEdit::saveText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MRichTextEdit::editorFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
