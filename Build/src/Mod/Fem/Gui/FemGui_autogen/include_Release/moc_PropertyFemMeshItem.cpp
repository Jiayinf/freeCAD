/****************************************************************************
** Meta object code from reading C++ file 'PropertyFemMeshItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Fem/Gui/PropertyFemMeshItem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyFemMeshItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS = QtMocHelpers::stringData(
    "FemGui::PropertyFemMeshItem",
    "Nodes",
    "Edges",
    "Faces",
    "Polygons",
    "Volumes",
    "Polyhedrons",
    "Groups"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       2, QMetaType::Int, 0x00015401, uint(-1), 0,
       3, QMetaType::Int, 0x00015401, uint(-1), 0,
       4, QMetaType::Int, 0x00015401, uint(-1), 0,
       5, QMetaType::Int, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015401, uint(-1), 0,
       7, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FemGui::PropertyFemMeshItem::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::PropertyEditor::PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS_t,
        // property 'Nodes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Edges'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Faces'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Polygons'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Volumes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Polyhedrons'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Groups'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyFemMeshItem, std::true_type>
    >,
    nullptr
} };

void FemGui::PropertyFemMeshItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyFemMeshItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->countNodes(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->countEdges(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->countFaces(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->countPolygons(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->countVolumes(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->countPolyhedrons(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->countGroups(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FemGui::PropertyFemMeshItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::PropertyFemMeshItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFemGuiSCOPEPropertyFemMeshItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::PropertyEditor::PropertyItem::qt_metacast(_clname);
}

int FemGui::PropertyFemMeshItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::PropertyEditor::PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
