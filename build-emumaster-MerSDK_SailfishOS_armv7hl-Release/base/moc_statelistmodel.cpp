/****************************************************************************
** Meta object code from reading C++ file 'statelistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/statelistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statelistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StateListModel_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StateListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StateListModel_t qt_meta_stringdata_StateListModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StateListModel"
QT_MOC_LITERAL(1, 15, 12), // "countChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "slFailed"
QT_MOC_LITERAL(4, 38, 11), // "stateLoaded"
QT_MOC_LITERAL(5, 50, 9), // "saveState"
QT_MOC_LITERAL(6, 60, 4), // "slot"
QT_MOC_LITERAL(7, 65, 9), // "loadState"
QT_MOC_LITERAL(8, 75, 11), // "removeState"
QT_MOC_LITERAL(9, 87, 9), // "removeAll"
QT_MOC_LITERAL(10, 97, 5), // "count"
QT_MOC_LITERAL(11, 103, 11), // "SpecialSlot"
QT_MOC_LITERAL(12, 115, 11), // "InvalidSlot"
QT_MOC_LITERAL(13, 127, 16), // "AutoSaveLoadSlot"
QT_MOC_LITERAL(14, 144, 7) // "NewSlot"

    },
    "StateListModel\0countChanged\0\0slFailed\0"
    "stateLoaded\0saveState\0slot\0loadState\0"
    "removeState\0removeAll\0count\0SpecialSlot\0"
    "InvalidSlot\0AutoSaveLoadSlot\0NewSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StateListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   62, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x02 /* Public */,
       7,    1,   55,    2, 0x02 /* Public */,
       8,    1,   58,    2, 0x02 /* Public */,
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
      11, 0x0,    3,   70,

 // enum data: key, value
      12, uint(StateListModel::InvalidSlot),
      13, uint(StateListModel::AutoSaveLoadSlot),
      14, uint(StateListModel::NewSlot),

       0        // eod
};

void StateListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StateListModel *_t = static_cast<StateListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->slFailed(); break;
        case 2: _t->stateLoaded(); break;
        case 3: { bool _r = _t->saveState((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->loadState((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->removeState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->removeAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StateListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StateListModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StateListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StateListModel::slFailed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StateListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StateListModel::stateLoaded)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StateListModel *_t = static_cast<StateListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StateListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_StateListModel.data,
      qt_meta_data_StateListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StateListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StateListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StateListModel.stringdata0))
        return static_cast<void*>(const_cast< StateListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int StateListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StateListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StateListModel::slFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StateListModel::stateLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
