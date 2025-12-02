/****************************************************************************
** Meta object code from reading C++ file 'SheetTableView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Spreadsheet/Gui/SheetTableView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SheetTableView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS = QtMocHelpers::stringData(
    "SpreadsheetGui::SheetViewHeader",
    "resizeFinished",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SpreadsheetGui::SheetViewHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SheetViewHeader, std::true_type>,
        // method 'resizeFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpreadsheetGui::SheetViewHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SheetViewHeader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SheetViewHeader::*)();
            if (_t _q_method = &SheetViewHeader::resizeFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SpreadsheetGui::SheetViewHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::SheetViewHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetViewHeaderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int SpreadsheetGui::SheetViewHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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
void SpreadsheetGui::SheetViewHeader::resizeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS = QtMocHelpers::stringData(
    "SpreadsheetGui::SheetTableView",
    "mergeCells",
    "",
    "splitCell",
    "deleteSelection",
    "copySelection",
    "cutSelection",
    "pasteClipboard",
    "finishEditWithMove",
    "keyPressed",
    "Qt::KeyboardModifiers",
    "modifiers",
    "handleTabMotion",
    "ModifyBlockSelection",
    "targetRow",
    "targetColumn",
    "commitData",
    "QWidget*",
    "editor",
    "updateCellSpan",
    "insertRows",
    "insertRowsAfter",
    "removeRows",
    "insertColumns",
    "insertColumnsAfter",
    "removeColumns",
    "cellProperties",
    "onRecompute",
    "onBind",
    "onConfSetup"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x0a,    1 /* Public */,
       3,    0,  141,    2, 0x0a,    2 /* Public */,
       4,    0,  142,    2, 0x0a,    3 /* Public */,
       5,    0,  143,    2, 0x0a,    4 /* Public */,
       6,    0,  144,    2, 0x0a,    5 /* Public */,
       7,    0,  145,    2, 0x0a,    6 /* Public */,
       8,    3,  146,    2, 0x0a,    7 /* Public */,
       8,    2,  153,    2, 0x2a,   11 /* Public | MethodCloned */,
      13,    2,  158,    2, 0x0a,   14 /* Public */,
      16,    1,  163,    2, 0x09,   17 /* Protected */,
      19,    0,  166,    2, 0x09,   19 /* Protected */,
      20,    0,  167,    2, 0x09,   20 /* Protected */,
      21,    0,  168,    2, 0x09,   21 /* Protected */,
      22,    0,  169,    2, 0x09,   22 /* Protected */,
      23,    0,  170,    2, 0x09,   23 /* Protected */,
      24,    0,  171,    2, 0x09,   24 /* Protected */,
      25,    0,  172,    2, 0x09,   25 /* Protected */,
      26,    0,  173,    2, 0x09,   26 /* Protected */,
      27,    0,  174,    2, 0x09,   27 /* Protected */,
      28,    0,  175,    2, 0x09,   28 /* Protected */,
      29,    0,  176,    2, 0x09,   29 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, QMetaType::Bool,    9,   11,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

Q_CONSTINIT const QMetaObject SpreadsheetGui::SheetTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SheetTableView, std::true_type>,
        // method 'mergeCells'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'splitCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copySelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cutSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finishEditWithMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'finishEditWithMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'ModifyBlockSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'commitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'updateCellSpan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertRowsAfter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertColumnsAfter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cellProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRecompute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConfSetup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpreadsheetGui::SheetTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SheetTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mergeCells(); break;
        case 1: _t->splitCell(); break;
        case 2: _t->deleteSelection(); break;
        case 3: _t->copySelection(); break;
        case 4: _t->cutSelection(); break;
        case 5: _t->pasteClipboard(); break;
        case 6: _t->finishEditWithMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 7: _t->finishEditWithMove((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 8: _t->ModifyBlockSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->commitData((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 10: _t->updateCellSpan(); break;
        case 11: _t->insertRows(); break;
        case 12: _t->insertRowsAfter(); break;
        case 13: _t->removeRows(); break;
        case 14: _t->insertColumns(); break;
        case 15: _t->insertColumnsAfter(); break;
        case 16: _t->removeColumns(); break;
        case 17: _t->cellProperties(); break;
        case 18: _t->onRecompute(); break;
        case 19: _t->onBind(); break;
        case 20: _t->onConfSetup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SpreadsheetGui::SheetTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::SheetTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSpreadsheetGuiSCOPESheetTableViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int SpreadsheetGui::SheetTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
