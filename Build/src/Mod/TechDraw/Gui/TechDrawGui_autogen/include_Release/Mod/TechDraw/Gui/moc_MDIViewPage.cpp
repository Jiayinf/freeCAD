/****************************************************************************
** Meta object code from reading C++ file 'MDIViewPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../FreeCAD/src/Mod/TechDraw/Gui/MDIViewPage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MDIViewPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS = QtMocHelpers::stringData(
    "TechDrawGui::MDIViewPage",
    "viewAll",
    "",
    "saveSVG",
    "saveDXF",
    "savePDF",
    "toggleFrame",
    "toggleKeepUpdated",
    "sceneSelectionChanged",
    "printAll"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS[] = {

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
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechDrawGui::MDIViewPage::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::MDIView::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MDIViewPage, std::true_type>,
        // method 'viewAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveSVG'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveDXF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'savePDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleKeepUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sceneSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TechDrawGui::MDIViewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MDIViewPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewAll(); break;
        case 1: _t->saveSVG(); break;
        case 2: _t->saveDXF(); break;
        case 3: _t->savePDF(); break;
        case 4: _t->toggleFrame(); break;
        case 5: _t->toggleKeepUpdated(); break;
        case 6: _t->sceneSelectionChanged(); break;
        case 7: _t->printAll(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TechDrawGui::MDIViewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::MDIViewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechDrawGuiSCOPEMDIViewPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::MDIView::qt_metacast(_clname);
}

int TechDrawGui::MDIViewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::MDIView::qt_metacall(_c, _id, _a);
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
