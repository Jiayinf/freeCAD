/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintTransform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskFemConstraintTransform.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintTransform.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskFemConstraintTransform",
    "onReferenceDeleted",
    "",
    "Rect",
    "Cyl",
    "addToSelection",
    "removeFromSelection",
    "xAxisChanged",
    "x",
    "yAxisChanged",
    "y",
    "zAxisChanged",
    "z",
    "angleChanged",
    "a"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    1,   73,    2, 0x08,    6 /* Private */,
       9,    1,   76,    2, 0x08,    8 /* Private */,
      11,    1,   79,    2, 0x08,   10 /* Private */,
      13,    1,   82,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskFemConstraintTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskFemConstraintTransform, std::true_type>,
        // method 'onReferenceDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Rect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Cyl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addToSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xAxisChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'yAxisChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'zAxisChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'angleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskFemConstraintTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintTransform *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->Rect(); break;
        case 2: _t->Cyl(); break;
        case 3: _t->addToSelection(); break;
        case 4: _t->removeFromSelection(); break;
        case 5: _t->xAxisChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->yAxisChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->zAxisChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->angleChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::TaskFemConstraintTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskFemConstraintTransformENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgFemConstraintTransform"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgFemConstraintTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgFemConstraintTransform, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgFemConstraintTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgFemConstraintTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgFemConstraintTransformENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
