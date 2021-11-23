/****************************************************************************
** Meta object code from reading C++ file 'RobloxContextualHelp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxContextualHelp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxContextualHelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxContextualHelpService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   55,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RobloxContextualHelpService[] = {
    "RobloxContextualHelpService\0\0"
    "helpTopicChanged(QString)\0helpTopic\0"
    "onHelpTopicChanged(QString)\0"
};

void RobloxContextualHelpService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxContextualHelpService *_t = static_cast<RobloxContextualHelpService *>(_o);
        switch (_id) {
        case 0: _t->helpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onHelpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxContextualHelpService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxContextualHelpService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxContextualHelpService,
      qt_meta_data_RobloxContextualHelpService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxContextualHelpService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxContextualHelpService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxContextualHelpService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxContextualHelpService))
        return static_cast<void*>(const_cast< RobloxContextualHelpService*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxContextualHelpService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RobloxContextualHelpService::helpTopicChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_RobloxHelpWebView[] = {

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
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxHelpWebView[] = {
    "RobloxHelpWebView\0\0loadProgress(int)\0"
};

void RobloxHelpWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxHelpWebView *_t = static_cast<RobloxHelpWebView *>(_o);
        switch (_id) {
        case 0: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxHelpWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxHelpWebView::staticMetaObject = {
    { &RobloxBrowser::staticMetaObject, qt_meta_stringdata_RobloxHelpWebView,
      qt_meta_data_RobloxHelpWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxHelpWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxHelpWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxHelpWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxHelpWebView))
        return static_cast<void*>(const_cast< RobloxHelpWebView*>(this));
    return RobloxBrowser::qt_metacast(_clname);
}

int RobloxHelpWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_RobloxContextualHelp[] = {

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
      38,   22,   21,   21, 0x0a,
      78,   68,   21,   21, 0x0a,
     110,  106,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxContextualHelp[] = {
    "RobloxContextualHelp\0\0isAuthenticated\0"
    "onAuthenticationChanged(bool)\0helpTopic\0"
    "onHelpTopicChanged(QString)\0url\0"
    "linkClicked(QUrl)\0"
};

void RobloxContextualHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxContextualHelp *_t = static_cast<RobloxContextualHelp *>(_o);
        switch (_id) {
        case 0: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onHelpTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxContextualHelp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxContextualHelp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxContextualHelp,
      qt_meta_data_RobloxContextualHelp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxContextualHelp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxContextualHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxContextualHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxContextualHelp))
        return static_cast<void*>(const_cast< RobloxContextualHelp*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxContextualHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
