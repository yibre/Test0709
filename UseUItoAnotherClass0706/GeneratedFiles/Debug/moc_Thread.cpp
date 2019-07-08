/****************************************************************************
** Meta object code from reading C++ file 'Thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Thread_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Thread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Thread_t qt_meta_stringdata_Thread = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Thread"
QT_MOC_LITERAL(1, 7, 11), // "AorMChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "EStopChanged"
QT_MOC_LITERAL(4, 33, 11), // "GearChanged"
QT_MOC_LITERAL(5, 45, 12), // "SpeedChanged"
QT_MOC_LITERAL(6, 58, 12), // "SteerChanged"
QT_MOC_LITERAL(7, 71, 12), // "BreakChanged"
QT_MOC_LITERAL(8, 84, 10), // "EncChanged"
QT_MOC_LITERAL(9, 95, 12) // "AliveChanged"

    },
    "Thread\0AorMChanged\0\0EStopChanged\0"
    "GearChanged\0SpeedChanged\0SteerChanged\0"
    "BreakChanged\0EncChanged\0AliveChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Thread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       6,    1,   66,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,
       8,    1,   72,    2, 0x06 /* Public */,
       9,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Thread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AorMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->EStopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->GearChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SpeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SteerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->BreakChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->EncChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->AliveChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::AorMChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::EStopChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::GearChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::SpeedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::SteerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::BreakChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::EncChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Thread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Thread::AliveChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Thread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Thread.data,
    qt_meta_data_Thread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Thread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void Thread::AorMChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Thread::EStopChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Thread::GearChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Thread::SpeedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Thread::SteerChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Thread::BreakChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Thread::EncChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Thread::AliveChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
