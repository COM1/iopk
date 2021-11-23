/****************************************************************************
** Meta object code from reading C++ file 'RobloxKeyboardConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxKeyboardConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxKeyboardConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeySequenceEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x05,
      59,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   17,   16,   16, 0x0a,
     106,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeySequenceEdit[] = {
    "KeySequenceEdit\0\0sequence\0"
    "keySequenceChanged(QKeySequence)\0"
    "editingFinished()\0setKeySequence(QKeySequence)\0"
    "slotClearShortcut()\0"
};

void KeySequenceEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeySequenceEdit *_t = static_cast<KeySequenceEdit *>(_o);
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->setKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 3: _t->slotClearShortcut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeySequenceEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeySequenceEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KeySequenceEdit,
      qt_meta_data_KeySequenceEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeySequenceEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeySequenceEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeySequenceEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeySequenceEdit))
        return static_cast<void*>(const_cast< KeySequenceEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int KeySequenceEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KeySequenceEdit::keySequenceChanged(const QKeySequence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeySequenceEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_ShortcutDelegate[] = {

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

static const char qt_meta_stringdata_ShortcutDelegate[] = {
    "ShortcutDelegate\0"
};

void ShortcutDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShortcutDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShortcutDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ShortcutDelegate,
      qt_meta_data_ShortcutDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutDelegate))
        return static_cast<void*>(const_cast< ShortcutDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ShortcutDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ShortcutsModel[] = {

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

static const char qt_meta_stringdata_ShortcutsModel[] = {
    "ShortcutsModel\0"
};

void ShortcutsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShortcutsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShortcutsModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_ShortcutsModel,
      qt_meta_data_ShortcutsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutsModel))
        return static_cast<void*>(const_cast< ShortcutsModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int ShortcutsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RobloxKeyboardConfigWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   27,   27,   27, 0x0a,
      51,   27,   27,   27, 0x0a,
      60,   27,   27,   27, 0x0a,
     101,   81,   27,   27, 0x0a,
     145,  138,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RobloxKeyboardConfigWidget[] = {
    "RobloxKeyboardConfigWidget\0\0dataChanged()\0"
    "accept()\0cancel()\0restoreAllDefaults()\0"
    "topLeft,bottomRight\0"
    "dataChanged(QModelIndex,QModelIndex)\0"
    "filter\0setFilter(QString)\0"
};

void RobloxKeyboardConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxKeyboardConfigWidget *_t = static_cast<RobloxKeyboardConfigWidget *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->accept(); break;
        case 2: _t->cancel(); break;
        case 3: _t->restoreAllDefaults(); break;
        case 4: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxKeyboardConfigWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxKeyboardConfigWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobloxKeyboardConfigWidget,
      qt_meta_data_RobloxKeyboardConfigWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxKeyboardConfigWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxKeyboardConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxKeyboardConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxKeyboardConfigWidget))
        return static_cast<void*>(const_cast< RobloxKeyboardConfigWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobloxKeyboardConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RobloxKeyboardConfigWidget::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
