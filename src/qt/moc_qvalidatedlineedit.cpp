/****************************************************************************
** Meta object code from reading C++ file 'qvalidatedlineedit.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/qvalidatedlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalidatedlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QValidatedLineEdit_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QValidatedLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QValidatedLineEdit_t qt_meta_stringdata_QValidatedLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QValidatedLineEdit"
QT_MOC_LITERAL(1, 19, 8), // "setValid"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "valid"
QT_MOC_LITERAL(4, 35, 10), // "setEnabled"
QT_MOC_LITERAL(5, 46, 7), // "enabled"
QT_MOC_LITERAL(6, 54, 9), // "markValid"
QT_MOC_LITERAL(7, 64, 13) // "checkValidity"

    },
    "QValidatedLineEdit\0setValid\0\0valid\0"
    "setEnabled\0enabled\0markValid\0checkValidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QValidatedLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QValidatedLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QValidatedLineEdit *_t = static_cast<QValidatedLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->markValid(); break;
        case 3: _t->checkValidity(); break;
        default: ;
        }
    }
}

const QMetaObject QValidatedLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QValidatedLineEdit.data,
      qt_meta_data_QValidatedLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QValidatedLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QValidatedLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QValidatedLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int QValidatedLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
