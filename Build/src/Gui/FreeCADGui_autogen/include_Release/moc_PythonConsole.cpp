/****************************************************************************
** Meta object code from reading C++ file 'PythonConsole.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/PythonConsole.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonConsole.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEPythonConsoleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPythonConsoleENDCLASS = QtMocHelpers::stringData(
    "Gui::PythonConsole",
    "pendingSource",
    "",
    "onSaveHistoryAs",
    "onInsertFileName",
    "onCopyHistory",
    "onCopyCommand",
    "onClearConsole",
    "onFlush",
    "visibilityChanged",
    "visible"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPythonConsoleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    1,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PythonConsole::staticMetaObject = { {
    QMetaObject::SuperData::link<TextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPythonConsoleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPythonConsoleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPythonConsoleENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PythonConsole, std::true_type>,
        // method 'pendingSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveHistoryAs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCopyHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCopyCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearConsole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFlush'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Gui::PythonConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonConsole *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pendingSource(); break;
        case 1: _t->onSaveHistoryAs(); break;
        case 2: _t->onInsertFileName(); break;
        case 3: _t->onCopyHistory(); break;
        case 4: _t->onCopyCommand(); break;
        case 5: _t->onClearConsole(); break;
        case 6: _t->onFlush(); break;
        case 7: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PythonConsole::*)();
            if (_t _q_method = &PythonConsole::pendingSource; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Gui::PythonConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PythonConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPythonConsoleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(this);
    return TextEdit::qt_metacast(_clname);
}

int Gui::PythonConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Gui::PythonConsole::pendingSource()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
