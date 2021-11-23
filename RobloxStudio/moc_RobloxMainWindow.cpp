/****************************************************************************
** Meta object code from reading C++ file 'RobloxMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   18,   17, 0x0a,
      50,   17,   18,   17, 0x2a,
      70,   61,   18,   17, 0x0a,
     122,   94,   17,   17, 0x0a,
     158,  150,   17,   17, 0x2a,
     188,  178,   17,   17, 0x0a,
     212,  205,   18,   17, 0x0a,
     244,  205,   17,   17, 0x0a,
     276,   17,   17,   17, 0x0a,
     329,  310,   17,   17, 0x0a,
     361,   17,   17,   17, 0x08,
     382,   17,   17,   17, 0x08,
     409,  400,   17,   17, 0x08,
     432,   17,   17,   17, 0x08,
     442,   17,   17,   17, 0x08,
     453,   17,   17,   17, 0x08,
     465,   23,   18,   17, 0x08,
     489,   17,   18,   17, 0x28,
     502,   17,   18,   17, 0x08,
     526,   17,   18,   17, 0x08,
     543,   17,   17,   17, 0x08,
     557,   17,   17,   17, 0x08,
     579,   17,   17,   17, 0x08,
     605,   17,   17,   17, 0x08,
     625,   17,   17,   17, 0x08,
     640,   17,   17,   17, 0x08,
     661,   17,   17,   17, 0x08,
     681,   17,   17,   17, 0x08,
     697,   17,   17,   17, 0x08,
     705,   17,   17,   17, 0x08,
     718,   17,   17,   17, 0x08,
     733,  150,   17,   17, 0x08,
     757,   17,   17,   17, 0x08,
     778,  771,   17,   17, 0x08,
     801,   17,   17,   17, 0x08,
     821,   17,   17,   17, 0x08,
     847,  834,   17,   17, 0x08,
     875,  205,   17,   17, 0x08,
     905,   17,   17,   17, 0x08,
     921,   17,   17,   17, 0x08,
     944,   17,   17,   17, 0x08,
     971,  962,   17,   17, 0x08,
    1009,   17,   17,   17, 0x08,
    1039,   17,   17,   17, 0x08,
    1069, 1066,   17,   17, 0x08,
    1111,   17,   17,   17, 0x08,

 // methods: signature, parameters, type, tag, flags
    1134,   17,   17,   17, 0x02,
    1149,   17,   17,   17, 0x02,
    1164,   17,   17,   17, 0x02,
    1181, 1177,   18,   17, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_RobloxMainWindow[] = {
    "RobloxMainWindow\0\0bool\0pDoc\0"
    "fileSave(IRobloxDoc*)\0fileSave()\0"
    "fileName\0openRecentFile(QString)\0"
    "checked,optionalQueryParams\0"
    "openStartPage(bool,QString)\0checked\0"
    "openStartPage(bool)\0isChecked\0"
    "commonSlot(bool)\0action\0"
    "commonSlotQuickAccess(QAction*)\0"
    "sendActionCounterEvent(QString)\0"
    "notifyCloudEditConnectionClosed()\0"
    "placeId,universeId\0cloudEditStatusChanged(int,int)\0"
    "logIntervalCounter()\0sendOffCounters()\0"
    "pClosure\0processAppEvent(void*)\0"
    "fileNew()\0fileOpen()\0fileClose()\0"
    "fileSaveAs(IRobloxDoc*)\0fileSaveAs()\0"
    "filePublishedProjects()\0openRecentFile()\0"
    "publishGame()\0fileOpenRecentSaves()\0"
    "showInsertServiceDialog()\0showFindAllDialog()\0"
    "instanceDump()\0openSettingsDialog()\0"
    "openPluginsFolder()\0managePlugins()\0"
    "about()\0onlineHelp()\0shortcutHelp()\0"
    "openObjectBrowser(bool)\0fastLogDump()\0"
    "change\0toggleFullScreen(bool)\0"
    "executeScriptFile()\0causeCrash()\0"
    "selectedItem\0onCustomToolButton(QString)\0"
    "onMenuActionHovered(QAction*)\0"
    "onMinuteTimer()\0onDeleteSplashScreen()\0"
    "toggleBuildMode()\0topLevel\0"
    "onCommandToolBarTopLevelChanged(bool)\0"
    "loadDefaultApplicationState()\0"
    "cleanupPlayersAndServers()\0ok\0"
    "cookieConstraintCheckerLoadFinished(bool)\0"
    "checkInsertedObjects()\0closePlayDoc()\0"
    "saveAndClose()\0forceClose()\0doc\0"
    "requestDocClose(IRobloxDoc*)\0"
};

void RobloxMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxMainWindow *_t = static_cast<RobloxMainWindow *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->fileSave((*reinterpret_cast< IRobloxDoc*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->openRecentFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->openStartPage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->openStartPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->commonSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->commonSlotQuickAccess((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->sendActionCounterEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->notifyCloudEditConnectionClosed(); break;
        case 9: _t->cloudEditStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->logIntervalCounter(); break;
        case 11: _t->sendOffCounters(); break;
        case 12: _t->processAppEvent((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 13: _t->fileNew(); break;
        case 14: _t->fileOpen(); break;
        case 15: _t->fileClose(); break;
        case 16: { bool _r = _t->fileSaveAs((*reinterpret_cast< IRobloxDoc*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->filePublishedProjects();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->openRecentFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->publishGame(); break;
        case 21: _t->fileOpenRecentSaves(); break;
        case 22: _t->showInsertServiceDialog(); break;
        case 23: _t->showFindAllDialog(); break;
        case 24: _t->instanceDump(); break;
        case 25: _t->openSettingsDialog(); break;
        case 26: _t->openPluginsFolder(); break;
        case 27: _t->managePlugins(); break;
        case 28: _t->about(); break;
        case 29: _t->onlineHelp(); break;
        case 30: _t->shortcutHelp(); break;
        case 31: _t->openObjectBrowser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->fastLogDump(); break;
        case 33: _t->toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->executeScriptFile(); break;
        case 35: _t->causeCrash(); break;
        case 36: _t->onCustomToolButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->onMenuActionHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 38: _t->onMinuteTimer(); break;
        case 39: _t->onDeleteSplashScreen(); break;
        case 40: _t->toggleBuildMode(); break;
        case 41: _t->onCommandToolBarTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->loadDefaultApplicationState(); break;
        case 43: _t->cleanupPlayersAndServers(); break;
        case 44: _t->cookieConstraintCheckerLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->checkInsertedObjects(); break;
        case 46: _t->closePlayDoc(); break;
        case 47: _t->saveAndClose(); break;
        case 48: _t->forceClose(); break;
        case 49: { bool _r = _t->requestDocClose((*reinterpret_cast< IRobloxDoc*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxMainWindow::staticMetaObject = {
    { &RobloxRibbonMainWindow::staticMetaObject, qt_meta_stringdata_RobloxMainWindow,
      qt_meta_data_RobloxMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxMainWindow))
        return static_cast<void*>(const_cast< RobloxMainWindow*>(this));
    return RobloxRibbonMainWindow::qt_metacast(_clname);
}

int RobloxMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxRibbonMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
