/****************************************************************************
** Meta object code from reading C++ file 'DlgParameterImp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/DlgParameterImp.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgParameterImp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::DlgParameterImp"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::Dialog::DlgParameterImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgParameterImp, std::true_type>
    >,
    nullptr
} };

void Gui::Dialog::DlgParameterImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::Dialog::DlgParameterImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgParameterImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEDlgParameterImpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgParameterImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::ParameterGroup",
    "onDeleteSelectedItem",
    "",
    "onCreateSubgroup",
    "onToggleSelectedItem",
    "onExportToFile",
    "onImportFromFile",
    "onRenameSelectedItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x09,    1 /* Protected */,
       3,    0,   51,    2, 0x09,    2 /* Protected */,
       4,    0,   52,    2, 0x09,    3 /* Protected */,
       5,    0,   53,    2, 0x09,    4 /* Protected */,
       6,    0,   54,    2, 0x09,    5 /* Protected */,
       7,    0,   55,    2, 0x09,    6 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::Dialog::ParameterGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterGroup, std::true_type>,
        // method 'onDeleteSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateSubgroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::Dialog::ParameterGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeleteSelectedItem(); break;
        case 1: _t->onCreateSubgroup(); break;
        case 2: _t->onToggleSelectedItem(); break;
        case 3: _t->onExportToFile(); break;
        case 4: _t->onImportFromFile(); break;
        case 5: _t->onRenameSelectedItem(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Gui::Dialog::ParameterGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::ParameterGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS = QtMocHelpers::stringData(
    "Gui::Dialog::ParameterValue",
    "onChangeSelectedItem",
    "",
    "QTreeWidgetItem*",
    "onDeleteSelectedItem",
    "onRenameSelectedItem",
    "onCreateTextItem",
    "onCreateIntItem",
    "onCreateUIntItem",
    "onCreateFloatItem",
    "onCreateBoolItem",
    "edit",
    "QModelIndex",
    "index",
    "QAbstractItemView::EditTrigger",
    "trigger",
    "QEvent*",
    "event"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x09,    1 /* Protected */,
       1,    0,   79,    2, 0x09,    4 /* Protected */,
       4,    0,   80,    2, 0x09,    5 /* Protected */,
       5,    0,   81,    2, 0x09,    6 /* Protected */,
       6,    0,   82,    2, 0x09,    7 /* Protected */,
       7,    0,   83,    2, 0x09,    8 /* Protected */,
       8,    0,   84,    2, 0x09,    9 /* Protected */,
       9,    0,   85,    2, 0x09,   10 /* Protected */,
      10,    0,   86,    2, 0x09,   11 /* Protected */,
      11,    3,   87,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16,   13,   15,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::Dialog::ParameterValue::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterValue, std::true_type>,
        // method 'onChangeSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onChangeSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameSelectedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateTextItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateIntItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateUIntItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateFloatItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateBoolItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemView::EditTrigger, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>
    >,
    nullptr
} };

void Gui::Dialog::ParameterValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterValue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangeSelectedItem((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->onChangeSelectedItem(); break;
        case 2: _t->onDeleteSelectedItem(); break;
        case 3: _t->onRenameSelectedItem(); break;
        case 4: _t->onCreateTextItem(); break;
        case 5: _t->onCreateIntItem(); break;
        case 6: _t->onCreateUIntItem(); break;
        case 7: _t->onCreateFloatItem(); break;
        case 8: _t->onCreateBoolItem(); break;
        case 9: { bool _r = _t->edit((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemView::EditTrigger>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Gui::Dialog::ParameterValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::ParameterValue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDialogSCOPEParameterValueENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
