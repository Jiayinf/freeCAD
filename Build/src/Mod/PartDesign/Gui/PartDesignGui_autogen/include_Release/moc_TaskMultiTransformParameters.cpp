/****************************************************************************
** Meta object code from reading C++ file 'TaskMultiTransformParameters.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/PartDesign/Gui/TaskMultiTransformParameters.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskMultiTransformParameters.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskMultiTransformParameters",
    "onSubTaskButtonOK",
    "",
    "onTransformDelete",
    "onTransformEdit",
    "onTransformActivated",
    "QModelIndex",
    "index",
    "onTransformAddMirrored",
    "onTransformAddLinearPattern",
    "onTransformAddPolarPattern",
    "onTransformAddScaled",
    "onMoveUp",
    "onMoveDown",
    "onUpdateView"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    1,   83,    2, 0x08,    4 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    0,   88,    2, 0x08,    8 /* Private */,
      11,    0,   89,    2, 0x08,    9 /* Private */,
      12,    0,   90,    2, 0x08,   10 /* Private */,
      13,    0,   91,    2, 0x08,   11 /* Private */,
      14,    1,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject PartDesignGui::TaskMultiTransformParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskMultiTransformParameters, std::true_type>,
        // method 'onSubTaskButtonOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTransformAddMirrored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformAddLinearPattern'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformAddPolarPattern'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTransformAddScaled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PartDesignGui::TaskMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskMultiTransformParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSubTaskButtonOK(); break;
        case 1: _t->onTransformDelete(); break;
        case 2: _t->onTransformEdit(); break;
        case 3: _t->onTransformActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->onTransformAddMirrored(); break;
        case 5: _t->onTransformAddLinearPattern(); break;
        case 6: _t->onTransformAddPolarPattern(); break;
        case 7: _t->onTransformAddScaled(); break;
        case 8: _t->onMoveUp(); break;
        case 9: _t->onMoveDown(); break;
        case 10: _t->onUpdateView((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PartDesignGui::TaskMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskMultiTransformParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskDlgMultiTransformParameters"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartDesignGui::TaskDlgMultiTransformParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgMultiTransformParameters, std::true_type>
    >,
    nullptr
} };

void PartDesignGui::TaskDlgMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartDesignGui::TaskDlgMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgMultiTransformParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
