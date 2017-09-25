/****************************************************************************
** Meta object code from reading C++ file 'mp3player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/pico/mp3player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mp3player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mp3Player_t {
    QByteArrayData data[11];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mp3Player_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mp3Player_t qt_meta_stringdata_Mp3Player = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Mp3Player"
QT_MOC_LITERAL(1, 10, 5), // "start"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "fileName"
QT_MOC_LITERAL(4, 26, 4), // "play"
QT_MOC_LITERAL(5, 31, 6), // "offset"
QT_MOC_LITERAL(6, 38, 4), // "stop"
QT_MOC_LITERAL(7, 43, 5), // "pause"
QT_MOC_LITERAL(8, 49, 6), // "resume"
QT_MOC_LITERAL(9, 56, 4), // "seek"
QT_MOC_LITERAL(10, 61, 3) // "pos"

    },
    "Mp3Player\0start\0\0fileName\0play\0offset\0"
    "stop\0pause\0resume\0seek\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mp3Player[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Int,

       0        // eod
};

void Mp3Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mp3Player *_t = static_cast<Mp3Player *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->stop(); break;
        case 2: _t->pause(); break;
        case 3: _t->resume(); break;
        case 4: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { int _r = _t->pos();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Mp3Player::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mp3Player.data,
      qt_meta_data_Mp3Player,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mp3Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mp3Player::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mp3Player.stringdata0))
        return static_cast<void*>(const_cast< Mp3Player*>(this));
    return QObject::qt_metacast(_clname);
}

int Mp3Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
