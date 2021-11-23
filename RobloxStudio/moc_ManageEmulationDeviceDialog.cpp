/****************************************************************************
** Meta object code from reading C++ file 'ManageEmulationDeviceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "ManageEmulationDeviceDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManageEmulationDeviceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManageEmulationDeviceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      40,   28,   28,   28, 0x0a,
      62,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ManageEmulationDeviceDialog[] = {
    "ManageEmulationDeviceDialog\0\0onCancel()\0"
    "onPlusButtonPressed()\0onMinusButtonPressed()\0"
};

void ManageEmulationDeviceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManageEmulationDeviceDialog *_t = static_cast<ManageEmulationDeviceDialog *>(_o);
        switch (_id) {
        case 0: _t->onCancel(); break;
        case 1: _t->onPlusButtonPressed(); break;
        case 2: _t->onMinusButtonPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ManageEmulationDeviceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ManageEmulationDeviceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManageEmulationDeviceDialog,
      qt_meta_data_ManageEmulationDeviceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManageEmulationDeviceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManageEmulationDeviceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManageEmulationDeviceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManageEmulationDeviceDialog))
        return static_cast<void*>(const_cast< ManageEmulationDeviceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ManageEmulationDeviceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
