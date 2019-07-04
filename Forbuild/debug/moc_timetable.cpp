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
    QByteArrayData data[19];
    char stringdata0[236];
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
QT_MOC_LITERAL(4, 22, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(5, 51, 30), // "on_commandLinkButton_2_clicked"
QT_MOC_LITERAL(6, 82, 14), // "getschecontent"
QT_MOC_LITERAL(7, 97, 8), // "Schedule"
QT_MOC_LITERAL(8, 106, 4), // "sche"
QT_MOC_LITERAL(9, 111, 11), // "getscheedit"
QT_MOC_LITERAL(10, 123, 14), // "gettaskcontent"
QT_MOC_LITERAL(11, 138, 11), // "gettaskedit"
QT_MOC_LITERAL(12, 150, 10), // "clickevent"
QT_MOC_LITERAL(13, 161, 12), // "editSchedule"
QT_MOC_LITERAL(14, 174, 11), // "delSchedule"
QT_MOC_LITERAL(15, 186, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 208, 9), // "showEvent"
QT_MOC_LITERAL(17, 218, 11), // "QShowEvent*"
QT_MOC_LITERAL(18, 230, 5) // "event"

    },
    "TimeTable\0passflag\0\0f\0"
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
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void TimeTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeTable *_t = static_cast<TimeTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->passflag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_commandLinkButton_clicked(); break;
        case 2: _t->on_commandLinkButton_2_clicked(); break;
        case 3: _t->getschecontent((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 4: _t->getscheedit((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 5: _t->gettaskcontent((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 6: _t->gettaskedit((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 7: _t->clickevent(); break;
        case 8: _t->editSchedule(); break;
        case 9: _t->delSchedule(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TimeTable::passflag(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
