/****************************************************************************
** Meta object code from reading C++ file 'AuthenticationHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "AuthenticationHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthenticationHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AuthenticationHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   22,   21,   21, 0x05,
      75,   59,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   21,  103,   21, 0x0a,
     132,   21,   21,   21, 0x0a,
     170,  158,  103,   21, 0x0a,
     201,   21,  103,   21, 0x2a,
     250,  229,   21,   21, 0x08,
     295,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AuthenticationHelper[] = {
    "AuthenticationHelper\0\0authSuccess\0"
    "authenticationDone(bool)\0isAuthenticated\0"
    "authenticationChanged(bool)\0bool\0"
    "authenticateHttpLayer()\0"
    "deAuthenticateHttpLayer()\0timeOutTime\0"
    "verifyUserAndAuthenticate(int)\0"
    "verifyUserAndAuthenticate()\0"
    "networkReply,errlist\0"
    "onSSLErrors(QNetworkReply*,QList<QSslError>)\0"
    "httpSessionAuthenticationDone()\0"
};

void AuthenticationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AuthenticationHelper *_t = static_cast<AuthenticationHelper *>(_o);
        switch (_id) {
        case 0: _t->authenticationDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->authenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->authenticateHttpLayer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->deAuthenticateHttpLayer(); break;
        case 4: { bool _r = _t->verifyUserAndAuthenticate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->verifyUserAndAuthenticate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->onSSLErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 7: _t->httpSessionAuthenticationDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AuthenticationHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AuthenticationHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AuthenticationHelper,
      qt_meta_data_AuthenticationHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AuthenticationHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AuthenticationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AuthenticationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AuthenticationHelper))
        return static_cast<void*>(const_cast< AuthenticationHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int AuthenticationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AuthenticationHelper::authenticationDone(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AuthenticationHelper::authenticationChanged(bool _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AuthenticationHelper *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
