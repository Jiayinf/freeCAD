/****************************************************************************
** Meta object code from reading C++ file 'TaskSectionView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/TaskSectionView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSectionView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskSectionView",
    "onUpClicked",
    "",
    "onDownClicked",
    "onLeftClicked",
    "onRightClicked",
    "onIdentifierChanged",
    "onScaleChanged",
    "onXChanged",
    "onYChanged",
    "onZChanged",
    "scaleTypeChanged",
    "index",
    "liveUpdateClicked",
    "updateNowClicked",
    "slotChangeAngle",
    "newAngle",
    "slotViewDirectionChanged",
    "Base::Vector3d",
    "newDirection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x09,    1 /* Protected */,
       3,    0,   99,    2, 0x09,    2 /* Protected */,
       4,    0,  100,    2, 0x09,    3 /* Protected */,
       5,    0,  101,    2, 0x09,    4 /* Protected */,
       6,    0,  102,    2, 0x09,    5 /* Protected */,
       7,    0,  103,    2, 0x09,    6 /* Protected */,
       8,    0,  104,    2, 0x09,    7 /* Protected */,
       9,    0,  105,    2, 0x09,    8 /* Protected */,
      10,    0,  106,    2, 0x09,    9 /* Protected */,
      11,    1,  107,    2, 0x09,   10 /* Protected */,
      13,    0,  110,    2, 0x09,   12 /* Protected */,
      14,    0,  111,    2, 0x09,   13 /* Protected */,
      15,    1,  112,    2, 0x09,   14 /* Protected */,
      17,    1,  115,    2, 0x09,   16 /* Protected */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechDrawGui::TaskSectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskSectionView, std::true_type>,
        // method 'onUpClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDownClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLeftClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRightClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIdentifierChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onXChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onYChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onZChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scaleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'liveUpdateClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateNowClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotChangeAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotViewDirectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Base::Vector3d, std::false_type>
    >,
    nullptr
} };

void TechDrawGui::TaskSectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskSectionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpClicked(); break;
        case 1: _t->onDownClicked(); break;
        case 2: _t->onLeftClicked(); break;
        case 3: _t->onRightClicked(); break;
        case 4: _t->onIdentifierChanged(); break;
        case 5: _t->onScaleChanged(); break;
        case 6: _t->onXChanged(); break;
        case 7: _t->onYChanged(); break;
        case 8: _t->onZChanged(); break;
        case 9: _t->scaleTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->liveUpdateClicked(); break;
        case 11: _t->updateNowClicked(); break;
        case 12: _t->slotChangeAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->slotViewDirectionChanged((*reinterpret_cast< std::add_pointer_t<Base::Vector3d>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TechDrawGui::TaskSectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskSectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskSectionViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskSectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskDlgSectionView"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject TechDrawGui::TaskDlgSectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgSectionView, std::true_type>
    >,
    nullptr
} };

void TechDrawGui::TaskDlgSectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TechDrawGui::TaskDlgSectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgSectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgSectionViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgSectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
