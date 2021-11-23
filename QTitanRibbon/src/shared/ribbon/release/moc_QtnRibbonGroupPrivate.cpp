/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonGroupPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonGroupPrivate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonGroupPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__GroupDefaultLayout[] = {

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

static const char qt_meta_stringdata_Qtitan__GroupDefaultLayout[] = {
    "Qtitan::GroupDefaultLayout\0"
};

void Qtitan::GroupDefaultLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::GroupDefaultLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::GroupDefaultLayout::staticMetaObject = {
    { &GroupLayout::staticMetaObject, qt_meta_stringdata_Qtitan__GroupDefaultLayout,
      qt_meta_data_Qtitan__GroupDefaultLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::GroupDefaultLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::GroupDefaultLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::GroupDefaultLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__GroupDefaultLayout))
        return static_cast<void*>(const_cast< GroupDefaultLayout*>(this));
    return GroupLayout::qt_metacast(_clname);
}

int Qtitan::GroupDefaultLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GroupLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Qtitan__RibbonGroupPrivate[] = {

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
      28,   27,   27,   27, 0x0a,
      52,   27,   27,   27, 0x0a,
      84,   77,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonGroupPrivate[] = {
    "Qtitan::RibbonGroupPrivate\0\0"
    "pressLeftScrollButton()\0"
    "pressRightScrollButton()\0action\0"
    "hidePopupMode(QAction*)\0"
};

void Qtitan::RibbonGroupPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonGroupPrivate *_t = static_cast<RibbonGroupPrivate *>(_o);
        switch (_id) {
        case 0: _t->pressLeftScrollButton(); break;
        case 1: _t->pressRightScrollButton(); break;
        case 2: _t->hidePopupMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonGroupPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonGroupPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonGroupPrivate,
      qt_meta_data_Qtitan__RibbonGroupPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonGroupPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonGroupPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonGroupPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGroupPrivate))
        return static_cast<void*>(const_cast< RibbonGroupPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int Qtitan::RibbonGroupPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
