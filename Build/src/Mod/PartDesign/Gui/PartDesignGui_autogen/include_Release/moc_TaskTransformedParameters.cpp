/****************************************************************************
** Meta object code from reading C++ file 'TaskTransformedParameters.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/PartDesign/Gui/TaskTransformedParameters.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTransformedParameters.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskTransformedParameters",
    "onUpdateView",
    "",
    "onButtonAddFeature",
    "checked",
    "onButtonRemoveFeature",
    "onFeatureDeleted",
    "indexesMoved",
    "onModeChanged",
    "mode_id"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS[] = {

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
       3,    1,   53,    2, 0x08,    3 /* Private */,
       5,    1,   56,    2, 0x08,    5 /* Private */,
       6,    0,   59,    2, 0x08,    7 /* Private */,
       7,    0,   60,    2, 0x08,    8 /* Private */,
       8,    1,   61,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject PartDesignGui::TaskTransformedParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskTransformedParameters, std::true_type>,
        // method 'onUpdateView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onButtonAddFeature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onButtonRemoveFeature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onFeatureDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'indexesMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PartDesignGui::TaskTransformedParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskTransformedParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateView((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onButtonAddFeature((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onButtonRemoveFeature((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->onFeatureDeleted(); break;
        case 4: _t->indexesMoved(); break;
        case 5: _t->onModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PartDesignGui::TaskTransformedParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskTransformedParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskTransformedParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    if (!strcmp(_clname, "Gui::DocumentObserver"))
        return static_cast< Gui::DocumentObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartDesignGui::TaskTransformedParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS = QtMocHelpers::stringData(
    "PartDesignGui::TaskDlgTransformedParameters"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartDesignGui::TaskDlgTransformedParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<PartDesignGui::TaskDlgFeatureParameters::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgTransformedParameters, std::true_type>
    >,
    nullptr
} };

void PartDesignGui::TaskDlgTransformedParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartDesignGui::TaskDlgTransformedParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgTransformedParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartDesignGuiSCOPETaskDlgTransformedParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PartDesignGui::TaskDlgFeatureParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgTransformedParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PartDesignGui::TaskDlgFeatureParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
