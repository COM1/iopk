/****************************************************************************
** Meta object code from reading C++ file 'RobloxTextOutputWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxTextOutputWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTextOutputWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxTextOutputWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   24,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RobloxTextOutputWidget[] = {
    "RobloxTextOutputWidget\0\0message,type\0"
    "appendOutputText(QString,RBX::MessageType)\0"
};

void RobloxTextOutputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxTextOutputWidget *_t = static_cast<RobloxTextOutputWidget *>(_o);
        switch (_id) {
        case 0: _t->appendOutputText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RBX::MessageType(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxTextOutputWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxTextOutputWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_RobloxTextOutputWidget,
      qt_meta_data_RobloxTextOutputWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxTextOutputWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxTextOutputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxTextOutputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTextOutputWidget))
        return static_cast<void*>(const_cast< RobloxTextOutputWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int RobloxTextOutputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
