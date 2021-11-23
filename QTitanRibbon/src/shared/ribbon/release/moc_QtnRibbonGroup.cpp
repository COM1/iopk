/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonGroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonGroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      32,   20,   20,   20, 0x05,
      58,   20,   20,   20, 0x05,
      76,   70,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   98,   20,   20, 0x09,

 // properties: name, type, flags
     134,  129, 0x01095003,
     153,  129, 0x01095003,
     173,  129, 0x01095001,
      70,  181, 0x0a095103,
     195,  189, 0x45095103,
     200,  129, 0x01094003,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonGroup[] = {
    "Qtitan::RibbonGroup\0\0released()\0"
    "actionTriggered(QAction*)\0hidePopup()\0"
    "title\0titleChanged(QString)\0index\0"
    "currentIndexChanged(int)\0bool\0"
    "isControlsGrouping\0isControlsCentering\0"
    "reduced\0QString\0QIcon\0icon\0"
    "isOptionButtonVisible\0"
};

void Qtitan::RibbonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonGroup *_t = static_cast<RibbonGroup *>(_o);
        switch (_id) {
        case 0: _t->released(); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->hidePopup(); break;
        case 3: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonGroup,
      qt_meta_data_Qtitan__RibbonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGroup))
        return static_cast<void*>(const_cast< RibbonGroup*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::RibbonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = isControlsGrouping(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isControlsCentering(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isReduced(); break;
        case 3: *reinterpret_cast< QString*>(_v) = title(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isOptionButtonVisible(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setControlsGrouping(*reinterpret_cast< bool*>(_v)); break;
        case 1: setControlsCentering(*reinterpret_cast< bool*>(_v)); break;
        case 3: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 4: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: setOptionButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonGroup::released()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Qtitan::RibbonGroup::actionTriggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtitan::RibbonGroup::hidePopup()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Qtitan::RibbonGroup::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
