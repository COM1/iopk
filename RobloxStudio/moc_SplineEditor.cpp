/****************************************************************************
** Meta object code from reading C++ file 'SplineEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "SplineEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplineEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SplineEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x05,
      43,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   54,   13,   13, 0x0a,
      76,   13,   13,   13, 0x08,
      97,   13,   13,   13, 0x08,
     115,   13,   13,   13, 0x08,
     125,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SplineEditor[] = {
    "SplineEditor\0\0undoPoint\0splineEdited(bool)\0"
    "finished()\0sd\0refreshData(void*)\0"
    "onPointDataChanged()\0onKillPtClicked()\0"
    "onClose()\0onReset()\0"
};

void SplineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SplineEditor *_t = static_cast<SplineEditor *>(_o);
        switch (_id) {
        case 0: _t->splineEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->refreshData((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->onPointDataChanged(); break;
        case 4: _t->onKillPtClicked(); break;
        case 5: _t->onClose(); break;
        case 6: _t->onReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SplineEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SplineEditor::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_SplineEditor,
      qt_meta_data_SplineEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplineEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditor))
        return static_cast<void*>(const_cast< SplineEditor*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int SplineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SplineEditor::splineEdited(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SplineEditor::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_SplineEditorCanvas[] = {

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

static const char qt_meta_stringdata_SplineEditorCanvas[] = {
    "SplineEditorCanvas\0"
};

void SplineEditorCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SplineEditorCanvas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SplineEditorCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SplineEditorCanvas,
      qt_meta_data_SplineEditorCanvas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplineEditorCanvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplineEditorCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplineEditorCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditorCanvas))
        return static_cast<void*>(const_cast< SplineEditorCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int SplineEditorCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SplineEditorAdapter[] = {

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
      26,   21,   20,   20, 0x08,
      41,   20,   20,   20, 0x08,
      55,   52,   20,   20, 0x08,
     115,  113,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SplineEditorAdapter[] = {
    "SplineEditorAdapter\0\0undo\0onEdited(bool)\0"
    "onClosed()\0pd\0"
    "onPropChanged(const RBX::Reflection::PropertyDescriptor*)\0"
    ",\0"
    "onAncestryChanged(shared_ptr<RBX::Instance>,shared_ptr<RBX::Instance>)\0"
};

void SplineEditorAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SplineEditorAdapter *_t = static_cast<SplineEditorAdapter *>(_o);
        switch (_id) {
        case 0: _t->onEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onClosed(); break;
        case 2: _t->onPropChanged((*reinterpret_cast< const RBX::Reflection::PropertyDescriptor*(*)>(_a[1]))); break;
        case 3: _t->onAncestryChanged((*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[1])),(*reinterpret_cast< shared_ptr<RBX::Instance>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SplineEditorAdapter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SplineEditorAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SplineEditorAdapter,
      qt_meta_data_SplineEditorAdapter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplineEditorAdapter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplineEditorAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplineEditorAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplineEditorAdapter))
        return static_cast<void*>(const_cast< SplineEditorAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int SplineEditorAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
