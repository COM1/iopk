/****************************************************************************
** Meta object code from reading C++ file 'UpdateUIManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "UpdateUIManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateUIManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpdateUIManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x0a,
      57,   43,   16,   16, 0x0a,
      91,   16,   16,   16, 0x0a,
     112,   16,   16,   16, 0x0a,
     129,   16,   16,   16, 0x08,
     147,   16,   16,   16, 0x08,
     166,   16,   16,   16, 0x08,
     183,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UpdateUIManager[] = {
    "UpdateUIManager\0\0onMenuShow()\0"
    "onMenuHide()\0title,message\0"
    "showErrorMessage(QString,QString)\0"
    "onQuickInsertFocus()\0updateToolBars()\0"
    "updateStatusBar()\0onToolBarsUpdate()\0"
    "filterExplorer()\0updateActionWidgetVisibility()\0"
};

void UpdateUIManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdateUIManager *_t = static_cast<UpdateUIManager *>(_o);
        switch (_id) {
        case 0: _t->onMenuShow(); break;
        case 1: _t->onMenuHide(); break;
        case 2: _t->showErrorMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onQuickInsertFocus(); break;
        case 4: _t->updateToolBars(); break;
        case 5: _t->updateStatusBar(); break;
        case 6: _t->onToolBarsUpdate(); break;
        case 7: _t->filterExplorer(); break;
        case 8: _t->updateActionWidgetVisibility(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UpdateUIManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpdateUIManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpdateUIManager,
      qt_meta_data_UpdateUIManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateUIManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateUIManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateUIManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateUIManager))
        return static_cast<void*>(const_cast< UpdateUIManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UpdateUIManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
