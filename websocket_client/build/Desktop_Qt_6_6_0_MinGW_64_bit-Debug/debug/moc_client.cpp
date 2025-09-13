/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientENDCLASS = QtMocHelpers::stringData(
    "Client",
    "on_close_btn_clicked",
    "",
    "on_search_btn_clicked",
    "on_clear_btn_clicked",
    "on_send_btn_clicked",
    "on_exit_btn_clicked",
    "on_conn_btn_clicked",
    "getLocalIp",
    "onConnected",
    "onDisconnected",
    "onTextMessageReceived",
    "msg",
    "onError",
    "QAbstractSocket::SocketError",
    "error",
    "getConnectionQuality",
    "getConnectionDuration",
    "getSocketStateString",
    "QAbstractSocket::SocketState",
    "state",
    "onBinaryMessageReceived",
    "message",
    "on_download_file_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[7];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[21];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[20];
    char stringdata8[11];
    char stringdata9[12];
    char stringdata10[15];
    char stringdata11[22];
    char stringdata12[4];
    char stringdata13[8];
    char stringdata14[29];
    char stringdata15[6];
    char stringdata16[21];
    char stringdata17[22];
    char stringdata18[21];
    char stringdata19[29];
    char stringdata20[6];
    char stringdata21[24];
    char stringdata22[8];
    char stringdata23[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientENDCLASS_t qt_meta_stringdata_CLASSClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 20),  // "on_close_btn_clicked"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 21),  // "on_search_btn_clicked"
        QT_MOC_LITERAL(51, 20),  // "on_clear_btn_clicked"
        QT_MOC_LITERAL(72, 19),  // "on_send_btn_clicked"
        QT_MOC_LITERAL(92, 19),  // "on_exit_btn_clicked"
        QT_MOC_LITERAL(112, 19),  // "on_conn_btn_clicked"
        QT_MOC_LITERAL(132, 10),  // "getLocalIp"
        QT_MOC_LITERAL(143, 11),  // "onConnected"
        QT_MOC_LITERAL(155, 14),  // "onDisconnected"
        QT_MOC_LITERAL(170, 21),  // "onTextMessageReceived"
        QT_MOC_LITERAL(192, 3),  // "msg"
        QT_MOC_LITERAL(196, 7),  // "onError"
        QT_MOC_LITERAL(204, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(233, 5),  // "error"
        QT_MOC_LITERAL(239, 20),  // "getConnectionQuality"
        QT_MOC_LITERAL(260, 21),  // "getConnectionDuration"
        QT_MOC_LITERAL(282, 20),  // "getSocketStateString"
        QT_MOC_LITERAL(303, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(332, 5),  // "state"
        QT_MOC_LITERAL(338, 23),  // "onBinaryMessageReceived"
        QT_MOC_LITERAL(362, 7),  // "message"
        QT_MOC_LITERAL(370, 24)   // "on_download_file_clicked"
    },
    "Client",
    "on_close_btn_clicked",
    "",
    "on_search_btn_clicked",
    "on_clear_btn_clicked",
    "on_send_btn_clicked",
    "on_exit_btn_clicked",
    "on_conn_btn_clicked",
    "getLocalIp",
    "onConnected",
    "onDisconnected",
    "onTextMessageReceived",
    "msg",
    "onError",
    "QAbstractSocket::SocketError",
    "error",
    "getConnectionQuality",
    "getConnectionDuration",
    "getSocketStateString",
    "QAbstractSocket::SocketState",
    "state",
    "onBinaryMessageReceived",
    "message",
    "on_download_file_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    1,  119,    2, 0x08,   10 /* Private */,
      13,    1,  122,    2, 0x08,   12 /* Private */,
      16,    0,  125,    2, 0x08,   14 /* Private */,
      17,    0,  126,    2, 0x08,   15 /* Private */,
      18,    1,  127,    2, 0x08,   16 /* Private */,
      21,    1,  130,    2, 0x08,   18 /* Private */,
      23,    0,  133,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QByteArray,   22,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'on_close_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_search_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_conn_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getLocalIp'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTextMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'getConnectionQuality'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getConnectionDuration'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getSocketStateString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'onBinaryMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'on_download_file_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_close_btn_clicked(); break;
        case 1: _t->on_search_btn_clicked(); break;
        case 2: _t->on_clear_btn_clicked(); break;
        case 3: _t->on_send_btn_clicked(); break;
        case 4: _t->on_exit_btn_clicked(); break;
        case 5: _t->on_conn_btn_clicked(); break;
        case 6: { QString _r = _t->getLocalIp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->onConnected(); break;
        case 8: _t->onDisconnected(); break;
        case 9: _t->onTextMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->onError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 11: { QString _r = _t->getConnectionQuality();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->getConnectionDuration();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getSocketStateString((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->onBinaryMessageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 15: _t->on_download_file_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
