/****************************************************************************
** Meta object code from reading C++ file 'StudioDeviceEmulator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "StudioDeviceEmulator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StudioDeviceEmulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StudioDeviceEmulator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StudioDeviceEmulator[] = {
    "StudioDeviceEmulator\0\0deviceActivated()\0"
};

void StudioDeviceEmulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StudioDeviceEmulator *_t = static_cast<StudioDeviceEmulator *>(_o);
        switch (_id) {
        case 0: _t->deviceActivated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StudioDeviceEmulator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StudioDeviceEmulator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StudioDeviceEmulator,
      qt_meta_data_StudioDeviceEmulator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StudioDeviceEmulator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StudioDeviceEmulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StudioDeviceEmulator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StudioDeviceEmulator))
        return static_cast<void*>(const_cast< StudioDeviceEmulator*>(this));
    return QObject::qt_metacast(_clname);
}

int StudioDeviceEmulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
