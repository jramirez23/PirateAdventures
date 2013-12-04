/****************************************************************************
** Meta object code from reading C++ file 'attackframe.h'
**
** Created: Tue Dec 3 21:06:40 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PirateAdventure/attackframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attackframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_attackframe[] = {

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
      16,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_attackframe[] = {
    "attackframe\0\0ke\0keyReleaseEvent(QKeyEvent*)\0"
};

void attackframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        attackframe *_t = static_cast<attackframe *>(_o);
        switch (_id) {
        case 0: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData attackframe::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject attackframe::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_attackframe,
      qt_meta_data_attackframe, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &attackframe::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *attackframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *attackframe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_attackframe))
        return static_cast<void*>(const_cast< attackframe*>(this));
    return QDialog::qt_metacast(_clname);
}

int attackframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
