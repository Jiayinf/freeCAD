/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintHeatflux.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskFemConstraintHeatflux.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintHeatflux.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskFemConstraintHeatflux",
    "onReferenceDeleted",
    "",
    "onAmbientTempChanged",
    "val",
    "onFilmCoefChanged",
    "onEmissivityChanged",
    "onHeatFluxChanged",
    "Conv",
    "Rad",
    "Flux",
    "addToSelection",
    "removeFromSelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS[] = {

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
       5,    1,   78,    2, 0x08,    4 /* Private */,
       6,    1,   81,    2, 0x08,    6 /* Private */,
       7,    1,   84,    2, 0x08,    8 /* Private */,
       8,    0,   87,    2, 0x08,   10 /* Private */,
       9,    0,   88,    2, 0x08,   11 /* Private */,
      10,    0,   89,    2, 0x08,   12 /* Private */,
      11,    0,   90,    2, 0x08,   13 /* Private */,
      12,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskFemConstraintHeatflux::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskFemConstraintHeatflux, std::true_type>,
        // method 'onReferenceDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAmbientTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onFilmCoefChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onEmissivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onHeatFluxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'Conv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Rad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Flux'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addToSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskFemConstraintHeatflux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintHeatflux *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->onAmbientTempChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->onFilmCoefChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->onEmissivityChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->onHeatFluxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->Conv(); break;
        case 6: _t->Rad(); break;
        case 7: _t->Flux(); break;
        case 8: _t->addToSelection(); break;
        case 9: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::TaskFemConstraintHeatflux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintHeatflux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintHeatfluxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintHeatflux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgFemConstraintHeatflux"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgFemConstraintHeatflux::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgFemConstraintHeatflux, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgFemConstraintHeatflux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgFemConstraintHeatflux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintHeatflux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintHeatfluxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintHeatflux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
