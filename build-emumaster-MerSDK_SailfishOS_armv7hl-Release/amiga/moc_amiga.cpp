/****************************************************************************
** Meta object code from reading C++ file 'amiga.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/amiga/amiga.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amiga.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AmigaEmu_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmigaEmu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmigaEmu_t qt_meta_stringdata_AmigaEmu = {
    {
QT_MOC_LITERAL(0, 0, 8) // "AmigaEmu"

    },
    "AmigaEmu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmigaEmu[] = {

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

void AmigaEmu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AmigaEmu::staticMetaObject = {
    { &Emu::staticMetaObject, qt_meta_stringdata_AmigaEmu.data,
      qt_meta_data_AmigaEmu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AmigaEmu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmigaEmu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AmigaEmu.stringdata0))
        return static_cast<void*>(const_cast< AmigaEmu*>(this));
    return Emu::qt_metacast(_clname);
}

int AmigaEmu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Emu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_AmigaThread_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmigaThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmigaThread_t qt_meta_stringdata_AmigaThread = {
    {
QT_MOC_LITERAL(0, 0, 11) // "AmigaThread"

    },
    "AmigaThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmigaThread[] = {

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

void AmigaThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AmigaThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AmigaThread.data,
      qt_meta_data_AmigaThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AmigaThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmigaThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AmigaThread.stringdata0))
        return static_cast<void*>(const_cast< AmigaThread*>(this));
    return QThread::qt_metacast(_clname);
}

int AmigaThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
