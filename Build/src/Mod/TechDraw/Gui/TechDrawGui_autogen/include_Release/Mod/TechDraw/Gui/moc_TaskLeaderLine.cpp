/****************************************************************************
** Meta object code from reading C++ file 'TaskLeaderLine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/TaskLeaderLine.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskLeaderLine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskLeaderLine",
    "onTrackerClicked",
    "",
    "clicked",
    "onCancelEditClicked",
    "onTrackerFinished",
    "std::vector<QPointF>",
    "pts",
    "TechDrawGui::QGIView*",
    "qgParent",
    "onPointEditComplete",
    "onStartSymbolChanged",
    "onEndSymbolChanged",
    "onColorChanged",
    "onLineWidthChanged",
    "onLineStyleChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS[] = {

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
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       4,    1,   71,    2, 0x0a,    3 /* Public */,
       5,    2,   74,    2, 0x0a,    5 /* Public */,
      10,    0,   79,    2, 0x09,    8 /* Protected */,
      11,    0,   80,    2, 0x08,    9 /* Private */,
      12,    0,   81,    2, 0x08,   10 /* Private */,
      13,    0,   82,    2, 0x08,   11 /* Private */,
      14,    0,   83,    2, 0x08,   12 /* Private */,
      15,    0,   84,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechDrawGui::TaskLeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskLeaderLine, std::true_type>,
        // method 'onTrackerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onCancelEditClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onTrackerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<QPointF>, std::false_type>,
        QtPrivate::TypeAndForceComplete<TechDrawGui::QGIView *, std::false_type>,
        // method 'onPointEditComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStartSymbolChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEndSymbolChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLineWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLineStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TechDrawGui::TaskLeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskLeaderLine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTrackerClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onCancelEditClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onTrackerFinished((*reinterpret_cast< std::add_pointer_t<std::vector<QPointF>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TechDrawGui::QGIView*>>(_a[2]))); break;
        case 3: _t->onPointEditComplete(); break;
        case 4: _t->onStartSymbolChanged(); break;
        case 5: _t->onEndSymbolChanged(); break;
        case 6: _t->onColorChanged(); break;
        case 7: _t->onLineWidthChanged(); break;
        case 8: _t->onLineStyleChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *TechDrawGui::TaskLeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskLeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskLeaderLineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskLeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskDlgLeaderLine"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject TechDrawGui::TaskDlgLeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgLeaderLine, std::true_type>
    >,
    nullptr
} };

void TechDrawGui::TaskDlgLeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TechDrawGui::TaskDlgLeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgLeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgLeaderLineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgLeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
