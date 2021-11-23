/****************************************************************************
** Meta object code from reading C++ file 'QtnOfficePopupWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ribbon/QtnOfficePopupWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnOfficePopupWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qtitan__OfficePopupWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       9,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      41,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   26,   26,   26, 0x0a,
      68,   26,   26,   26, 0x09,
      85,   26,   26,   26, 0x09,
     103,   26,   26,   26, 0x09,

 // properties: name, type, flags
     135,  120, 0x0009510b,
     151,  145, ((uint)QMetaType::QReal << 24) | 0x00095103,
     168,  164, 0x02095103,
     180,  164, 0x02095103,
     201,  195, 0x45095103,
     219,  211, 0x0a095103,
     229,  211, 0x0a095103,
     243,  238, 0x01095103,
     281,  267, 0x0009510b,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

static const char qt_meta_stringdata_Qtitan__OfficePopupWindow[] = {
    "Qtitan::OfficePopupWindow\0\0aboutToShow()\0"
    "aboutToHide()\0closePopup()\0showDelayTimer()\0"
    "collapsingTimer()\0expandingTimer()\0"
    "PopupAnimation\0animation\0qreal\0"
    "transparency\0int\0displayTime\0"
    "animationSpeed\0QIcon\0titleIcon\0QString\0"
    "titleText\0bodyText\0bool\0titleCloseButtonVisible\0"
    "PopupLocation\0location\0"
};

void Qtitan::OfficePopupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OfficePopupWindow *_t = static_cast<OfficePopupWindow *>(_o);
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->closePopup(); break;
        case 3: _t->showDelayTimer(); break;
        case 4: _t->collapsingTimer(); break;
        case 5: _t->expandingTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qtitan::OfficePopupWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qtitan::OfficePopupWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qtitan__OfficePopupWindow,
      qt_meta_data_Qtitan__OfficePopupWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qtitan::OfficePopupWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qtitan::OfficePopupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qtitan::OfficePopupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__OfficePopupWindow))
        return static_cast<void*>(const_cast< OfficePopupWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qtitan::OfficePopupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PopupAnimation*>(_v) = animation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = transparency(); break;
        case 2: *reinterpret_cast< int*>(_v) = displayTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = animationSpeed(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = titleIcon(); break;
        case 5: *reinterpret_cast< QString*>(_v) = titleText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = bodyText(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isTitleCloseButtonVisible(); break;
        case 8: *reinterpret_cast< PopupLocation*>(_v) = location(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnimation(*reinterpret_cast< PopupAnimation*>(_v)); break;
        case 1: setTransparency(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setDisplayTime(*reinterpret_cast< int*>(_v)); break;
        case 3: setAnimationSpeed(*reinterpret_cast< int*>(_v)); break;
        case 4: setTitleIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: setTitleText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setBodyText(*reinterpret_cast< QString*>(_v)); break;
        case 7: setTitleCloseButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 8: setLocation(*reinterpret_cast< PopupLocation*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::OfficePopupWindow::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Qtitan::OfficePopupWindow::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
