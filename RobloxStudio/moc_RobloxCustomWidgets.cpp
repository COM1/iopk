/****************************************************************************
** Meta object code from reading C++ file 'RobloxCustomWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxCustomWidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxCustomWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PickerFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PickerFrame[] = {
    "PickerFrame\0\0selectedItem\0changed(QString)\0"
};

void PickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PickerFrame *_t = static_cast<PickerFrame *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PickerFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PickerFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PickerFrame,
      qt_meta_data_PickerFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PickerFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PickerFrame))
        return static_cast<void*>(const_cast< PickerFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int PickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PickerFrame::changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ColorPickerFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x05,
      54,   18,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ColorPickerFrame[] = {
    "ColorPickerFrame\0\0color\0"
    "currentBrickColorChanged(int)\0"
    "currentColorChanged(QColor)\0"
};

void ColorPickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorPickerFrame *_t = static_cast<ColorPickerFrame *>(_o);
        switch (_id) {
        case 0: _t->currentBrickColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorPickerFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorPickerFrame::staticMetaObject = {
    { &PickerFrame::staticMetaObject, qt_meta_stringdata_ColorPickerFrame,
      qt_meta_data_ColorPickerFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorPickerFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorPickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorPickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPickerFrame))
        return static_cast<void*>(const_cast< ColorPickerFrame*>(this));
    return PickerFrame::qt_metacast(_clname);
}

int ColorPickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ColorPickerFrame::currentBrickColorChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorPickerFrame::currentColorChanged(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_MaterialPickerFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MaterialPickerFrame[] = {
    "MaterialPickerFrame\0\0material\0"
    "currentMaterialChanged(int)\0"
};

void MaterialPickerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MaterialPickerFrame *_t = static_cast<MaterialPickerFrame *>(_o);
        switch (_id) {
        case 0: _t->currentMaterialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MaterialPickerFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MaterialPickerFrame::staticMetaObject = {
    { &PickerFrame::staticMetaObject, qt_meta_stringdata_MaterialPickerFrame,
      qt_meta_data_MaterialPickerFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaterialPickerFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaterialPickerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaterialPickerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialPickerFrame))
        return static_cast<void*>(const_cast< MaterialPickerFrame*>(this));
    return PickerFrame::qt_metacast(_clname);
}

int MaterialPickerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MaterialPickerFrame::currentMaterialChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CustomToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   18,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,
      61,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CustomToolButton[] = {
    "CustomToolButton\0\0selectedItem\0"
    "changed(QString)\0frameShown()\0"
    "frameHidden()\0"
};

void CustomToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomToolButton *_t = static_cast<CustomToolButton *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->frameShown(); break;
        case 2: _t->frameHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CustomToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_CustomToolButton,
      qt_meta_data_CustomToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomToolButton))
        return static_cast<void*>(const_cast< CustomToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int CustomToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CustomToolButton::changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomToolButton::frameShown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CustomToolButton::frameHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_FillColorPickerToolButton[] = {

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
      41,   27,   26,   26, 0x08,
      71,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FillColorPickerToolButton[] = {
    "FillColorPickerToolButton\0\0selectedColor\0"
    "onPickerFrameChanged(QString)\0"
    "onPickerFrameDestroyed()\0"
};

void FillColorPickerToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FillColorPickerToolButton *_t = static_cast<FillColorPickerToolButton *>(_o);
        switch (_id) {
        case 0: _t->onPickerFrameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onPickerFrameDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FillColorPickerToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FillColorPickerToolButton::staticMetaObject = {
    { &CustomToolButton::staticMetaObject, qt_meta_stringdata_FillColorPickerToolButton,
      qt_meta_data_FillColorPickerToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FillColorPickerToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FillColorPickerToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FillColorPickerToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FillColorPickerToolButton))
        return static_cast<void*>(const_cast< FillColorPickerToolButton*>(this));
    return CustomToolButton::qt_metacast(_clname);
}

int FillColorPickerToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PopupLaunchEditor[] = {

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
      19,   18,   18,   18, 0x08,
      37,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PopupLaunchEditor[] = {
    "PopupLaunchEditor\0\0onButtonClicked()\0"
    "onEditFinished()\0"
};

void PopupLaunchEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PopupLaunchEditor *_t = static_cast<PopupLaunchEditor *>(_o);
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        case 1: _t->onEditFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PopupLaunchEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PopupLaunchEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PopupLaunchEditor,
      qt_meta_data_PopupLaunchEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PopupLaunchEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PopupLaunchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PopupLaunchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PopupLaunchEditor))
        return static_cast<void*>(const_cast< PopupLaunchEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int PopupLaunchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_SignalConnector[] = {

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
      17,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SignalConnector[] = {
    "SignalConnector\0\0genericSlotArg1(QString)\0"
};

void SignalConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignalConnector *_t = static_cast<SignalConnector *>(_o);
        switch (_id) {
        case 0: _t->genericSlotArg1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SignalConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SignalConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SignalConnector,
      qt_meta_data_SignalConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SignalConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SignalConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SignalConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignalConnector))
        return static_cast<void*>(const_cast< SignalConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int SignalConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ImagePickerWidget[] = {

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

 // methods: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x00,
      46,   41,   18,   18, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_ImagePickerWidget[] = {
    "ImagePickerWidget\0\0acceptLineEditValue()\0"
    "item\0handleListItemClicked(QListWidgetItem*)\0"
};

void ImagePickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImagePickerWidget *_t = static_cast<ImagePickerWidget *>(_o);
        switch (_id) {
        case 0: _t->acceptLineEditValue(); break;
        case 1: _t->handleListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImagePickerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImagePickerWidget::staticMetaObject = {
    { &PickerFrame::staticMetaObject, qt_meta_stringdata_ImagePickerWidget,
      qt_meta_data_ImagePickerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImagePickerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImagePickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImagePickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImagePickerWidget))
        return static_cast<void*>(const_cast< ImagePickerWidget*>(this));
    return PickerFrame::qt_metacast(_clname);
}

int ImagePickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PickerFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_NumberSequencePropertyWidget[] = {

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
      30,   29,   29,   29, 0x08,
      39,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NumberSequencePropertyWidget[] = {
    "NumberSequencePropertyWidget\0\0onText()\0"
    "onButton(bool)\0"
};

void NumberSequencePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NumberSequencePropertyWidget *_t = static_cast<NumberSequencePropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->onText(); break;
        case 1: _t->onButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NumberSequencePropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NumberSequencePropertyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NumberSequencePropertyWidget,
      qt_meta_data_NumberSequencePropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NumberSequencePropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NumberSequencePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NumberSequencePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NumberSequencePropertyWidget))
        return static_cast<void*>(const_cast< NumberSequencePropertyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NumberSequencePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PrimaryPartSelectionEditor[] = {

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
      28,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrimaryPartSelectionEditor[] = {
    "PrimaryPartSelectionEditor\0\0"
    "onButtonClicked()\0"
};

void PrimaryPartSelectionEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrimaryPartSelectionEditor *_t = static_cast<PrimaryPartSelectionEditor *>(_o);
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PrimaryPartSelectionEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrimaryPartSelectionEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrimaryPartSelectionEditor,
      qt_meta_data_PrimaryPartSelectionEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrimaryPartSelectionEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrimaryPartSelectionEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrimaryPartSelectionEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryPartSelectionEditor))
        return static_cast<void*>(const_cast< PrimaryPartSelectionEditor*>(this));
    if (!strcmp(_clname, "InstanceSelectionHandler"))
        return static_cast< InstanceSelectionHandler*>(const_cast< PrimaryPartSelectionEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int PrimaryPartSelectionEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
