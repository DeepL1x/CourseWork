/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "setFields"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "setRFields"
QT_MOC_LITERAL(4, 33, 11), // "clearFields"
QT_MOC_LITERAL(5, 45, 12), // "clearRFields"
QT_MOC_LITERAL(6, 58, 15), // "clearErrorLabel"
QT_MOC_LITERAL(7, 74, 14), // "clearTimeField"
QT_MOC_LITERAL(8, 89, 10), // "hideFields"
QT_MOC_LITERAL(9, 100, 11), // "hideRFields"
QT_MOC_LITERAL(10, 112, 16), // "fieldsVisibility"
QT_MOC_LITERAL(11, 129, 17), // "rFieldsVisibility"
QT_MOC_LITERAL(12, 147, 10), // "assignMtrx"
QT_MOC_LITERAL(13, 158, 8), // "double**"
QT_MOC_LITERAL(14, 167, 4), // "matr"
QT_MOC_LITERAL(15, 172, 13), // "assignInvMtrx"
QT_MOC_LITERAL(16, 186, 10), // "t_inv_matr"
QT_MOC_LITERAL(17, 197, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(18, 220, 20), // "on_detButton_clicked"
QT_MOC_LITERAL(19, 241, 28), // "on_inverseMtrxButton_clicked"
QT_MOC_LITERAL(20, 270, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(21, 292, 24) // "on_rndFillButton_clicked"

    },
    "MainWindow\0setFields\0\0setRFields\0"
    "clearFields\0clearRFields\0clearErrorLabel\0"
    "clearTimeField\0hideFields\0hideRFields\0"
    "fieldsVisibility\0rFieldsVisibility\0"
    "assignMtrx\0double**\0matr\0assignInvMtrx\0"
    "t_inv_matr\0on_closeButton_clicked\0"
    "on_detButton_clicked\0on_inverseMtrxButton_clicked\0"
    "on_pushButton_clicked\0on_rndFillButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    1,  109,    2, 0x08 /* Private */,
      15,    1,  112,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFields(); break;
        case 1: _t->setRFields(); break;
        case 2: _t->clearFields(); break;
        case 3: _t->clearRFields(); break;
        case 4: _t->clearErrorLabel(); break;
        case 5: _t->clearTimeField(); break;
        case 6: _t->hideFields(); break;
        case 7: _t->hideRFields(); break;
        case 8: _t->fieldsVisibility(); break;
        case 9: _t->rFieldsVisibility(); break;
        case 10: _t->assignMtrx((*reinterpret_cast< double**(*)>(_a[1]))); break;
        case 11: _t->assignInvMtrx((*reinterpret_cast< double**(*)>(_a[1]))); break;
        case 12: _t->on_closeButton_clicked(); break;
        case 13: _t->on_detButton_clicked(); break;
        case 14: _t->on_inverseMtrxButton_clicked(); break;
        case 16: _t->on_rndFillButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
