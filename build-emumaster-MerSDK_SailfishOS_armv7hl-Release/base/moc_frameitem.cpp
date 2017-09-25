/****************************************************************************
** Meta object code from reading C++ file 'frameitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/frameitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frameitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FrameItem_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameItem_t qt_meta_stringdata_FrameItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FrameItem"
QT_MOC_LITERAL(1, 10, 10), // "fpsUpdated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "fps"
QT_MOC_LITERAL(4, 26, 14), // "handleNewFrame"
QT_MOC_LITERAL(5, 41, 5), // "frame"
QT_MOC_LITERAL(6, 47, 10), // "setEmuView"
QT_MOC_LITERAL(7, 58, 7) // "emuView"

    },
    "FrameItem\0fpsUpdated\0\0fps\0handleNewFrame\0"
    "frame\0setEmuView\0emuView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void FrameItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameItem *_t = static_cast<FrameItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fpsUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleNewFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->setEmuView((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FrameItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FrameItem::fpsUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FrameItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_FrameItem.data,
      qt_meta_data_FrameItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FrameItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FrameItem.stringdata0))
        return static_cast<void*>(const_cast< FrameItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int FrameItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FrameItem::fpsUpdated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
