/****************************************************************************
** Meta object code from reading C++ file 'DlgDisplayPropertiesImp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Material/Gui/DlgDisplayPropertiesImp.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgDisplayPropertiesImp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS = QtMocHelpers::stringData(
    "MatGui::DlgDisplayPropertiesImp",
    "onChangeModeActivated",
    "",
    "onChangePlotActivated",
    "onSpinTransparencyValueChanged",
    "onSpinPointSizeValueChanged",
    "onButtonLineColorChanged",
    "onButtonPointColorChanged",
    "onSpinLineWidthValueChanged",
    "onSpinLineTransparencyValueChanged",
    "onButtonCustomAppearanceClicked",
    "onButtonColorPlotClicked",
    "onMaterialSelected",
    "std::shared_ptr<Materials::Material>",
    "material"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       3,    1,   83,    2, 0x08,    3 /* Private */,
       4,    1,   86,    2, 0x08,    5 /* Private */,
       5,    1,   89,    2, 0x08,    7 /* Private */,
       6,    0,   92,    2, 0x08,    9 /* Private */,
       7,    0,   93,    2, 0x08,   10 /* Private */,
       8,    1,   94,    2, 0x08,   11 /* Private */,
       9,    1,   97,    2, 0x08,   13 /* Private */,
      10,    0,  100,    2, 0x08,   15 /* Private */,
      11,    0,  101,    2, 0x08,   16 /* Private */,
      12,    1,  102,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject MatGui::DlgDisplayPropertiesImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgDisplayPropertiesImp, std::true_type>,
        // method 'onChangeModeActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onChangePlotActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSpinTransparencyValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSpinPointSizeValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onButtonLineColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonPointColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSpinLineWidthValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSpinLineTransparencyValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onButtonCustomAppearanceClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonColorPlotClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMaterialSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::shared_ptr<Materials::Material> &, std::false_type>
    >,
    nullptr
} };

void MatGui::DlgDisplayPropertiesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgDisplayPropertiesImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangeModeActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onChangePlotActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onSpinTransparencyValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onSpinPointSizeValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onButtonLineColorChanged(); break;
        case 5: _t->onButtonPointColorChanged(); break;
        case 6: _t->onSpinLineWidthValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onSpinLineTransparencyValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onButtonCustomAppearanceClicked(); break;
        case 9: _t->onButtonColorPlotClicked(); break;
        case 10: _t->onMaterialSelected((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Materials::Material>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< std::shared_ptr<Materials::Material> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MatGui::DlgDisplayPropertiesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::DlgDisplayPropertiesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMatGuiSCOPEDlgDisplayPropertiesImpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(this);
    return QDialog::qt_metacast(_clname);
}

int MatGui::DlgDisplayPropertiesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS = QtMocHelpers::stringData(
    "MatGui::TaskDisplayProperties"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MatGui::TaskDisplayProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskDisplayProperties, std::true_type>
    >,
    nullptr
} };

void MatGui::TaskDisplayProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MatGui::TaskDisplayProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::TaskDisplayProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMatGuiSCOPETaskDisplayPropertiesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int MatGui::TaskDisplayProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
