/****************************************************************************
** Meta object code from reading C++ file 'RobloxPlayersWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxPlayersWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxPlayersWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxPlayersWidget[] = {

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
      37,   21,   20,   20, 0x00,
      82,   21,   20,   20, 0x00,
     134,  125,   20,   20, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_RobloxPlayersWidget[] = {
    "RobloxPlayersWidget\0\0playerId,future\0"
    "playerProfileDataLoaded(int,RBX::HttpFuture)\0"
    "playerThumbnailLoaded(int,RBX::HttpFuture)\0"
    "playerId\0removePlayerItem(int)\0"
};

void RobloxPlayersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxPlayersWidget *_t = static_cast<RobloxPlayersWidget *>(_o);
        switch (_id) {
        case 0: _t->playerProfileDataLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 1: _t->playerThumbnailLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 2: _t->removePlayerItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxPlayersWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxPlayersWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_RobloxPlayersWidget,
      qt_meta_data_RobloxPlayersWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxPlayersWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxPlayersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxPlayersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxPlayersWidget))
        return static_cast<void*>(const_cast< RobloxPlayersWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int RobloxPlayersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
