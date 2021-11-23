/****************************************************************************
** Meta object code from reading C++ file 'RobloxRibbonMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxRibbonMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxRibbonMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxRibbonMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      61,   52,   47,   23, 0x09,
      95,   85,   23,   23, 0x09,
     120,  112,   23,   23, 0x08,
     164,  156,   23,   23, 0x08,
     208,   23,   23,   23, 0x08,
     247,  242,   23,   23, 0x08,
     317,  304,   23,   23, 0x08,
     345,  112,   23,   23, 0x08,
     382,  376,   23,   23, 0x08,
     416,  410,   23,   23, 0x08,
     445,   23,   23,   23, 0x08,
     471,   23,   23,   23, 0x08,
     503,  493,   23,   23, 0x08,
     541,   23,   23,   23, 0x08,
     571,  564,   23,   23, 0x08,
     599,   23,   23,   23, 0x08,
     622,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxRibbonMainWindow[] = {
    "RobloxRibbonMainWindow\0\0toggleRibbonMinimize()\0"
    "bool\0fileName\0openRecentFile(QString)\0"
    "isChecked\0commonSlot(bool)\0pAction\0"
    "handleActionGroupSelected(QAction*)\0"
    "pButton\0handleButtonGroupSelected(QAbstractButton*)\0"
    "handleMenuActionTrigger(QAction*)\0"
    "item\0handleBasicObjectsGalleryItemClicked(RibbonGalleryItem*)\0"
    "selectedItem\0handleItemSelected(QString)\0"
    "handleActionSelected(QAction*)\0state\0"
    "handleCheckBoxClicked(bool)\0index\0"
    "handleComboBoxActivated(int)\0"
    "handleToolButtonClicked()\0"
    "handleColorPickMenu()\0minimized\0"
    "handleRibbonMinimizationChanged(bool)\0"
    "customizeQuickAccess()\0action\0"
    "handleStyleChange(QAction*)\0"
    "showGroupOptionsMenu()\0updateProxyAction()\0"
};

void RobloxRibbonMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxRibbonMainWindow *_t = static_cast<RobloxRibbonMainWindow *>(_o);
        switch (_id) {
        case 0: _t->toggleRibbonMinimize(); break;
        case 1: { bool _r = _t->openRecentFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->commonSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->handleActionGroupSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->handleButtonGroupSelected((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->handleMenuActionTrigger((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->handleBasicObjectsGalleryItemClicked((*reinterpret_cast< RibbonGalleryItem*(*)>(_a[1]))); break;
        case 7: _t->handleItemSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->handleActionSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->handleCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->handleComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->handleToolButtonClicked(); break;
        case 12: _t->handleColorPickMenu(); break;
        case 13: _t->handleRibbonMinimizationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->customizeQuickAccess(); break;
        case 15: _t->handleStyleChange((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->showGroupOptionsMenu(); break;
        case 17: _t->updateProxyAction(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxRibbonMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxRibbonMainWindow::staticMetaObject = {
    { &Qtitan::RibbonMainWindow::staticMetaObject, qt_meta_stringdata_RobloxRibbonMainWindow,
      qt_meta_data_RobloxRibbonMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxRibbonMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxRibbonMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxRibbonMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxRibbonMainWindow))
        return static_cast<void*>(const_cast< RobloxRibbonMainWindow*>(this));
    if (!strcmp(_clname, "Ui::RBXMainWindow"))
        return static_cast< Ui::RBXMainWindow*>(const_cast< RobloxRibbonMainWindow*>(this));
    typedef Qtitan::RibbonMainWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RobloxRibbonMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Qtitan::RibbonMainWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
static const uint qt_meta_data_ToolButtonProxyMenu[] = {

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
      21,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ToolButtonProxyMenu[] = {
    "ToolButtonProxyMenu\0\0onChanged()\0"
};

void ToolButtonProxyMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToolButtonProxyMenu *_t = static_cast<ToolButtonProxyMenu *>(_o);
        switch (_id) {
        case 0: _t->onChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ToolButtonProxyMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToolButtonProxyMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_ToolButtonProxyMenu,
      qt_meta_data_ToolButtonProxyMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolButtonProxyMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolButtonProxyMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolButtonProxyMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolButtonProxyMenu))
        return static_cast<void*>(const_cast< ToolButtonProxyMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int ToolButtonProxyMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
