/****************************************************************************
** Meta object code from reading C++ file 'RobloxScriptReview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxScriptReview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxScriptReview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxScriptReview[] = {

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
      28,   20,   19,   19, 0x0a,
      45,   19,   19,   19, 0x08,
      54,   19,   19,   19, 0x08,
      70,   64,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxScriptReview[] = {
    "RobloxScriptReview\0\0visible\0"
    "setVisible(bool)\0update()\0onTimer()\0"
    "index\0onSectionClicked(int)\0"
};

void RobloxScriptReview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxScriptReview *_t = static_cast<RobloxScriptReview *>(_o);
        switch (_id) {
        case 0: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->onTimer(); break;
        case 3: _t->onSectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxScriptReview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxScriptReview::staticMetaObject = {
    { &RobloxReportView::staticMetaObject, qt_meta_stringdata_RobloxScriptReview,
      qt_meta_data_RobloxScriptReview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxScriptReview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxScriptReview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxScriptReview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxScriptReview))
        return static_cast<void*>(const_cast< RobloxScriptReview*>(this));
    return RobloxReportView::qt_metacast(_clname);
}

int RobloxScriptReview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RobloxReportView::qt_metacall(_c, _id, _a);
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
