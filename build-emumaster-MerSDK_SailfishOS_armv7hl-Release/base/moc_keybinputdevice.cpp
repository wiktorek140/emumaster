/****************************************************************************
** Meta object code from reading C++ file 'keybinputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/keybinputdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keybinputdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeybInputDevice_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeybInputDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeybInputDevice_t qt_meta_stringdata_KeybInputDevice = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KeybInputDevice"
QT_MOC_LITERAL(1, 16, 20), // "onEmuFunctionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "setPadButton"
QT_MOC_LITERAL(4, 51, 11), // "buttonIndex"
QT_MOC_LITERAL(5, 63, 7), // "hostKey"
QT_MOC_LITERAL(6, 71, 11), // "hostKeyText"
QT_MOC_LITERAL(7, 83, 9), // "padButton"
QT_MOC_LITERAL(8, 93, 13), // "padButtonText"
QT_MOC_LITERAL(9, 107, 15), // "resetToDefaults"
QT_MOC_LITERAL(10, 123, 13) // "padButtonName"

    },
    "KeybInputDevice\0onEmuFunctionChanged\0"
    "\0setPadButton\0buttonIndex\0hostKey\0"
    "hostKeyText\0padButton\0padButtonText\0"
    "resetToDefaults\0padButtonName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeybInputDevice[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       3,    3,   45,    2, 0x02 /* Public */,
       7,    1,   52,    2, 0x02 /* Public */,
       8,    1,   55,    2, 0x02 /* Public */,
       9,    0,   58,    2, 0x02 /* Public */,
      10,    1,   59,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::QString, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,    4,

       0        // eod
};

void KeybInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeybInputDevice *_t = static_cast<KeybInputDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onEmuFunctionChanged(); break;
        case 1: _t->setPadButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: { int _r = _t->padButton((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->padButtonText((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->resetToDefaults(); break;
        case 5: { QString _r = _t->padButtonName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject KeybInputDevice::staticMetaObject = {
    { &HostInputDevice::staticMetaObject, qt_meta_stringdata_KeybInputDevice.data,
      qt_meta_data_KeybInputDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeybInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeybInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeybInputDevice.stringdata0))
        return static_cast<void*>(const_cast< KeybInputDevice*>(this));
    return HostInputDevice::qt_metacast(_clname);
}

int KeybInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HostInputDevice::qt_metacall(_c, _id, _a);
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
