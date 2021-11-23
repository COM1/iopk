/****************************************************************************
** Meta object code from reading C++ file 'RobloxGameExplorer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxGameExplorer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxGameExplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddImageDialog[] = {

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
      21,   15,   16,   15, 0x08,
      36,   15,   16,   15, 0x08,
      56,   15,   15,   15, 0x08,
      75,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddImageDialog[] = {
    "AddImageDialog\0\0bool\0validateName()\0"
    "validateImageFile()\0openFileSelector()\0"
    "createButtonClicked()\0"
};

void AddImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddImageDialog *_t = static_cast<AddImageDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->validateName();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->validateImageFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->openFileSelector(); break;
        case 3: _t->createButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddImageDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddImageDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AddImageDialog,
      qt_meta_data_AddImageDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddImageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddImageDialog))
        return static_cast<void*>(const_cast< AddImageDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int AddImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_AbortableLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AbortableLineEdit[] = {
    "AbortableLineEdit\0"
};

void AbortableLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AbortableLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbortableLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_AbortableLineEdit,
      qt_meta_data_AbortableLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbortableLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbortableLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbortableLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbortableLineEdit))
        return static_cast<void*>(const_cast< AbortableLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int AbortableLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RobloxGameExplorer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x05,
      67,   50,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   19,   19,   19, 0x0a,
     115,   20,   19,   19, 0x0a,
     147,  139,   19,   19, 0x0a,
     172,   19,   19,   19, 0x0a,
     188,   19,   19,   19, 0x0a,
     219,  211,   19,   19, 0x0a,
     250,   20,   19,   19, 0x0a,
     281,   19,   19,   19, 0x0a,
     301,   20,   19,   19, 0x08,
     348,  327,   19,   19, 0x08,
     404,  374,   19,   19, 0x08,
     436,  327,   19,   19, 0x08,
     467,  327,   19,   19, 0x08,
     497,  327,   19,   19, 0x08,
     526,  327,   19,   19, 0x08,
     584,  551,   19,   19, 0x08,
     645,  634,   19,   19, 0x08,
     688,  677,   19,   19, 0x08,
     727,  715,   19,   19, 0x08,
     762,   19,   19,   19, 0x08,
     782,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxGameExplorer[] = {
    "RobloxGameExplorer\0\0gameId\0"
    "namedAssetsLoaded(int)\0gameId,assetName\0"
    "namedAssetModified(int,QString)\0"
    "nonGameLoaded()\0openGameFromGameId(int)\0"
    "placeId\0openGameFromPlaceId(int)\0"
    "onCloseIdeDoc()\0publishGameToNewSlot()\0"
    "groupId\0publishGameToNewGroupSlot(int)\0"
    "publishGameToExistingSlot(int)\0"
    "reloadDataFromWeb()\0doOpenGameFromGameId(int)\0"
    "originatingSessionId\0failedToLoadSettings(int)\0"
    "originatingSessionId,category\0"
    "populateWithLoadedData(int,int)\0"
    "afterPlacesLoadedFinished(int)\0"
    "afterNamedAssetsFinished(int)\0"
    "refreshNamedScriptIcons(int)\0"
    "afterBadgesFinished(int)\0"
    "originatingSessionId,item,future\0"
    "thumbnailLoadedForImage(int,QModelIndex,QVariant)\0"
    "modelIndex\0doubleClickHandler(QModelIndex)\0"
    "clickPoint\0contextMenuHandler(QPoint)\0"
    "updatedItem\0itemChangedHandler(QStandardItem*)\0"
    "handleNameUpdates()\0doneEditingUniverseName()\0"
};

void RobloxGameExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxGameExplorer *_t = static_cast<RobloxGameExplorer *>(_o);
        switch (_id) {
        case 0: _t->namedAssetsLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->namedAssetModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->nonGameLoaded(); break;
        case 3: _t->openGameFromGameId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->openGameFromPlaceId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onCloseIdeDoc(); break;
        case 6: _t->publishGameToNewSlot(); break;
        case 7: _t->publishGameToNewGroupSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->publishGameToExistingSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->reloadDataFromWeb(); break;
        case 10: _t->doOpenGameFromGameId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->failedToLoadSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->populateWithLoadedData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->afterPlacesLoadedFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->afterNamedAssetsFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->refreshNamedScriptIcons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->afterBadgesFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->thumbnailLoadedForImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 18: _t->doubleClickHandler((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->contextMenuHandler((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->itemChangedHandler((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 21: _t->handleNameUpdates(); break;
        case 22: _t->doneEditingUniverseName(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxGameExplorer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxGameExplorer::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_RobloxGameExplorer,
      qt_meta_data_RobloxGameExplorer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxGameExplorer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxGameExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxGameExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxGameExplorer))
        return static_cast<void*>(const_cast< RobloxGameExplorer*>(this));
    if (!strcmp(_clname, "RBX::AssetFetchMediator"))
        return static_cast< RBX::AssetFetchMediator*>(const_cast< RobloxGameExplorer*>(this));
    return QTreeView::qt_metacast(_clname);
}

int RobloxGameExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void RobloxGameExplorer::namedAssetsLoaded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobloxGameExplorer::namedAssetModified(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
