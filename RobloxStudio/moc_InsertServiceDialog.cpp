/****************************************************************************
** Meta object code from reading C++ file 'InsertServiceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "InsertServiceDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertServiceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsertServiceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   21,   20,   20, 0x0a,
      54,   46,   20,   20, 0x0a,
      71,   20,   20,   20, 0x08,
      89,   84,   20,   20, 0x08,
     129,   20,   20,   20, 0x08,
     154,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InsertServiceDialog[] = {
    "InsertServiceDialog\0\0state\0"
    "updateWidget(bool)\0visible\0setVisible(bool)\0"
    "onAccepted()\0item\0"
    "onItemInsertRequested(QListWidgetItem*)\0"
    "onItemSelectionChanged()\0redrawDialog()\0"
};

void InsertServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsertServiceDialog *_t = static_cast<InsertServiceDialog *>(_o);
        switch (_id) {
        case 0: _t->updateWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onAccepted(); break;
        case 3: _t->onItemInsertRequested((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemSelectionChanged(); break;
        case 5: _t->redrawDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsertServiceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsertServiceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsertServiceDialog,
      qt_meta_data_InsertServiceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsertServiceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsertServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsertServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsertServiceDialog))
        return static_cast<void*>(const_cast< InsertServiceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsertServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
