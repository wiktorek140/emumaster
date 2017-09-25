/****************************************************************************
** Meta object code from reading C++ file 'touchinputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/touchinputdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'touchinputdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TouchInputDevice_t {
    QByteArrayData data[15];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TouchInputDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TouchInputDevice_t qt_meta_stringdata_TouchInputDevice = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TouchInputDevice"
QT_MOC_LITERAL(1, 17, 18), // "gridVisibleChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "dpadAreaSizeChanged"
QT_MOC_LITERAL(4, 57, 27), // "dpadAreaDiagonalSizeChanged"
QT_MOC_LITERAL(5, 85, 16), // "gridColorChanged"
QT_MOC_LITERAL(6, 102, 21), // "buttonsVisibleChanged"
QT_MOC_LITERAL(7, 124, 20), // "onEmuFunctionChanged"
QT_MOC_LITERAL(8, 145, 12), // "setLRVisible"
QT_MOC_LITERAL(9, 158, 2), // "on"
QT_MOC_LITERAL(10, 161, 11), // "gridVisible"
QT_MOC_LITERAL(11, 173, 12), // "dpadAreaSize"
QT_MOC_LITERAL(12, 186, 20), // "dpadAreaDiagonalSize"
QT_MOC_LITERAL(13, 207, 9), // "gridColor"
QT_MOC_LITERAL(14, 217, 14) // "buttonsVisible"

    },
    "TouchInputDevice\0gridVisibleChanged\0"
    "\0dpadAreaSizeChanged\0dpadAreaDiagonalSizeChanged\0"
    "gridColorChanged\0buttonsVisibleChanged\0"
    "onEmuFunctionChanged\0setLRVisible\0on\0"
    "gridVisible\0dpadAreaSize\0dpadAreaDiagonalSize\0"
    "gridColor\0buttonsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TouchInputDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   54,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    9,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::QColor, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void TouchInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TouchInputDevice *_t = static_cast<TouchInputDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridVisibleChanged(); break;
        case 1: _t->dpadAreaSizeChanged(); break;
        case 2: _t->dpadAreaDiagonalSizeChanged(); break;
        case 3: _t->gridColorChanged(); break;
        case 4: _t->buttonsVisibleChanged(); break;
        case 5: _t->onEmuFunctionChanged(); break;
        case 6: _t->setLRVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TouchInputDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TouchInputDevice::gridVisibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TouchInputDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TouchInputDevice::dpadAreaSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TouchInputDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TouchInputDevice::dpadAreaDiagonalSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TouchInputDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TouchInputDevice::gridColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TouchInputDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TouchInputDevice::buttonsVisibleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TouchInputDevice *_t = static_cast<TouchInputDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isGridVisible(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dpadAreaSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->dpadAreaDiagonalSize(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->gridColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->areButtonsVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TouchInputDevice *_t = static_cast<TouchInputDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDpadAreaSize(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setDpadAreaDiagonalSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setGridColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setButtonsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TouchInputDevice::staticMetaObject = {
    { &HostInputDevice::staticMetaObject, qt_meta_stringdata_TouchInputDevice.data,
      qt_meta_data_TouchInputDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TouchInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TouchInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TouchInputDevice.stringdata0))
        return static_cast<void*>(const_cast< TouchInputDevice*>(this));
    return HostInputDevice::qt_metacast(_clname);
}

int TouchInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HostInputDevice::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TouchInputDevice::gridVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TouchInputDevice::dpadAreaSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TouchInputDevice::dpadAreaDiagonalSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TouchInputDevice::gridColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void TouchInputDevice::buttonsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
