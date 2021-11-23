/****************************************************************************
** Meta object code from reading C++ file 'AddEmulationDeviceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "AddEmulationDeviceDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddEmulationDeviceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddEmulationDeviceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      41,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddEmulationDeviceDialog[] = {
    "AddEmulationDeviceDialog\0\0submitDevice()\0"
    "onCancel()\0"
};

void AddEmulationDeviceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddEmulationDeviceDialog *_t = static_cast<AddEmulationDeviceDialog *>(_o);
        switch (_id) {
        case 0: _t->submitDevice(); break;
        case 1: _t->onCancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddEmulationDeviceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddEmulationDeviceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddEmulationDeviceDialog,
      qt_meta_data_AddEmulationDeviceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddEmulationDeviceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddEmulationDeviceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddEmulationDeviceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddEmulationDeviceDialog))
        return static_cast<void*>(const_cast< AddEmulationDeviceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddEmulationDeviceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
