/****************************************************************************
** Meta object code from reading C++ file 'RobloxPluginHost.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxPluginHost.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxPluginHost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxPluginHost[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      54,   39,   17,   17, 0x08,
     124,   83,   17,   17, 0x08,
     188,  172,   17,   17, 0x08,
     231,  216,   17,   17, 0x08,
     255,  216,   17,   17, 0x08,
     302,  285,   17,   17, 0x08,
     346,  328,   17,   17, 0x08,
     406,  392,   17,   17, 0x08,
     453,  440,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxPluginHost[] = {
    "RobloxPluginHost\0\0handlePluginAction()\0"
    "toolbarID,name\0onCreateToolbar(int,QString)\0"
    "toolbarID,actionID,text,tooltip,iconName\0"
    "onCreateButton(int,int,QString,QString,QString)\0"
    "buttonID,active\0onSetButtonActive(int,bool)\0"
    "toolbarID,show\0onShowToolbar(int,bool)\0"
    "onShowToolbars(QVariant,bool)\0"
    "toolbarID,enable\0onEnableToolbar(int,bool)\0"
    "buttonId,iconName\0"
    "setButtonIconInternal_deprecated(int,QString)\0"
    "buttonId,icon\0setButtonIconInternal(int,QImage)\0"
    "uiActionName\0onUIAction(QString)\0"
};

void RobloxPluginHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxPluginHost *_t = static_cast<RobloxPluginHost *>(_o);
        switch (_id) {
        case 0: _t->handlePluginAction(); break;
        case 1: _t->onCreateToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->onCreateButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 3: _t->onSetButtonActive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->onShowToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->onShowToolbars((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->onEnableToolbar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->setButtonIconInternal_deprecated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->setButtonIconInternal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 9: _t->onUIAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxPluginHost::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxPluginHost::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RobloxPluginHost,
      qt_meta_data_RobloxPluginHost, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxPluginHost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxPluginHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxPluginHost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxPluginHost))
        return static_cast<void*>(const_cast< RobloxPluginHost*>(this));
    if (!strcmp(_clname, "RBX::IStudioPluginHost"))
        return static_cast< RBX::IStudioPluginHost*>(const_cast< RobloxPluginHost*>(this));
    return QObject::qt_metacast(_clname);
}

int RobloxPluginHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
