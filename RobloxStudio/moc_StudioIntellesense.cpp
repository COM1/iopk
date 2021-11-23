/****************************************************************************
** Meta object code from reading C++ file 'StudioIntellesense.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "StudioIntellesense.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StudioIntellesense.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Studio__Intellesense[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   22,   21,   21, 0x09,
      97,   22,   21,   21, 0x09,
     127,   22,   21,   21, 0x09,
     157,   21,   21,   21, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_Studio__Intellesense[] = {
    "Studio::Intellesense\0\0listItem\0"
    "doubleClickSignal(QListWidgetItem*)\0"
    "doubleClick(QListWidgetItem*)\0"
    "singleClick(QListWidgetItem*)\0"
    "showToolTip(QListWidgetItem*)\0"
    "showToolTip()\0"
};

void Studio::Intellesense::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Intellesense *_t = static_cast<Intellesense *>(_o);
        switch (_id) {
        case 0: _t->doubleClickSignal((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->doubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->singleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->showToolTip((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->showToolTip(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Studio::Intellesense::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Studio::Intellesense::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Studio__Intellesense,
      qt_meta_data_Studio__Intellesense, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Studio::Intellesense::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Studio::Intellesense::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Studio::Intellesense::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Studio__Intellesense))
        return static_cast<void*>(const_cast< Intellesense*>(this));
    return QWidget::qt_metacast(_clname);
}

int Studio::Intellesense::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Studio::Intellesense::doubleClickSignal(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Studio__IntellesenseTooltip[] = {

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

static const char qt_meta_stringdata_Studio__IntellesenseTooltip[] = {
    "Studio::IntellesenseTooltip\0"
};

void Studio::IntellesenseTooltip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Studio::IntellesenseTooltip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Studio::IntellesenseTooltip::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Studio__IntellesenseTooltip,
      qt_meta_data_Studio__IntellesenseTooltip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Studio::IntellesenseTooltip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Studio::IntellesenseTooltip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Studio::IntellesenseTooltip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Studio__IntellesenseTooltip))
        return static_cast<void*>(const_cast< IntellesenseTooltip*>(this));
    return QFrame::qt_metacast(_clname);
}

int Studio::IntellesenseTooltip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
