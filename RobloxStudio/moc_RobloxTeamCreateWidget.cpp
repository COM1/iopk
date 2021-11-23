/****************************************************************************
** Meta object code from reading C++ file 'RobloxTeamCreateWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxTeamCreateWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTeamCreateWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroupItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x08,
      51,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GroupItem[] = {
    "GroupItem\0\0future\0groupDataLoaded(RBX::HttpFuture)\0"
    "groupThumbnailLoaded(RBX::HttpFuture)\0"
};

void GroupItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupItem *_t = static_cast<GroupItem *>(_o);
        switch (_id) {
        case 0: _t->groupDataLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        case 1: _t->groupThumbnailLoaded((*reinterpret_cast< RBX::HttpFuture(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroupItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GroupItem,
      qt_meta_data_GroupItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupItem))
        return static_cast<void*>(const_cast< GroupItem*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< GroupItem*>(this));
    return QObject::qt_metacast(_clname);
}

int GroupItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_CreatorItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x08,
      70,   52,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreatorItem[] = {
    "CreatorItem\0\0playerImage\0"
    "updatePlayerAvatar(QImage)\0playerId,userName\0"
    "updatePlayerName(int,QString)\0"
};

void CreatorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreatorItem *_t = static_cast<CreatorItem *>(_o);
        switch (_id) {
        case 0: _t->updatePlayerAvatar((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->updatePlayerName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreatorItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreatorItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CreatorItem,
      qt_meta_data_CreatorItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreatorItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreatorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreatorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorItem))
        return static_cast<void*>(const_cast< CreatorItem*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< CreatorItem*>(this));
    return QObject::qt_metacast(_clname);
}

int CreatorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_CreatorsListLoader[] = {

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
      20,   19,   19,   19, 0x05,

 // methods: signature, parameters, type, tag, flags
      56,   38,   19,   19, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_CreatorsListLoader[] = {
    "CreatorsListLoader\0\0finishedLoading()\0"
    "pageLoaded,future\0"
    "creatorsListLoaded(int,RBX::HttpFuture)\0"
};

void CreatorsListLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreatorsListLoader *_t = static_cast<CreatorsListLoader *>(_o);
        switch (_id) {
        case 0: _t->finishedLoading(); break;
        case 1: _t->creatorsListLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreatorsListLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreatorsListLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CreatorsListLoader,
      qt_meta_data_CreatorsListLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreatorsListLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreatorsListLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreatorsListLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorsListLoader))
        return static_cast<void*>(const_cast< CreatorsListLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int CreatorsListLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CreatorsListLoader::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_FriendsInfoLoader[] = {

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
      19,   18,   18,   18, 0x05,

 // methods: signature, parameters, type, tag, flags
      55,   37,   18,   18, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_FriendsInfoLoader[] = {
    "FriendsInfoLoader\0\0finishedLoading()\0"
    "pageLoaded,future\0"
    "friendsDataLoaded(int,RBX::HttpFuture)\0"
};

void FriendsInfoLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FriendsInfoLoader *_t = static_cast<FriendsInfoLoader *>(_o);
        switch (_id) {
        case 0: _t->finishedLoading(); break;
        case 1: _t->friendsDataLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FriendsInfoLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FriendsInfoLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FriendsInfoLoader,
      qt_meta_data_FriendsInfoLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FriendsInfoLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FriendsInfoLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FriendsInfoLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FriendsInfoLoader))
        return static_cast<void*>(const_cast< FriendsInfoLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int FriendsInfoLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FriendsInfoLoader::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_CreatorsListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,
      61,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   20,   19,   19, 0x08,
     104,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreatorsListWidget[] = {
    "CreatorsListWidget\0\0playerId\0"
    "removeCloudEditorRequested(int)\0"
    "finishedLoading()\0onPlayerAddRequsted(int)\0"
    "onPlayerRemoveRequested(int)\0"
};

void CreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreatorsListWidget *_t = static_cast<CreatorsListWidget *>(_o);
        switch (_id) {
        case 0: _t->removeCloudEditorRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finishedLoading(); break;
        case 2: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreatorsListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreatorsListWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_CreatorsListWidget,
      qt_meta_data_CreatorsListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreatorsListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreatorsListWidget))
        return static_cast<void*>(const_cast< CreatorsListWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int CreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CreatorsListWidget::removeCloudEditorRequested(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CreatorsListWidget::finishedLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UserPlaceCreatorsListWidget[] = {

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
      38,   29,   28,   28, 0x08,
      63,   29,   28,   28, 0x08,
      92,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserPlaceCreatorsListWidget[] = {
    "UserPlaceCreatorsListWidget\0\0playerId\0"
    "onPlayerAddRequsted(int)\0"
    "onPlayerRemoveRequested(int)\0"
    "onCreatorsListLoaded()\0"
};

void UserPlaceCreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserPlaceCreatorsListWidget *_t = static_cast<UserPlaceCreatorsListWidget *>(_o);
        switch (_id) {
        case 0: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCreatorsListLoaded(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserPlaceCreatorsListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserPlaceCreatorsListWidget::staticMetaObject = {
    { &CreatorsListWidget::staticMetaObject, qt_meta_stringdata_UserPlaceCreatorsListWidget,
      qt_meta_data_UserPlaceCreatorsListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserPlaceCreatorsListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserPlaceCreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserPlaceCreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserPlaceCreatorsListWidget))
        return static_cast<void*>(const_cast< UserPlaceCreatorsListWidget*>(this));
    return CreatorsListWidget::qt_metacast(_clname);
}

int UserPlaceCreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CreatorsListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_GroupPlaceCreatorsListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   30,   29,   29, 0x08,
      64,   30,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GroupPlaceCreatorsListWidget[] = {
    "GroupPlaceCreatorsListWidget\0\0playerId\0"
    "onPlayerAddRequsted(int)\0"
    "onPlayerRemoveRequested(int)\0"
};

void GroupPlaceCreatorsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupPlaceCreatorsListWidget *_t = static_cast<GroupPlaceCreatorsListWidget *>(_o);
        switch (_id) {
        case 0: _t->onPlayerAddRequsted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPlayerRemoveRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroupPlaceCreatorsListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupPlaceCreatorsListWidget::staticMetaObject = {
    { &CreatorsListWidget::staticMetaObject, qt_meta_stringdata_GroupPlaceCreatorsListWidget,
      qt_meta_data_GroupPlaceCreatorsListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupPlaceCreatorsListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupPlaceCreatorsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupPlaceCreatorsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupPlaceCreatorsListWidget))
        return static_cast<void*>(const_cast< GroupPlaceCreatorsListWidget*>(this));
    return CreatorsListWidget::qt_metacast(_clname);
}

int GroupPlaceCreatorsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CreatorsListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_RobloxTeamCreateWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      54,   23,   23,   23, 0x08,
      77,   23,   23,   23, 0x08,
     109,  102,   23,   23, 0x08,
     138,   23,   23,   23, 0x08,
     162,   23,   23,   23, 0x08,
     190,   23,   23,   23, 0x08,
     238,  225,   23,   23, 0x08,
     290,  283,   23,   23, 0x08,
     324,   23,   23,   23, 0x08,
     351,   23,   23,   23, 0x08,
     377,   23,   23,   23, 0x08,

 // methods: signature, parameters, type, tag, flags
     403,   23,   23,   23, 0x00,
     432,   23,   23,   23, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_RobloxTeamCreateWidget[] = {
    "RobloxTeamCreateWidget\0\0"
    "onAuthenticationChanged(bool)\0"
    "onLoginButtonClicked()\0onPublishButtonClicked()\0"
    "status\0onPublishDialogFinished(int)\0"
    "onTurnOnButtonClicked()\0"
    "onBottomMoreButtonClicked()\0"
    "onFriendsInviteEditReturnPressed()\0"
    "clickedIndex\0onCompleterPopupMenuItemClicked(QModelIndex)\0"
    "userId\0onRemoveCloudEditorRequested(int)\0"
    "onRemoveCloudEditConfirm()\0"
    "onRemoveCloudEditCancel()\0"
    "updatePlayerFriendsInfo()\0"
    "updateCurrentWidgetInStack()\0"
    "resetDataModel()\0"
};

void RobloxTeamCreateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxTeamCreateWidget *_t = static_cast<RobloxTeamCreateWidget *>(_o);
        switch (_id) {
        case 0: _t->onAuthenticationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onLoginButtonClicked(); break;
        case 2: _t->onPublishButtonClicked(); break;
        case 3: _t->onPublishDialogFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onTurnOnButtonClicked(); break;
        case 5: _t->onBottomMoreButtonClicked(); break;
        case 6: _t->onFriendsInviteEditReturnPressed(); break;
        case 7: _t->onCompleterPopupMenuItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->onRemoveCloudEditorRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onRemoveCloudEditConfirm(); break;
        case 10: _t->onRemoveCloudEditCancel(); break;
        case 11: _t->updatePlayerFriendsInfo(); break;
        case 12: _t->updateCurrentWidgetInStack(); break;
        case 13: _t->resetDataModel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxTeamCreateWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxTeamCreateWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxTeamCreateWidget,
      qt_meta_data_RobloxTeamCreateWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxTeamCreateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxTeamCreateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxTeamCreateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTeamCreateWidget))
        return static_cast<void*>(const_cast< RobloxTeamCreateWidget*>(this));
    if (!strcmp(_clname, "Ui::TeamCreate"))
        return static_cast< Ui::TeamCreate*>(const_cast< RobloxTeamCreateWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxTeamCreateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
