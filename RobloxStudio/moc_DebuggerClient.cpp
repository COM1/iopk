/****************************************************************************
** Meta object code from reading C++ file 'DebuggerClient.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "DebuggerClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebuggerClientManager[] = {

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
      23,   22,   22,   22, 0x08,
      38,   22,   22,   22, 0x08,
      61,   22,   22,   22, 0x08,

 // methods: signature, parameters, type, tag, flags
      87,   83,   22,   22, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerClientManager[] = {
    "DebuggerClientManager\0\0onStepAction()\0"
    "updateScriptDocument()\0updateDebuggersList()\0"
    "add\0updateDebugActions(bool)\0"
};

void DebuggerClientManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebuggerClientManager *_t = static_cast<DebuggerClientManager *>(_o);
        switch (_id) {
        case 0: _t->onStepAction(); break;
        case 1: _t->updateScriptDocument(); break;
        case 2: _t->updateDebuggersList(); break;
        case 3: _t->updateDebugActions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebuggerClientManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebuggerClientManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DebuggerClientManager,
      qt_meta_data_DebuggerClientManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerClientManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerClientManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerClientManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerClientManager))
        return static_cast<void*>(const_cast< DebuggerClientManager*>(this));
    return QObject::qt_metacast(_clname);
}

int DebuggerClientManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_QDebuggerClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      38,   16,   16,   16, 0x08,
      72,   59,   16,   16, 0x08,
      96,   16,   16,   16, 0x08,
     122,   16,   16,   16, 0x08,
     135,   59,   16,   16, 0x08,
     157,   16,   16,   16, 0x08,
     181,   59,   16,   16, 0x08,
     240,  204,   16,   16, 0x08,
     284,  276,  271,   16, 0x08,
     314,   16,   16,   16, 0x08,
     344,  334,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDebuggerClient[] = {
    "QDebuggerClient\0\0onInsertBreakpoint()\0"
    "onDeleteBreakpoint()\0textEditLine\0"
    "onToggleBreakpoint(int)\0"
    "onToggleBreakpointState()\0onAddWatch()\0"
    "highlightLine_MT(int)\0clearLineHighlight_MT()\0"
    "setCurrentLine_MT(int)\0"
    "textEditLine,marker,setBlockCurrent\0"
    "setMarker_MT(int,QString,bool)\0bool\0"
    "pos,key\0onShowToolTip(QPoint,QString)\0"
    "onContentsChanged()\0pMenu,pos\0"
    "onUpdateContextualMenu(QMenu*,QPoint)\0"
};

void QDebuggerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDebuggerClient *_t = static_cast<QDebuggerClient *>(_o);
        switch (_id) {
        case 0: _t->onInsertBreakpoint(); break;
        case 1: _t->onDeleteBreakpoint(); break;
        case 2: _t->onToggleBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onToggleBreakpointState(); break;
        case 4: _t->onAddWatch(); break;
        case 5: _t->highlightLine_MT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->clearLineHighlight_MT(); break;
        case 7: _t->setCurrentLine_MT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setMarker_MT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: { bool _r = _t->onShowToolTip((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->onContentsChanged(); break;
        case 11: _t->onUpdateContextualMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDebuggerClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDebuggerClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDebuggerClient,
      qt_meta_data_QDebuggerClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDebuggerClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDebuggerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDebuggerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDebuggerClient))
        return static_cast<void*>(const_cast< QDebuggerClient*>(this));
    return QObject::qt_metacast(_clname);
}

int QDebuggerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
