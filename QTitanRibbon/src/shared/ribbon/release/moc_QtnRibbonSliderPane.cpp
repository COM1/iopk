/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonSliderPane.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonSliderPane.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonSliderPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonSliderPane[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   26,   25,   25, 0x05,
      59,   50,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   25,   25,   25, 0x0a,
      90,   25,   25,   25, 0x09,
     102,   25,   25,   25, 0x09,

 // properties: name, type, flags
     118,  114, 0x02095103,
      26,  114, 0x02595103,
     129,  114, 0x02495103,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonSliderPane[] = {
    "Qtitan::RibbonSliderPane\0\0value\0"
    "valueChanged(int)\0position\0sliderMoved(int)\0"
    "setValue(int)\0increment()\0decrement()\0"
    "int\0singleStep\0sliderPosition\0"
};

void Qtitan::RibbonSliderPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonSliderPane *_t = static_cast<RibbonSliderPane *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->increment(); break;
        case 4: _t->decrement(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonSliderPane::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonSliderPane::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonSliderPane,
      qt_meta_data_Qtitan__RibbonSliderPane, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonSliderPane::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonSliderPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonSliderPane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonSliderPane))
        return static_cast<void*>(const_cast< RibbonSliderPane*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::RibbonSliderPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = singleStep(); break;
        case 1: *reinterpret_cast< int*>(_v) = value(); break;
        case 2: *reinterpret_cast< int*>(_v) = sliderPosition(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 1: setValue(*reinterpret_cast< int*>(_v)); break;
        case 2: setSliderPosition(*reinterpret_cast< int*>(_v)); break;
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
void Qtitan::RibbonSliderPane::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtitan::RibbonSliderPane::sliderMoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
