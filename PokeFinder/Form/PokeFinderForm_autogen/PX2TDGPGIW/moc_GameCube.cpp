/****************************************************************************
** Meta object code from reading C++ file 'GameCube.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Form/Gen3/GameCube.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameCube.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8GameCubeE_t {};
} // unnamed namespace

template <> constexpr inline auto GameCube::qt_create_metaobjectdata<qt_meta_tag_ZN8GameCubeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameCube",
        "profilesModified",
        "",
        "generate",
        "generatorCategoryIndexChanged",
        "index",
        "generatorPokemonIndexChanged",
        "profileIndexChanged",
        "profileManager",
        "search",
        "searcherCategoryIndexChanged",
        "searcherPokemonIndexChanged",
        "on_toolButton_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'profilesModified'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'generate'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'generatorCategoryIndexChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'generatorPokemonIndexChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'profileIndexChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'profileManager'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'search'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searcherCategoryIndexChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'searcherPokemonIndexChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_toolButton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameCube, qt_meta_tag_ZN8GameCubeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameCube::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameCubeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameCubeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8GameCubeE_t>.metaTypes,
    nullptr
} };

void GameCube::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameCube *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->profilesModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->generate(); break;
        case 2: _t->generatorCategoryIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->generatorPokemonIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->profileIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->profileManager(); break;
        case 6: _t->search(); break;
        case 7: _t->searcherCategoryIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->searcherPokemonIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_toolButton_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GameCube::*)(int )>(_a, &GameCube::profilesModified, 0))
            return;
    }
}

const QMetaObject *GameCube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCube::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GameCubeE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameCube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GameCube::profilesModified(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
