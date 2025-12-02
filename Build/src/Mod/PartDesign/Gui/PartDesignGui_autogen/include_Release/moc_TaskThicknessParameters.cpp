/****************************************************************************
** Meta object code from reading C++ file 'TaskThicknessParameters.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/PartDesign/Gui/TaskThicknessParameters.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskThicknessParameters.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskThicknessParameters",
    "onValueChanged",
    "",
    "angle",
    "onModeChanged",
    "mode",
    "onJoinTypeChanged",
    "join",
    "onReversedChanged",
    "on",
    "onIntersectionChanged",
    "onRefDeleted"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS[] = {

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
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    1,   53,    2, 0x08,    3 /* Private */,
       6,    1,   56,    2, 0x08,    5 /* Private */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
      10,    1,   62,    2, 0x08,    9 /* Private */,
      11,    0,   65,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PartDesignGui::TaskThicknessParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDressUpParameters::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskThicknessParameters, std::true_type>,
        // method 'onValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onJoinTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onReversedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onIntersectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRefDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PartDesignGui::TaskThicknessParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskThicknessParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->onModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onJoinTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onReversedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onIntersectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->onRefDeleted(); break;
        default: ;
        }
    }
}

const QMetaObject *PartDesignGui::TaskThicknessParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskThicknessParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskThicknessParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDressUpParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskThicknessParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDressUpParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskDlgThicknessParameters"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartDesignGui::TaskDlgThicknessParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgDressUpParameters::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgThicknessParameters, std::true_type>
    >,
    nullptr
} };

void PartDesignGui::TaskDlgThicknessParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartDesignGui::TaskDlgThicknessParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgThicknessParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgThicknessParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgDressUpParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgThicknessParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgDressUpParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
