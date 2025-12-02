/****************************************************************************
** Meta object code from reading C++ file 'CompassWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/Widgets/CompassWidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompassWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::CompassWidget",
    "angleChanged",
    "",
    "angle",
    "angleSet",
    "slotChangeAngle",
    "slotSpinBoxEnter",
    "newAngle",
    "resetAngle",
    "setToEast",
    "setToNorth",
    "setToWest",
    "setToSouth",
    "slotCWAdvance",
    "slotCCWAdvance"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    2 /* Public */,
       4,    1,   83,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   86,    2, 0x0a,    6 /* Public */,
       6,    1,   89,    2, 0x0a,    8 /* Public */,
       8,    0,   92,    2, 0x0a,   10 /* Public */,
       9,    0,   93,    2, 0x0a,   11 /* Public */,
      10,    0,   94,    2, 0x0a,   12 /* Public */,
      11,    0,   95,    2, 0x0a,   13 /* Public */,
      12,    0,   96,    2, 0x0a,   14 /* Public */,
      13,    0,   97,    2, 0x0a,   15 /* Public */,
      14,    0,   98,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechDrawGui::CompassWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS_t,
        // property 'angle'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CompassWidget, std::true_type>,
        // method 'angleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'angleSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotChangeAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotSpinBoxEnter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'resetAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setToEast'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setToNorth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setToWest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setToSouth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCWAdvance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCCWAdvance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TechDrawGui::CompassWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompassWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->angleChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->angleSet((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->slotChangeAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->slotSpinBoxEnter((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->resetAngle(); break;
        case 5: _t->setToEast(); break;
        case 6: _t->setToNorth(); break;
        case 7: _t->setToWest(); break;
        case 8: _t->setToSouth(); break;
        case 9: _t->slotCWAdvance(); break;
        case 10: _t->slotCCWAdvance(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CompassWidget::*)(double );
            if (_t _q_method = &CompassWidget::angleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CompassWidget::*)(double );
            if (_t _q_method = &CompassWidget::angleSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CompassWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->dialAngle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CompassWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDialAngle(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *TechDrawGui::CompassWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::CompassWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPECompassWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::CompassWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TechDrawGui::CompassWidget::angleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TechDrawGui::CompassWidget::angleSet(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
