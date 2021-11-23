/****************************************************************************
** Meta object code from reading C++ file 'RobloxScriptDoc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxScriptDoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxScriptDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxScriptDoc[] = {

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
      17,   16,   16,   16, 0x08,
      41,   16,   16,   16, 0x08,
      62,   16,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,
      94,   16,   16,   16, 0x08,
     123,   16,   16,   16, 0x08,
     149,  141,   16,   16, 0x08,
     196,  186,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxScriptDoc[] = {
    "RobloxScriptDoc\0\0requestScriptDeletion()\0"
    "onSelectionChanged()\0deActivate()\0"
    "reloadLiveScript()\0explainBreakpointsDisabled()\0"
    "editingContents()\0newName\0"
    "onScriptNamePropertyChanged(QString)\0"
    "newSource\0onScriptSourcePropertyChanged(QString)\0"
};

void RobloxScriptDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxScriptDoc *_t = static_cast<RobloxScriptDoc *>(_o);
        switch (_id) {
        case 0: _t->requestScriptDeletion(); break;
        case 1: _t->onSelectionChanged(); break;
        case 2: _t->deActivate(); break;
        case 3: _t->reloadLiveScript(); break;
        case 4: _t->explainBreakpointsDisabled(); break;
        case 5: _t->editingContents(); break;
        case 6: _t->onScriptNamePropertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onScriptSourcePropertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxScriptDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxScriptDoc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxScriptDoc,
      qt_meta_data_RobloxScriptDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxScriptDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxScriptDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxScriptDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxScriptDoc))
        return static_cast<void*>(const_cast< RobloxScriptDoc*>(this));
    if (!strcmp(_clname, "RobloxBasicDoc"))
        return static_cast< RobloxBasicDoc*>(const_cast< RobloxScriptDoc*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxScriptDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
