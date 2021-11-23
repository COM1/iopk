/****************************************************************************
** Meta object code from reading C++ file 'CommonInsertWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "CommonInsertWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommonInsertWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsertObjectWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x0a,
      53,   45,   19,   19, 0x0a,
      77,   70,   19,   19, 0x08,
      95,   19,   19,   19, 0x08,
     118,  110,   19,   19, 0x08,
     148,   19,   19,   19, 0x08,
     172,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InsertObjectWidget[] = {
    "InsertObjectWidget\0\0state\0updateWidget(bool)\0"
    "visible\0setVisible(bool)\0filter\0"
    "onFilter(QString)\0redrawDialog()\0"
    "checked\0onSelectOnInsertClicked(bool)\0"
    "onItemInsertRequested()\0"
    "onPreviousWidgetDestroyed()\0"
};

void InsertObjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsertObjectWidget *_t = static_cast<InsertObjectWidget *>(_o);
        switch (_id) {
        case 0: _t->updateWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->redrawDialog(); break;
        case 4: _t->onSelectOnInsertClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onItemInsertRequested(); break;
        case 6: _t->onPreviousWidgetDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsertObjectWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsertObjectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InsertObjectWidget,
      qt_meta_data_InsertObjectWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsertObjectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsertObjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsertObjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsertObjectWidget))
        return static_cast<void*>(const_cast< InsertObjectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InsertObjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
