/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonGallery.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonGallery.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonGallery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonGalleryGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonGalleryGroup[] = {
    "Qtitan::RibbonGalleryGroup\0"
};

void Qtitan::RibbonGalleryGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::RibbonGalleryGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonGalleryGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonGalleryGroup,
      qt_meta_data_Qtitan__RibbonGalleryGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonGalleryGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonGalleryGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonGalleryGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGalleryGroup))
        return static_cast<void*>(const_cast< RibbonGalleryGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtitan::RibbonGalleryGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Qtitan__RibbonGallery[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,
      60,   23,   22,   22, 0x05,
     105,   92,   22,   22, 0x05,
     161,  144,   22,   22, 0x05,
     219,   22,   22,   22, 0x05,

 // properties: name, type, flags
     247,  242, 0x01095003,
     283,  263, 0x0009510b,
     299,  242, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonGallery[] = {
    "Qtitan::RibbonGallery\0\0item\0"
    "itemPressed(RibbonGalleryItem*)\0"
    "itemClicked(RibbonGalleryItem*)\0"
    "item,handled\0itemClicking(RibbonGalleryItem*,bool&)\0"
    "current,previous\0"
    "currentItemChanged(RibbonGalleryItem*,RibbonGalleryItem*)\0"
    "itemSelectionChanged()\0bool\0isBorderVisible\0"
    "Qt::ScrollBarPolicy\0scrollBarPolicy\0"
    "isResizable\0"
};

void Qtitan::RibbonGallery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonGallery *_t = static_cast<RibbonGallery *>(_o);
        switch (_id) {
        case 0: _t->itemPressed((*reinterpret_cast< RibbonGalleryItem*(*)>(_a[1]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< RibbonGalleryItem*(*)>(_a[1]))); break;
        case 2: _t->itemClicking((*reinterpret_cast< RibbonGalleryItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->currentItemChanged((*reinterpret_cast< RibbonGalleryItem*(*)>(_a[1])),(*reinterpret_cast< RibbonGalleryItem*(*)>(_a[2]))); break;
        case 4: _t->itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonGallery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonGallery::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonGallery,
      qt_meta_data_Qtitan__RibbonGallery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonGallery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonGallery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonGallery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGallery))
        return static_cast<void*>(const_cast< RibbonGallery*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::RibbonGallery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isBorderVisible(); break;
        case 1: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = scrollBarPolicy(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isResizable(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBorderVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: setScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonGallery::itemPressed(RibbonGalleryItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtitan::RibbonGallery::itemClicked(RibbonGalleryItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtitan::RibbonGallery::itemClicking(RibbonGalleryItem * _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qtitan::RibbonGallery::currentItemChanged(RibbonGalleryItem * _t1, RibbonGalleryItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qtitan::RibbonGallery::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
