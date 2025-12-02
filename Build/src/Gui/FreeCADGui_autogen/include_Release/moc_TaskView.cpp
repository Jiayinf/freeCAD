/****************************************************************************
** Meta object code from reading C++ file 'TaskView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/TaskView/TaskView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskGroup"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QSint::ActionBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskGroup, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TaskContent"))
        return static_cast< TaskContent*>(this);
    return QSint::ActionBox::qt_metacast(_clname);
}

int Gui::TaskView::TaskGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSint::ActionBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskBox"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSint::ActionGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskBox, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TaskContent"))
        return static_cast< TaskContent*>(this);
    return QSint::ActionGroup::qt_metacast(_clname);
}

int Gui::TaskView::TaskBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSint::ActionGroup::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskPanel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSint::ActionPanel::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPanel, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSint::ActionPanel::qt_metacast(_clname);
}

int Gui::TaskView::TaskPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSint::ActionPanel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskWidget"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWidget, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TaskContent"))
        return static_cast< TaskContent*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::TaskView::TaskWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskView",
    "taskUpdate",
    "",
    "accept",
    "reject",
    "helpRequested",
    "clicked",
    "QAbstractButton*",
    "button"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x09,    2 /* Protected */,
       4,    0,   46,    2, 0x09,    3 /* Protected */,
       5,    0,   47,    2, 0x09,    4 /* Protected */,
       6,    1,   48,    2, 0x09,    5 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskView::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskView, std::true_type>,
        // method 'taskUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'helpRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->taskUpdate(); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->helpRequested(); break;
        case 4: _t->clicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskView::*)();
            if (_t _q_method = &TaskView::taskUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Gui::TaskView::TaskView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int Gui::TaskView::TaskView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Gui::TaskView::TaskView::taskUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
