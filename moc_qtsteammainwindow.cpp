/****************************************************************************
** Meta object code from reading C++ file 'qtsteammainwindow.h'
**
** Created: Sat Mar 2 14:27:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtsteammainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsteammainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtSteamMainWindow[] = {

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
      27,   19,   18,   18, 0x0a,
      49,   18,   18,   18, 0x0a,
      62,   18,   18,   18, 0x08,
     126,   74,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtSteamMainWindow[] = {
    "QtSteamMainWindow\0\0row,col\0"
    "updateStatus(int,int)\0resolveRow()\0"
    "insertRow()\0"
    "currentRow,currentColumn,previousRow,previousColumn\0"
    "on_principalSheet_currentCellChanged(int,int,int,int)\0"
};

void QtSteamMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtSteamMainWindow *_t = static_cast<QtSteamMainWindow *>(_o);
        switch (_id) {
        case 0: _t->updateStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->resolveRow(); break;
        case 2: _t->insertRow(); break;
        case 3: _t->on_principalSheet_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtSteamMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtSteamMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtSteamMainWindow,
      qt_meta_data_QtSteamMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtSteamMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtSteamMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtSteamMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtSteamMainWindow))
        return static_cast<void*>(const_cast< QtSteamMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtSteamMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
