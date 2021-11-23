/****************************************************************************
** Meta object code from reading C++ file 'RobloxChatWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "RobloxChatWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobloxChatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatMessageItem[] = {

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
      23,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChatMessageItem[] = {
    "ChatMessageItem\0\0image\0"
    "updatePlayerAvatar(QImage)\0"
};

void ChatMessageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatMessageItem *_t = static_cast<ChatMessageItem *>(_o);
        switch (_id) {
        case 0: _t->updatePlayerAvatar((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChatMessageItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatMessageItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChatMessageItem,
      qt_meta_data_ChatMessageItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatMessageItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatMessageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatMessageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMessageItem))
        return static_cast<void*>(const_cast< ChatMessageItem*>(this));
    if (!strcmp(_clname, "QListWidgetItem"))
        return static_cast< QListWidgetItem*>(const_cast< ChatMessageItem*>(this));
    return QObject::qt_metacast(_clname);
}

int ChatMessageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_ChatMessageLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   90,   20,   20, 0x08,
     120,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChatMessageLineEdit[] = {
    "ChatMessageLineEdit\0\0"
    "chatType,message,targetPlayerName\0"
    "returnPressed(int,QString,QString)\0"
    "message\0onTextEdited(QString)\0"
    "onReturnPressed()\0"
};

void ChatMessageLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatMessageLineEdit *_t = static_cast<ChatMessageLineEdit *>(_o);
        switch (_id) {
        case 0: _t->returnPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->onTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onReturnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChatMessageLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatMessageLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_ChatMessageLineEdit,
      qt_meta_data_ChatMessageLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatMessageLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatMessageLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatMessageLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMessageLineEdit))
        return static_cast<void*>(const_cast< ChatMessageLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int ChatMessageLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void ChatMessageLineEdit::returnPressed(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_RobloxChatWidget[] = {

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
      52,   18,   17,   17, 0x08,

 // methods: signature, parameters, type, tag, flags
     101,   89,   17,   17, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_RobloxChatWidget[] = {
    "RobloxChatWidget\0\0chatMode,message,targetPlayerName\0"
    "onReturnPressed(int,QString,QString)\0"
    "messageData\0addMessage(StudioChat::ChatMessageData)\0"
};

void RobloxChatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobloxChatWidget *_t = static_cast<RobloxChatWidget *>(_o);
        switch (_id) {
        case 0: _t->onReturnPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->addMessage((*reinterpret_cast< StudioChat::ChatMessageData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RobloxChatWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobloxChatWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_RobloxChatWidget,
      qt_meta_data_RobloxChatWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobloxChatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobloxChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobloxChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobloxChatWidget))
        return static_cast<void*>(const_cast< RobloxChatWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int RobloxChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
