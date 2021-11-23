/****************************************************************************
** Meta object code from reading C++ file 'RobloxInputConfigDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxInputConfigDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxInputConfigDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxInputConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      34,   24,   24,   24, 0x08,
      50,   43,   24,   24, 0x08,
      76,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxInputConfigDialog[] = {
    "RobloxInputConfigDialog\0\0accept()\0"
    "cancel()\0button\0clicked(QAbstractButton*)\0"
    "dataChanged()\0"
};

void RobloxInputConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxInputConfigDialog *_t = static_cast<RobloxInputConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->cancel(); break;
        case 2: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->dataChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxInputConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxInputConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RobloxInputConfigDialog,
      qt_meta_data_RobloxInputConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxInputConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxInputConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxInputConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxInputConfigDialog))
        return static_cast<void*>(const_cast< RobloxInputConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RobloxInputConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
