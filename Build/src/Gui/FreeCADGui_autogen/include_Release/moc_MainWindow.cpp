/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/MainWindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEUrlHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEUrlHandlerENDCLASS = QtMocHelpers::stringData(
    "Gui::UrlHandler"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEUrlHandlerENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::UrlHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEUrlHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEUrlHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEUrlHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UrlHandler, std::true_type>
    >,
    nullptr
} };

void Gui::UrlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::UrlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::UrlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEUrlHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::UrlHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEMainWindowENDCLASS = QtMocHelpers::stringData(
    "Gui::MainWindow",
    "timeEvent",
    "",
    "windowStateChanged",
    "QWidget*",
    "workbenchActivated",
    "mainWindowClosed",
    "updateEditorActions",
    "setPaneText",
    "i",
    "text",
    "setUserSchema",
    "userSchema",
    "tile",
    "cascade",
    "closeActiveWindow",
    "closeAllDocuments",
    "close",
    "confirmSave",
    "const char*",
    "docName",
    "parent",
    "addCheckBox",
    "activateNextWindow",
    "activatePreviousWindow",
    "activateWorkbench",
    "whatsThis",
    "switchToTopLevelMode",
    "switchToDockedMode",
    "statusMessageChanged",
    "showMessage",
    "message",
    "timeout",
    "setRightSideMessage",
    "setWindowTitle",
    "string",
    "onSetActiveSubWindow",
    "window",
    "onWindowActivated",
    "QMdiSubWindow*",
    "tabCloseRequested",
    "index",
    "onWindowsMenuAboutToShow",
    "onToolBarMenuAboutToShow",
    "onDockWindowMenuAboutToShow",
    "_updateActions",
    "delayedStartup",
    "processMessages",
    "clearStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  230,    2, 0x06,    1 /* Public */,
       3,    1,  231,    2, 0x06,    2 /* Public */,
       5,    1,  234,    2, 0x06,    4 /* Public */,
       6,    0,  237,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  238,    2, 0x0a,    7 /* Public */,
       8,    2,  239,    2, 0x0a,    8 /* Public */,
      11,    1,  244,    2, 0x0a,   11 /* Public */,
      13,    0,  247,    2, 0x0a,   13 /* Public */,
      14,    0,  248,    2, 0x0a,   14 /* Public */,
      15,    0,  249,    2, 0x0a,   15 /* Public */,
      16,    1,  250,    2, 0x0a,   16 /* Public */,
      16,    0,  253,    2, 0x2a,   18 /* Public | MethodCloned */,
      18,    3,  254,    2, 0x0a,   19 /* Public */,
      18,    2,  261,    2, 0x2a,   23 /* Public | MethodCloned */,
      18,    1,  266,    2, 0x2a,   26 /* Public | MethodCloned */,
      23,    0,  269,    2, 0x0a,   28 /* Public */,
      24,    0,  270,    2, 0x0a,   29 /* Public */,
      25,    1,  271,    2, 0x0a,   30 /* Public */,
      26,    0,  274,    2, 0x0a,   32 /* Public */,
      27,    0,  275,    2, 0x0a,   33 /* Public */,
      28,    0,  276,    2, 0x0a,   34 /* Public */,
      29,    0,  277,    2, 0x0a,   35 /* Public */,
      30,    2,  278,    2, 0x0a,   36 /* Public */,
      30,    1,  283,    2, 0x2a,   39 /* Public | MethodCloned */,
      33,    1,  286,    2, 0x0a,   41 /* Public */,
      34,    1,  289,    2, 0x0a,   43 /* Public */,
      36,    1,  292,    2, 0x08,   45 /* Private */,
      38,    1,  295,    2, 0x08,   47 /* Private */,
      40,    1,  298,    2, 0x08,   49 /* Private */,
      42,    0,  301,    2, 0x08,   51 /* Private */,
      43,    0,  302,    2, 0x08,   52 /* Private */,
      44,    0,  303,    2, 0x08,   53 /* Private */,
      45,    0,  304,    2, 0x08,   54 /* Private */,
      46,    0,  305,    2, 0x08,   55 /* Private */,
      47,    1,  306,    2, 0x08,   56 /* Private */,
      48,    0,  309,    2, 0x08,   58 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   17,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 19, 0x80000000 | 4, QMetaType::Bool,   20,   21,   22,
    QMetaType::Int, 0x80000000 | 19, 0x80000000 | 4,   20,   21,
    QMetaType::Int, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 4,   37,
    QMetaType::Void, 0x80000000 | 39,    2,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'timeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'workbenchActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'mainWindowClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateEditorActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPaneText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setUserSchema'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cascade'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeActiveWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeAllDocuments'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'closeAllDocuments'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'confirmSave'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'confirmSave'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'confirmSave'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'activateNextWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activatePreviousWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activateWorkbench'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'whatsThis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToTopLevelMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToDockedMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setRightSideMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setWindowTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSetActiveSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'onWindowActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMdiSubWindow *, std::false_type>,
        // method 'tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onWindowsMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToolBarMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDockWindowMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delayedStartup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QString> &, std::false_type>,
        // method 'clearStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeEvent(); break;
        case 1: _t->windowStateChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 2: _t->workbenchActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->mainWindowClosed(); break;
        case 4: _t->updateEditorActions(); break;
        case 5: _t->setPaneText((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->setUserSchema((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->tile(); break;
        case 8: _t->cascade(); break;
        case 9: _t->closeActiveWindow(); break;
        case 10: { bool _r = _t->closeAllDocuments((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->closeAllDocuments();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->confirmSave((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->confirmSave((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->confirmSave((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->activateNextWindow(); break;
        case 16: _t->activatePreviousWindow(); break;
        case 17: _t->activateWorkbench((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->whatsThis(); break;
        case 19: _t->switchToTopLevelMode(); break;
        case 20: _t->switchToDockedMode(); break;
        case 21: _t->statusMessageChanged(); break;
        case 22: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->setRightSideMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->setWindowTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->onSetActiveSubWindow((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 27: _t->onWindowActivated((*reinterpret_cast< std::add_pointer_t<QMdiSubWindow*>>(_a[1]))); break;
        case 28: _t->tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->onWindowsMenuAboutToShow(); break;
        case 30: _t->onToolBarMenuAboutToShow(); break;
        case 31: _t->onDockWindowMenuAboutToShow(); break;
        case 32: _t->_updateActions(); break;
        case 33: _t->delayedStartup(); break;
        case 34: _t->processMessages((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        case 35: _t->clearStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::timeEvent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (_t _q_method = &MainWindow::windowStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (_t _q_method = &MainWindow::workbenchActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::mainWindowClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void Gui::MainWindow::timeEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gui::MainWindow::windowStateChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::MainWindow::workbenchActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gui::MainWindow::mainWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
