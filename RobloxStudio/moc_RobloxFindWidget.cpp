/****************************************************************************
** Meta object code from reading C++ file 'RobloxFindWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxFindWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxFindWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      36,   32,   28,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FindListModel[] = {
    "FindListModel\0\0updateView()\0int\0row\0"
    "openScript(int)\0"
};

void FindListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindListModel *_t = static_cast<FindListModel *>(_o);
        switch (_id) {
        case 0: _t->updateView(); break;
        case 1: { int _r = _t->openScript((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FindListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_FindListModel,
      qt_meta_data_FindListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindListModel))
        return static_cast<void*>(const_cast< FindListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int FindListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_RobloxFindWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   45,   17,   17, 0x09,
      73,   17,   17,   17, 0x09,
      91,   17,   17,   17, 0x09,
     106,   17,   17,   17, 0x09,
     117,   17,   17,   17, 0x09,
     130,   17,   17,   17, 0x09,
     143,   17,   17,   17, 0x09,
     170,  165,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RobloxFindWidget[] = {
    "RobloxFindWidget\0\0populatingWidgetFinished()\0"
    "index\0openItem(QModelIndex)\0"
    "openCurrentItem()\0previousItem()\0"
    "nextItem()\0clearItems()\0resetItems()\0"
    "stopPopulatingItems()\0item\0addItem(FindData)\0"
};

void RobloxFindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxFindWidget *_t = static_cast<RobloxFindWidget *>(_o);
        switch (_id) {
        case 0: _t->populatingWidgetFinished(); break;
        case 1: _t->openItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->openCurrentItem(); break;
        case 3: _t->previousItem(); break;
        case 4: _t->nextItem(); break;
        case 5: _t->clearItems(); break;
        case 6: _t->resetItems(); break;
        case 7: _t->stopPopulatingItems(); break;
        case 8: _t->addItem((*reinterpret_cast< FindData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxFindWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxFindWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxFindWidget,
      qt_meta_data_RobloxFindWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxFindWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxFindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxFindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxFindWidget))
        return static_cast<void*>(const_cast< RobloxFindWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxFindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RobloxFindWidget::populatingWidgetFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
