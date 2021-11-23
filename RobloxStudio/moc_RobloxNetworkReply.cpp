/****************************************************************************
** Meta object code from reading C++ file 'RobloxNetworkReply.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxNetworkReply.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxNetworkReply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxNetworkReply[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   19,   19,   19, 0x08,
      49,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxNetworkReply[] = {
    "RobloxNetworkReply\0\0finished()\0"
    "onChildFinished()\0handleRedirection()\0"
};

void RobloxNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxNetworkReply *_t = static_cast<RobloxNetworkReply *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->onChildFinished(); break;
        case 2: _t->handleRedirection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RobloxNetworkReply::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxNetworkReply,
      qt_meta_data_RobloxNetworkReply, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxNetworkReply::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxNetworkReply))
        return static_cast<void*>(const_cast< RobloxNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RobloxNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
