/****************************************************************************
** Meta object code from reading C++ file 'RobloxTutorials.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxTutorials.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxTutorials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobloxTutorials[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x08,
      39,   17,   16,   16, 0x08,
      56,   17,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,
      91,   16,   16,   16, 0x08,
     111,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobloxTutorials[] = {
    "RobloxTutorials\0\0url\0linkClicked(QUrl)\0"
    "urlChanged(QUrl)\0disableLinks(QUrl)\0"
    "updateButtons()\0handleHomeClicked()\0"
    "resizeWidget()\0"
};

void RobloxTutorials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxTutorials *_t = static_cast<RobloxTutorials *>(_o);
        switch (_id) {
        case 0: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->disableLinks((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->updateButtons(); break;
        case 4: _t->handleHomeClicked(); break;
        case 5: _t->resizeWidget(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxTutorials::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxTutorials::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxTutorials,
      qt_meta_data_RobloxTutorials, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxTutorials::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxTutorials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxTutorials::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxTutorials))
        return static_cast<void*>(const_cast< RobloxTutorials*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxTutorials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
