/****************************************************************************
** Meta object code from reading C++ file 'CQMetaEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/CQMetaEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQMetaEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQMetaEdit_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CQMetaEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CQMetaEdit_t qt_meta_stringdata_CQMetaEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CQMetaEdit"
QT_MOC_LITERAL(1, 11, 12), // "setInherited"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "loadObjectName"
QT_MOC_LITERAL(4, 40, 10), // "loadParent"
QT_MOC_LITERAL(5, 51, 10), // "pickObject"
QT_MOC_LITERAL(6, 62, 6), // "object"
QT_MOC_LITERAL(7, 69, 12), // "snapshotSlot"
QT_MOC_LITERAL(8, 82, 9) // "inherited"

    },
    "CQMetaEdit\0setInherited\0\0loadObjectName\0"
    "loadParent\0pickObject\0object\0snapshotSlot\0"
    "inherited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQMetaEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       3,    0,   42,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void CQMetaEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQMetaEdit *_t = static_cast<CQMetaEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setInherited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadObjectName(); break;
        case 2: _t->loadParent(); break;
        case 3: _t->pickObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->snapshotSlot(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CQMetaEdit *_t = static_cast<CQMetaEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->inherited(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CQMetaEdit *_t = static_cast<CQMetaEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInherited(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CQMetaEdit::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CQMetaEdit.data,
      qt_meta_data_CQMetaEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CQMetaEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQMetaEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CQMetaEdit.stringdata0))
        return static_cast<void*>(const_cast< CQMetaEdit*>(this));
    return QFrame::qt_metacast(_clname);
}

int CQMetaEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE