/****************************************************************************
** Meta object code from reading C++ file 'RobloxTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxTreeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxTreeWidgetItem[] = {

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

 // methods: signature, parameters, type, tag, flags
      34,   27,   22,   21, 0x00,
      74,   27,   22,   21, 0x00,
     128,  116,   21,   21, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_RobloxTreeWidgetItem[] = {
    "RobloxTreeWidgetItem\0\0bool\0pChild\0"
    "onChildAdded(shared_ptr<RBX::Instance>)\0"
    "onChildRemoved(shared_ptr<RBX::Instance>)\0"
    "pDescriptor\0"
    "onPropertyChanged(const RBX::Reflection::PropertyDescriptor*)\0"
};

void RobloxTreeWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxTreeWidgetItem *_t = static_cast<RobloxTreeWidgetItem *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onChildAdded((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onChildRemoved((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->onPropertyChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxTreeWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxTreeWidgetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxTreeWidgetItem,
      qt_meta_data_RobloxTreeWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxTreeWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxTreeWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxTreeWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTreeWidgetItem))
        return static_cast<void*>(const_cast< RobloxTreeWidgetItem*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< RobloxTreeWidgetItem*>(this));
    if (!strcmp(_clname, "InstanceUpdateHandler"))
        return static_cast< InstanceUpdateHandler*>(const_cast< RobloxTreeWidgetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxTreeWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_RobloxTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x05,
      50,   17,   17,   17, 0x05,
      64,   17,   17,   17, 0x05,
      87,   17,   17,   17, 0x05,
     108,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     128,   17,   17,   17, 0x0a,
     143,   17,   17,   17, 0x0a,
     159,   17,   17,   17, 0x08,
     193,  184,   17,   17, 0x08,
     238,  226,   17,   17, 0x08,
     272,  226,   17,   17, 0x08,
     324,  305,   17,   17, 0x08,
     366,   17,   17,   17, 0x08,
     387,   17,   17,   17, 0x08,
     402,   17,   17,   17, 0x08,
     419,   17,   17,   17, 0x08,
     442,   17,   17,   17, 0x08,
     487,  480,  475,   17, 0x08,
     527,  480,  475,   17, 0x08,
     581,  569,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxTreeWidget[] = {
    "RobloxTreeWidget\0\0topic\0"
    "helpTopicChanged(QString)\0focusGained()\0"
    "filterSearchFinished()\0finishedProcessing()\0"
    "startedProcessing()\0filterWidget()\0"
    "requestUpdate()\0onItemSelectionChanged()\0"
    "playerId\0onCloudEditSelectionChanged(int)\0"
    "pWidgetItem\0onItemCollapsed(QTreeWidgetItem*)\0"
    "onItemExpanded(QTreeWidgetItem*)\0"
    "pWidgetItem,column\0"
    "onItemDoubleClicked(QTreeWidgetItem*,int)\0"
    "onTreeWidgetUpdate()\0onInsertPart()\0"
    "onInsertObject()\0onFilterWidgetUpdate()\0"
    "scrollBackToLastMarkedLocation()\0bool\0"
    "pChild\0onChildAdded(shared_ptr<RBX::Instance>)\0"
    "onChildRemoved(shared_ptr<RBX::Instance>)\0"
    "pDescriptor\0"
    "onPropertyChanged(const RBX::Reflection::PropertyDescriptor*)\0"
};

void RobloxTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxTreeWidget *_t = static_cast<RobloxTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->focusGained(); break;
        case 2: _t->filterSearchFinished(); break;
        case 3: _t->finishedProcessing(); break;
        case 4: _t->startedProcessing(); break;
        case 5: _t->filterWidget(); break;
        case 6: _t->requestUpdate(); break;
        case 7: _t->onItemSelectionChanged(); break;
        case 8: _t->onCloudEditSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onTreeWidgetUpdate(); break;
        case 13: _t->onInsertPart(); break;
        case 14: _t->onInsertObject(); break;
        case 15: _t->onFilterWidgetUpdate(); break;
        case 16: _t->scrollBackToLastMarkedLocation(); break;
        case 17: { bool _r = _t->onChildAdded((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->onChildRemoved((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->onPropertyChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_RobloxTreeWidget,
      qt_meta_data_RobloxTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTreeWidget))
        return static_cast<void*>(const_cast< RobloxTreeWidget*>(this));
    if (!strcmp(_clname, "InstanceUpdateHandler"))
        return static_cast< InstanceUpdateHandler*>(const_cast< RobloxTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int RobloxTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void RobloxTreeWidget::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxTreeWidget::focusGained()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RobloxTreeWidget::filterSearchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void RobloxTreeWidget::finishedProcessing()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void RobloxTreeWidget::startedProcessing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
static const uint qt_meta_data_RobloxExplorerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   36,   21,   21, 0x09,
      67,   21,   21,   21, 0x09,
      89,   21,   21,   21, 0x09,
     112,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RobloxExplorerWidget[] = {
    "RobloxExplorerWidget\0\0focusGained()\0"
    "text\0filterTreeWidget(QString)\0"
    "onProcessingStarted()\0onProcessingFinished()\0"
    "sendWidgetCounter()\0"
};

void RobloxExplorerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxExplorerWidget *_t = static_cast<RobloxExplorerWidget *>(_o);
        switch (_id) {
        case 0: _t->focusGained(); break;
        case 1: _t->filterTreeWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onProcessingStarted(); break;
        case 3: _t->onProcessingFinished(); break;
        case 4: _t->sendWidgetCounter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxExplorerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxExplorerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxExplorerWidget,
      qt_meta_data_RobloxExplorerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxExplorerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxExplorerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxExplorerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxExplorerWidget))
        return static_cast<void*>(const_cast< RobloxExplorerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxExplorerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RobloxExplorerWidget::focusGained()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
