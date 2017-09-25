/****************************************************************************
** Meta object code from reading C++ file 'hostinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/hostinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hostinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HostInput_t {
    QByteArrayData data[6];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HostInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HostInput_t qt_meta_stringdata_HostInput = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HostInput"
QT_MOC_LITERAL(1, 10, 5), // "pause"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "quit"
QT_MOC_LITERAL(4, 22, 14), // "devicesChanged"
QT_MOC_LITERAL(5, 37, 12) // "loadFromConf"

    },
    "HostInput\0pause\0\0quit\0devicesChanged\0"
    "loadFromConf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HostInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HostInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HostInput *_t = static_cast<HostInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pause(); break;
        case 1: _t->quit(); break;
        case 2: _t->devicesChanged(); break;
        case 3: _t->loadFromConf(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HostInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HostInput::pause)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HostInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HostInput::quit)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HostInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HostInput::devicesChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HostInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HostInput.data,
      qt_meta_data_HostInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HostInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HostInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HostInput.stringdata0))
        return static_cast<void*>(const_cast< HostInput*>(this));
    return QObject::qt_metacast(_clname);
}

int HostInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HostInput::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HostInput::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void HostInput::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
