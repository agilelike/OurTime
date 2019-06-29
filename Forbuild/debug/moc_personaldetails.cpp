/****************************************************************************
** Meta object code from reading C++ file 'personaldetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OutTime/personaldetails.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personaldetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_personalDetails_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personalDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personalDetails_t qt_meta_stringdata_personalDetails = {
    {
QT_MOC_LITERAL(0, 0, 15), // "personalDetails"
QT_MOC_LITERAL(1, 16, 15), // "showInformation"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "state"
QT_MOC_LITERAL(4, 39, 6), // "create"
QT_MOC_LITERAL(5, 46, 14), // "showCreateTeam"
QT_MOC_LITERAL(6, 61, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 85, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 109, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(9, 133, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(10, 157, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(11, 181, 23) // "on_pushButton_5_clicked"

    },
    "personalDetails\0showInformation\0\0state\0"
    "create\0showCreateTeam\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personalDetails[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   62,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void personalDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        personalDetails *_t = static_cast<personalDetails *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->showCreateTeam((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_6_clicked(); break;
        case 6: _t->on_pushButton_7_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (personalDetails::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&personalDetails::showInformation)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (personalDetails::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&personalDetails::showCreateTeam)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject personalDetails::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_personalDetails.data,
      qt_meta_data_personalDetails,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *personalDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personalDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_personalDetails.stringdata0))
        return static_cast<void*>(const_cast< personalDetails*>(this));
    return QDialog::qt_metacast(_clname);
}

int personalDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void personalDetails::showInformation(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void personalDetails::showCreateTeam(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
