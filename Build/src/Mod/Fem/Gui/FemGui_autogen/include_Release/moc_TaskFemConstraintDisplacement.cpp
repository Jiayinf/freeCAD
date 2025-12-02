/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintDisplacement.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskFemConstraintDisplacement.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintDisplacement.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskFemConstraintDisplacement",
    "onReferenceDeleted",
    "",
    "formulaX",
    "formulaY",
    "formulaZ",
    "flowForce",
    "formulaRotx",
    "formulaRoty",
    "formulaRotz",
    "addToSelection",
    "removeFromSelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS[] = {

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
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    1,   75,    2, 0x08,    2 /* Private */,
       4,    1,   78,    2, 0x08,    4 /* Private */,
       5,    1,   81,    2, 0x08,    6 /* Private */,
       6,    1,   84,    2, 0x08,    8 /* Private */,
       7,    1,   87,    2, 0x08,   10 /* Private */,
       8,    1,   90,    2, 0x08,   12 /* Private */,
       9,    1,   93,    2, 0x08,   14 /* Private */,
      10,    0,   96,    2, 0x08,   16 /* Private */,
      11,    0,   97,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskFemConstraintDisplacement::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskFemConstraintDisplacement, std::true_type>,
        // method 'onReferenceDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formulaX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formulaY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formulaZ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'flowForce'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formulaRotx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formulaRoty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formulaRotz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addToSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskFemConstraintDisplacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintDisplacement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->formulaX((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->formulaY((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->formulaZ((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->flowForce((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->formulaRotx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->formulaRoty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->formulaRotz((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->addToSelection(); break;
        case 9: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::TaskFemConstraintDisplacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintDisplacement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintDisplacementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintDisplacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgFemConstraintDisplacement"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgFemConstraintDisplacement::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgFemConstraintDisplacement, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgFemConstraintDisplacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgFemConstraintDisplacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintDisplacement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintDisplacementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintDisplacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
