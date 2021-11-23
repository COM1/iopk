/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   49, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,
      61,   55,   18,   18, 0x05,
      90,   85,   18,   18, 0x05,
     129,  122,   18,   18, 0x05,
     163,  149,   18,   18, 0x05,
     207,  199,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     230,   55,   18,   18, 0x0a,

 // properties: name, type, flags
     273,  250, 0x0009510b,
     300,  296, 0x02495003,
     322,  317, 0x01095103,
      19,  317, 0x01495103,
     340,  317, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,

 // enums: name, flags, count, data
     250, 0x0,    2,   73,

 // enum data: key, value
     350, uint(Qtitan::RibbonBar::QATopPosition),
     364, uint(Qtitan::RibbonBar::QABottomPosition),

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__RibbonBar[] = {
    "Qtitan::RibbonBar\0\0minimized\0"
    "minimizationChanged(bool)\0index\0"
    "currentPageChanged(int)\0page\0"
    "currentPageChanged(RibbonPage*)\0showed\0"
    "keyTipsShowed(bool)\0menu,showMenu\0"
    "showRibbonContextMenu(QMenu*,bool&)\0"
    "userDlg\0ribbonCustomize(bool&)\0"
    "setCurrentPage(int)\0QuickAccessBarPosition\0"
    "quickAccessBarPosition\0int\0currentIndexPage\0"
    "bool\0frameThemeEnabled\0maximized\0"
    "QATopPosition\0QABottomPosition\0"
};

void Qtitan::RibbonBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RibbonBar *_t = static_cast<RibbonBar *>(_o);
        switch (_id) {
        case 0: _t->minimizationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentPageChanged((*reinterpret_cast< RibbonPage*(*)>(_a[1]))); break;
        case 3: _t->keyTipsShowed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showRibbonContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->ribbonCustomize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qtitan::RibbonBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonBar::staticMetaObject = {
    { &QMenuBar::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonBar,
      qt_meta_data_Qtitan__RibbonBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonBar))
        return static_cast<void*>(const_cast< RibbonBar*>(this));
    return QMenuBar::qt_metacast(_clname);
}

int Qtitan::RibbonBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QuickAccessBarPosition*>(_v) = quickAccessBarPosition(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentIndexPage(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isFrameThemeEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isMinimized(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isMaximized(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setQuickAccessBarPosition(*reinterpret_cast< QuickAccessBarPosition*>(_v)); break;
        case 1: setCurrentPage(*reinterpret_cast< int*>(_v)); break;
        case 2: setFrameThemeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setMinimized(*reinterpret_cast< bool*>(_v)); break;
        case 4: setMaximized(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonBar::minimizationChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtitan::RibbonBar::currentPageChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtitan::RibbonBar::currentPageChanged(RibbonPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qtitan::RibbonBar::keyTipsShowed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qtitan::RibbonBar::showRibbonContextMenu(QMenu * _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qtitan::RibbonBar::ribbonCustomize(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
