/****************************************************************************
** Meta object code from reading C++ file 'TaskAttacher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Part/Gui/TaskAttacher.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskAttacher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartGuiSCOPETaskAttacherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPETaskAttacherENDCLASS = QtMocHelpers::stringData(
    "PartGui::TaskAttacher",
    "onAttachmentOffsetChanged",
    "",
    "idx",
    "onAttachmentOffsetXChanged",
    "onAttachmentOffsetYChanged",
    "onAttachmentOffsetZChanged",
    "onAttachmentOffsetYawChanged",
    "onAttachmentOffsetPitchChanged",
    "onAttachmentOffsetRollChanged",
    "onCheckFlip",
    "onRefName1",
    "text",
    "onRefName2",
    "onRefName3",
    "onRefName4",
    "onButtonRef1",
    "checked",
    "onButtonRef2",
    "onButtonRef3",
    "onButtonRef4",
    "onModeSelect",
    "visibilityAutomation",
    "opening_not_closing"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPETaskAttacherENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  146,    2, 0x08,    1 /* Private */,
       4,    1,  151,    2, 0x08,    4 /* Private */,
       5,    1,  154,    2, 0x08,    6 /* Private */,
       6,    1,  157,    2, 0x08,    8 /* Private */,
       7,    1,  160,    2, 0x08,   10 /* Private */,
       8,    1,  163,    2, 0x08,   12 /* Private */,
       9,    1,  166,    2, 0x08,   14 /* Private */,
      10,    1,  169,    2, 0x08,   16 /* Private */,
      11,    1,  172,    2, 0x08,   18 /* Private */,
      13,    1,  175,    2, 0x08,   20 /* Private */,
      14,    1,  178,    2, 0x08,   22 /* Private */,
      15,    1,  181,    2, 0x08,   24 /* Private */,
      16,    1,  184,    2, 0x08,   26 /* Private */,
      16,    0,  187,    2, 0x28,   28 /* Private | MethodCloned */,
      18,    1,  188,    2, 0x08,   29 /* Private */,
      18,    0,  191,    2, 0x28,   31 /* Private | MethodCloned */,
      19,    1,  192,    2, 0x08,   32 /* Private */,
      19,    0,  195,    2, 0x28,   34 /* Private | MethodCloned */,
      20,    1,  196,    2, 0x08,   35 /* Private */,
      20,    0,  199,    2, 0x28,   37 /* Private | MethodCloned */,
      21,    0,  200,    2, 0x08,   38 /* Private */,
      22,    1,  201,    2, 0x08,   39 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    2,    3,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject PartGui::TaskAttacher::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPETaskAttacherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPETaskAttacherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPETaskAttacherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskAttacher, std::true_type>,
        // method 'onAttachmentOffsetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onAttachmentOffsetXChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onAttachmentOffsetYChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onAttachmentOffsetZChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onAttachmentOffsetYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onAttachmentOffsetPitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onAttachmentOffsetRollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onCheckFlip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onRefName1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onRefName2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onRefName3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onRefName4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onButtonRef1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'onButtonRef1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonRef2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'onButtonRef2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonRef3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'onButtonRef3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonRef4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'onButtonRef4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModeSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibilityAutomation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PartGui::TaskAttacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskAttacher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAttachmentOffsetChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->onAttachmentOffsetXChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->onAttachmentOffsetYChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->onAttachmentOffsetZChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->onAttachmentOffsetYawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->onAttachmentOffsetPitchChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->onAttachmentOffsetRollChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->onCheckFlip((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onRefName1((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onRefName2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->onRefName3((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onRefName4((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->onButtonRef1((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onButtonRef1(); break;
        case 14: _t->onButtonRef2((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onButtonRef2(); break;
        case 16: _t->onButtonRef3((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onButtonRef3(); break;
        case 18: _t->onButtonRef4((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->onButtonRef4(); break;
        case 20: _t->onModeSelect(); break;
        case 21: _t->visibilityAutomation((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PartGui::TaskAttacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskAttacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPETaskAttacherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartGui::TaskAttacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS = QtMocHelpers::stringData(
    "PartGui::TaskDlgAttacher"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PartGui::TaskDlgAttacher::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgAttacher, std::true_type>
    >,
    nullptr
} };

void PartGui::TaskDlgAttacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PartGui::TaskDlgAttacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskDlgAttacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartGuiSCOPETaskDlgAttacherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartGui::TaskDlgAttacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
