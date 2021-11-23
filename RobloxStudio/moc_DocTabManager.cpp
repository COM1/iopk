/****************************************************************************
** Meta object code from reading C++ file 'DocTabManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "DocTabManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DocTabManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DocTabManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      33,   14,   14,   14, 0x0a,
      61,   55,   14,   14, 0x08,
      88,   55,   83,   14, 0x08,
     113,   14,   14,   14, 0x08,
     142,   14,   14,   14, 0x08,
     176,  156,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DocTabManager[] = {
    "DocTabManager\0\0showNextTabPage()\0"
    "showPreviousTabPage()\0index\0"
    "onCurrentChanged(int)\0bool\0"
    "onTabCloseRequested(int)\0"
    "onCurrentTabCloseRequested()\0onDetachDoc()\0"
    "oldWidget,newWidget\0"
    "onFocusChanged(QWidget*,QWidget*)\0"
};

void DocTabManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DocTabManager *_t = static_cast<DocTabManager *>(_o);
        switch (_id) {
        case 0: _t->showNextTabPage(); break;
        case 1: _t->showPreviousTabPage(); break;
        case 2: _t->onCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { bool _r = _t->onTabCloseRequested((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onCurrentTabCloseRequested(); break;
        case 5: _t->onDetachDoc(); break;
        case 6: _t->onFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DocTabManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DocTabManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DocTabManager,
      qt_meta_data_DocTabManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DocTabManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DocTabManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DocTabManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DocTabManager))
        return static_cast<void*>(const_cast< DocTabManager*>(this));
    return QObject::qt_metacast(_clname);
}

int DocTabManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
