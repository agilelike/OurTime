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
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeTable_t qt_meta_stringdata_TimeTable = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TimeTable"
QT_MOC_LITERAL(1, 10, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 30), // "on_commandLinkButton_2_clicked"
QT_MOC_LITERAL(4, 71, 11), // "getcontent1"
QT_MOC_LITERAL(5, 83, 8), // "Schedule"
QT_MOC_LITERAL(6, 92, 4), // "sche"
QT_MOC_LITERAL(7, 97, 11), // "getcontent2"
QT_MOC_LITERAL(8, 109, 10), // "clickevent"
QT_MOC_LITERAL(9, 120, 12), // "editSchedule"
QT_MOC_LITERAL(10, 133, 11) // "delSchedule"

    },
    "TimeTable\0on_commandLinkButton_clicked\0"
    "\0on_commandLinkButton_2_clicked\0"
    "getcontent1\0Schedule\0sche\0getcontent2\0"
    "clickevent\0editSchedule\0delSchedule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimeTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeTable *_t = static_cast<TimeTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->on_commandLinkButton_2_clicked(); break;
        case 2: _t->getcontent1((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 3: _t->getcontent2((*reinterpret_cast< Schedule(*)>(_a[1]))); break;
        case 4: _t->clickevent(); break;
        case 5: _t->editSchedule(); break;
        case 6: _t->delSchedule(); break;
        default: ;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
