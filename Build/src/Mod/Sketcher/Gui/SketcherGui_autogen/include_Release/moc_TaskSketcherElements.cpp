/****************************************************************************
** Meta object code from reading C++ file 'TaskSketcherElements.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Sketcher/Gui/TaskSketcherElements.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSketcherElements.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSketcherGuiSCOPEElementViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSketcherGuiSCOPEElementViewENDCLASS = QtMocHelpers::stringData(
    "SketcherGui::ElementView",
    "onItemHovered",
    "",
    "QListWidgetItem*",
    "doPointCoincidence",
    "doPointOnObjectConstraint",
    "doVerticalDistance",
    "doHorizontalDistance",
    "doParallelConstraint",
    "doPerpendicularConstraint",
    "doTangentConstraint",
    "doEqualConstraint",
    "doSymmetricConstraint",
    "doBlockConstraint",
    "doLockConstraint",
    "doHorizontalConstraint",
    "doVerticalConstraint",
    "doLengthConstraint",
    "doRadiusConstraint",
    "doDiameterConstraint",
    "doRadiamConstraint",
    "doAngleConstraint",
    "doToggleConstruction",
    "doSelectConstraints",
    "doSelectOrigin",
    "doSelectHAxis",
    "doSelectVAxis",
    "deleteSelectedItems",
    "onIndexHovered",
    "QModelIndex",
    "index",
    "onIndexChecked",
    "Qt::CheckState",
    "state"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSketcherGuiSCOPEElementViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  179,    2, 0x09,    3 /* Protected */,
       5,    0,  180,    2, 0x09,    4 /* Protected */,
       6,    0,  181,    2, 0x09,    5 /* Protected */,
       7,    0,  182,    2, 0x09,    6 /* Protected */,
       8,    0,  183,    2, 0x09,    7 /* Protected */,
       9,    0,  184,    2, 0x09,    8 /* Protected */,
      10,    0,  185,    2, 0x09,    9 /* Protected */,
      11,    0,  186,    2, 0x09,   10 /* Protected */,
      12,    0,  187,    2, 0x09,   11 /* Protected */,
      13,    0,  188,    2, 0x09,   12 /* Protected */,
      14,    0,  189,    2, 0x09,   13 /* Protected */,
      15,    0,  190,    2, 0x09,   14 /* Protected */,
      16,    0,  191,    2, 0x09,   15 /* Protected */,
      17,    0,  192,    2, 0x09,   16 /* Protected */,
      18,    0,  193,    2, 0x09,   17 /* Protected */,
      19,    0,  194,    2, 0x09,   18 /* Protected */,
      20,    0,  195,    2, 0x09,   19 /* Protected */,
      21,    0,  196,    2, 0x09,   20 /* Protected */,
      22,    0,  197,    2, 0x09,   21 /* Protected */,
      23,    0,  198,    2, 0x09,   22 /* Protected */,
      24,    0,  199,    2, 0x09,   23 /* Protected */,
      25,    0,  200,    2, 0x09,   24 /* Protected */,
      26,    0,  201,    2, 0x09,   25 /* Protected */,
      27,    0,  202,    2, 0x09,   26 /* Protected */,
      28,    1,  203,    2, 0x09,   27 /* Protected */,
      31,    2,  206,    2, 0x09,   29 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 32,    2,   33,

       0        // eod
};

Q_CONSTINIT const QMetaObject SketcherGui::ElementView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSketcherGuiSCOPEElementViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSketcherGuiSCOPEElementViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSketcherGuiSCOPEElementViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ElementView, std::true_type>,
        // method 'onItemHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'doPointCoincidence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doPointOnObjectConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doVerticalDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doHorizontalDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doParallelConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doPerpendicularConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doTangentConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doEqualConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSymmetricConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doBlockConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doLockConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doHorizontalConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doVerticalConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doLengthConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doRadiusConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doDiameterConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doRadiamConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doAngleConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doToggleConstruction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSelectConstraints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSelectOrigin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSelectHAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSelectVAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIndexHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onIndexChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CheckState, std::false_type>
    >,
    nullptr
} };

void SketcherGui::ElementView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElementView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemHovered((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->doPointCoincidence(); break;
        case 2: _t->doPointOnObjectConstraint(); break;
        case 3: _t->doVerticalDistance(); break;
        case 4: _t->doHorizontalDistance(); break;
        case 5: _t->doParallelConstraint(); break;
        case 6: _t->doPerpendicularConstraint(); break;
        case 7: _t->doTangentConstraint(); break;
        case 8: _t->doEqualConstraint(); break;
        case 9: _t->doSymmetricConstraint(); break;
        case 10: _t->doBlockConstraint(); break;
        case 11: _t->doLockConstraint(); break;
        case 12: _t->doHorizontalConstraint(); break;
        case 13: _t->doVerticalConstraint(); break;
        case 14: _t->doLengthConstraint(); break;
        case 15: _t->doRadiusConstraint(); break;
        case 16: _t->doDiameterConstraint(); break;
        case 17: _t->doRadiamConstraint(); break;
        case 18: _t->doAngleConstraint(); break;
        case 19: _t->doToggleConstruction(); break;
        case 20: _t->doSelectConstraints(); break;
        case 21: _t->doSelectOrigin(); break;
        case 22: _t->doSelectHAxis(); break;
        case 23: _t->doSelectVAxis(); break;
        case 24: _t->deleteSelectedItems(); break;
        case 25: _t->onIndexHovered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 26: _t->onIndexChecked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElementView::*)(QListWidgetItem * );
            if (_t _q_method = &ElementView::onItemHovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SketcherGui::ElementView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::ElementView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSketcherGuiSCOPEElementViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int SketcherGui::ElementView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void SketcherGui::ElementView::onItemHovered(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS = QtMocHelpers::stringData(
    "SketcherGui::TaskSketcherElements",
    "onListWidgetElementsItemPressed",
    "",
    "QListWidgetItem*",
    "item",
    "onListWidgetElementsItemEntered",
    "onListWidgetElementsMouseMoveOnItem",
    "onSettingsExtendedInformationChanged",
    "onFilterBoxStateChanged",
    "val",
    "onListMultiFilterItemChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS[] = {

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
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       5,    1,   53,    2, 0x0a,    3 /* Public */,
       6,    1,   56,    2, 0x0a,    5 /* Public */,
       7,    0,   59,    2, 0x0a,    7 /* Public */,
       8,    1,   60,    2, 0x0a,    8 /* Public */,
      10,    1,   63,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject SketcherGui::TaskSketcherElements::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskSketcherElements, std::true_type>,
        // method 'onListWidgetElementsItemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'onListWidgetElementsItemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'onListWidgetElementsMouseMoveOnItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'onSettingsExtendedInformationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilterBoxStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onListMultiFilterItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void SketcherGui::TaskSketcherElements::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskSketcherElements *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onListWidgetElementsItemPressed((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->onListWidgetElementsItemEntered((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 2: _t->onListWidgetElementsMouseMoveOnItem((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 3: _t->onSettingsExtendedInformationChanged(); break;
        case 4: _t->onFilterBoxStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onListMultiFilterItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SketcherGui::TaskSketcherElements::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::TaskSketcherElements::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSketcherGuiSCOPETaskSketcherElementsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int SketcherGui::TaskSketcherElements::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
