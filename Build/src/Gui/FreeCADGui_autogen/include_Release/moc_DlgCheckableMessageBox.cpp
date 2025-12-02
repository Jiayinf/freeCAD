/****************************************************************************
** Meta object code from reading C++ file 'DlgCheckableMessageBox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/DlgCheckableMessageBox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgCheckableMessageBox.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::DlgCheckableMessageBox",
    "slotClicked",
    "",
    "QAbstractButton*",
    "b",
    "text",
    "iconPixmap",
    "isChecked",
    "checkBoxText",
    "buttons",
    "QDialogButtonBox::StandardButtons",
    "defaultButton",
    "QDialogButtonBox::StandardButton"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       7, QMetaType::Bool, 0x00015003, uint(-1), 0,
       8, QMetaType::QString, 0x00015103, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001500b, uint(-1), 0,
      11, 0x80000000 | 12, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS[] = {
    QMetaObject::SuperData::link<QDialogButtonBox::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Gui::Dialog::DlgCheckableMessageBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconPixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'isChecked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checkBoxText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'buttons'
        QtPrivate::TypeAndForceComplete<QDialogButtonBox::StandardButtons, std::true_type>,
        // property 'defaultButton'
        QtPrivate::TypeAndForceComplete<QDialogButtonBox::StandardButton, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgCheckableMessageBox, std::true_type>,
        // method 'slotClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void Gui::Dialog::DlgCheckableMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgCheckableMessageBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DlgCheckableMessageBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = _t->iconPixmap(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isChecked(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->checkBoxText(); break;
        case 4: *reinterpret_cast< QDialogButtonBox::StandardButtons*>(_v) = _t->standardButtons(); break;
        case 5: *reinterpret_cast< QDialogButtonBox::StandardButton*>(_v) = _t->defaultButton(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DlgCheckableMessageBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIconPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 2: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCheckBoxText(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setStandardButtons(*reinterpret_cast< QDialogButtonBox::StandardButtons*>(_v)); break;
        case 5: _t->setDefaultButton(*reinterpret_cast< QDialogButtonBox::StandardButton*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Gui::Dialog::DlgCheckableMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCheckableMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCheckableMessageBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgCheckableMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
