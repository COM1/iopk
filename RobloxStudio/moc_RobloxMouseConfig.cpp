/****************************************************************************
** Meta object code from reading C++ file 'RobloxMouseConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxMouseConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxMouseConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxMouseConfigWidget[] = {

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
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   24,   24,   24, 0x0a,
      48,   24,   24,   24, 0x0a,
      57,   24,   24,   24, 0x0a,
      85,   78,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxMouseConfigWidget[] = {
    "RobloxMouseConfigWidget\0\0dataChanged()\0"
    "accept()\0cancel()\0restoreAllDefaults()\0"
    "option\0contextMenuOptionSelected(QString)\0"
};

void RobloxMouseConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxMouseConfigWidget *_t = static_cast<RobloxMouseConfigWidget *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->accept(); break;
        case 2: _t->cancel(); break;
        case 3: _t->restoreAllDefaults(); break;
        case 4: _t->contextMenuOptionSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxMouseConfigWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxMouseConfigWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxMouseConfigWidget,
      qt_meta_data_RobloxMouseConfigWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxMouseConfigWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxMouseConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxMouseConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxMouseConfigWidget))
        return static_cast<void*>(const_cast< RobloxMouseConfigWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxMouseConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RobloxMouseConfigWidget::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
