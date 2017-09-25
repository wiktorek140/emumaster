/****************************************************************************
** Meta object code from reading C++ file 'disklistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/diskgallery/disklistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'disklistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DiskListModel_t {
    QByteArrayData data[27];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiskListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiskListModel_t qt_meta_stringdata_DiskListModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DiskListModel"
QT_MOC_LITERAL(1, 14, 17), // "collectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "setNameFilter"
QT_MOC_LITERAL(4, 47, 6), // "filter"
QT_MOC_LITERAL(5, 54, 15), // "getDiskFileName"
QT_MOC_LITERAL(6, 70, 1), // "i"
QT_MOC_LITERAL(7, 72, 12), // "getDiskTitle"
QT_MOC_LITERAL(8, 85, 18), // "getDiskTitleElided"
QT_MOC_LITERAL(9, 104, 14), // "getDiskEmuName"
QT_MOC_LITERAL(10, 119, 11), // "getAlphabet"
QT_MOC_LITERAL(11, 131, 19), // "getScreenShotUpdate"
QT_MOC_LITERAL(12, 151, 5), // "trash"
QT_MOC_LITERAL(13, 157, 12), // "setDiskCover"
QT_MOC_LITERAL(14, 170, 8), // "coverUrl"
QT_MOC_LITERAL(15, 179, 8), // "addToFav"
QT_MOC_LITERAL(16, 188, 13), // "removeFromFav"
QT_MOC_LITERAL(17, 202, 15), // "diskInFavExists"
QT_MOC_LITERAL(18, 218, 19), // "addIconToHomeScreen"
QT_MOC_LITERAL(19, 238, 5), // "index"
QT_MOC_LITERAL(20, 244, 5), // "scale"
QT_MOC_LITERAL(21, 250, 1), // "x"
QT_MOC_LITERAL(22, 252, 1), // "y"
QT_MOC_LITERAL(23, 254, 24), // "removeIconFromHomeScreen"
QT_MOC_LITERAL(24, 279, 22), // "iconInHomeScreenExists"
QT_MOC_LITERAL(25, 302, 10), // "collection"
QT_MOC_LITERAL(26, 313, 5) // "count"

    },
    "DiskListModel\0collectionChanged\0\0"
    "setNameFilter\0filter\0getDiskFileName\0"
    "i\0getDiskTitle\0getDiskTitleElided\0"
    "getDiskEmuName\0getAlphabet\0"
    "getScreenShotUpdate\0trash\0setDiskCover\0"
    "coverUrl\0addToFav\0removeFromFav\0"
    "diskInFavExists\0addIconToHomeScreen\0"
    "index\0scale\0x\0y\0removeIconFromHomeScreen\0"
    "iconInHomeScreenExists\0collection\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiskListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       2,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   95,    2, 0x02 /* Public */,
       5,    1,   98,    2, 0x02 /* Public */,
       7,    1,  101,    2, 0x02 /* Public */,
       8,    1,  104,    2, 0x02 /* Public */,
       9,    1,  107,    2, 0x02 /* Public */,
      10,    1,  110,    2, 0x02 /* Public */,
      11,    1,  113,    2, 0x02 /* Public */,
      12,    1,  116,    2, 0x02 /* Public */,
      13,    2,  119,    2, 0x02 /* Public */,
      15,    1,  124,    2, 0x02 /* Public */,
      16,    1,  127,    2, 0x02 /* Public */,
      17,    1,  130,    2, 0x02 /* Public */,
      18,    4,  133,    2, 0x02 /* Public */,
      23,    1,  142,    2, 0x02 /* Public */,
      24,    1,  145,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::Int, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    6,   14,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Bool, QMetaType::Int, QMetaType::QReal, QMetaType::Int, QMetaType::Int,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Bool, QMetaType::Int,   19,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void DiskListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiskListModel *_t = static_cast<DiskListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collectionChanged(); break;
        case 1: _t->setNameFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->getDiskFileName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->getDiskTitle((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getDiskTitleElided((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getDiskEmuName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getAlphabet((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->getScreenShotUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->trash((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setDiskCover((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 10: _t->addToFav((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->removeFromFav((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { bool _r = _t->diskInFavExists((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->addIconToHomeScreen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->removeIconFromHomeScreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: { bool _r = _t->iconInHomeScreenExists((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiskListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiskListModel::collectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DiskListModel *_t = static_cast<DiskListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->collection(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DiskListModel *_t = static_cast<DiskListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCollection(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DiskListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_DiskListModel.data,
      qt_meta_data_DiskListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiskListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiskListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiskListModel.stringdata0))
        return static_cast<void*>(const_cast< DiskListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int DiskListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DiskListModel::collectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
