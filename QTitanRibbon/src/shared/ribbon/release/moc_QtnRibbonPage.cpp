/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonPage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   54, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x05,
      48,   19,   19,   19, 0x05,
      66,   60,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   84,   19,   19, 0x0a,
     109,   20,   19,   19, 0x0a,
     127,   20,   19,   19, 0x0a,
     152,   19,   19,   19, 0x09,
     170,  163,   19,   19, 0x09,

 // properties: name, type, flags
      20,  196, 0x0a095103,
     204,  196, 0x0a095103,
     221,  217, 0x02095001,
     245,  232, 0x0009510b,

 // enums: name, flags, count, data
     232, 0x0,    8,   70,

 // enum data: key, value
     258, uint(Qtitan::RibbonPage::ContextColorNone),
     275, uint(Qtitan::RibbonPage::ContextColorGreen),
     293, uint(Qtitan::RibbonPage::ContextColorBlue),
     310, uint(Qtitan::RibbonPage::ContextColorRed),
     326, uint(Qtitan::RibbonPage::ContextColorYellow),
     345, uint(Qtitan::RibbonPage::ContextColorCyan),
     362, uint(Qtitan::RibbonPage::ContextColorPurple),
     381, uint(Qtitan::RibbonPage::ContextColorOrange),

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonPage[] = {
    "Qtitan::RibbonPage\0\0title\0"
    "titleChanged(QString)\0activated()\0"
    "allow\0activating(bool&)\0visible\0"
    "setVisible(bool)\0setTitle(QString)\0"
    "setContextTitle(QString)\0released()\0"
    "action\0actionTriggered(QAction*)\0"
    "QString\0contextTitle\0int\0groupCount\0"
    "ContextColor\0contextColor\0ContextColorNone\0"
    "ContextColorGreen\0ContextColorBlue\0"
    "ContextColorRed\0ContextColorYellow\0"
    "ContextColorCyan\0ContextColorPurple\0"
    "ContextColorOrange\0"
};

void Qtitan::RibbonPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonPage *_t = static_cast<RibbonPage *>(_o);
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->activated(); break;
        case 2: _t->activating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setContextTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->released(); break;
        case 7: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonPage,
      qt_meta_data_Qtitan__RibbonPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonPage))
        return static_cast<void*>(const_cast< RibbonPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::RibbonPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = contextTitle(); break;
        case 2: *reinterpret_cast< int*>(_v) = groupCount(); break;
        case 3: *reinterpret_cast< ContextColor*>(_v) = contextColor(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setContextTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: setContextColor(*reinterpret_cast< ContextColor*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonPage::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtitan::RibbonPage::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Qtitan::RibbonPage::activating(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
