/****************************************************************************
** Meta object code from reading C++ file 'pdb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Absolut/pdb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PDB_t {
    QByteArrayData data[18];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PDB_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PDB_t qt_meta_stringdata_PDB = {
    {
QT_MOC_LITERAL(0, 0, 3), // "PDB"
QT_MOC_LITERAL(1, 4, 6), // "getPDB"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 11), // "viewPDBin3D"
QT_MOC_LITERAL(4, 24, 8), // "getFasta"
QT_MOC_LITERAL(5, 33, 19), // "mergeChainsIntoFile"
QT_MOC_LITERAL(6, 53, 18), // "discretizeIntoFile"
QT_MOC_LITERAL(7, 72, 6), // "string"
QT_MOC_LITERAL(8, 79, 6), // "silent"
QT_MOC_LITERAL(9, 86, 28), // "readDiscretizedFileToLattice"
QT_MOC_LITERAL(10, 115, 6), // "seePDB"
QT_MOC_LITERAL(11, 122, 15), // "seeLatFitOutput"
QT_MOC_LITERAL(12, 138, 18), // "calculateReceptors"
QT_MOC_LITERAL(13, 157, 12), // "iterateBonds"
QT_MOC_LITERAL(14, 170, 9), // "typeDiscr"
QT_MOC_LITERAL(15, 180, 9), // "addHeader"
QT_MOC_LITERAL(16, 190, 15), // "viewDiscretized"
QT_MOC_LITERAL(17, 206, 6) // "append"

    },
    "PDB\0getPDB\0\0viewPDBin3D\0getFasta\0"
    "mergeChainsIntoFile\0discretizeIntoFile\0"
    "string\0silent\0readDiscretizedFileToLattice\0"
    "seePDB\0seeLatFitOutput\0calculateReceptors\0"
    "iterateBonds\0typeDiscr\0addHeader\0"
    "viewDiscretized\0append"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PDB[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    1,   93,    2, 0x0a /* Public */,
       6,    0,   96,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   97,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    2,  101,    2, 0x0a /* Public */,
      13,    1,  106,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  109,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  110,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, QMetaType::Bool,    8,
    0x80000000 | 7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 7, QMetaType::Bool,   14,   15,
    0x80000000 | 7, 0x80000000 | 7,   14,
    0x80000000 | 7,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void PDB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PDB *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getPDB(); break;
        case 1: _t->viewPDBin3D(); break;
        case 2: _t->getFasta(); break;
        case 3: _t->mergeChainsIntoFile(); break;
        case 4: { string _r = _t->discretizeIntoFile((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 5: { string _r = _t->discretizeIntoFile();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->readDiscretizedFileToLattice(); break;
        case 7: _t->seePDB(); break;
        case 8: _t->seeLatFitOutput(); break;
        case 9: _t->calculateReceptors(); break;
        case 10: { string _r = _t->iterateBonds((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 11: { string _r = _t->iterateBonds((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 12: { string _r = _t->iterateBonds();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->viewDiscretized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->viewDiscretized(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PDB::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PDB.data,
    qt_meta_data_PDB,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PDB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PDB.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "discretization"))
        return static_cast< discretization*>(this);
    return QWidget::qt_metacast(_clname);
}

int PDB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
