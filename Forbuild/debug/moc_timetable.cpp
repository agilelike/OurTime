/****************************************************************************
** Meta object code from reading C++ file 'timetable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OutTime/timetable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timetable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimeTable_t {
    QByteArrayData data[23];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeTable_t qt_meta_stringdata_TimeTable = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TimeTable"
QT_MOC_LITERAL(1, 10, 8), // "passflag"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 1), // "f"
QT_MOC_LITERAL(4, 22, 5), // "call3"
QT_MOC_LITERAL(5, 28, 1), // "m"
QT_MOC_LITERAL(6, 30, 1), // "n"
QT_MOC_LITERAL(7, 32, 5), // "call4"
QT_MOC_LITERAL(8, 38, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(9, 67, 30), // "on_commandLinkButton_2_clicked"
QT_MOC_LITERAL(10, 98, 14), // "getschecontent"
QT_MOC_LITERAL(11, 113, 8), // "Schedule"
QT_MOC_LITERAL(12, 122, 4), // "sche"
QT_MOC_LITERAL(13, 127, 11), // "getscheedit"
QT_MOC_LITERAL(14, 139, 14), // "gettaskcontent"
QT_MOC_LITERAL(15, 154, 11), // "gettaskedit"
QT_MOC_LITERAL(16, 166, 10), // "clickevent"
QT_MOC_LITERAL(17, 177, 12), // "editSchedule"
QT_MOC_LITERAL(18, 190, 11), // "delSchedule"
QT_MOC_LITERAL(19, 202, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(20, 224, 9), // "showEvent"
QT_MOC_LITERAL(21, 234, 11), // "QShowEvent*"
QT_MOC_LITERAL(22, 246, 5) // "event"

    },
    "TimeTable\0passflag\0\0f\0call3\0m\0n\0call4\0"
    "on_commandLinkButton_clicked\0"
    "on_commandLinkButton_2_clicked\0"
    "getschecontent\0Schedule\0sche\0getscheedit\0"
    "gettaskcontent\0gettaskedit\0clickevent\0"
    "editSchedule\0delSchedule\0on_pushButton_clicked\0"
    "showEvent\0QShowEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    3,   87,    2, 0x06 /* Public */,
       7,    2,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    5,    6,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void TimeTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeTable *_t = static_cast<TimeTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->passflag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->call3((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->call4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_commandLinkButton_clicked(); break;
        case 4: _t->on_commandLinkButton_2_clicked(); break;
        case 5: _t->getschecontent((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 6: _t->getscheedit((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 7: _t->gettaskcontent((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 8: _t->gettaskedit((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 9: _t->clickevent(); break;
        case 10: _t->editSchedule(); break;
        case 11: _t->delSchedule(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TimeTable::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeTable::passflag)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TimeTable::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeTable::call3)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TimeTable::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeTable::call4)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TimeTable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TimeTable.data,
      qt_meta_data_TimeTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeTable.stringdata0))
        return static_cast<void*>(const_cast< TimeTable*>(this));
    return QWidget::qt_metacast(_clname);
}

int TimeTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TimeTable::passflag(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TimeTable::call3(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimeTable::call4(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
