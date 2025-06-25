/****************************************************************************
** Meta object code from reading C++ file 'ProfileCalibrator5.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Source/Form/Gen5/Profile/ProfileCalibrator5.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProfileCalibrator5.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18ProfileCalibrator5E_t {};
} // unnamed namespace

template <> constexpr inline auto ProfileCalibrator5::qt_create_metaobjectdata<qt_meta_tag_ZN18ProfileCalibrator5E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProfileCalibrator5",
        "profilesModified",
        "",
        "addNeedle",
        "QAbstractButton*",
        "button",
        "clearNeedles",
        "createProfile",
        "dsTypeIndexChanged",
        "index",
        "openIVCalculator",
        "removeNeedle",
        "search",
        "updateIVs",
        "std::array<std::vector<u8>,6>",
        "ivs",
        "versionIndexChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'profilesModified'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'addNeedle'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'clearNeedles'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'createProfile'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dsTypeIndexChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'openIVCalculator'
        QtMocHelpers::SlotData<void() const>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeNeedle'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'search'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateIVs'
        QtMocHelpers::SlotData<void(const std::array<std::vector<u8>,6> &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'versionIndexChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProfileCalibrator5, qt_meta_tag_ZN18ProfileCalibrator5E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProfileCalibrator5::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ProfileCalibrator5E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ProfileCalibrator5E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ProfileCalibrator5E_t>.metaTypes,
    nullptr
} };

void ProfileCalibrator5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProfileCalibrator5 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->profilesModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->addNeedle((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 2: _t->clearNeedles(); break;
        case 3: _t->createProfile(); break;
        case 4: _t->dsTypeIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->openIVCalculator(); break;
        case 6: _t->removeNeedle(); break;
        case 7: _t->search(); break;
        case 8: _t->updateIVs((*reinterpret_cast< std::add_pointer_t<std::array<std::vector<u8>,6>>>(_a[1]))); break;
        case 9: _t->versionIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProfileCalibrator5::*)(int )>(_a, &ProfileCalibrator5::profilesModified, 0))
            return;
    }
}

const QMetaObject *ProfileCalibrator5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileCalibrator5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ProfileCalibrator5E_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProfileCalibrator5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProfileCalibrator5::profilesModified(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
