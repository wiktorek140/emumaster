/****************************************************************************
** Meta object code from reading C++ file 'diskgallery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/diskgallery/diskgallery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diskgallery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DiskGallery_t {
    QByteArrayData data[19];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiskGallery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiskGallery_t qt_meta_stringdata_DiskGallery = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DiskGallery"
QT_MOC_LITERAL(1, 12, 23), // "massStorageInUseChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "receiveDatagram"
QT_MOC_LITERAL(4, 53, 16), // "checkMassStorage"
QT_MOC_LITERAL(5, 70, 6), // "launch"
QT_MOC_LITERAL(6, 77, 5), // "index"
QT_MOC_LITERAL(7, 83, 14), // "advancedLaunch"
QT_MOC_LITERAL(8, 98, 12), // "autoSaveLoad"
QT_MOC_LITERAL(9, 111, 7), // "confStr"
QT_MOC_LITERAL(10, 119, 6), // "donate"
QT_MOC_LITERAL(11, 126, 11), // "maemoThread"
QT_MOC_LITERAL(12, 138, 4), // "wiki"
QT_MOC_LITERAL(13, 143, 14), // "sixAxisMonitor"
QT_MOC_LITERAL(14, 158, 12), // "globalOption"
QT_MOC_LITERAL(15, 171, 4), // "name"
QT_MOC_LITERAL(16, 176, 15), // "setGlobalOption"
QT_MOC_LITERAL(17, 192, 5), // "value"
QT_MOC_LITERAL(18, 198, 16) // "massStorageInUse"

    },
    "DiskGallery\0massStorageInUseChanged\0"
    "\0receiveDatagram\0checkMassStorage\0"
    "launch\0index\0advancedLaunch\0autoSaveLoad\0"
    "confStr\0donate\0maemoThread\0wiki\0"
    "sixAxisMonitor\0globalOption\0name\0"
    "setGlobalOption\0value\0massStorageInUse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiskGallery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x02 /* Public */,
       7,    3,   75,    2, 0x02 /* Public */,
      10,    0,   82,    2, 0x02 /* Public */,
      11,    0,   83,    2, 0x02 /* Public */,
      12,    0,   84,    2, 0x02 /* Public */,
      13,    0,   85,    2, 0x02 /* Public */,
      14,    1,   86,    2, 0x02 /* Public */,
      16,    2,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    6,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   15,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void DiskGallery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiskGallery *_t = static_cast<DiskGallery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->massStorageInUseChanged(); break;
        case 1: _t->receiveDatagram(); break;
        case 2: _t->checkMassStorage(); break;
        case 3: _t->launch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->advancedLaunch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->donate(); break;
        case 6: _t->maemoThread(); break;
        case 7: _t->wiki(); break;
        case 8: _t->sixAxisMonitor(); break;
        case 9: { QVariant _r = _t->globalOption((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: _t->setGlobalOption((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiskGallery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiskGallery::massStorageInUseChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DiskGallery *_t = static_cast<DiskGallery *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->massStorageInUse(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DiskGallery::staticMetaObject = {
    { &QQuickView::staticMetaObject, qt_meta_stringdata_DiskGallery.data,
      qt_meta_data_DiskGallery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiskGallery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiskGallery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiskGallery.stringdata0))
        return static_cast<void*>(const_cast< DiskGallery*>(this));
    return QQuickView::qt_metacast(_clname);
}

int DiskGallery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void DiskGallery::massStorageInUseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
