/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonStyle.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../styles/QtnRibbonStyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonStyle[] = {

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

static const char qt_meta_stringdata_Qtitan__RibbonStyle[] = {
    "Qtitan::RibbonStyle\0"
};

void Qtitan::RibbonStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::RibbonStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonStyle::staticMetaObject = {
    { &OfficeStyle::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonStyle,
      qt_meta_data_Qtitan__RibbonStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonStyle))
        return static_cast<void*>(const_cast< RibbonStyle*>(this));
    return OfficeStyle::qt_metacast(_clname);
}

int Qtitan::RibbonStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OfficeStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Qtitan__RibbonStylePlugin[] = {

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

static const char qt_meta_stringdata_Qtitan__RibbonStylePlugin[] = {
    "Qtitan::RibbonStylePlugin\0"
};

void Qtitan::RibbonStylePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::RibbonStylePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonStylePlugin::staticMetaObject = {
    { &QStylePlugin::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonStylePlugin,
      qt_meta_data_Qtitan__RibbonStylePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonStylePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonStylePlugin))
        return static_cast<void*>(const_cast< RibbonStylePlugin*>(this));
    return QStylePlugin::qt_metacast(_clname);
}

int Qtitan::RibbonStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStylePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
