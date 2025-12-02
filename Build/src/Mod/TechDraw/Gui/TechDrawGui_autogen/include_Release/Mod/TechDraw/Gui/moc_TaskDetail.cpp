/****************************************************************************
** Meta object code from reading C++ file 'TaskDetail.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/TaskDetail.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskDetail.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDetailENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDetailENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskDetail",
    "onDraggerClicked",
    "",
    "clicked",
    "onHighlightMoved",
    "dragEnd",
    "onXEdit",
    "onYEdit",
    "onRadiusEdit",
    "onScaleTypeEdit",
    "onScaleEdit",
    "onReferenceEdit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskDetailENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    1,   65,    2, 0x0a,    3 /* Public */,
       6,    0,   68,    2, 0x0a,    5 /* Public */,
       7,    0,   69,    2, 0x0a,    6 /* Public */,
       8,    0,   70,    2, 0x0a,    7 /* Public */,
       9,    0,   71,    2, 0x0a,    8 /* Public */,
      10,    0,   72,    2, 0x0a,    9 /* Public */,
      11,    0,   73,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPointF,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechDrawGui::TaskDetail::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDetailENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskDetailENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDetailENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDetail, std::true_type>,
        // method 'onDraggerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onHighlightMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'onXEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onYEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRadiusEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScaleTypeEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScaleEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReferenceEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TechDrawGui::TaskDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskDetail *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDraggerClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onHighlightMoved((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 2: _t->onXEdit(); break;
        case 3: _t->onYEdit(); break;
        case 4: _t->onRadiusEdit(); break;
        case 5: _t->onScaleTypeEdit(); break;
        case 6: _t->onScaleEdit(); break;
        case 7: _t->onReferenceEdit(); break;
        default: ;
        }
    }
}

const QMetaObject *TechDrawGui::TaskDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDetailENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::TaskDlgDetail"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject TechDrawGui::TaskDlgDetail::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgDetail, std::true_type>
    >,
    nullptr
} };

void TechDrawGui::TaskDlgDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TechDrawGui::TaskDlgDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPETaskDlgDetailENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
