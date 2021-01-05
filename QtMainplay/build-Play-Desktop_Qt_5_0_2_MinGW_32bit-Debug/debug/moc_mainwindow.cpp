/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Play/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata[473];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 15),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 8),
QT_MOC_LITERAL(4, 37, 4),
QT_MOC_LITERAL(5, 42, 16),
QT_MOC_LITERAL(6, 59, 19),
QT_MOC_LITERAL(7, 79, 5),
QT_MOC_LITERAL(8, 85, 15),
QT_MOC_LITERAL(9, 101, 8),
QT_MOC_LITERAL(10, 110, 11),
QT_MOC_LITERAL(11, 122, 7),
QT_MOC_LITERAL(12, 130, 21),
QT_MOC_LITERAL(13, 152, 31),
QT_MOC_LITERAL(14, 184, 23),
QT_MOC_LITERAL(15, 208, 30),
QT_MOC_LITERAL(16, 239, 5),
QT_MOC_LITERAL(17, 245, 23),
QT_MOC_LITERAL(18, 269, 23),
QT_MOC_LITERAL(19, 293, 23),
QT_MOC_LITERAL(20, 317, 23),
QT_MOC_LITERAL(21, 341, 27),
QT_MOC_LITERAL(22, 369, 5),
QT_MOC_LITERAL(23, 375, 23),
QT_MOC_LITERAL(24, 399, 23),
QT_MOC_LITERAL(25, 423, 23),
QT_MOC_LITERAL(26, 447, 24)
    },
    "MainWindow\0durationChanged\0\0duration\0"
    "play\0mediaStateChange\0QMediaPlayer::State\0"
    "state\0positionChanged\0position\0"
    "setPosition\0postion\0on_toolButton_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "on_toolButton_2_clicked\0"
    "on_verticalSlider_valueChanged\0value\0"
    "on_toolButton_3_clicked\0on_toolButton_4_clicked\0"
    "on_toolButton_5_clicked\0on_toolButton_6_clicked\0"
    "on_listWidget_doubleClicked\0index\0"
    "on_toolButton_7_clicked\0on_toolButton_8_clicked\0"
    "on_toolButton_9_clicked\0"
    "on_toolButton_10_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x08,
       4,    0,  107,    2, 0x08,
       5,    1,  108,    2, 0x08,
       8,    1,  111,    2, 0x08,
      10,    1,  114,    2, 0x08,
      12,    0,  117,    2, 0x08,
      13,    1,  118,    2, 0x08,
      14,    0,  121,    2, 0x08,
      15,    1,  122,    2, 0x08,
      17,    0,  125,    2, 0x08,
      18,    0,  126,    2, 0x08,
      19,    0,  127,    2, 0x08,
      20,    0,  128,    2, 0x08,
      21,    1,  129,    2, 0x08,
      23,    0,  132,    2, 0x08,
      24,    0,  133,    2, 0x08,
      25,    0,  134,    2, 0x08,
      26,    0,  135,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->play(); break;
        case 2: _t->mediaStateChange((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_toolButton_clicked(); break;
        case 6: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_toolButton_2_clicked(); break;
        case 8: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_toolButton_3_clicked(); break;
        case 10: _t->on_toolButton_4_clicked(); break;
        case 11: _t->on_toolButton_5_clicked(); break;
        case 12: _t->on_toolButton_6_clicked(); break;
        case 13: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->on_toolButton_7_clicked(); break;
        case 15: _t->on_toolButton_8_clicked(); break;
        case 16: _t->on_toolButton_9_clicked(); break;
        case 17: _t->on_toolButton_10_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
