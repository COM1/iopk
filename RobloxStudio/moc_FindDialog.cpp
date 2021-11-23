/****************************************************************************
** Meta object code from reading C++ file 'FindDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "FindDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BasicFindDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      28,   16,   16,   16, 0x09,
      39,   16,   16,   16, 0x09,
      54,   16,   16,   16, 0x09,
      74,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BasicFindDialog[] = {
    "BasicFindDialog\0\0setFocus()\0findNext()\0"
    "findPrevious()\0textToFindChanged()\0"
    "setVisible(bool)\0"
};

void BasicFindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BasicFindDialog *_t = static_cast<BasicFindDialog *>(_o);
        switch (_id) {
        case 0: _t->setFocus(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->textToFindChanged(); break;
        case 4: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BasicFindDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BasicFindDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BasicFindDialog,
      qt_meta_data_BasicFindDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BasicFindDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BasicFindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BasicFindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BasicFindDialog))
        return static_cast<void*>(const_cast< BasicFindDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BasicFindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_FindAllDialog[] = {

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
      15,   14,   14,   14, 0x08,
      28,   25,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FindAllDialog[] = {
    "FindAllDialog\0\0findAll()\0on\0"
    "onFindOptionsToggled(bool)\0"
    "textToFindChanged()\0adjustSize()\0"
};

void FindAllDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindAllDialog *_t = static_cast<FindAllDialog *>(_o);
        switch (_id) {
        case 0: _t->findAll(); break;
        case 1: _t->onFindOptionsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->textToFindChanged(); break;
        case 3: _t->adjustSize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FindAllDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindAllDialog::staticMetaObject = {
    { &BasicFindDialog::staticMetaObject, qt_meta_stringdata_FindAllDialog,
      qt_meta_data_FindAllDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindAllDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindAllDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindAllDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindAllDialog))
        return static_cast<void*>(const_cast< FindAllDialog*>(this));
    return BasicFindDialog::qt_metacast(_clname);
}

int FindAllDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_FindDialog[] = {

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

static const char qt_meta_stringdata_FindDialog[] = {
    "FindDialog\0"
};

void FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FindDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindDialog::staticMetaObject = {
    { &BasicFindDialog::staticMetaObject, qt_meta_stringdata_FindDialog,
      qt_meta_data_FindDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindDialog))
        return static_cast<void*>(const_cast< FindDialog*>(this));
    return BasicFindDialog::qt_metacast(_clname);
}

int FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ReplaceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      25,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ReplaceDialog[] = {
    "ReplaceDialog\0\0replace()\0replaceAll()\0"
    "textToFindChanged()\0"
};

void ReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReplaceDialog *_t = static_cast<ReplaceDialog *>(_o);
        switch (_id) {
        case 0: _t->replace(); break;
        case 1: _t->replaceAll(); break;
        case 2: _t->textToFindChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ReplaceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReplaceDialog::staticMetaObject = {
    { &BasicFindDialog::staticMetaObject, qt_meta_stringdata_ReplaceDialog,
      qt_meta_data_ReplaceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReplaceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReplaceDialog))
        return static_cast<void*>(const_cast< ReplaceDialog*>(this));
    return BasicFindDialog::qt_metacast(_clname);
}

int ReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicFindDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_EmbeddedFindReplaceWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      34,   26,   26,   26, 0x08,
      45,   26,   26,   26, 0x08,
      60,   26,   26,   26, 0x08,
      74,   26,   26,   26, 0x08,
      87,   26,   26,   26, 0x08,
     103,   26,   26,   26, 0x08,

 // methods: signature, parameters, type, tag, flags
     133,  126,   26,   26, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_EmbeddedFindReplaceWidget[] = {
    "EmbeddedFindReplaceWidget\0\0find()\0"
    "findNext()\0findPrevious()\0replaceNext()\0"
    "replaceAll()\0onCloseDialog()\0"
    "toggleReplaceVisible()\0number\0"
    "setNumberOfFoundResults(int)\0"
};

void EmbeddedFindReplaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmbeddedFindReplaceWidget *_t = static_cast<EmbeddedFindReplaceWidget *>(_o);
        switch (_id) {
        case 0: _t->find(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->replaceNext(); break;
        case 4: _t->replaceAll(); break;
        case 5: _t->onCloseDialog(); break;
        case 6: _t->toggleReplaceVisible(); break;
        case 7: _t->setNumberOfFoundResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EmbeddedFindReplaceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmbeddedFindReplaceWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EmbeddedFindReplaceWidget,
      qt_meta_data_EmbeddedFindReplaceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmbeddedFindReplaceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmbeddedFindReplaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmbeddedFindReplaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmbeddedFindReplaceWidget))
        return static_cast<void*>(const_cast< EmbeddedFindReplaceWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int EmbeddedFindReplaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_GoToLineDialog[] = {

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
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GoToLineDialog[] = {
    "GoToLineDialog\0\0goToLine()\0"
};

void GoToLineDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GoToLineDialog *_t = static_cast<GoToLineDialog *>(_o);
        switch (_id) {
        case 0: _t->goToLine(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GoToLineDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GoToLineDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GoToLineDialog,
      qt_meta_data_GoToLineDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GoToLineDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GoToLineDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GoToLineDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GoToLineDialog))
        return static_cast<void*>(const_cast< GoToLineDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GoToLineDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
