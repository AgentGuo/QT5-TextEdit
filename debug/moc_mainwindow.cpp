/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_actFontBold_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "checked"
QT_MOC_LITERAL(4, 45, 26), // "on_actFontItalic_triggered"
QT_MOC_LITERAL(5, 72, 26), // "on_actFontBold_2_triggered"
QT_MOC_LITERAL(6, 99, 25), // "on_actFontUnder_triggered"
QT_MOC_LITERAL(7, 125, 24), // "on_txtEdit_copyAvailable"
QT_MOC_LITERAL(8, 150, 1), // "b"
QT_MOC_LITERAL(9, 152, 27), // "on_txtEdit_selectionChanged"
QT_MOC_LITERAL(10, 180, 28), // "on_spinFontSize_valueChanged"
QT_MOC_LITERAL(11, 209, 9), // "aFontSize"
QT_MOC_LITERAL(12, 219, 32), // "on_comboFont_currentIndexChanged"
QT_MOC_LITERAL(13, 252, 4) // "arg1"

    },
    "MainWindow\0on_actFontBold_triggered\0"
    "\0checked\0on_actFontItalic_triggered\0"
    "on_actFontBold_2_triggered\0"
    "on_actFontUnder_triggered\0"
    "on_txtEdit_copyAvailable\0b\0"
    "on_txtEdit_selectionChanged\0"
    "on_spinFontSize_valueChanged\0aFontSize\0"
    "on_comboFont_currentIndexChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actFontBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actFontItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actFontBold_2_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_actFontUnder_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_txtEdit_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_txtEdit_selectionChanged(); break;
        case 6: _t->on_spinFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboFont_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
