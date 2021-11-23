/****************************************************************************
** Meta object code from reading C++ file 'RobloxPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   52,   19,   19, 0x08,
      78,   19,   19,   19, 0x08,
      93,   87,   19,   19, 0x08,
     126,   87,   19,   19, 0x08,
     172,  160,   19,   19, 0x08,
     199,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PropertyTreeWidget[] = {
    "PropertyTreeWidget\0\0topic\0"
    "helpTopicChanged(QString)\0filter\0"
    "setFilter(QString)\0update()\0pItem\0"
    "onItemExpanded(QTreeWidgetItem*)\0"
    "onItemCollapsed(QTreeWidgetItem*)\0"
    "objectValue\0updatePropertySlot(QColor)\0"
    "sendPropertySearchCounter()\0"
};

void PropertyTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyTreeWidget *_t = static_cast<PropertyTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        case 3: _t->onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->updatePropertySlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->sendPropertySearchCounter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PropertyTreeWidget,
      qt_meta_data_PropertyTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyTreeWidget))
        return static_cast<void*>(const_cast< PropertyTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PropertyTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PropertyTreeWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_RobloxPropertyWidget[] = {

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

static const char qt_meta_stringdata_RobloxPropertyWidget[] = {
    "RobloxPropertyWidget\0\0updateSelectionInfoLabel()\0"
};

void RobloxPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxPropertyWidget *_t = static_cast<RobloxPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->updateSelectionInfoLabel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RobloxPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxPropertyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxPropertyWidget,
      qt_meta_data_RobloxPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxPropertyWidget))
        return static_cast<void*>(const_cast< RobloxPropertyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
