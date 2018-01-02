/****************************************************************************
** Meta object code from reading C++ file 'portugolfile.h'
**
** Created: Sat Jun 6 01:24:54 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portugolfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portugolfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortugolFile[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortugolFile[] = {
    "PortugolFile\0\0documentWasModified()\0"
};

const QMetaObject PortugolFile::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_PortugolFile,
      qt_meta_data_PortugolFile, 0 }
};

const QMetaObject *PortugolFile::metaObject() const
{
    return &staticMetaObject;
}

void *PortugolFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortugolFile))
        return static_cast<void*>(const_cast< PortugolFile*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int PortugolFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: documentWasModified(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
