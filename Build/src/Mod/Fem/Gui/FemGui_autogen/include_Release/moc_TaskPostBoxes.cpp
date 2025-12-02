/****************************************************************************
** Meta object code from reading C++ file 'TaskPostBoxes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/TaskPostBoxes.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskPostBoxes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPEPointMarkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPEPointMarkerENDCLASS = QtMocHelpers::stringData(
    "FemGui::PointMarker"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPEPointMarkerENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::PointMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPEPointMarkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPEPointMarkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPEPointMarkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PointMarker, std::true_type>
    >,
    nullptr
} };

void FemGui::PointMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::PointMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::PointMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPEPointMarkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FemGui::PointMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS = QtMocHelpers::stringData(
    "FemGui::DataAlongLineMarker",
    "PointsChanged",
    "",
    "x1",
    "y1",
    "z1",
    "x2",
    "y2",
    "z2"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS[] = {

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
       1,    6,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::DataAlongLineMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<PointMarker::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataAlongLineMarker, std::true_type>,
        // method 'PointsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void FemGui::DataAlongLineMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataAlongLineMarker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PointsChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataAlongLineMarker::*)(double , double , double , double , double , double );
            if (_t _q_method = &DataAlongLineMarker::PointsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FemGui::DataAlongLineMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::DataAlongLineMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPEDataAlongLineMarkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PointMarker::qt_metacast(_clname);
}

int FemGui::DataAlongLineMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PointMarker::qt_metacall(_c, _id, _a);
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
void FemGui::DataAlongLineMarker::PointsChanged(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostBoxENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostBox"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostBoxENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostBox::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostBox, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int FemGui::TaskPostBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgPostENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgPostENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskDlgPost"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskDlgPostENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskDlgPost::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgPostENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskDlgPostENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgPostENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgPost, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskDlgPost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskDlgPost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgPost::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskDlgPostENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int FemGui::TaskDlgPost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDisplayENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDisplayENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostDisplay"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostDisplayENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDisplayENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostDisplayENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDisplayENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostDisplay, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDisplayENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostFunctionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostFunctionENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostFunction"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostFunctionENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostFunction::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostFunctionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostFunctionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostFunctionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostFunction, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostFunctionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostDataAlongLine"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostDataAlongLine::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostDataAlongLine, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostDataAlongLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostDataAlongLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDataAlongLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAlongLineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDataAlongLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostDataAtPoint",
    "PointsChanged",
    "",
    "x",
    "y",
    "z"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS[] = {

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
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::TaskPostDataAtPoint::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostDataAtPoint, std::true_type>,
        // method 'PointsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskPostDataAtPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostDataAtPoint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PointsChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostDataAtPoint::*)(double , double , double );
            if (_t _q_method = &TaskPostDataAtPoint::PointsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FemGui::TaskPostDataAtPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDataAtPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostDataAtPointENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDataAtPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
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
void FemGui::TaskPostDataAtPoint::PointsChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostClipENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostClipENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostClip",
    "emitAddedFunction",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostClipENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostClip::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostClipENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostClipENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostClipENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostClip, std::true_type>,
        // method 'emitAddedFunction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskPostClip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostClip *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitAddedFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostClip::*)();
            if (_t _q_method = &TaskPostClip::emitAddedFunction; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *FemGui::TaskPostClip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostClip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostClipENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostClip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
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
void FemGui::TaskPostClip::emitAddedFunction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostContoursENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostContoursENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostContours"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostContoursENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostContours::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostContoursENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostContoursENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostContoursENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostContours, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostContours::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostContours::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostContours::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostContoursENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostContours::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostCutENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostCutENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostCut",
    "emitAddedFunction",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostCutENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostCut::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostCutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostCutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostCutENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostCut, std::true_type>,
        // method 'emitAddedFunction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FemGui::TaskPostCut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostCut *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitAddedFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostCut::*)();
            if (_t _q_method = &TaskPostCut::emitAddedFunction; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *FemGui::TaskPostCut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostCut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostCutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostCut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
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
void FemGui::TaskPostCut::emitAddedFunction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostScalarClip"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostScalarClip::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostScalarClip, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostScalarClip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostScalarClip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostScalarClip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostScalarClipENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostScalarClip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS = QtMocHelpers::stringData(
    "FemGui::TaskPostWarpVector"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject FemGui::TaskPostWarpVector::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskPostWarpVector, std::true_type>
    >,
    nullptr
} };

void FemGui::TaskPostWarpVector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::TaskPostWarpVector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostWarpVector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPETaskPostWarpVectorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostWarpVector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
