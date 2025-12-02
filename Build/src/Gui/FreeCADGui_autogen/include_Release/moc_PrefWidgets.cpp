/****************************************************************************
** Meta object code from reading C++ file 'PrefWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/PrefWidgets.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrefWidgets.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEPrefSpinBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefSpinBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefSpinBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefSpinBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefSpinBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int Gui::PrefSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefDoubleSpinBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefDoubleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefDoubleSpinBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefDoubleSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefDoubleSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefDoubleSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int Gui::PrefDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefLineEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefLineEditENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefLineEdit",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefLineEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefLineEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefLineEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefLineEditENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefLineEdit, std::true_type>
    >,
    nullptr
} };

void Gui::PrefLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefLineEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int Gui::PrefLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefTextEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefTextEditENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefTextEdit",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefTextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefTextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefTextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefTextEditENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefTextEdit, std::true_type>
    >,
    nullptr
} };

void Gui::PrefTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefTextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int Gui::PrefTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefFileChooserENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefFileChooserENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefFileChooser",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefFileChooserENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefFileChooser::staticMetaObject = { {
    QMetaObject::SuperData::link<FileChooser::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefFileChooserENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefFileChooserENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefFileChooserENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefFileChooser, std::true_type>
    >,
    nullptr
} };

void Gui::PrefFileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefFileChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefFileChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefFileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefFileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefFileChooserENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return FileChooser::qt_metacast(_clname);
}

int Gui::PrefFileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileChooser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefComboBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefComboBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefComboBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefComboBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefComboBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefComboBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefComboBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefComboBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefComboBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QComboBox::qt_metacast(_clname);
}

int Gui::PrefComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefCheckBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefCheckBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefCheckBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefCheckBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefCheckBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefCheckBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefCheckBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefCheckBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefCheckBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefCheckBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefCheckBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int Gui::PrefCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefRadioButtonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefRadioButtonENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefRadioButton",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefRadioButtonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefRadioButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QRadioButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefRadioButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefRadioButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefRadioButtonENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefRadioButton, std::true_type>
    >,
    nullptr
} };

void Gui::PrefRadioButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefRadioButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefRadioButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefRadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefRadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefRadioButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QRadioButton::qt_metacast(_clname);
}

int Gui::PrefRadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefSliderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefSliderENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefSlider",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefSliderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefSliderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefSliderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefSliderENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefSlider, std::true_type>
    >,
    nullptr
} };

void Gui::PrefSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefSliderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QSlider::qt_metacast(_clname);
}

int Gui::PrefSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefColorButtonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefColorButtonENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefColorButton",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefColorButtonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<ColorButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefColorButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefColorButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefColorButtonENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefColorButton, std::true_type>
    >,
    nullptr
} };

void Gui::PrefColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefColorButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return ColorButton::qt_metacast(_clname);
}

int Gui::PrefColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefUnitSpinBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefUnitSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QuantitySpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefUnitSpinBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefUnitSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefUnitSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefUnitSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefUnitSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefUnitSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefUnitSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QuantitySpinBox::qt_metacast(_clname);
}

int Gui::PrefUnitSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuantitySpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefQuantitySpinBox",
    "prefEntry",
    "prefPath",
    "historySize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefQuantitySpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QuantitySpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'historySize'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefQuantitySpinBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefQuantitySpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefQuantitySpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->historySize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefQuantitySpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        case 2: _t->setHistorySize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefQuantitySpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefQuantitySpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefQuantitySpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QuantitySpinBox::qt_metacast(_clname);
}

int Gui::PrefQuantitySpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuantitySpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPrefFontBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPrefFontBoxENDCLASS = QtMocHelpers::stringData(
    "Gui::PrefFontBox",
    "prefEntry",
    "prefPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPrefFontBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       2, QMetaType::QByteArray, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PrefFontBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QFontComboBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPrefFontBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPrefFontBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPrefFontBoxENDCLASS_t,
        // property 'prefEntry'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefFontBox, std::true_type>
    >,
    nullptr
} };

void Gui::PrefFontBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefFontBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefFontBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PrefFontBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PrefFontBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPrefFontBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PrefWidget"))
        return static_cast< PrefWidget*>(this);
    return QFontComboBox::qt_metacast(_clname);
}

int Gui::PrefFontBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFontComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
