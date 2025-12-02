/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditorMesh.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../FreeCAD/src/Mod/Mesh/Gui/PropertyEditorMesh.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditorMesh.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS = QtMocHelpers::stringData(
    "MeshGui::PropertyMeshKernelItem",
    "Points",
    "Edges",
    "Faces"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       2, QMetaType::Int, 0x00015401, uint(-1), 0,
       3, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MeshGui::PropertyMeshKernelItem::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::PropertyEditor::PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS_t,
        // property 'Points'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Edges'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'Faces'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyMeshKernelItem, std::true_type>
    >,
    nullptr
} };

void MeshGui::PropertyMeshKernelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyMeshKernelItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->countPoints(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->countEdges(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->countFaces(); break;
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

const QMetaObject *MeshGui::PropertyMeshKernelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::PropertyMeshKernelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMeshGuiSCOPEPropertyMeshKernelItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Gui::PropertyEditor::PropertyItem::qt_metacast(_clname);
}

int MeshGui::PropertyMeshKernelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::PropertyEditor::PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
