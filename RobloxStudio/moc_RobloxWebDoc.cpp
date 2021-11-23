/****************************************************************************
** Meta object code from reading C++ file 'RobloxWebDoc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxWebDoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxWebDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxWebDoc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      28,   13,   13,   13, 0x08,
      63,   51,   13,   13, 0x08,
     112,   13,   13,   13, 0x08,
     129,   13,   13,   13, 0x08,
     153,  149,   13,   13, 0x08,
     174,   13,   13,   13, 0x08,
     210,  204,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxWebDoc[] = {
    "RobloxWebDoc\0\0refreshPage()\0"
    "updateAddressBar(QUrl)\0qnr,errlist\0"
    "sslErrorHandler(QNetworkReply*,QList<QSslError>)\0"
    "initJavascript()\0handleHomeClicked()\0"
    "url\0navigateUrl(QString)\0"
    "onAuthenticationChanged(bool)\0title\0"
    "updateTitle(QString)\0"
};

void RobloxWebDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxWebDoc *_t = static_cast<RobloxWebDoc *>(_o);
        switch (_id) {
        case 0: _t->refreshPage(); break;
        case 1: _t->updateAddressBar((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->sslErrorHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 3: _t->initJavascript(); break;
        case 4: _t->handleHomeClicked(); break;
        case 5: _t->navigateUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxWebDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxWebDoc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxWebDoc,
      qt_meta_data_RobloxWebDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxWebDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxWebDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxWebDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxWebDoc))
        return static_cast<void*>(const_cast< RobloxWebDoc*>(this));
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(const_cast< RobloxWebDoc*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxWebDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
