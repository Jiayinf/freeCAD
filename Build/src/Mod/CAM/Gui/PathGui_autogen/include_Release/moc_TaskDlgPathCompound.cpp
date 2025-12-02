/****************************************************************************
** Meta object code from reading C++ file 'TaskDlgPathCompound.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/CAM/Gui/TaskDlgPathCompound.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskDlgPathCompound.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS = QtMocHelpers::stringData(
    "PathGui::TaskWidgetPathCompound"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PathGui::TaskWidgetPathCompound::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskWidgetPathCompound, std::true_type>
    >,
    nullptr
} };

void PathGui::TaskWidgetPathCompound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PathGui::TaskWidgetPathCompound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathGui::TaskWidgetPathCompound::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPathGuiSCOPETaskWidgetPathCompoundENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PathGui::TaskWidgetPathCompound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS = QtMocHelpers::stringData(
    "PathGui::TaskDlgPathCompound"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PathGui::TaskDlgPathCompound::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDlgPathCompound, std::true_type>
    >,
    nullptr
} };

void PathGui::TaskDlgPathCompound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PathGui::TaskDlgPathCompound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathGui::TaskDlgPathCompound::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPathGuiSCOPETaskDlgPathCompoundENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PathGui::TaskDlgPathCompound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
