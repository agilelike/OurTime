/****************************************************************************
** Meta object code from reading C++ file 'BaseTitleBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OutTime/BaseTitleBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseTitleBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseTitleBar_t {
    QByteArrayData data[11];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseTitleBar_t qt_meta_stringdata_BaseTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BaseTitleBar"
QT_MOC_LITERAL(1, 13, 22), // "signalButtonMinClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "signalButtonRestoreClicked"
QT_MOC_LITERAL(4, 64, 22), // "signalButtonMaxClicked"
QT_MOC_LITERAL(5, 87, 24), // "signalButtonCloseClicked"
QT_MOC_LITERAL(6, 112, 18), // "onButtonMinClicked"
QT_MOC_LITERAL(7, 131, 22), // "onButtonRestoreClicked"
QT_MOC_LITERAL(8, 154, 18), // "onButtonMaxClicked"
QT_MOC_LITERAL(9, 173, 20), // "onButtonCloseClicked"
QT_MOC_LITERAL(10, 194, 11) // "onRollTitle"

    },
    "BaseTitleBar\0signalButtonMinClicked\0"
    "\0signalButtonRestoreClicked\0"
    "signalButtonMaxClicked\0signalButtonCloseClicked\0"
    "onButtonMinClicked\0onButtonRestoreClicked\0"
    "onButtonMaxClicked\0onButtonCloseClicked\0"
    "onRollTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseTitleBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BaseTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseTitleBar *_t = static_cast<BaseTitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalButtonMinClicked(); break;
        case 1: _t->signalButtonRestoreClicked(); break;
        case 2: _t->signalButtonMaxClicked(); break;
        case 3: _t->signalButtonCloseClicked(); break;
        case 4: _t->onButtonMinClicked(); break;
        case 5: _t->onButtonRestoreClicked(); break;
        case 6: _t->onButtonMaxClicked(); break;
        case 7: _t->onButtonCloseClicked(); break;
        case 8: _t->onRollTitle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseTitleBar::signalButtonMinClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseTitleBar::signalButtonRestoreClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseTitleBar::signalButtonMaxClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BaseTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseTitleBar::signalButtonCloseClicked)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BaseTitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BaseTitleBar.data,
      qt_meta_data_BaseTitleBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BaseTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BaseTitleBar.stringdata0))
        return static_cast<void*>(const_cast< BaseTitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int BaseTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void BaseTitleBar::signalButtonMinClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BaseTitleBar::signalButtonRestoreClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BaseTitleBar::signalButtonMaxClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BaseTitleBar::signalButtonCloseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
