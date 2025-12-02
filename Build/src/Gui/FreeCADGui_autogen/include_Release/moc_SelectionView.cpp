/****************************************************************************
** Meta object code from reading C++ file 'SelectionView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FreeCAD/src/Gui/SelectionView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectionView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS = QtMocHelpers::stringData(
    "Gui::DockWnd::SelectionView",
    "search",
    "",
    "text",
    "validateSearch",
    "onItemContextMenu",
    "point",
    "select",
    "QListWidgetItem*",
    "item",
    "deselect",
    "zoom",
    "treeSelect",
    "toPython",
    "touch",
    "showPart",
    "onEnablePickList",
    "toggleSelect",
    "preselect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x0a,    1 /* Public */,
       4,    0,  113,    2, 0x0a,    3 /* Public */,
       5,    1,  114,    2, 0x0a,    4 /* Public */,
       7,    1,  117,    2, 0x0a,    6 /* Public */,
       7,    0,  120,    2, 0x2a,    8 /* Public | MethodCloned */,
      10,    0,  121,    2, 0x0a,    9 /* Public */,
      11,    0,  122,    2, 0x0a,   10 /* Public */,
      12,    0,  123,    2, 0x0a,   11 /* Public */,
      13,    0,  124,    2, 0x0a,   12 /* Public */,
      14,    0,  125,    2, 0x0a,   13 /* Public */,
      15,    0,  126,    2, 0x0a,   14 /* Public */,
      16,    0,  127,    2, 0x0a,   15 /* Public */,
      17,    1,  128,    2, 0x0a,   16 /* Public */,
      17,    0,  131,    2, 0x2a,   18 /* Public | MethodCloned */,
      18,    1,  132,    2, 0x0a,   19 /* Public */,
      18,    0,  135,    2, 0x2a,   21 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Gui::DockWnd::SelectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::DockWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelectionView, std::true_type>,
        // method 'search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'validateSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onItemContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deselect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'treeSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toPython'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'touch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEnablePickList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'toggleSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'preselect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'preselect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Gui::DockWnd::SelectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->validateSearch(); break;
        case 2: _t->onItemContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->select((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 4: _t->select(); break;
        case 5: _t->deselect(); break;
        case 6: _t->zoom(); break;
        case 7: _t->treeSelect(); break;
        case 8: _t->toPython(); break;
        case 9: _t->touch(); break;
        case 10: _t->showPart(); break;
        case 11: _t->onEnablePickList(); break;
        case 12: _t->toggleSelect((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 13: _t->toggleSelect(); break;
        case 14: _t->preselect((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->preselect(); break;
        default: ;
        }
    }
}

const QMetaObject *Gui::DockWnd::SelectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::SelectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiSCOPEDockWndSCOPESelectionViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::DockWindow::qt_metacast(_clname);
}

int Gui::DockWnd::SelectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::DockWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
