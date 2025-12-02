/****************************************************************************
** Meta object code from reading C++ file 'TaskRobot6Axis.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Robot/Gui/TaskRobot6Axis.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskRobot6Axis.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS = QtMocHelpers::stringData(
    "RobotGui::TaskRobot6Axis",
    "setAxis",
    "",
    "A1",
    "A2",
    "A3",
    "A4",
    "A5",
    "A6",
    "Base::Placement",
    "Tcp",
    "changeSliderA1",
    "value",
    "changeSliderA2",
    "changeSliderA3",
    "changeSliderA4",
    "changeSliderA5",
    "changeSliderA6",
    "createPlacementDlg"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    7,   62,    2, 0x0a,    1 /* Public */,
      11,    1,   77,    2, 0x0a,    9 /* Public */,
      13,    1,   80,    2, 0x0a,   11 /* Public */,
      14,    1,   83,    2, 0x0a,   13 /* Public */,
      15,    1,   86,    2, 0x0a,   15 /* Public */,
      16,    1,   89,    2, 0x0a,   17 /* Public */,
      17,    1,   92,    2, 0x0a,   19 /* Public */,
      18,    0,   95,    2, 0x0a,   21 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 9,    3,    4,    5,    6,    7,    8,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RobotGui::TaskRobot6Axis::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskRobot6Axis, std::true_type>,
        // method 'setAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Base::Placement &, std::false_type>,
        // method 'changeSliderA1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeSliderA2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeSliderA3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeSliderA4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeSliderA5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeSliderA6'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'createPlacementDlg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RobotGui::TaskRobot6Axis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskRobot6Axis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAxis((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<Base::Placement>>(_a[7]))); break;
        case 1: _t->changeSliderA1((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->changeSliderA2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->changeSliderA3((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeSliderA4((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->changeSliderA5((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->changeSliderA6((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->createPlacementDlg(); break;
        default: ;
        }
    }
}

const QMetaObject *RobotGui::TaskRobot6Axis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotGui::TaskRobot6Axis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRobotGuiSCOPETaskRobot6AxisENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int RobotGui::TaskRobot6Axis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
