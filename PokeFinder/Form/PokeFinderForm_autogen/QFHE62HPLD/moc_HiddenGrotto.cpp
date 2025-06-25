/****************************************************************************
** Meta object code from reading C++ file 'HiddenGrotto.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Form/Gen5/HiddenGrotto.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HiddenGrotto.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12HiddenGrottoE_t {};
} // unnamed namespace

template <> constexpr inline auto HiddenGrotto::qt_create_metaobjectdata<qt_meta_tag_ZN12HiddenGrottoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HiddenGrotto",
        "profilesModified",
        "",
        "grottoGenerate",
        "grottoGeneratorLocationIndexChanged",
        "index",
        "grottoGeneratorUpdateFilter",
        "grottoSearch",
        "grottoSearcherLocationIndexChanged",
        "grottoSearcherUpdateFilter",
        "pokemonGenerate",
        "pokemonGeneratorGroupIndexChanged",
        "pokemonGeneratorLocationIndexChanged",
        "pokemonGeneratorPokemonIndexChanged",
        "pokemonSearch",
        "pokemonSearcherFastSearchChanged",
        "pokemonSearcherGroupIndexChanged",
        "pokemonSearcherLocationIndexChanged",
        "pokemonSearcherPokemonIndexChanged",
        "profileIndexChanged",
        "profileManager"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'profilesModified'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'grottoGenerate'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'grottoGeneratorLocationIndexChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'grottoGeneratorUpdateFilter'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'grottoSearch'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'grottoSearcherLocationIndexChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'grottoSearcherUpdateFilter'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pokemonGenerate'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pokemonGeneratorGroupIndexChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'pokemonGeneratorLocationIndexChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'pokemonGeneratorPokemonIndexChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'pokemonSearch'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pokemonSearcherFastSearchChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pokemonSearcherGroupIndexChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'pokemonSearcherLocationIndexChanged'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'pokemonSearcherPokemonIndexChanged'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'profileIndexChanged'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'profileManager'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HiddenGrotto, qt_meta_tag_ZN12HiddenGrottoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HiddenGrotto::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HiddenGrottoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HiddenGrottoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12HiddenGrottoE_t>.metaTypes,
    nullptr
} };

void HiddenGrotto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HiddenGrotto *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->profilesModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->grottoGenerate(); break;
        case 2: _t->grottoGeneratorLocationIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->grottoGeneratorUpdateFilter(); break;
        case 4: _t->grottoSearch(); break;
        case 5: _t->grottoSearcherLocationIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->grottoSearcherUpdateFilter(); break;
        case 7: _t->pokemonGenerate(); break;
        case 8: _t->pokemonGeneratorGroupIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->pokemonGeneratorLocationIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->pokemonGeneratorPokemonIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->pokemonSearch(); break;
        case 12: _t->pokemonSearcherFastSearchChanged(); break;
        case 13: _t->pokemonSearcherGroupIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->pokemonSearcherLocationIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->pokemonSearcherPokemonIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->profileIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->profileManager(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HiddenGrotto::*)(int )>(_a, &HiddenGrotto::profilesModified, 0))
            return;
    }
}

const QMetaObject *HiddenGrotto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HiddenGrotto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HiddenGrottoE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HiddenGrotto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void HiddenGrotto::profilesModified(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
