/****************************************************************************
** Meta object code from reading C++ file 'PropertyItems.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "PropertyItems.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyItems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrickColorPropertyItem[] = {

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
      38,   24,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BrickColorPropertyItem[] = {
    "BrickColorPropertyItem\0\0selectedColor\0"
    "updatePropertyValue(int)\0"
};

void BrickColorPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BrickColorPropertyItem *_t = static_cast<BrickColorPropertyItem *>(_o);
        switch (_id) {
        case 0: _t->updatePropertyValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BrickColorPropertyItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BrickColorPropertyItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BrickColorPropertyItem,
      qt_meta_data_BrickColorPropertyItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrickColorPropertyItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrickColorPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrickColorPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrickColorPropertyItem))
        return static_cast<void*>(const_cast< BrickColorPropertyItem*>(this));
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(const_cast< BrickColorPropertyItem*>(this));
    return QObject::qt_metacast(_clname);
}

int BrickColorPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_ColorPropertyItem[] = {

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
      33,   19,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorPropertyItem[] = {
    "ColorPropertyItem\0\0selectedColor\0"
    "updatePropertyValue(QColor)\0"
};

void ColorPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorPropertyItem *_t = static_cast<ColorPropertyItem *>(_o);
        switch (_id) {
        case 0: _t->updatePropertyValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorPropertyItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorPropertyItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ColorPropertyItem,
      qt_meta_data_ColorPropertyItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorPropertyItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPropertyItem))
        return static_cast<void*>(const_cast< ColorPropertyItem*>(this));
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(const_cast< ColorPropertyItem*>(this));
    return QObject::qt_metacast(_clname);
}

int ColorPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_DoublePropertyItem[] = {

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
      20,   19,   19,   19, 0x08,
      45,   39,   19,   19, 0x08,
      66,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DoublePropertyItem[] = {
    "DoublePropertyItem\0\0onSpinBoxChanged()\0"
    "value\0onSliderChanged(int)\0"
    "onSliderReleased()\0"
};

void DoublePropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DoublePropertyItem *_t = static_cast<DoublePropertyItem *>(_o);
        switch (_id) {
        case 0: _t->onSpinBoxChanged(); break;
        case 1: _t->onSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onSliderReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DoublePropertyItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DoublePropertyItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DoublePropertyItem,
      qt_meta_data_DoublePropertyItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DoublePropertyItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DoublePropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DoublePropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DoublePropertyItem))
        return static_cast<void*>(const_cast< DoublePropertyItem*>(this));
    if (!strcmp(_clname, "PropertyItem"))
        return static_cast< PropertyItem*>(const_cast< DoublePropertyItem*>(this));
    return QObject::qt_metacast(_clname);
}

int DoublePropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
