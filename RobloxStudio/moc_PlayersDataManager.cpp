/****************************************************************************
** Meta object code from reading C++ file 'PlayersDataManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "PlayersDataManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayersDataManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AvatarLoader[] = {

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
      20,   14,   13,   13, 0x05,

 // methods: signature, parameters, type, tag, flags
      57,   41,   13,   13, 0x00,
     106,   41,   13,   13, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_AvatarLoader[] = {
    "AvatarLoader\0\0image\0avatarLoaded(QImage)\0"
    "playerId,future\0"
    "headshotThumbnailDataLoaded(int,RBX::HttpFuture)\0"
    "headshotThumbnailLoaded(int,RBX::HttpFuture)\0"
};

void AvatarLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarLoader *_t = static_cast<AvatarLoader *>(_o);
        switch (_id) {
        case 0: _t->avatarLoaded((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->headshotThumbnailDataLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 2: _t->headshotThumbnailLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AvatarLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AvatarLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AvatarLoader,
      qt_meta_data_AvatarLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AvatarLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AvatarLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AvatarLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarLoader))
        return static_cast<void*>(const_cast< AvatarLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int AvatarLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AvatarLoader::avatarLoaded(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PlayersDataManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,
      80,   60,   19,   19, 0x05,

 // methods: signature, parameters, type, tag, flags
     117,  110,   19,   19, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_PlayersDataManager[] = {
    "PlayersDataManager\0\0playerId\0"
    "cloudEditSelectionChanged(int)\0"
    "playerId,playerName\0playerNameLoaded(int,QString)\0"
    "future\0onPlayerNameLoaded(RBX::HttpFuture)\0"
};

void PlayersDataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayersDataManager *_t = static_cast<PlayersDataManager *>(_o);
        switch (_id) {
        case 0: _t->cloudEditSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->playerNameLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->onPlayerNameLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlayersDataManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayersDataManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayersDataManager,
      qt_meta_data_PlayersDataManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayersDataManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayersDataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayersDataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayersDataManager))
        return static_cast<void*>(const_cast< PlayersDataManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PlayersDataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PlayersDataManager::cloudEditSelectionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayersDataManager::playerNameLoaded(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
