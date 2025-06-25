/****************************************************************************
** Meta object code from reading C++ file 'GameCubeModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Model/Gen3/GameCubeModel.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameCubeModel.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22GameCubeGeneratorModelE_t {};
} // unnamed namespace

template <> constexpr inline auto GameCubeGeneratorModel::qt_create_metaobjectdata<qt_meta_tag_ZN22GameCubeGeneratorModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameCubeGeneratorModel",
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
    return QtMocHelpers::metaObjectData<GameCubeGeneratorModel, qt_meta_tag_ZN22GameCubeGeneratorModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameCubeGeneratorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<GeneratorState>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GameCubeGeneratorModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GameCubeGeneratorModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22GameCubeGeneratorModelE_t>.metaTypes,
    nullptr
} };

void GameCubeGeneratorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameCubeGeneratorModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GameCubeGeneratorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCubeGeneratorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GameCubeGeneratorModelE_t>.strings))
        return static_cast<void*>(this);
    return TableModel<GeneratorState>::qt_metacast(_clname);
}

int GameCubeGeneratorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<GeneratorState>::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN21GameCubeSearcherModelE_t {};
} // unnamed namespace

template <> constexpr inline auto GameCubeSearcherModel::qt_create_metaobjectdata<qt_meta_tag_ZN21GameCubeSearcherModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameCubeSearcherModel",
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
    return QtMocHelpers::metaObjectData<GameCubeSearcherModel, qt_meta_tag_ZN21GameCubeSearcherModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameCubeSearcherModel::staticMetaObject = { {
    QMetaObject::SuperData::link<TableModel<SearcherState>::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GameCubeSearcherModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GameCubeSearcherModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21GameCubeSearcherModelE_t>.metaTypes,
    nullptr
} };

void GameCubeSearcherModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameCubeSearcherModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setShowStats((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GameCubeSearcherModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCubeSearcherModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GameCubeSearcherModelE_t>.strings))
        return static_cast<void*>(this);
    return TableModel<SearcherState>::qt_metacast(_clname);
}

int GameCubeSearcherModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableModel<SearcherState>::qt_metacall(_c, _id, _a);
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
