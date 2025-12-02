/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintTemperature.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskFemConstraintTemperature.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintTemperature.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskFemConstraintTemperature",
    "onReferenceDeleted",
    "",
    "onConstrTypeChanged",
    "item",
    "onCFluxChanged",
    "onTempChanged",
    "addToSelection",
    "removeFromSelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS[] = {

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
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       5,    1,   54,    2, 0x08,    4 /* Private */,
       6,    1,   57,    2, 0x08,    6 /* Private */,
       7,    0,   60,    2, 0x08,    8 /* Private */,
       8,    0,   61,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskFemConstraintTemperature::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskFemConstraintTemperature, std::true_type>,
        // method 'onReferenceDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConstrTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCFluxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addToSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskFemConstraintTemperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintTemperature *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->onConstrTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onCFluxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->onTempChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->addToSelection(); break;
        case 5: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::TaskFemConstraintTemperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintTemperature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTemperatureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintTemperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgFemConstraintTemperature"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgFemConstraintTemperature::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgFemConstraintTemperature, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgFemConstraintTemperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgFemConstraintTemperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintTemperature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTemperatureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintTemperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
