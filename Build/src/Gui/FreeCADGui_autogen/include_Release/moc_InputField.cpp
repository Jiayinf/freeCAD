/****************************************************************************
** Meta object code from reading C++ file 'InputField.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/InputField.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputField.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEInputFieldENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEInputFieldENDCLASS = QtMocHelpers::stringData(
    "Gui::InputField",
    "valueChanged",
    "",
    "Base::Quantity",
    "parseError",
    "errorText",
    "newInput",
    "text",
    "updateIconLabel",
    "prefPath",
    "singleStep",
    "maximum",
    "minimum",
    "rawValue",
    "historySize",
    "unit",
    "precision",
    "format",
    "quantity",
    "quantityString",
    "rawText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEInputFieldENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      12,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,   13 /* Public */,
       1,    1,   47,    2, 0x06,   15 /* Public */,
       4,    1,   50,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   53,    2, 0x09,   19 /* Protected */,
       8,    1,   56,    2, 0x09,   21 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       9, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::Double, 0x00015103, uint(-1), 0,
      12, QMetaType::Double, 0x00015103, uint(-1), 0,
      13, QMetaType::Double, 0x00015003, uint(0), 0,
      14, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, QMetaType::QString, 0x00015003, uint(-1), 0,
      16, QMetaType::Int, 0x00015103, uint(-1), 0,
      17, QMetaType::QString, 0x00015103, uint(-1), 0,
      18, 0x80000000 | 3, 0x0001500b, uint(0), 0,
      19, QMetaType::QString, 0x00015103, uint(-1), 0,
      20, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::InputField::staticMetaObject = { {
    QMetaObject::SuperData::link<ExpressionLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEInputFieldENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEInputFieldENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEInputFieldENDCLASS_t,
        // property 'prefPath'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'singleStep'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'rawValue'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'historySize'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'unit'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'precision'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'format'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quantity'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // property 'quantityString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rawText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InputField, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Base::Quantity &, std::false_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'parseError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'newInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateIconLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Gui::InputField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<Base::Quantity>>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->parseError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->newInput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->updateIconLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Base::Quantity >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputField::*)(const Base::Quantity & );
            if (_t _q_method = &InputField::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputField::*)(double );
            if (_t _q_method = &InputField::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputField::*)(const QString & );
            if (_t _q_method = &InputField::parseError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->rawValue(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->historySize(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getUnitText(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getFormat(); break;
        case 9: *reinterpret_cast< Base::Quantity*>(_v) = _t->getQuantity(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getQuantityString(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->rawText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setHistorySize(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setUnitText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setFormat(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setValue(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 10: _t->setQuantityString(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setRawText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Gui::InputField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::InputField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEInputFieldENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExpressionWidget"))
        return static_cast< ExpressionWidget*>(this);
    return ExpressionLineEdit::qt_metacast(_clname);
}

int Gui::InputField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExpressionLineEdit::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Gui::InputField::valueChanged(const Base::Quantity & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::InputField::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::InputField::parseError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
