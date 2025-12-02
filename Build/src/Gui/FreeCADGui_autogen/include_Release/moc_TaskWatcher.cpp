/****************************************************************************
** Meta object code from reading C++ file 'TaskWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/TaskView/TaskWatcher.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskWatcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskWatcher"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWatcher, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionFilter"))
        return static_cast< Gui::SelectionFilter*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::TaskView::TaskWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskWatcherCommands"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskWatcherCommands::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskWatcher::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWatcherCommands, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskWatcherCommands::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskWatcherCommands::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskWatcherCommands::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskWatcher::qt_metacast(_clname);
}

int Gui::TaskView::TaskWatcherCommands::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskWatcher::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskWatcherCommandsEmptyDoc"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskWatcherCommandsEmptyDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskWatcherCommands::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWatcherCommandsEmptyDoc, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskWatcherCommandsEmptyDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskWatcherCommandsEmptyDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskWatcherCommandsEmptyDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptyDocENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskWatcherCommands::qt_metacast(_clname);
}

int Gui::TaskView::TaskWatcherCommandsEmptyDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskWatcherCommands::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS = QtMocHelpers::stringData(
    "Gui::TaskView::TaskWatcherCommandsEmptySelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::TaskView::TaskWatcherCommandsEmptySelection::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskWatcherCommands::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWatcherCommandsEmptySelection, std::true_type>
    >,
    nullptr
} };

void Gui::TaskView::TaskWatcherCommandsEmptySelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::TaskView::TaskWatcherCommandsEmptySelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskWatcherCommandsEmptySelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPETaskViewSCOPETaskWatcherCommandsEmptySelectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskWatcherCommands::qt_metacast(_clname);
}

int Gui::TaskView::TaskWatcherCommandsEmptySelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskWatcherCommands::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
