/****************************************************************************
** Meta object code from reading C++ file 'RbxWorkspace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RbxWorkspace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RbxWorkspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RbxWorkspace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       3,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   14,   13,   13, 0x05,
      51,   13,   13,   13, 0x05,
      64,   13,   13,   13, 0x05,
      76,   13,   13,   13, 0x05,
     106,   88,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,  143,  138,   13, 0x0a,
     168,   13,  138,   13, 0x0a,
     175,   13,   13,   13, 0x0a,
     231,  213,  138,   13, 0x0a,
     281,  266,  138,   13, 0x0a,
     314,   13,  305,   13, 0x0a,
     335,  331,  138,   13, 0x0a,
     359,   13,  351,   13, 0x0a,
     389,  380,  138,   13, 0x0a,
     412,  331,  138,   13, 0x0a,
     431,   13,  138,   13, 0x0a,
     482,  447,   13,   13, 0x0a,
     539,  518,   13,   13, 0x0a,
     562,   13,  351,   13, 0x0a,
     600,  584,   13,   13, 0x0a,
     635,  627,   13,   13, 0x0a,
     656,   13,  138,   13, 0x0a,
     705,  674,   13,   13, 0x0a,
     754,  743,   13,   13, 0x0a,
     772,   13,   13,   13, 0x0a,
     803,  795,   13,   13, 0x0a,
     834,  743,   13,   13, 0x0a,
     857,  627,   13,   13, 0x0a,
     874,  743,  351,   13, 0x0a,

 // methods: signature, parameters, type, tag, flags
     906,  897,   13,   13, 0x02,

 // properties: name, type, flags
     939,  138, 0x01095001,
     954,  138, 0x01095001,
     967,  138, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_RbxWorkspace[] = {
    "RbxWorkspace\0\0width,height\0"
    "thumbnailTaken(int,int)\0closeEvent()\0"
    "hideEvent()\0showEvent()\0succeeded,assetId\0"
    "PluginInstallComplete(bool,int)\0bool\0"
    "saveUrl\0SaveUrl(QString)\0Save()\0"
    "handleTakeThumbnail(QAbstractButton*)\0"
    "ticket,url,script\0StartGame(QString,QString,QString)\0"
    "recentFileName\0OpenRecentFile(QString)\0"
    "QObject*\0WriteSelection()\0url\0"
    "Insert(QString)\0QString\0GetStudioSessionID()\0"
    "selector\0TakeThumbnail(QString)\0"
    "StartDrag(QString)\0OpenPicFolder()\0"
    "doPost,postSetting,fileName,seoStr\0"
    "PostImage(bool,int,QString,QString)\0"
    "assetId,assetVersion\0InstallPlugin(int,int)\0"
    "GetInstalledPlugins()\0assetId,enabled\0"
    "SetPluginEnabled(int,bool)\0assetId\0"
    "UninstallPlugin(int)\0OpenVideoFolder()\0"
    "token,doPost,postSetting,title\0"
    "UploadVideo(QString,bool,int,QString)\0"
    "universeId\0OpenUniverse(int)\0"
    "PublishAsNewUniverse()\0groupId\0"
    "PublishAsNewGroupUniverse(int)\0"
    "PublishToUniverse(int)\0ImportAsset(int)\0"
    "GetGameAnimations(int)\0fileName\0"
    "onScreenShotFinished_MT(QString)\0"
    "IsRobloxAppIDE\0IsRoblox2App\0IsRobloxABApp\0"
};

void RbxWorkspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RbxWorkspace *_t = static_cast<RbxWorkspace *>(_o);
        switch (_id) {
        case 0: _t->thumbnailTaken((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->closeEvent(); break;
        case 2: _t->hideEvent(); break;
        case 3: _t->showEvent(); break;
        case 4: _t->PluginInstallComplete((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: { bool _r = _t->SaveUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->Save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->handleTakeThumbnail((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->StartGame((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->OpenRecentFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QObject* _r = _t->WriteSelection();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->Insert((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->GetStudioSessionID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->TakeThumbnail((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->StartDrag((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->OpenPicFolder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->PostImage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 17: _t->InstallPlugin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: { QString _r = _t->GetInstalledPlugins();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: _t->SetPluginEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->UninstallPlugin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: { bool _r = _t->OpenVideoFolder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->UploadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 23: _t->OpenUniverse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->PublishAsNewUniverse(); break;
        case 25: _t->PublishAsNewGroupUniverse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->PublishToUniverse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->ImportAsset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: { QString _r = _t->GetGameAnimations((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: _t->onScreenShotFinished_MT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RbxWorkspace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RbxWorkspace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RbxWorkspace,
      qt_meta_data_RbxWorkspace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RbxWorkspace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RbxWorkspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RbxWorkspace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RbxWorkspace))
        return static_cast<void*>(const_cast< RbxWorkspace*>(this));
    if (!strcmp(_clname, "boost::enable_shared_from_this<RbxWorkspace>"))
        return static_cast< boost::enable_shared_from_this<RbxWorkspace>*>(const_cast< RbxWorkspace*>(this));
    return QObject::qt_metacast(_clname);
}

int RbxWorkspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = getIsRobloxAppIDE(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getIsRoblox2App(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getIsRobloxABApp(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RbxWorkspace::thumbnailTaken(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RbxWorkspace::closeEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RbxWorkspace::hideEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void RbxWorkspace::showEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void RbxWorkspace::PluginInstallComplete(bool _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
