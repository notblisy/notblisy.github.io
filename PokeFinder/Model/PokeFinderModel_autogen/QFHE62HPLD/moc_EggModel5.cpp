/****************************************************************************
** Meta object code from reading C++ file 'EggModel5.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Model/Gen5/EggModel5.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EggModel5.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18EggGeneratorModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto EggGeneratorModel5::qt_create_metaobjectdata<qt_meta_tag_ZN18EggGeneratorModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EggGeneratorModel5",
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
    return QtMocHelpers::metaObjectData<EggGeneratorModel5, qt_meta_tag_ZN18EggGeneratorModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EggGeneratorModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<EggState5>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18EggGeneratorModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18EggGeneratorModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18EggGeneratorModel5E_t>.metaTypes,
    nullptr
} };

void EggGeneratorModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EggGeneratorModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowInheritance((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EggGeneratorModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EggGeneratorModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18EggGeneratorModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<EggState5>::qt_metacast(_clname);
}

int EggGeneratorModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<EggState5>::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17EggSearcherModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto EggSearcherModel5::qt_create_metaobjectdata<qt_meta_tag_ZN17EggSearcherModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EggSearcherModel5",
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
    return QtMocHelpers::metaObjectData<EggSearcherModel5, qt_meta_tag_ZN17EggSearcherModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EggSearcherModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<SearcherState5<EggState5>>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EggSearcherModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EggSearcherModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17EggSearcherModel5E_t>.metaTypes,
    nullptr
} };

void EggSearcherModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EggSearcherModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowInheritance((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EggSearcherModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EggSearcherModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EggSearcherModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<SearcherState5<EggState5>>::qt_metacast(_clname);
}

int EggSearcherModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<SearcherState5<EggState5>>::qt_metacall(_c, _id, _a);
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
