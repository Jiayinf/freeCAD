/****************************************************************************
** Meta object code from reading C++ file 'ReportView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/ReportView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReportView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS = QtMocHelpers::stringData(
    "Gui::DockWnd::ReportView"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::DockWnd::ReportView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ReportView, std::true_type>
    >,
    nullptr
} };

void Gui::DockWnd::ReportView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::DockWnd::ReportView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWnd::ReportView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS = QtMocHelpers::stringData(
    "Gui::DockWnd::ReportOutput",
    "onSaveAs",
    "",
    "onToggleError",
    "onToggleWarning",
    "onToggleLogMessage",
    "onToggleNormalMessage",
    "onToggleCritical",
    "onToggleShowReportViewOnWarning",
    "onToggleShowReportViewOnError",
    "onToggleShowReportViewOnNormalMessage",
    "onToggleShowReportViewOnCritical",
    "onToggleShowReportViewOnLogMessage",
    "onToggleRedirectPythonStdout",
    "onToggleRedirectPythonStderr",
    "onToggleGoToEnd"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS[] = {

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
       1,    0,   98,    2, 0x0a,    1 /* Public */,
       3,    0,   99,    2, 0x0a,    2 /* Public */,
       4,    0,  100,    2, 0x0a,    3 /* Public */,
       5,    0,  101,    2, 0x0a,    4 /* Public */,
       6,    0,  102,    2, 0x0a,    5 /* Public */,
       7,    0,  103,    2, 0x0a,    6 /* Public */,
       8,    0,  104,    2, 0x0a,    7 /* Public */,
       9,    0,  105,    2, 0x0a,    8 /* Public */,
      10,    0,  106,    2, 0x0a,    9 /* Public */,
      11,    0,  107,    2, 0x0a,   10 /* Public */,
      12,    0,  108,    2, 0x0a,   11 /* Public */,
      13,    0,  109,    2, 0x0a,   12 /* Public */,
      14,    0,  110,    2, 0x0a,   13 /* Public */,
      15,    0,  111,    2, 0x0a,   14 /* Public */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::DockWnd::ReportOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ReportOutput, std::true_type>,
        // method 'onSaveAs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleLogMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleNormalMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleCritical'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleShowReportViewOnWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleShowReportViewOnError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleShowReportViewOnNormalMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleShowReportViewOnCritical'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleShowReportViewOnLogMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleRedirectPythonStdout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleRedirectPythonStderr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleGoToEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::DockWnd::ReportOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSaveAs(); break;
        case 1: _t->onToggleError(); break;
        case 2: _t->onToggleWarning(); break;
        case 3: _t->onToggleLogMessage(); break;
        case 4: _t->onToggleNormalMessage(); break;
        case 5: _t->onToggleCritical(); break;
        case 6: _t->onToggleShowReportViewOnWarning(); break;
        case 7: _t->onToggleShowReportViewOnError(); break;
        case 8: _t->onToggleShowReportViewOnNormalMessage(); break;
        case 9: _t->onToggleShowReportViewOnCritical(); break;
        case 10: _t->onToggleShowReportViewOnLogMessage(); break;
        case 11: _t->onToggleRedirectPythonStdout(); break;
        case 12: _t->onToggleRedirectPythonStderr(); break;
        case 13: _t->onToggleGoToEnd(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Gui::DockWnd::ReportOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(this);
    if (!strcmp(_clname, "Base::ILogger"))
        return static_cast< Base::ILogger*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int Gui::DockWnd::ReportOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS = QtMocHelpers::stringData(
    "Gui::DockWnd::ReportOutputObserver"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::DockWnd::ReportOutputObserver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ReportOutputObserver, std::true_type>
    >,
    nullptr
} };

void Gui::DockWnd::ReportOutputObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::DockWnd::ReportOutputObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportOutputObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPEReportOutputObserverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::DockWnd::ReportOutputObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
