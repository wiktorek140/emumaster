/****************************************************************************
** Meta object code from reading C++ file 'cheats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gba/cheats.h"
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
struct qt_meta_stringdata_GbaCheats_t {
    QByteArrayData data[13];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GbaCheats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GbaCheats_t qt_meta_stringdata_GbaCheats = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GbaCheats"
QT_MOC_LITERAL(1, 10, 10), // "setEnabled"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "i"
QT_MOC_LITERAL(4, 24, 2), // "on"
QT_MOC_LITERAL(5, 27, 6), // "addNew"
QT_MOC_LITERAL(6, 34, 8), // "codeList"
QT_MOC_LITERAL(7, 43, 11), // "description"
QT_MOC_LITERAL(8, 55, 2), // "v3"
QT_MOC_LITERAL(9, 58, 8), // "removeAt"
QT_MOC_LITERAL(10, 67, 19), // "checkIdcodeForGroup"
QT_MOC_LITERAL(11, 87, 10), // "groupIndex"
QT_MOC_LITERAL(12, 98, 8) // "expected"

    },
    "GbaCheats\0setEnabled\0\0i\0on\0addNew\0"
    "codeList\0description\0v3\0removeAt\0"
    "checkIdcodeForGroup\0groupIndex\0expected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GbaCheats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    3,   39,    2, 0x02 /* Public */,
       9,    1,   46,    2, 0x02 /* Public */,
      10,    2,   49,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,   11,   12,

       0        // eod
};

void GbaCheats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GbaCheats *_t = static_cast<GbaCheats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->addNew((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->removeAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { bool _r = _t->checkIdcodeForGroup((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject GbaCheats::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_GbaCheats.data,
      qt_meta_data_GbaCheats,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GbaCheats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GbaCheats::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GbaCheats.stringdata0))
        return static_cast<void*>(const_cast< GbaCheats*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int GbaCheats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
