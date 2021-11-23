/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonGalleryPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonGalleryPrivate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonGalleryPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonGalleryPrivate[] = {

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
      41,   30,   29,   29, 0x0a,
      66,   59,   29,   29, 0x0a,
      87,   29,   29,   29, 0x0a,
     105,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonGalleryPrivate[] = {
    "Qtitan::RibbonGalleryPrivate\0\0nScrollPos\0"
    "setScrollPos(int)\0action\0actionTriggered(int)\0"
    "pressedScrollUp()\0pressedScrollDown()\0"
};

void Qtitan::RibbonGalleryPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonGalleryPrivate *_t = static_cast<RibbonGalleryPrivate *>(_o);
        switch (_id) {
        case 0: _t->setScrollPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pressedScrollUp(); break;
        case 3: _t->pressedScrollDown(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonGalleryPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonGalleryPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonGalleryPrivate,
      qt_meta_data_Qtitan__RibbonGalleryPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonGalleryPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonGalleryPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonGalleryPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGalleryPrivate))
        return static_cast<void*>(const_cast< RibbonGalleryPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtitan::RibbonGalleryPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
