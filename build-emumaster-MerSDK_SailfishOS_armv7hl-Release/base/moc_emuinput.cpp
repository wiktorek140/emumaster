/****************************************************************************
** Meta object code from reading C++ file 'emuinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base/emuinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emuinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmuPad_t {
    QByteArrayData data[16];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmuPad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmuPad_t qt_meta_stringdata_EmuPad = {
    {
QT_MOC_LITERAL(0, 0, 6), // "EmuPad"
QT_MOC_LITERAL(1, 7, 6), // "Button"
QT_MOC_LITERAL(2, 14, 12), // "Button_Right"
QT_MOC_LITERAL(3, 27, 11), // "Button_Down"
QT_MOC_LITERAL(4, 39, 9), // "Button_Up"
QT_MOC_LITERAL(5, 49, 11), // "Button_Left"
QT_MOC_LITERAL(6, 61, 8), // "Button_A"
QT_MOC_LITERAL(7, 70, 8), // "Button_B"
QT_MOC_LITERAL(8, 79, 8), // "Button_X"
QT_MOC_LITERAL(9, 88, 8), // "Button_Y"
QT_MOC_LITERAL(10, 97, 9), // "Button_L1"
QT_MOC_LITERAL(11, 107, 9), // "Button_R1"
QT_MOC_LITERAL(12, 117, 9), // "Button_L2"
QT_MOC_LITERAL(13, 127, 9), // "Button_R2"
QT_MOC_LITERAL(14, 137, 12), // "Button_Start"
QT_MOC_LITERAL(15, 150, 13) // "Button_Select"

    },
    "EmuPad\0Button\0Button_Right\0Button_Down\0"
    "Button_Up\0Button_Left\0Button_A\0Button_B\0"
    "Button_X\0Button_Y\0Button_L1\0Button_R1\0"
    "Button_L2\0Button_R2\0Button_Start\0"
    "Button_Select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmuPad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   14,   18,

 // enum data: key, value
       2, uint(EmuPad::Button_Right),
       3, uint(EmuPad::Button_Down),
       4, uint(EmuPad::Button_Up),
       5, uint(EmuPad::Button_Left),
       6, uint(EmuPad::Button_A),
       7, uint(EmuPad::Button_B),
       8, uint(EmuPad::Button_X),
       9, uint(EmuPad::Button_Y),
      10, uint(EmuPad::Button_L1),
      11, uint(EmuPad::Button_R1),
      12, uint(EmuPad::Button_L2),
      13, uint(EmuPad::Button_R2),
      14, uint(EmuPad::Button_Start),
      15, uint(EmuPad::Button_Select),

       0        // eod
};

void EmuPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EmuPad::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EmuPad.data,
      qt_meta_data_EmuPad,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmuPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuPad::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmuPad.stringdata0))
        return static_cast<void*>(const_cast< EmuPad*>(this));
    return QObject::qt_metacast(_clname);
}

int EmuPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
