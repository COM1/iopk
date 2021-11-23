/****************************************************************************
** Meta object code from reading C++ file 'RobloxIDEDoc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxIDEDoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxIDEDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WorkspaceAnnouncementTooltip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WorkspaceAnnouncementTooltip[] = {
    "WorkspaceAnnouncementTooltip\0\0closeText()\0"
};

void WorkspaceAnnouncementTooltip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WorkspaceAnnouncementTooltip *_t = static_cast<WorkspaceAnnouncementTooltip *>(_o);
        switch (_id) {
        case 0: _t->closeText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WorkspaceAnnouncementTooltip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WorkspaceAnnouncementTooltip::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WorkspaceAnnouncementTooltip,
      qt_meta_data_WorkspaceAnnouncementTooltip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WorkspaceAnnouncementTooltip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WorkspaceAnnouncementTooltip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WorkspaceAnnouncementTooltip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WorkspaceAnnouncementTooltip))
        return static_cast<void*>(const_cast< WorkspaceAnnouncementTooltip*>(this));
    return QFrame::qt_metacast(_clname);
}

int WorkspaceAnnouncementTooltip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_RobloxIDEDoc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   14,   13,   13, 0x0a,
      94,   85,   13,   13, 0x2a,
     123,   13,   13,   13, 0x2a,
     141,   13,   13,   13, 0x0a,
     163,  155,   13,   13, 0x0a,
     186,   13,   13,   13, 0x0a,
     207,   13,   13,   13, 0x08,
     276,  241,   13,   13, 0x08,

 // methods: signature, parameters, type, tag, flags
     317,   13,   13,   13, 0x00,
     339,  334,   13,   13, 0x00,
     364,   13,   13,   13, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_RobloxIDEDoc[] = {
    "RobloxIDEDoc\0\0filePath,exportType\0"
    "exportSelection(std::string,RBX::ExporterSaveType)\0"
    "filePath\0exportSelection(std::string)\0"
    "exportSelection()\0exportPlace()\0placeId\0"
    "updateFromPlaceID(int)\0refreshDisplayName()\0"
    "onDelayedInitializeDebuggerData()\0"
    "resumeFunctionVar,errorFunctionVar\0"
    "showImportAssetDialog(QVariant,QVariant)\0"
    "updateUndoRedo()\0json\0placeNameLoaded(QString)\0"
    "syncPlayerName()\0"
};

void RobloxIDEDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxIDEDoc *_t = static_cast<RobloxIDEDoc *>(_o);
        switch (_id) {
        case 0: _t->exportSelection((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< RBX::ExporterSaveType(*)>(_a[2]))); break;
        case 1: _t->exportSelection((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->exportSelection(); break;
        case 3: _t->exportPlace(); break;
        case 4: _t->updateFromPlaceID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refreshDisplayName(); break;
        case 6: _t->onDelayedInitializeDebuggerData(); break;
        case 7: _t->showImportAssetDialog((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 8: _t->updateUndoRedo(); break;
        case 9: _t->placeNameLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->syncPlayerName(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxIDEDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxIDEDoc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxIDEDoc,
      qt_meta_data_RobloxIDEDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxIDEDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxIDEDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxIDEDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxIDEDoc))
        return static_cast<void*>(const_cast< RobloxIDEDoc*>(this));
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(const_cast< RobloxIDEDoc*>(this));
    if (!strcmp(_clname, "FW::FileWatchListener"))
        return static_cast< FW::FileWatchListener*>(const_cast< RobloxIDEDoc*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxIDEDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
