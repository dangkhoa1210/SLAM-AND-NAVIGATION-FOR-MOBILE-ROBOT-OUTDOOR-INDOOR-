/****************************************************************************
** Meta object code from reading C++ file 'overlay_gps_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gps_rviz_plugin/include/overlay_gps_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlay_gps_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay_t {
    QByteArrayData data[5];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay_t qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay = {
    {
QT_MOC_LITERAL(0, 0, 34), // "gps_rviz_plugin::OverlayGpsDi..."
QT_MOC_LITERAL(1, 35, 25), // "updateGooleMapAPIProperty"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 21), // "updateDisplayProperty"
QT_MOC_LITERAL(4, 84, 19) // "updateHistoryLength"

    },
    "gps_rviz_plugin::OverlayGpsDisplay\0"
    "updateGooleMapAPIProperty\0\0"
    "updateDisplayProperty\0updateHistoryLength"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gps_rviz_plugin__OverlayGpsDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gps_rviz_plugin::OverlayGpsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverlayGpsDisplay *_t = static_cast<OverlayGpsDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGooleMapAPIProperty(); break;
        case 1: _t->updateDisplayProperty(); break;
        case 2: _t->updateHistoryLength(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gps_rviz_plugin::OverlayGpsDisplay::staticMetaObject = {
    { &rviz::MessageFilterDisplay<sensor_msgs::NavSatFix>::staticMetaObject, qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay.data,
      qt_meta_data_gps_rviz_plugin__OverlayGpsDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gps_rviz_plugin::OverlayGpsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gps_rviz_plugin::OverlayGpsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gps_rviz_plugin__OverlayGpsDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz::MessageFilterDisplay<sensor_msgs::NavSatFix>::qt_metacast(_clname);
}

int gps_rviz_plugin::OverlayGpsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::MessageFilterDisplay<sensor_msgs::NavSatFix>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
