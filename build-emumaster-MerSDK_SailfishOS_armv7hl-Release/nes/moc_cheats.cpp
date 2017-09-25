/****************************************************************************
** Meta object code from reading C++ file 'cheats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/nes/cheats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cheats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NesCheats_t {
    QByteArrayData data[9];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NesCheats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NesCheats_t qt_meta_stringdata_NesCheats = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NesCheats"
QT_MOC_LITERAL(1, 10, 10), // "setEnabled"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "i"
QT_MOC_LITERAL(4, 24, 2), // "on"
QT_MOC_LITERAL(5, 27, 6), // "addNew"
QT_MOC_LITERAL(6, 34, 4), // "code"
QT_MOC_LITERAL(7, 39, 11), // "description"
QT_MOC_LITERAL(8, 51, 8) // "removeAt"

    },
    "NesCheats\0setEnabled\0\0i\0on\0addNew\0"
    "code\0description\0removeAt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NesCheats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x02 /* Public */,
       5,    2,   34,    2, 0x02 /* Public */,
       8,    1,   39,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void NesCheats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NesCheats *_t = static_cast<NesCheats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->addNew((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->removeAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NesCheats::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_NesCheats.data,
      qt_meta_data_NesCheats,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NesCheats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NesCheats::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NesCheats.stringdata0))
        return static_cast<void*>(const_cast< NesCheats*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int NesCheats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
