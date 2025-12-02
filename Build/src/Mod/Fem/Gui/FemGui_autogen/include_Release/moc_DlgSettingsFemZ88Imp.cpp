/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsFemZ88Imp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/DlgSettingsFemZ88Imp.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsFemZ88Imp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS = QtMocHelpers::stringData(
    "FemGui::DlgSettingsFemZ88Imp",
    "onfileNameChanged",
    "",
    "FileName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS[] = {

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
       1,    1,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::DlgSettingsFemZ88Imp::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::Dialog::PreferencePage::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DlgSettingsFemZ88Imp, std::true_type>,
        // method 'onfileNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void FemGui::DlgSettingsFemZ88Imp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSettingsFemZ88Imp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onfileNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FemGui::DlgSettingsFemZ88Imp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::DlgSettingsFemZ88Imp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPEDlgSettingsFemZ88ImpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::Dialog::PreferencePage::qt_metacast(_clname);
}

int FemGui::DlgSettingsFemZ88Imp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::Dialog::PreferencePage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
