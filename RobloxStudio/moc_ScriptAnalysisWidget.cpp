/****************************************************************************
** Meta object code from reading C++ file 'ScriptAnalysisWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "ScriptAnalysisWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptAnalysisWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScriptAnalysisTreeWidget[] = {

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
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   43,   25,   25, 0x08,

 // methods: signature, parameters, type, tag, flags
      89,   83,   25,   25, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_ScriptAnalysisTreeWidget[] = {
    "ScriptAnalysisTreeWidget\0\0resultsUpdated()\0"
    "pItem\0onItemActivated(QTreeWidgetItem*)\0"
    "index\0updateItemName(QModelIndex)\0"
};

void ScriptAnalysisTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptAnalysisTreeWidget *_t = static_cast<ScriptAnalysisTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->resultsUpdated(); break;
        case 1: _t->onItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->updateItemName((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScriptAnalysisTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScriptAnalysisTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_ScriptAnalysisTreeWidget,
      qt_meta_data_ScriptAnalysisTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptAnalysisTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptAnalysisTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptAnalysisTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAnalysisTreeWidget))
        return static_cast<void*>(const_cast< ScriptAnalysisTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int ScriptAnalysisTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void ScriptAnalysisTreeWidget::resultsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ScriptAnalysisWidget[] = {

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
      22,   21,   21,   21, 0x08,
      41,   21,   21,   21, 0x08,
      63,   21,   21,   21, 0x08,
      83,   21,   21,   21, 0x08,
     112,  105,   21,   21, 0x08,
     154,  137,   21,   21, 0x08,

 // methods: signature, parameters, type, tag, flags
     211,  188,   21,   21, 0x00,
     275,  261,   21,   21, 0x00,
     359,  352,   21,   21, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_ScriptAnalysisWidget[] = {
    "ScriptAnalysisWidget\0\0onResultsUpdated()\0"
    "onToolButtonClicked()\0onCheckBoxClicked()\0"
    "onCurrentDocChanged()\0gameId\0"
    "onNamedAssetsLoaded(int)\0gameId,assetName\0"
    "onNamedAssetModified(int,QString)\0"
    "scriptAssetName,future\0"
    "analyzeScriptAssetSource(QString,RBX::HttpFuture)\0"
    "script,result\0"
    "updateResultsInternal(shared_ptr<RBX::Instance>,RBX::ScriptAnalyzer::R"
    "esult)\0"
    "script\0analyzeAndUpdateResults(shared_ptr<RBX::Instance>)\0"
};

void ScriptAnalysisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptAnalysisWidget *_t = static_cast<ScriptAnalysisWidget *>(_o);
        switch (_id) {
        case 0: _t->onResultsUpdated(); break;
        case 1: _t->onToolButtonClicked(); break;
        case 2: _t->onCheckBoxClicked(); break;
        case 3: _t->onCurrentDocChanged(); break;
        case 4: _t->onNamedAssetsLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onNamedAssetModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->analyzeScriptAssetSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RBX::HttpFuture(*)>(_a[2]))); break;
        case 7: _t->updateResultsInternal((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])),(*reinterpret_cast< const RBX::ScriptAnalyzer::Result(*)>(_a[2]))); break;
        case 8: _t->analyzeAndUpdateResults((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScriptAnalysisWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScriptAnalysisWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ScriptAnalysisWidget,
      qt_meta_data_ScriptAnalysisWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptAnalysisWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptAnalysisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptAnalysisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAnalysisWidget))
        return static_cast<void*>(const_cast< ScriptAnalysisWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ScriptAnalysisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
