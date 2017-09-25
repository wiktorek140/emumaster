/****************************************************************************
** Meta object code from reading C++ file 'gba.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gba/gba.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gba.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GbaThread_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GbaThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GbaThread_t qt_meta_stringdata_GbaThread = {
    {
QT_MOC_LITERAL(0, 0, 9) // "GbaThread"

    },
    "GbaThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GbaThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GbaThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GbaThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GbaThread.data,
      qt_meta_data_GbaThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GbaThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GbaThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GbaThread.stringdata0))
        return static_cast<void*>(const_cast< GbaThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GbaThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GbaEmu_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GbaEmu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GbaEmu_t qt_meta_stringdata_GbaEmu = {
    {
QT_MOC_LITERAL(0, 0, 6), // "GbaEmu"
QT_MOC_LITERAL(1, 7, 13), // "gamePackTitle"
QT_MOC_LITERAL(2, 21, 12), // "gamePackCode"
QT_MOC_LITERAL(3, 34, 13), // "gamePackMaker"
QT_MOC_LITERAL(4, 48, 6), // "cheats"
QT_MOC_LITERAL(5, 55, 10) // "GbaCheats*"

    },
    "GbaEmu\0gamePackTitle\0gamePackCode\0"
    "gamePackMaker\0cheats\0GbaCheats*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GbaEmu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void GbaEmu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        GbaEmu *_t = static_cast<GbaEmu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->gamePackTitle(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->gamePackCode(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->gamePackMaker(); break;
        case 3: *reinterpret_cast< GbaCheats**>(_v) = _t->cheats(); break;
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

const QMetaObject GbaEmu::staticMetaObject = {
    { &Emu::staticMetaObject, qt_meta_stringdata_GbaEmu.data,
      qt_meta_data_GbaEmu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GbaEmu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GbaEmu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GbaEmu.stringdata0))
        return static_cast<void*>(const_cast< GbaEmu*>(this));
    return Emu::qt_metacast(_clname);
}

int GbaEmu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Emu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
