/****************************************************************************
** Meta object code from reading C++ file 'TaskSketcherConstraints.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Sketcher/Gui/TaskSketcherConstraints.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSketcherConstraints.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintViewENDCLASS = QtMocHelpers::stringData(
    "SketcherGui::ConstraintView",
    "onUpdateDrivingStatus",
    "",
    "QListWidgetItem*",
    "item",
    "status",
    "onUpdateActiveStatus",
    "emitCenterSelectedItems",
    "emitHideSelection3DVisibility",
    "emitShowSelection3DVisibility",
    "modifyCurrentItem",
    "renameCurrentItem",
    "centerSelectedItems",
    "deleteSelectedItems",
    "doSelectConstraints",
    "updateDrivingStatus",
    "updateActiveStatus",
    "swapNamedOfSelectedItems",
    "showConstraints",
    "hideConstraints"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSketcherGuiSCOPEConstraintViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x06,    1 /* Public */,
       6,    2,  109,    2, 0x06,    4 /* Public */,
       7,    0,  114,    2, 0x06,    7 /* Public */,
       8,    0,  115,    2, 0x06,    8 /* Public */,
       9,    0,  116,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  117,    2, 0x09,   10 /* Protected */,
      11,    0,  118,    2, 0x09,   11 /* Protected */,
      12,    0,  119,    2, 0x09,   12 /* Protected */,
      13,    0,  120,    2, 0x09,   13 /* Protected */,
      14,    0,  121,    2, 0x09,   14 /* Protected */,
      15,    0,  122,    2, 0x09,   15 /* Protected */,
      16,    0,  123,    2, 0x09,   16 /* Protected */,
      17,    0,  124,    2, 0x09,   17 /* Protected */,
      18,    0,  125,    2, 0x09,   18 /* Protected */,
      19,    0,  126,    2, 0x09,   19 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SketcherGui::ConstraintView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSketcherGuiSCOPEConstraintViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConstraintView, std::true_type>,
        // method 'onUpdateDrivingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onUpdateActiveStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitCenterSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitHideSelection3DVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitShowSelection3DVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modifyCurrentItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'renameCurrentItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'centerSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSelectConstraints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDrivingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateActiveStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'swapNamedOfSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showConstraints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideConstraints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SketcherGui::ConstraintView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConstraintView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateDrivingStatus((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->onUpdateActiveStatus((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->emitCenterSelectedItems(); break;
        case 3: _t->emitHideSelection3DVisibility(); break;
        case 4: _t->emitShowSelection3DVisibility(); break;
        case 5: _t->modifyCurrentItem(); break;
        case 6: _t->renameCurrentItem(); break;
        case 7: _t->centerSelectedItems(); break;
        case 8: _t->deleteSelectedItems(); break;
        case 9: _t->doSelectConstraints(); break;
        case 10: _t->updateDrivingStatus(); break;
        case 11: _t->updateActiveStatus(); break;
        case 12: _t->swapNamedOfSelectedItems(); break;
        case 13: _t->showConstraints(); break;
        case 14: _t->hideConstraints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConstraintView::*)(QListWidgetItem * , bool );
            if (_t _q_method = &ConstraintView::onUpdateDrivingStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)(QListWidgetItem * , bool );
            if (_t _q_method = &ConstraintView::onUpdateActiveStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (_t _q_method = &ConstraintView::emitCenterSelectedItems; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (_t _q_method = &ConstraintView::emitHideSelection3DVisibility; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (_t _q_method = &ConstraintView::emitShowSelection3DVisibility; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *SketcherGui::ConstraintView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::ConstraintView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int SketcherGui::ConstraintView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SketcherGui::ConstraintView::onUpdateDrivingStatus(QListWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SketcherGui::ConstraintView::onUpdateActiveStatus(QListWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SketcherGui::ConstraintView::emitCenterSelectedItems()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SketcherGui::ConstraintView::emitHideSelection3DVisibility()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SketcherGui::ConstraintView::emitShowSelection3DVisibility()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS = QtMocHelpers::stringData(
    "SketcherGui::ConstraintFilterList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SketcherGui::ConstraintFilterList::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConstraintFilterList, std::true_type>
    >,
    nullptr
} };

void SketcherGui::ConstraintFilterList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SketcherGui::ConstraintFilterList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::ConstraintFilterList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSketcherGuiSCOPEConstraintFilterListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int SketcherGui::ConstraintFilterList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS = QtMocHelpers::stringData(
    "SketcherGui::TaskSketcherConstraints"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SketcherGui::TaskSketcherConstraints::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskSketcherConstraints, std::true_type>
    >,
    nullptr
} };

void SketcherGui::TaskSketcherConstraints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SketcherGui::TaskSketcherConstraints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::TaskSketcherConstraints::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherConstraintsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    if (!strcmp(_clname, "ParameterGrp::ObserverType"))
        return static_cast< ParameterGrp::ObserverType*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int SketcherGui::TaskSketcherConstraints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
