/****************************************************************************
** Meta object code from reading C++ file 'KeepSavedChangesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "KeepSavedChangesDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeepSavedChangesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeepSavedChangesDialog[] = {

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
      31,   24,   23,   23, 0x0a,
      59,   23,   23,   23, 0x0a,
      68,   23,   23,   23, 0x0a,
      80,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KeepSavedChangesDialog[] = {
    "KeepSavedChangesDialog\0\0button\0"
    "onClicked(QAbstractButton*)\0onSave()\0"
    "onDiscard()\0onCancel()\0"
};

void KeepSavedChangesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeepSavedChangesDialog *_t = static_cast<KeepSavedChangesDialog *>(_o);
        switch (_id) {
        case 0: _t->onClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->onSave(); break;
        case 2: _t->onDiscard(); break;
        case 3: _t->onCancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeepSavedChangesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeepSavedChangesDialog::staticMetaObject = {
    { &QMessageBox::staticMetaObject, qt_meta_stringdata_KeepSavedChangesDialog,
      qt_meta_data_KeepSavedChangesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeepSavedChangesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeepSavedChangesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeepSavedChangesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeepSavedChangesDialog))
        return static_cast<void*>(const_cast< KeepSavedChangesDialog*>(this));
    return QMessageBox::qt_metacast(_clname);
}

int KeepSavedChangesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
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
