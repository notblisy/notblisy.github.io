/****************************************************************************
** Meta object code from reading C++ file 'DreamRadarModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Model/Gen5/DreamRadarModel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DreamRadarModel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto DreamRadarGeneratorModel5::qt_create_metaobjectdata<qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DreamRadarGeneratorModel5",
        "setShowStats",
        "",
        "flag"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setShowStats'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DreamRadarGeneratorModel5, qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DreamRadarGeneratorModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<DreamRadarState>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>.metaTypes,
    nullptr
} };

void DreamRadarGeneratorModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DreamRadarGeneratorModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DreamRadarGeneratorModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DreamRadarGeneratorModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25DreamRadarGeneratorModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<DreamRadarState>::qt_metacast(_clname);
}

int DreamRadarGeneratorModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<DreamRadarState>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN24DreamRadarSearcherModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto DreamRadarSearcherModel5::qt_create_metaobjectdata<qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DreamRadarSearcherModel5",
        "setShowStats",
        "",
        "flag"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setShowStats'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DreamRadarSearcherModel5, qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DreamRadarSearcherModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<SearcherState5<DreamRadarState>>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>.metaTypes,
    nullptr
} };

void DreamRadarSearcherModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DreamRadarSearcherModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DreamRadarSearcherModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DreamRadarSearcherModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24DreamRadarSearcherModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<SearcherState5<DreamRadarState>>::qt_metacast(_clname);
}

int DreamRadarSearcherModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<SearcherState5<DreamRadarState>>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
