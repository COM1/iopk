/****************************************************************************
** Meta object code from reading C++ file 'InsertObjectListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "InsertObjectListWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InsertObjectListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsertObjectListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x05,
      64,   23,   23,   23, 0x05,
      85,   79,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,  111,   23,   23, 0x0a,
     156,   23,   23,   23, 0x2a,
     180,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InsertObjectListWidget[] = {
    "InsertObjectListWidget\0\0pItem\0"
    "enterKeyPressed(QListWidgetItem*)\0"
    "itemInserted()\0topic\0helpTopicChanged(QString)\0"
    "item\0onItemInsertRequested(QListWidgetItem*)\0"
    "onItemInsertRequested()\0onSelectionChanged()\0"
};

void InsertObjectListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsertObjectListWidget *_t = static_cast<InsertObjectListWidget *>(_o);
        switch (_id) {
        case 0: _t->enterKeyPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->itemInserted(); break;
        case 2: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onItemInsertRequested((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemInsertRequested(); break;
        case 5: _t->onSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsertObjectListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsertObjectListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_InsertObjectListWidget,
      qt_meta_data_InsertObjectListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsertObjectListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsertObjectListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsertObjectListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsertObjectListWidget))
        return static_cast<void*>(const_cast< InsertObjectListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int InsertObjectListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InsertObjectListWidget::enterKeyPressed(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InsertObjectListWidget::itemInserted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void InsertObjectListWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
