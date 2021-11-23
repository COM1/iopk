/****************************************************************************
** Meta object code from reading C++ file 'QtnOfficeStyle.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../styles/QtnOfficeStyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnOfficeStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__OfficeStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      26,   20, 0x0009510b,
      37,   32, 0x01095003,
      47,   32, 0x01095003,
      61,   32, 0x01095103,

 // enums: name, flags, count, data
      20, 0x0,   10,   30,

 // enum data: key, value
      70, uint(Qtitan::OfficeStyle::Office2007Blue),
      85, uint(Qtitan::OfficeStyle::Office2007Black),
     101, uint(Qtitan::OfficeStyle::Office2007Silver),
     118, uint(Qtitan::OfficeStyle::Office2007Aqua),
     133, uint(Qtitan::OfficeStyle::Windows7Scenic),
     148, uint(Qtitan::OfficeStyle::Office2010Silver),
     165, uint(Qtitan::OfficeStyle::Office2010Blue),
     180, uint(Qtitan::OfficeStyle::Office2010Black),
     196, uint(Qtitan::OfficeStyle::Office2013White),
     212, uint(Qtitan::OfficeStyle::Office2013Gray),

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__OfficeStyle[] = {
    "Qtitan::OfficeStyle\0Theme\0theme\0bool\0"
    "animation\0ignoreDialogs\0DPIAware\0"
    "Office2007Blue\0Office2007Black\0"
    "Office2007Silver\0Office2007Aqua\0"
    "Windows7Scenic\0Office2010Silver\0"
    "Office2010Blue\0Office2010Black\0"
    "Office2013White\0Office2013Gray\0"
};

void Qtitan::OfficeStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::OfficeStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::OfficeStyle::staticMetaObject = {
    { &CommonStyle::staticMetaObject, qt_meta_stringdata_Qtitan__OfficeStyle,
      qt_meta_data_Qtitan__OfficeStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::OfficeStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::OfficeStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::OfficeStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__OfficeStyle))
        return static_cast<void*>(const_cast< OfficeStyle*>(this));
    return CommonStyle::qt_metacast(_clname);
}

int Qtitan::OfficeStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommonStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Theme*>(_v) = getTheme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isAnimationEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isDialogsIgnored(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isDPIAware(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTheme(*reinterpret_cast< Theme*>(_v)); break;
        case 1: setAnimationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDialogsIgnored(*reinterpret_cast< bool*>(_v)); break;
        case 3: setDPIAware(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Qtitan__OfficeStylePlugin[] = {

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

static const char qt_meta_stringdata_Qtitan__OfficeStylePlugin[] = {
    "Qtitan::OfficeStylePlugin\0"
};

void Qtitan::OfficeStylePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::OfficeStylePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::OfficeStylePlugin::staticMetaObject = {
    { &QStylePlugin::staticMetaObject, qt_meta_stringdata_Qtitan__OfficeStylePlugin,
      qt_meta_data_Qtitan__OfficeStylePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::OfficeStylePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::OfficeStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::OfficeStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__OfficeStylePlugin))
        return static_cast<void*>(const_cast< OfficeStylePlugin*>(this));
    return QStylePlugin::qt_metacast(_clname);
}

int Qtitan::OfficeStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStylePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
