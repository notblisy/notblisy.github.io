/****************************************************************************
** Meta object code from reading C++ file 'EggModel8.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Model/Gen8/EggModel8.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EggModel8.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN9EggModel8E_t {};
} // unnamed namespace

template <> constexpr inline auto EggModel8::qt_create_metaobjectdata<qt_meta_tag_ZN9EggModel8E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EggModel8",
        "setShowInheritance",
        "",
        "flag",
        "setShowStats"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setShowInheritance'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'setShowStats'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EggModel8, qt_meta_tag_ZN9EggModel8E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EggModel8::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<EggState8>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EggModel8E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EggModel8E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9EggModel8E_t>.metaTypes,
    nullptr
} };

void EggModel8::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EggModel8 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowInheritance((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EggModel8::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EggModel8::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EggModel8E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<EggState8>::qt_metacast(_clname);
}

int EggModel8::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<EggState8>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
