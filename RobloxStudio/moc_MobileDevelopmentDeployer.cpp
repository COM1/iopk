/****************************************************************************
** Meta object code from reading C++ file 'MobileDevelopmentDeployer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "MobileDevelopmentDeployer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MobileDevelopmentDeployer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MobileDevelopmentDeployer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   26,   26,   26, 0x08,
      84,   26,   26,   26, 0x08,
      99,   26,   26,   26, 0x08,
     117,   26,   26,   26, 0x08,
     143,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MobileDevelopmentDeployer[] = {
    "MobileDevelopmentDeployer\0\0clientName\0"
    "connectedToClient(QString)\0"
    "on_newConnection()\0on_readyRead()\0"
    "on_disconnected()\0on_receivedUdpBroadcast()\0"
    "broadcastReadyDatagram()\0"
};

void MobileDevelopmentDeployer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MobileDevelopmentDeployer *_t = static_cast<MobileDevelopmentDeployer *>(_o);
        switch (_id) {
        case 0: _t->connectedToClient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_newConnection(); break;
        case 2: _t->on_readyRead(); break;
        case 3: _t->on_disconnected(); break;
        case 4: _t->on_receivedUdpBroadcast(); break;
        case 5: _t->broadcastReadyDatagram(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MobileDevelopmentDeployer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MobileDevelopmentDeployer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MobileDevelopmentDeployer,
      qt_meta_data_MobileDevelopmentDeployer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MobileDevelopmentDeployer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MobileDevelopmentDeployer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MobileDevelopmentDeployer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MobileDevelopmentDeployer))
        return static_cast<void*>(const_cast< MobileDevelopmentDeployer*>(this));
    return QWidget::qt_metacast(_clname);
}

int MobileDevelopmentDeployer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MobileDevelopmentDeployer::connectedToClient(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
