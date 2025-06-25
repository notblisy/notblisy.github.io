/****************************************************************************
** Meta object code from reading C++ file 'EventModel5.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Model/Gen5/EventModel5.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventModel5.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20EventGeneratorModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto EventGeneratorModel5::qt_create_metaobjectdata<qt_meta_tag_ZN20EventGeneratorModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EventGeneratorModel5",
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
    return QtMocHelpers::metaObjectData<EventGeneratorModel5, qt_meta_tag_ZN20EventGeneratorModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EventGeneratorModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<EventState5>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EventGeneratorModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EventGeneratorModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20EventGeneratorModel5E_t>.metaTypes,
    nullptr
} };

void EventGeneratorModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EventGeneratorModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EventGeneratorModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventGeneratorModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20EventGeneratorModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<EventState5>::qt_metacast(_clname);
}

int EventGeneratorModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<EventState5>::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN19EventSearcherModel5E_t {};
} // unnamed namespace

template <> constexpr inline auto EventSearcherModel5::qt_create_metaobjectdata<qt_meta_tag_ZN19EventSearcherModel5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EventSearcherModel5",
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
    return QtMocHelpers::metaObjectData<EventSearcherModel5, qt_meta_tag_ZN19EventSearcherModel5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EventSearcherModel5::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<SearcherState5<EventState5>>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EventSearcherModel5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EventSearcherModel5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19EventSearcherModel5E_t>.metaTypes,
    nullptr
} };

void EventSearcherModel5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EventSearcherModel5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *EventSearcherModel5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventSearcherModel5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19EventSearcherModel5E_t>.strings))
        return static_cast<void*>(this);
    return TableModel<SearcherState5<EventState5>>::qt_metacast(_clname);
}

int EventSearcherModel5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<SearcherState5<EventState5>>::qt_metacall(_c, _id, _a);
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
