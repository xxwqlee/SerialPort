/****************************************************************************
** Meta object code from reading C++ file 'SerialPortlxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SerialPortlxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialPortlxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialPortlxy_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPortlxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPortlxy_t qt_meta_stringdata_SerialPortlxy = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialPortlxy"
QT_MOC_LITERAL(1, 14, 7), // "scan_SP"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "slot_load"
QT_MOC_LITERAL(4, 33, 9), // "slot_save"
QT_MOC_LITERAL(5, 43, 9), // "slot_send"
QT_MOC_LITERAL(6, 53, 10), // "slot_clear"
QT_MOC_LITERAL(7, 64, 9), // "slot_open"
QT_MOC_LITERAL(8, 74, 14), // "slot_clearsend"
QT_MOC_LITERAL(9, 89, 9) // "Read_Data"

    },
    "SerialPortlxy\0scan_SP\0\0slot_load\0"
    "slot_save\0slot_send\0slot_clear\0slot_open\0"
    "slot_clearsend\0Read_Data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPortlxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialPortlxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialPortlxy *_t = static_cast<SerialPortlxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scan_SP(); break;
        case 1: _t->slot_load(); break;
        case 2: _t->slot_save(); break;
        case 3: _t->slot_send(); break;
        case 4: _t->slot_clear(); break;
        case 5: _t->slot_open(); break;
        case 6: _t->slot_clearsend(); break;
        case 7: _t->Read_Data(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SerialPortlxy::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SerialPortlxy.data,
      qt_meta_data_SerialPortlxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialPortlxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPortlxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortlxy.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SerialPortlxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
