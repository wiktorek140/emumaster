/****************************************************************************
** Meta object code from reading C++ file 'nes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/nes/nes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NesEmu_t {
    QByteArrayData data[4];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NesEmu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NesEmu_t qt_meta_stringdata_NesEmu = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NesEmu"
QT_MOC_LITERAL(1, 7, 3), // "ppu"
QT_MOC_LITERAL(2, 11, 6), // "cheats"
QT_MOC_LITERAL(3, 18, 8) // "diskInfo"

    },
    "NesEmu\0ppu\0cheats\0diskInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NesEmu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,
       2, QMetaType::QObjectStar, 0x00095401,
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void NesEmu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        NesEmu *_t = static_cast<NesEmu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->ppu(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->cheats(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->diskInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NesEmu::staticMetaObject = {
    { &Emu::staticMetaObject, qt_meta_stringdata_NesEmu.data,
      qt_meta_data_NesEmu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NesEmu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NesEmu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NesEmu.stringdata0))
        return static_cast<void*>(const_cast< NesEmu*>(this));
    return Emu::qt_metacast(_clname);
}

int NesEmu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Emu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
