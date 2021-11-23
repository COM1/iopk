/****************************************************************************
** Meta object code from reading C++ file 'DebuggerWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "DebuggerWidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebuggerTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   19,   19,   19, 0x09,
      77,   75,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerTreeWidget[] = {
    "DebuggerTreeWidget\0\0deleteSelectedItem()\0"
    "onItemActivated(QTreeWidgetItem*)\0,\0"
    "onItemChanged(QTreeWidgetItem*,int)\0"
};

void DebuggerTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebuggerTreeWidget *_t = static_cast<DebuggerTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->deleteSelectedItem(); break;
        case 1: _t->onItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebuggerTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebuggerTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_DebuggerTreeWidget,
      qt_meta_data_DebuggerTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerTreeWidget))
        return static_cast<void*>(const_cast< DebuggerTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int DebuggerTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DebuggerTreeWidget::deleteSelectedItem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_CallStackTreeWidget[] = {

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

static const char qt_meta_stringdata_CallStackTreeWidget[] = {
    "CallStackTreeWidget\0"
};

void CallStackTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CallStackTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CallStackTreeWidget::staticMetaObject = {
    { &DebuggerTreeWidget::staticMetaObject, qt_meta_stringdata_CallStackTreeWidget,
      qt_meta_data_CallStackTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CallStackTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CallStackTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CallStackTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackTreeWidget))
        return static_cast<void*>(const_cast< CallStackTreeWidget*>(this));
    return DebuggerTreeWidget::qt_metacast(_clname);
}

int CallStackTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CallStackDebuggersList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CallStackDebuggersList[] = {
    "CallStackDebuggersList\0\0popupAboutToShow()\0"
};

void CallStackDebuggersList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CallStackDebuggersList *_t = static_cast<CallStackDebuggersList *>(_o);
        switch (_id) {
        case 0: _t->popupAboutToShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CallStackDebuggersList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CallStackDebuggersList::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CallStackDebuggersList,
      qt_meta_data_CallStackDebuggersList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CallStackDebuggersList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CallStackDebuggersList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CallStackDebuggersList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackDebuggersList))
        return static_cast<void*>(const_cast< CallStackDebuggersList*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CallStackDebuggersList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CallStackDebuggersList::popupAboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_CallStackWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CallStackWidget[] = {
    "CallStackWidget\0\0index\0"
    "onCurrentIndexChanged(int)\0"
    "onDebuggerListPopupShow()\0"
};

void CallStackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CallStackWidget *_t = static_cast<CallStackWidget *>(_o);
        switch (_id) {
        case 0: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onDebuggerListPopupShow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CallStackWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CallStackWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CallStackWidget,
      qt_meta_data_CallStackWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CallStackWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CallStackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CallStackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackWidget))
        return static_cast<void*>(const_cast< CallStackWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CallStackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_BreakpointsWidget[] = {

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
      19,   18,   18,   18, 0x08,
      41,   18,   18,   18, 0x08,
      64,   18,   18,   18, 0x08,
      93,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BreakpointsWidget[] = {
    "BreakpointsWidget\0\0onPushButtonClicked()\0"
    "onDeleteSelectedItem()\0"
    "requestButtonsStatusUpdate()\0"
    "updateButtonsStatus()\0"
};

void BreakpointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BreakpointsWidget *_t = static_cast<BreakpointsWidget *>(_o);
        switch (_id) {
        case 0: _t->onPushButtonClicked(); break;
        case 1: _t->onDeleteSelectedItem(); break;
        case 2: _t->requestButtonsStatusUpdate(); break;
        case 3: _t->updateButtonsStatus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BreakpointsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BreakpointsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BreakpointsWidget,
      qt_meta_data_BreakpointsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BreakpointsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BreakpointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BreakpointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BreakpointsWidget))
        return static_cast<void*>(const_cast< BreakpointsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BreakpointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_WatchTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x0a,
      48,   16,   16,   16, 0x08,
      67,   16,   16,   16, 0x08,
      78,   16,   16,   16, 0x08,
      92,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WatchTreeWidget[] = {
    "WatchTreeWidget\0\0enable\0updateWatchValues(bool)\0"
    "copySelectedItem()\0addWatch()\0"
    "removeWatch()\0deleteAllWatches()\0"
};

void WatchTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WatchTreeWidget *_t = static_cast<WatchTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->updateWatchValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->copySelectedItem(); break;
        case 2: _t->addWatch(); break;
        case 3: _t->removeWatch(); break;
        case 4: _t->deleteAllWatches(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WatchTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WatchTreeWidget::staticMetaObject = {
    { &DebuggerTreeWidget::staticMetaObject, qt_meta_stringdata_WatchTreeWidget,
      qt_meta_data_WatchTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WatchTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WatchTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WatchTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WatchTreeWidget))
        return static_cast<void*>(const_cast< WatchTreeWidget*>(this));
    return DebuggerTreeWidget::qt_metacast(_clname);
}

int WatchTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_WatchWidget[] = {

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
      13,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WatchWidget[] = {
    "WatchWidget\0\0onDeleteSelectedItem()\0"
};

void WatchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WatchWidget *_t = static_cast<WatchWidget *>(_o);
        switch (_id) {
        case 0: _t->onDeleteSelectedItem(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WatchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WatchWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WatchWidget,
      qt_meta_data_WatchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WatchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WatchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WatchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WatchWidget))
        return static_cast<void*>(const_cast< WatchWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WatchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_DebuggerToolTipWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      44,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerToolTipWidget[] = {
    "DebuggerToolTipWidget\0\0computeToolTipSize()\0"
    "onTimeout()\0"
};

void DebuggerToolTipWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebuggerToolTipWidget *_t = static_cast<DebuggerToolTipWidget *>(_o);
        switch (_id) {
        case 0: _t->computeToolTipSize(); break;
        case 1: _t->onTimeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DebuggerToolTipWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebuggerToolTipWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_DebuggerToolTipWidget,
      qt_meta_data_DebuggerToolTipWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerToolTipWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerToolTipWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerToolTipWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerToolTipWidget))
        return static_cast<void*>(const_cast< DebuggerToolTipWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int DebuggerToolTipWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
