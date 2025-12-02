/****************************************************************************
** Meta object code from reading C++ file 'PropertyItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/propertyeditor/PropertyItem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExpressionBinding"))
        return static_cast< ExpressionBinding*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyStringItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyStringItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyStringItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyStringItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyStringItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyStringItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyStringItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyFontItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyFontItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFontItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyFontItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyFontItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyFontItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFontItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyFontItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertySeparatorItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertySeparatorItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertySeparatorItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertySeparatorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertySeparatorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertySeparatorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertySeparatorItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertySeparatorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyIntegerItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyIntegerItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyIntegerItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyIntegerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyIntegerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyIntegerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyIntegerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyIntegerConstraintItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyIntegerConstraintItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyIntegerConstraintItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyIntegerConstraintItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyIntegerConstraintItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyIntegerConstraintItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerConstraintItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyIntegerConstraintItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyFloatItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyFloatItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFloatItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyFloatItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyFloatItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyFloatItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyFloatItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyUnitItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyUnitItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyUnitItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyUnitItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyUnitItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyUnitItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyUnitItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyUnitConstraintItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyUnitConstraintItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyUnitItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyUnitConstraintItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyUnitConstraintItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyUnitConstraintItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyUnitConstraintItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyUnitConstraintItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyUnitItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyUnitConstraintItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyUnitItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyFloatConstraintItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyFloatConstraintItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFloatConstraintItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyFloatConstraintItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyFloatConstraintItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyFloatConstraintItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatConstraintItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyFloatConstraintItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyPrecisionItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyPrecisionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyFloatConstraintItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyPrecisionItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyPrecisionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyPrecisionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyPrecisionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPrecisionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyFloatConstraintItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyPrecisionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyFloatConstraintItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyAngleItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyAngleItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyUnitConstraintItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyAngleItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyAngleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyAngleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyAngleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyAngleItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyUnitConstraintItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyAngleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyUnitConstraintItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyBoolItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyBoolItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyBoolItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyBoolItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyBoolItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyBoolItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyBoolItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyBoolItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyVectorItem",
    "x",
    "y",
    "z"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS[] = {

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
       1, QMetaType::Double, 0x00115103, uint(-1), 0,
       2, QMetaType::Double, 0x00115103, uint(-1), 0,
       3, QMetaType::Double, 0x00115103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyVectorItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS_t,
        // property 'x'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'z'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyVectorItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyVectorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyVectorItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyVectorItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject *Gui::PropertyEditor::PropertyVectorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyVectorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyVectorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyEditorWidget",
    "buttonClick",
    "",
    "valueChanged",
    "setValue"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    1,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   36,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyEditorWidget, std::true_type>,
        // method 'buttonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonClick(); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyEditorWidget::*)();
            if (_t _q_method = &PropertyEditorWidget::buttonClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyEditorWidget::*)(const QVariant & );
            if (_t _q_method = &PropertyEditorWidget::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Gui::PropertyEditor::PropertyEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEditorWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Gui::PropertyEditor::PropertyEditorWidget::buttonClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gui::PropertyEditor::PropertyEditorWidget::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::VectorListWidget",
    "buttonClicked",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::VectorListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyEditorWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VectorListWidget, std::true_type>,
        // method 'buttonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::VectorListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::VectorListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::VectorListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEVectorListWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyEditorWidget::qt_metacast(_clname);
}

int Gui::PropertyEditor::VectorListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyEditorWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyVectorListItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyVectorListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyVectorListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyVectorListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyVectorListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyVectorListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyVectorListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyVectorDistanceItem",
    "x",
    "Base::Quantity",
    "y",
    "z"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x0011510b, uint(-1), 0,
       3, 0x80000000 | 2, 0x0011510b, uint(-1), 0,
       4, 0x80000000 | 2, 0x0011510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyVectorDistanceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS_t,
        // property 'x'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // property 'z'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyVectorDistanceItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyVectorDistanceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyVectorDistanceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Base::Quantity*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< Base::Quantity*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< Base::Quantity*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyVectorDistanceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< Base::Quantity*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Gui::PropertyEditor::PropertyVectorDistanceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyVectorDistanceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyVectorDistanceItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyVectorDistanceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyPositionItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyPositionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyVectorDistanceItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyPositionItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyPositionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyPositionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyPositionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPositionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyVectorDistanceItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyPositionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyVectorDistanceItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyDirectionItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyDirectionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyVectorDistanceItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyDirectionItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyDirectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyDirectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyDirectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyDirectionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyVectorDistanceItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyDirectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyVectorDistanceItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyMatrixItem",
    "A11",
    "A12",
    "A13",
    "A14",
    "A21",
    "A22",
    "A23",
    "A24",
    "A31",
    "A32",
    "A33",
    "A34",
    "A41",
    "A42",
    "A43",
    "A44"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      16,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00115103, uint(-1), 0,
       2, QMetaType::Double, 0x00115103, uint(-1), 0,
       3, QMetaType::Double, 0x00115103, uint(-1), 0,
       4, QMetaType::Double, 0x00115103, uint(-1), 0,
       5, QMetaType::Double, 0x00115103, uint(-1), 0,
       6, QMetaType::Double, 0x00115103, uint(-1), 0,
       7, QMetaType::Double, 0x00115103, uint(-1), 0,
       8, QMetaType::Double, 0x00115103, uint(-1), 0,
       9, QMetaType::Double, 0x00115103, uint(-1), 0,
      10, QMetaType::Double, 0x00115103, uint(-1), 0,
      11, QMetaType::Double, 0x00115103, uint(-1), 0,
      12, QMetaType::Double, 0x00115103, uint(-1), 0,
      13, QMetaType::Double, 0x00115103, uint(-1), 0,
      14, QMetaType::Double, 0x00115103, uint(-1), 0,
      15, QMetaType::Double, 0x00115103, uint(-1), 0,
      16, QMetaType::Double, 0x00115103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyMatrixItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS_t,
        // property 'A11'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A12'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A13'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A14'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A21'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A22'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A23'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A24'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A31'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A32'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A33'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A34'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A41'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A42'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A43'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'A44'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyMatrixItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyMatrixItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyMatrixItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getA11(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getA12(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getA13(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getA14(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getA21(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getA22(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getA23(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getA24(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getA31(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getA32(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getA33(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->getA34(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->getA41(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->getA42(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->getA43(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->getA44(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyMatrixItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setA11(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setA12(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setA13(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setA14(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setA21(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setA22(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setA23(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setA24(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setA31(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setA32(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setA33(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setA34(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setA41(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setA42(*reinterpret_cast< double*>(_v)); break;
        case 14: _t->setA43(*reinterpret_cast< double*>(_v)); break;
        case 15: _t->setA44(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject *Gui::PropertyEditor::PropertyMatrixItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyMatrixItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMatrixItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyMatrixItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyRotationItem",
    "Angle",
    "Base::Quantity",
    "Axis",
    "Base::Vector3d"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x0011510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0011510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyRotationItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS_t,
        // property 'Angle'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // property 'Axis'
        QtPrivate::TypeAndForceComplete<Base::Vector3d, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyRotationItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyRotationItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Vector3d >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyRotationItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Base::Quantity*>(_v) = _t->getAngle(); break;
        case 1: *reinterpret_cast< Base::Vector3d*>(_v) = _t->getAxis(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyRotationItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAngle(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 1: _t->setAxis(*reinterpret_cast< Base::Vector3d*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Gui::PropertyEditor::PropertyRotationItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyRotationItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyRotationItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyRotationItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PlacementEditor",
    "updateValue",
    "",
    "v"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Bool,    3,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PlacementEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::LabelButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlacementEditor, std::true_type>,
        // method 'updateValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PlacementEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlacementEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *Gui::PropertyEditor::PlacementEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PlacementEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPlacementEditorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::LabelButton::qt_metacast(_clname);
}

int Gui::PropertyEditor::PlacementEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::LabelButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyPlacementItem",
    "Angle",
    "Base::Quantity",
    "Axis",
    "Base::Vector3d",
    "Position"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x0011510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0011510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0011510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyPlacementItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS_t,
        // property 'Angle'
        QtPrivate::TypeAndForceComplete<Base::Quantity, std::true_type>,
        // property 'Axis'
        QtPrivate::TypeAndForceComplete<Base::Vector3d, std::true_type>,
        // property 'Position'
        QtPrivate::TypeAndForceComplete<Base::Vector3d, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyPlacementItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyPlacementItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Vector3d >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyPlacementItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Base::Quantity*>(_v) = _t->getAngle(); break;
        case 1: *reinterpret_cast< Base::Vector3d*>(_v) = _t->getAxis(); break;
        case 2: *reinterpret_cast< Base::Vector3d*>(_v) = _t->getPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyPlacementItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAngle(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 1: _t->setAxis(*reinterpret_cast< Base::Vector3d*>(_v)); break;
        case 2: _t->setPosition(*reinterpret_cast< Base::Vector3d*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Gui::PropertyEditor::PropertyPlacementItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyPlacementItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPlacementItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyPlacementItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyEnumItem",
    "Enum"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QStringList, 0x00115103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyEnumItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS_t,
        // property 'Enum'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyEnumItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyEnumItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyEnumItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->getEnum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyEnumItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnum(*reinterpret_cast< QStringList*>(_v)); break;
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

const QMetaObject *Gui::PropertyEditor::PropertyEnumItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyEnumItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyEnumItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyEnumButton",
    "picked",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyEnumButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyEnumButton, std::true_type>,
        // method 'picked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyEnumButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEnumButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->picked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyEnumButton::*)();
            if (_t _q_method = &PropertyEnumButton::picked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyEnumButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyEnumButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyEnumButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyEnumButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Gui::PropertyEditor::PropertyEnumButton::picked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyStringListItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyStringListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyStringListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyStringListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyStringListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyStringListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyStringListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyStringListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyFloatListItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyFloatListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFloatListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyFloatListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyFloatListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyFloatListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFloatListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyFloatListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyIntegerListItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyIntegerListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyIntegerListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyIntegerListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyIntegerListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyIntegerListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyIntegerListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyIntegerListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyColorItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyColorItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyColorItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyColorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyColorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyColorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyColorItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyColorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyMaterialItem",
    "AmbientColor",
    "DiffuseColor",
    "SpecularColor",
    "EmissiveColor",
    "Shininess",
    "Transparency"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00115103, uint(-1), 0,
       2, QMetaType::QColor, 0x00115103, uint(-1), 0,
       3, QMetaType::QColor, 0x00115103, uint(-1), 0,
       4, QMetaType::QColor, 0x00115103, uint(-1), 0,
       5, QMetaType::Float, 0x00115103, uint(-1), 0,
       6, QMetaType::Float, 0x00115103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyMaterialItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS_t,
        // property 'AmbientColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'DiffuseColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'SpecularColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'EmissiveColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'Shininess'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'Transparency'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyMaterialItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyMaterialItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyMaterialItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getAmbientColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getDiffuseColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getSpecularColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getEmissiveColor(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getShininess(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getTransparency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyMaterialItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbientColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setDiffuseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSpecularColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setEmissiveColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setShininess(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setTransparency(*reinterpret_cast< float*>(_v)); break;
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

const QMetaObject *Gui::PropertyEditor::PropertyMaterialItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyMaterialItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyMaterialItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyMaterialListItem",
    "AmbientColor",
    "DiffuseColor",
    "SpecularColor",
    "EmissiveColor",
    "Shininess",
    "Transparency"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00115103, uint(-1), 0,
       2, QMetaType::QColor, 0x00115103, uint(-1), 0,
       3, QMetaType::QColor, 0x00115103, uint(-1), 0,
       4, QMetaType::QColor, 0x00115103, uint(-1), 0,
       5, QMetaType::Float, 0x00115103, uint(-1), 0,
       6, QMetaType::Float, 0x00115103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyMaterialListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS_t,
        // property 'AmbientColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'DiffuseColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'SpecularColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'EmissiveColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'Shininess'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'Transparency'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyMaterialListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyMaterialListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyMaterialListItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getAmbientColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getDiffuseColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getSpecularColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getEmissiveColor(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getShininess(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getTransparency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyMaterialListItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbientColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setDiffuseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSpecularColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setEmissiveColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setShininess(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setTransparency(*reinterpret_cast< float*>(_v)); break;
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

const QMetaObject *Gui::PropertyEditor::PropertyMaterialListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyMaterialListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyMaterialListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyMaterialListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyFileItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyFileItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFileItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyFileItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyFileItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyFileItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyFileItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyFileItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyPathItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyPathItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyPathItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyPathItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyPathItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyPathItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyPathItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyPathItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyTransientFileItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyTransientFileItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyTransientFileItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyTransientFileItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyTransientFileItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyTransientFileItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyTransientFileItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyTransientFileItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::LinkSelection",
    "select",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::LinkSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkSelection, std::true_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::LinkSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkSelection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->select(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::LinkSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::LinkSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkSelectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::PropertyEditor::LinkSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::LinkLabel",
    "linkChanged",
    "",
    "onLinkActivated",
    "onEditClicked",
    "onLinkChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   41,    2, 0x09,    3 /* Protected */,
       4,    0,   44,    2, 0x09,    5 /* Protected */,
       5,    0,   45,    2, 0x09,    6 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::LinkLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkLabel, std::true_type>,
        // method 'linkChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'onLinkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onEditClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLinkChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::LinkLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->onLinkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onEditClicked(); break;
        case 3: _t->onLinkChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkLabel::*)(const QVariant & );
            if (_t _q_method = &LinkLabel::linkChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Gui::PropertyEditor::LinkLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::LinkLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPELinkLabelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::PropertyEditor::LinkLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Gui::PropertyEditor::LinkLabel::linkChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyLinkItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyLinkItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyLinkItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyLinkItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyLinkItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyLinkItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyLinkItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS = QtMocHelpers::stringData(
    "Gui::PropertyEditor::PropertyLinkListItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Gui::PropertyEditor::PropertyLinkListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyLinkItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyLinkListItem, std::true_type>
    >,
    nullptr
} };

void Gui::PropertyEditor::PropertyLinkListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Gui::PropertyEditor::PropertyLinkListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyLinkListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEPropertyEditorSCOPEPropertyLinkListItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyLinkItem::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyLinkListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyLinkItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
