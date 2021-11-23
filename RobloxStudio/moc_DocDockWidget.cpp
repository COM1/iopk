/****************************************************************************
** Meta object code from reading C++ file 'DocDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "DocDockWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DocDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DocDockWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      38,   29,   14,   14, 0x0a,
      67,   62,   14,   14, 0x0a,
     129,  109,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DocDockWidget[] = {
    "DocDockWidget\0\0onAttachDoc()\0TopLevel\0"
    "onTopLevelChanged(bool)\0area\0"
    "onDockLocationChanged(Qt::DockWidgetArea)\0"
    "oldWidget,newWidget\0"
    "onFocusChanged(QWidget*,QWidget*)\0"
};

void DocDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DocDockWidget *_t = static_cast<DocDockWidget *>(_o);
        switch (_id) {
        case 0: _t->onAttachDoc(); break;
        case 1: _t->onTopLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 3: _t->onFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DocDockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DocDockWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DocDockWidget,
      qt_meta_data_DocDockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DocDockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DocDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DocDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DocDockWidget))
        return static_cast<void*>(const_cast< DocDockWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DocDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
