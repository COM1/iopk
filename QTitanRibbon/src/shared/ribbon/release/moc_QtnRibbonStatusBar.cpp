/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonStatusBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnRibbonStatusBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonStatusBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__RibbonStatusBarSwitchGroup[] = {

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

static const char qt_meta_stringdata_Qtitan__RibbonStatusBarSwitchGroup[] = {
    "Qtitan::RibbonStatusBarSwitchGroup\0"
};

void Qtitan::RibbonStatusBarSwitchGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::RibbonStatusBarSwitchGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonStatusBarSwitchGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonStatusBarSwitchGroup,
      qt_meta_data_Qtitan__RibbonStatusBarSwitchGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonStatusBarSwitchGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonStatusBarSwitchGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonStatusBarSwitchGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonStatusBarSwitchGroup))
        return static_cast<void*>(const_cast< RibbonStatusBarSwitchGroup*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::RibbonStatusBarSwitchGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Qtitan__RibbonStatusBar[] = {

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

static const char qt_meta_stringdata_Qtitan__RibbonStatusBar[] = {
    "Qtitan::RibbonStatusBar\0"
};

void Qtitan::RibbonStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::RibbonStatusBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::RibbonStatusBar::staticMetaObject = {
    { &QStatusBar::staticMetaObject, qt_meta_stringdata_Qtitan__RibbonStatusBar,
      qt_meta_data_Qtitan__RibbonStatusBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::RibbonStatusBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::RibbonStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::RibbonStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonStatusBar))
        return static_cast<void*>(const_cast< RibbonStatusBar*>(this));
    return QStatusBar::qt_metacast(_clname);
}

int Qtitan::RibbonStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
