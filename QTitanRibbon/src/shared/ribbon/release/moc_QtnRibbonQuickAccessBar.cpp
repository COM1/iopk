/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonQuickAccessBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonQuickAccessBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonQuickAccessBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonQuickAccessBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   30,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   29,   29,   29, 0x08,
      87,   29,   29,   29, 0x08,
     114,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonQuickAccessBar[] = {
    "Qtitan::RibbonQuickAccessBar\0\0menu\0"
    "showCustomizeMenu(QMenu*)\0"
    "customizeAction(QAction*)\0"
    "aboutToShowCustomizeMenu()\0"
    "aboutToHideCustomizeMenu()\0"
};

void Qtitan::RibbonQuickAccessBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonQuickAccessBar *_t = static_cast<RibbonQuickAccessBar *>(_o);
        switch (_id) {
        case 0: _t->showCustomizeMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: _t->customizeAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->aboutToShowCustomizeMenu(); break;
        case 3: _t->aboutToHideCustomizeMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonQuickAccessBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonQuickAccessBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonQuickAccessBar,
      qt_meta_data_Qtitan__RibbonQuickAccessBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonQuickAccessBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonQuickAccessBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonQuickAccessBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonQuickAccessBar))
        return static_cast<void*>(const_cast< RibbonQuickAccessBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int Qtitan::RibbonQuickAccessBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonQuickAccessBar::showCustomizeMenu(QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
