/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../server.h"
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
#error "The header file 'server.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSServerENDCLASS = QtMocHelpers::stringData(
    "Server",
    "on_listen_btn_clicked",
    "",
    "on_close_btn_clicked",
    "on_search_btn_clicked",
    "on_clear_btn_clicked",
    "on_send_btn_clicked",
    "on_exit_btn_clicked",
    "onClientDisconnected",
    "onNewConnection",
    "getLocalIp",
    "onBinaryMessageReceived",
    "message",
    "on_send_file_clicked",
    "getSocketStateString",
    "QAbstractSocket::SocketState",
    "state"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSServerENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[22];
    char stringdata5[21];
    char stringdata6[20];
    char stringdata7[20];
    char stringdata8[21];
    char stringdata9[16];
    char stringdata10[11];
    char stringdata11[24];
    char stringdata12[8];
    char stringdata13[21];
    char stringdata14[21];
    char stringdata15[29];
    char stringdata16[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSServerENDCLASS_t qt_meta_stringdata_CLASSServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Server"
        QT_MOC_LITERAL(7, 21),  // "on_listen_btn_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 20),  // "on_close_btn_clicked"
        QT_MOC_LITERAL(51, 21),  // "on_search_btn_clicked"
        QT_MOC_LITERAL(73, 20),  // "on_clear_btn_clicked"
        QT_MOC_LITERAL(94, 19),  // "on_send_btn_clicked"
        QT_MOC_LITERAL(114, 19),  // "on_exit_btn_clicked"
        QT_MOC_LITERAL(134, 20),  // "onClientDisconnected"
        QT_MOC_LITERAL(155, 15),  // "onNewConnection"
        QT_MOC_LITERAL(171, 10),  // "getLocalIp"
        QT_MOC_LITERAL(182, 23),  // "onBinaryMessageReceived"
        QT_MOC_LITERAL(206, 7),  // "message"
        QT_MOC_LITERAL(214, 20),  // "on_send_file_clicked"
        QT_MOC_LITERAL(235, 20),  // "getSocketStateString"
        QT_MOC_LITERAL(256, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(285, 5)   // "state"
    },
    "Server",
    "on_listen_btn_clicked",
    "",
    "on_close_btn_clicked",
    "on_search_btn_clicked",
    "on_clear_btn_clicked",
    "on_send_btn_clicked",
    "on_exit_btn_clicked",
    "onClientDisconnected",
    "onNewConnection",
    "getLocalIp",
    "onBinaryMessageReceived",
    "message",
    "on_send_file_clicked",
    "getSocketStateString",
    "QAbstractSocket::SocketState",
    "state"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    1,   95,    2, 0x08,   10 /* Private */,
      13,    0,   98,    2, 0x08,   12 /* Private */,
      14,    1,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Server, std::true_type>,
        // method 'on_listen_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'onClientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getLocalIp'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onBinaryMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'on_send_file_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getSocketStateString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>
    >,
    nullptr
} };

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Server *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_listen_btn_clicked(); break;
        case 1: _t->on_close_btn_clicked(); break;
        case 2: _t->on_search_btn_clicked(); break;
        case 3: _t->on_clear_btn_clicked(); break;
        case 4: _t->on_send_btn_clicked(); break;
        case 5: _t->on_exit_btn_clicked(); break;
        case 6: _t->onClientDisconnected(); break;
        case 7: _t->onNewConnection(); break;
        case 8: { QString _r = _t->getLocalIp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->onBinaryMessageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->on_send_file_clicked(); break;
        case 11: { QString _r = _t->getSocketStateString((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
