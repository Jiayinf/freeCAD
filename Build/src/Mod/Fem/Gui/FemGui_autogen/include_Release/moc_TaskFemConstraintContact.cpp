/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintContact.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskFemConstraintContact.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintContact.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskFemConstraintContact",
    "onReferenceDeletedSlave",
    "",
    "onReferenceDeletedMaster",
    "addToSelectionSlave",
    "removeFromSelectionSlave",
    "addToSelectionMaster",
    "removeFromSelectionMaster",
    "onFrictionChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    1,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskFemConstraintContact::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskFemConstraintContact, std::true_type>,
        // method 'onReferenceDeletedSlave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReferenceDeletedMaster'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addToSelectionSlave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelectionSlave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addToSelectionMaster'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelectionMaster'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFrictionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskFemConstraintContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintContact *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeletedSlave(); break;
        case 1: _t->onReferenceDeletedMaster(); break;
        case 2: _t->addToSelectionSlave(); break;
        case 3: _t->removeFromSelectionSlave(); break;
        case 4: _t->addToSelectionMaster(); break;
        case 5: _t->removeFromSelectionMaster(); break;
        case 6: _t->onFrictionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::TaskFemConstraintContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintContactENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgFemConstraintContact"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgFemConstraintContact::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgFemConstraintContact, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgFemConstraintContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgFemConstraintContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintContactENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
