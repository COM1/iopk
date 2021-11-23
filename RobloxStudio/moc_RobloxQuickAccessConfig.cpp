/****************************************************************************
** Meta object code from reading C++ file 'RobloxQuickAccessConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxQuickAccessConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxQuickAccessConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuickAccessConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      34,   24,   24,   24, 0x08,
      50,   43,   24,   24, 0x08,
      84,   24,   24,   24, 0x08,
     105,   24,   24,   24, 0x08,
     136,   24,   24,   24, 0x08,
     157,   24,   24,   24, 0x08,
     181,   24,   24,   24, 0x08,
     210,  203,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickAccessConfigDialog[] = {
    "QuickAccessConfigDialog\0\0accept()\0"
    "cancel()\0button\0restoreDefaults(QAbstractButton*)\0"
    "onDefaultsRestored()\0"
    "onQuickAccessListDataChanged()\0"
    "onAddButtonClicked()\0onRemoveButtonClicked()\0"
    "onMoveButtonClicked()\0filter\0"
    "setFilter(QString)\0"
};

void QuickAccessConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuickAccessConfigDialog *_t = static_cast<QuickAccessConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->cancel(); break;
        case 2: _t->restoreDefaults((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->onDefaultsRestored(); break;
        case 4: _t->onQuickAccessListDataChanged(); break;
        case 5: _t->onAddButtonClicked(); break;
        case 6: _t->onRemoveButtonClicked(); break;
        case 7: _t->onMoveButtonClicked(); break;
        case 8: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuickAccessConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuickAccessConfigDialog::staticMetaObject = {
    { &RobloxSavingStateDialog<QDialog>::staticMetaObject, qt_meta_stringdata_QuickAccessConfigDialog,
      qt_meta_data_QuickAccessConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuickAccessConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuickAccessConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuickAccessConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickAccessConfigDialog))
        return static_cast<void*>(const_cast< QuickAccessConfigDialog*>(this));
    return RobloxSavingStateDialog<QDialog>::qt_metacast(_clname);
}

int QuickAccessConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxSavingStateDialog<QDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_RobloxQuickAccessConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x05,
      54,   25,   24,   24, 0x05,
      78,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   97,   24,   24, 0x08,
     133,   25,   24,   24, 0x08,
     165,   24,   24,   24, 0x08,
     187,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxQuickAccessConfig[] = {
    "RobloxQuickAccessConfig\0\0action\0"
    "actionAdded(QAction*)\0actionRemoved(QAction*)\0"
    "defaultsRestored()\0pMenu\0"
    "updateQuickAccessMenu(QMenu*)\0"
    "updateActionVisiblity(QAction*)\0"
    "onExtensionMenuShow()\0onExtensionMenuHide()\0"
};

void RobloxQuickAccessConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxQuickAccessConfig *_t = static_cast<RobloxQuickAccessConfig *>(_o);
        switch (_id) {
        case 0: _t->actionAdded((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->actionRemoved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->defaultsRestored(); break;
        case 3: _t->updateQuickAccessMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 4: _t->updateActionVisiblity((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->onExtensionMenuShow(); break;
        case 6: _t->onExtensionMenuHide(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxQuickAccessConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxQuickAccessConfig::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxQuickAccessConfig,
      qt_meta_data_RobloxQuickAccessConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxQuickAccessConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxQuickAccessConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxQuickAccessConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxQuickAccessConfig))
        return static_cast<void*>(const_cast< RobloxQuickAccessConfig*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxQuickAccessConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RobloxQuickAccessConfig::actionAdded(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxQuickAccessConfig::actionRemoved(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RobloxQuickAccessConfig::defaultsRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_QuickAccessBarProxyAction[] = {

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
      27,   26,   26,   26, 0x08,
      39,   26,   26,   26, 0x08,
      73,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickAccessBarProxyAction[] = {
    "QuickAccessBarProxyAction\0\0onChanged()\0"
    "onSourceActionDestroyed(QObject*)\0"
    "onActionTriggered()\0"
};

void QuickAccessBarProxyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuickAccessBarProxyAction *_t = static_cast<QuickAccessBarProxyAction *>(_o);
        switch (_id) {
        case 0: _t->onChanged(); break;
        case 1: _t->onSourceActionDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->onActionTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuickAccessBarProxyAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuickAccessBarProxyAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QuickAccessBarProxyAction,
      qt_meta_data_QuickAccessBarProxyAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuickAccessBarProxyAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuickAccessBarProxyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuickAccessBarProxyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickAccessBarProxyAction))
        return static_cast<void*>(const_cast< QuickAccessBarProxyAction*>(this));
    return QAction::qt_metacast(_clname);
}

int QuickAccessBarProxyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
