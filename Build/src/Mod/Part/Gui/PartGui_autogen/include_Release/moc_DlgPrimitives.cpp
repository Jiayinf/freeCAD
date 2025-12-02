/****************************************************************************
** Meta object code from reading C++ file 'DlgPrimitives.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Part/Gui/DlgPrimitives.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPrimitives.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::AbstractPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::AbstractPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::AbstractPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::AbstractPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::AbstractPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEAbstractPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PartGui::AbstractPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::PlanePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::PlanePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlanePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::PlanePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::PlanePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PlanePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEPlanePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PlanePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::BoxPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::BoxPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoxPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::BoxPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::BoxPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::BoxPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEBoxPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::BoxPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::CylinderPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::CylinderPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CylinderPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::CylinderPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::CylinderPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::CylinderPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPECylinderPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::CylinderPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEConePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEConePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::ConePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEConePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::ConePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEConePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEConePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEConePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::ConePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::ConePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::ConePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEConePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::ConePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPESpherePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPESpherePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::SpherePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPESpherePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::SpherePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPESpherePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPESpherePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPESpherePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpherePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::SpherePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::SpherePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::SpherePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPESpherePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::SpherePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::EllipsoidPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::EllipsoidPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EllipsoidPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::EllipsoidPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::EllipsoidPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::EllipsoidPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEEllipsoidPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::EllipsoidPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPETorusPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPETorusPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::TorusPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPETorusPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::TorusPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPETorusPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPETorusPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPETorusPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TorusPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::TorusPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::TorusPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TorusPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPETorusPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::TorusPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::PrismPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::PrismPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrismPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::PrismPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::PrismPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PrismPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEPrismPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PrismPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::WedgePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::WedgePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WedgePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::WedgePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::WedgePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::WedgePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEWedgePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::WedgePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::HelixPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::HelixPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HelixPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::HelixPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::HelixPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::HelixPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEHelixPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::HelixPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::SpiralPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::SpiralPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpiralPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::SpiralPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::SpiralPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::SpiralPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPESpiralPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::SpiralPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPECirclePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPECirclePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::CirclePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPECirclePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::CirclePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPECirclePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPECirclePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPECirclePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CirclePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::CirclePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::CirclePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::CirclePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPECirclePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::CirclePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::EllipsePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::EllipsePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EllipsePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::EllipsePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::EllipsePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::EllipsePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEEllipsePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::EllipsePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::PolygonPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::PolygonPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PolygonPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::PolygonPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::PolygonPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PolygonPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEPolygonPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PolygonPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPELinePrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPELinePrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::LinePrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPELinePrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::LinePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPELinePrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPELinePrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPELinePrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinePrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::LinePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::LinePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::LinePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPELinePrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::LinePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS = QtMocHelpers::stringData(
    "PartGui::VertexPrimitive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::VertexPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VertexPrimitive, std::true_type>
    >,
    nullptr
} };

void PartGui::VertexPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::VertexPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::VertexPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEVertexPrimitiveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::VertexPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS = QtMocHelpers::stringData(
    "PartGui::DlgPrimitives"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::DlgPrimitives::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgPrimitives, std::true_type>
    >,
    nullptr
} };

void PartGui::DlgPrimitives::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::DlgPrimitives::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::DlgPrimitives::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPEDlgPrimitivesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartGui::DlgPrimitives::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPELocationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPELocationENDCLASS = QtMocHelpers::stringData(
    "PartGui::Location"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPELocationENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::Location::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPELocationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPELocationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPELocationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Location, std::true_type>
    >,
    nullptr
} };

void PartGui::Location::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::Location::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::Location::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPELocationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartGui::Location::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesENDCLASS = QtMocHelpers::stringData(
    "PartGui::TaskPrimitives"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPETaskPrimitivesENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::TaskPrimitives::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPETaskPrimitivesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPrimitives, std::true_type>
    >,
    nullptr
} };

void PartGui::TaskPrimitives::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::TaskPrimitives::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskPrimitives::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartGui::TaskPrimitives::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS = QtMocHelpers::stringData(
    "PartGui::TaskPrimitivesEdit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::TaskPrimitivesEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPrimitivesEdit, std::true_type>
    >,
    nullptr
} };

void PartGui::TaskPrimitivesEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::TaskPrimitivesEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskPrimitivesEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPETaskPrimitivesEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartGui::TaskPrimitivesEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
