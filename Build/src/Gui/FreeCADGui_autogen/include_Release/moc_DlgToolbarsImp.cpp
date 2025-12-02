/****************************************************************************
** Meta object code from reading C++ file 'DlgToolbarsImp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/DlgToolbarsImp.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgToolbarsImp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::DlgCustomToolbars",
    "onAddMacroAction",
    "",
    "onRemoveMacroAction",
    "onModifyMacroAction"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x09,    1 /* Protected */,
       3,    1,   35,    2, 0x09,    3 /* Protected */,
       4,    1,   38,    2, 0x09,    5 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::Dialog::DlgCustomToolbars::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomizeActionPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgCustomToolbars, std::true_type>,
        // method 'onAddMacroAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onRemoveMacroAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onModifyMacroAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>
    >,
    nullptr
} };

void Gui::Dialog::DlgCustomToolbars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgCustomToolbars *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddMacroAction((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->onRemoveMacroAction((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 2: _t->onModifyMacroAction((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Gui::Dialog::DlgCustomToolbars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbars::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::DlgCustomToolbarsImp"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::Dialog::DlgCustomToolbarsImp::staticMetaObject = { {
    QMetaObject::SuperData::link<DlgCustomToolbars::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgCustomToolbarsImp, std::true_type>
    >,
    nullptr
} };

void Gui::Dialog::DlgCustomToolbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::Dialog::DlgCustomToolbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolbarsImpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::DlgCustomToolBoxbarsImp"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::Dialog::DlgCustomToolBoxbarsImp::staticMetaObject = { {
    QMetaObject::SuperData::link<DlgCustomToolbars::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgCustomToolBoxbarsImp, std::true_type>
    >,
    nullptr
} };

void Gui::Dialog::DlgCustomToolBoxbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::Dialog::DlgCustomToolBoxbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgCustomToolBoxbarsImpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
