/****************************************************************************
** Meta object code from reading C++ file 'actiongroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/QSint/actionpanel/actiongroup.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actiongroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQSintSCOPEActionGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQSintSCOPEActionGroupENDCLASS = QtMocHelpers::stringData(
    "QSint::ActionGroup",
    "showHide",
    "",
    "setExpandable",
    "expandable",
    "setHeader",
    "enable",
    "setHeaderText",
    "title",
    "setHeaderIcon",
    "icon",
    "processHide",
    "processShow",
    "header",
    "headerText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQSintSCOPEActionGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   85, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    4 /* Public */,
       3,    1,   69,    2, 0x0a,    5 /* Public */,
       3,    0,   72,    2, 0x2a,    7 /* Public | MethodCloned */,
       5,    1,   73,    2, 0x0a,    8 /* Public */,
       5,    0,   76,    2, 0x2a,   10 /* Public | MethodCloned */,
       7,    1,   77,    2, 0x0a,   11 /* Public */,
       9,    1,   80,    2, 0x0a,   13 /* Public */,
      11,    0,   83,    2, 0x09,   15 /* Protected */,
      12,    0,   84,    2, 0x09,   16 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QPixmap,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(-1), 0,
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,
      14, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QSint::ActionGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQSintSCOPEActionGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQSintSCOPEActionGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQSintSCOPEActionGroupENDCLASS_t,
        // property 'expandable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'header'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'headerText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActionGroup, std::true_type>,
        // method 'showHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setExpandable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setExpandable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHeaderText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHeaderIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method 'processHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSint::ActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showHide(); break;
        case 1: _t->setExpandable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setExpandable(); break;
        case 3: _t->setHeader((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setHeader(); break;
        case 5: _t->setHeaderText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setHeaderIcon((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 7: _t->processHide(); break;
        case 8: _t->processShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isExpandable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasHeader(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->headerText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpandable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setHeaderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QSint::ActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSint::ActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQSintSCOPEActionGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSint::ActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
