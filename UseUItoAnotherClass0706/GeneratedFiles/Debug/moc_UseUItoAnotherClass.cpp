/****************************************************************************
** Meta object code from reading C++ file 'UseUItoAnotherClass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UseUItoAnotherClass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UseUItoAnotherClass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UseUItoAnotherClass_t {
    QByteArrayData data[12];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UseUItoAnotherClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UseUItoAnotherClass_t qt_meta_stringdata_UseUItoAnotherClass = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UseUItoAnotherClass"
QT_MOC_LITERAL(1, 20, 13), // "onAorMChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "onEStopChanged"
QT_MOC_LITERAL(4, 50, 13), // "onGearChanged"
QT_MOC_LITERAL(5, 64, 14), // "onSpeedChanged"
QT_MOC_LITERAL(6, 79, 14), // "onBreakChanged"
QT_MOC_LITERAL(7, 94, 14), // "onSteerChanged"
QT_MOC_LITERAL(8, 109, 12), // "onEncChanged"
QT_MOC_LITERAL(9, 122, 19), // "select_gear_clicked"
QT_MOC_LITERAL(10, 142, 11), // "show_status"
QT_MOC_LITERAL(11, 154, 10) // "go_forward"

    },
    "UseUItoAnotherClass\0onAorMChanged\0\0"
    "onEStopChanged\0onGearChanged\0"
    "onSpeedChanged\0onBreakChanged\0"
    "onSteerChanged\0onEncChanged\0"
    "select_gear_clicked\0show_status\0"
    "go_forward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UseUItoAnotherClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       3,    1,   67,    2, 0x0a /* Public */,
       4,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UseUItoAnotherClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UseUItoAnotherClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAorMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onEStopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onGearChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onSpeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onBreakChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onSteerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onEncChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->select_gear_clicked(); break;
        case 8: _t->show_status(); break;
        case 9: _t->go_forward(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UseUItoAnotherClass::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_UseUItoAnotherClass.data,
    qt_meta_data_UseUItoAnotherClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UseUItoAnotherClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UseUItoAnotherClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UseUItoAnotherClass.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UseUItoAnotherClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
