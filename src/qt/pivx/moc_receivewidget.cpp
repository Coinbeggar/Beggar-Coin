/****************************************************************************
** Meta object code from reading C++ file 'receivewidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/receivewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receivewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiveWidget_t {
    QByteArrayData data[20];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiveWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiveWidget_t qt_meta_stringdata_ReceiveWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ReceiveWidget"
QT_MOC_LITERAL(1, 14, 16), // "onRequestClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "onMyAddressesClicked"
QT_MOC_LITERAL(4, 53, 19), // "onNewAddressClicked"
QT_MOC_LITERAL(5, 73, 11), // "changeTheme"
QT_MOC_LITERAL(6, 85, 12), // "isLightTheme"
QT_MOC_LITERAL(7, 98, 8), // "QString&"
QT_MOC_LITERAL(8, 107, 5), // "theme"
QT_MOC_LITERAL(9, 113, 14), // "onLabelClicked"
QT_MOC_LITERAL(10, 128, 13), // "onCopyClicked"
QT_MOC_LITERAL(11, 142, 11), // "refreshView"
QT_MOC_LITERAL(12, 154, 2), // "tl"
QT_MOC_LITERAL(13, 157, 2), // "br"
QT_MOC_LITERAL(14, 160, 14), // "refreshAddress"
QT_MOC_LITERAL(15, 175, 20), // "handleAddressClicked"
QT_MOC_LITERAL(16, 196, 5), // "index"
QT_MOC_LITERAL(17, 202, 13), // "onSortChanged"
QT_MOC_LITERAL(18, 216, 3), // "idx"
QT_MOC_LITERAL(19, 220, 18) // "onSortOrderChanged"

    },
    "ReceiveWidget\0onRequestClicked\0\0"
    "onMyAddressesClicked\0onNewAddressClicked\0"
    "changeTheme\0isLightTheme\0QString&\0"
    "theme\0onLabelClicked\0onCopyClicked\0"
    "refreshView\0tl\0br\0refreshAddress\0"
    "handleAddressClicked\0index\0onSortChanged\0"
    "idx\0onSortOrderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    2,   77,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    2,   84,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x28 /* Private | MethodCloned */,
      15,    1,   93,    2, 0x08 /* Private */,
      17,    1,   96,    2, 0x08 /* Private */,
      19,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   12,   13,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void ReceiveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReceiveWidget *_t = static_cast<ReceiveWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRequestClicked(); break;
        case 1: _t->onMyAddressesClicked(); break;
        case 2: _t->onNewAddressClicked(); break;
        case 3: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->onLabelClicked(); break;
        case 5: _t->onCopyClicked(); break;
        case 6: _t->refreshView((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->refreshView((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->refreshView(); break;
        case 9: _t->handleAddressClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->onSortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onSortOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReceiveWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_ReceiveWidget.data,
      qt_meta_data_ReceiveWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReceiveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int ReceiveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
