/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RentalsGUI/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_loginButton_clicked",
    "",
    "on_addUser_clicked",
    "on_addUserButton_clicked",
    "on_updateButton_clicked",
    "on_updateUser_clicked",
    "on_userIDBox_valueChanged",
    "userID",
    "on_deleteUser_clicked",
    "on_deleteButton_clicked",
    "showNextUser",
    "getNextUserID",
    "showNextTitle",
    "getNextTitleID",
    "on_addTitle_clicked",
    "on_addTitleButton_clicked",
    "on_updateTitle_clicked",
    "on_updateTitleButton_clicked",
    "on_titleIDBox_valueChanged",
    "titleID",
    "on_deleteTitleButton_clicked",
    "on_backButton_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_addCustomer_clicked",
    "on_updateCustomer_clicked",
    "on_addCustomerButton_clicked",
    "on_customerUpdateButton_clicked",
    "on_customerDeleteButton_clicked",
    "on_customerIDBox_valueChanged",
    "on_deleteTitle_clicked",
    "on_deleteCustomer_clicked",
    "on_addCustomerClerk_clicked",
    "on_updateCustomerClerk_clicked",
    "on_viewTitles_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[25];
    char stringdata5[24];
    char stringdata6[22];
    char stringdata7[26];
    char stringdata8[7];
    char stringdata9[22];
    char stringdata10[24];
    char stringdata11[13];
    char stringdata12[14];
    char stringdata13[14];
    char stringdata14[15];
    char stringdata15[20];
    char stringdata16[26];
    char stringdata17[23];
    char stringdata18[29];
    char stringdata19[27];
    char stringdata20[8];
    char stringdata21[29];
    char stringdata22[22];
    char stringdata23[32];
    char stringdata24[5];
    char stringdata25[23];
    char stringdata26[26];
    char stringdata27[29];
    char stringdata28[32];
    char stringdata29[32];
    char stringdata30[30];
    char stringdata31[23];
    char stringdata32[26];
    char stringdata33[28];
    char stringdata34[31];
    char stringdata35[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_loginButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 18),  // "on_addUser_clicked"
        QT_MOC_LITERAL(54, 24),  // "on_addUserButton_clicked"
        QT_MOC_LITERAL(79, 23),  // "on_updateButton_clicked"
        QT_MOC_LITERAL(103, 21),  // "on_updateUser_clicked"
        QT_MOC_LITERAL(125, 25),  // "on_userIDBox_valueChanged"
        QT_MOC_LITERAL(151, 6),  // "userID"
        QT_MOC_LITERAL(158, 21),  // "on_deleteUser_clicked"
        QT_MOC_LITERAL(180, 23),  // "on_deleteButton_clicked"
        QT_MOC_LITERAL(204, 12),  // "showNextUser"
        QT_MOC_LITERAL(217, 13),  // "getNextUserID"
        QT_MOC_LITERAL(231, 13),  // "showNextTitle"
        QT_MOC_LITERAL(245, 14),  // "getNextTitleID"
        QT_MOC_LITERAL(260, 19),  // "on_addTitle_clicked"
        QT_MOC_LITERAL(280, 25),  // "on_addTitleButton_clicked"
        QT_MOC_LITERAL(306, 22),  // "on_updateTitle_clicked"
        QT_MOC_LITERAL(329, 28),  // "on_updateTitleButton_clicked"
        QT_MOC_LITERAL(358, 26),  // "on_titleIDBox_valueChanged"
        QT_MOC_LITERAL(385, 7),  // "titleID"
        QT_MOC_LITERAL(393, 28),  // "on_deleteTitleButton_clicked"
        QT_MOC_LITERAL(422, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(444, 31),  // "on_stackedWidget_currentChanged"
        QT_MOC_LITERAL(476, 4),  // "arg1"
        QT_MOC_LITERAL(481, 22),  // "on_addCustomer_clicked"
        QT_MOC_LITERAL(504, 25),  // "on_updateCustomer_clicked"
        QT_MOC_LITERAL(530, 28),  // "on_addCustomerButton_clicked"
        QT_MOC_LITERAL(559, 31),  // "on_customerUpdateButton_clicked"
        QT_MOC_LITERAL(591, 31),  // "on_customerDeleteButton_clicked"
        QT_MOC_LITERAL(623, 29),  // "on_customerIDBox_valueChanged"
        QT_MOC_LITERAL(653, 22),  // "on_deleteTitle_clicked"
        QT_MOC_LITERAL(676, 25),  // "on_deleteCustomer_clicked"
        QT_MOC_LITERAL(702, 27),  // "on_addCustomerClerk_clicked"
        QT_MOC_LITERAL(730, 30),  // "on_updateCustomerClerk_clicked"
        QT_MOC_LITERAL(761, 21)   // "on_viewTitles_clicked"
    },
    "MainWindow",
    "on_loginButton_clicked",
    "",
    "on_addUser_clicked",
    "on_addUserButton_clicked",
    "on_updateButton_clicked",
    "on_updateUser_clicked",
    "on_userIDBox_valueChanged",
    "userID",
    "on_deleteUser_clicked",
    "on_deleteButton_clicked",
    "showNextUser",
    "getNextUserID",
    "showNextTitle",
    "getNextTitleID",
    "on_addTitle_clicked",
    "on_addTitleButton_clicked",
    "on_updateTitle_clicked",
    "on_updateTitleButton_clicked",
    "on_titleIDBox_valueChanged",
    "titleID",
    "on_deleteTitleButton_clicked",
    "on_backButton_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_addCustomer_clicked",
    "on_updateCustomer_clicked",
    "on_addCustomerButton_clicked",
    "on_customerUpdateButton_clicked",
    "on_customerDeleteButton_clicked",
    "on_customerIDBox_valueChanged",
    "on_deleteTitle_clicked",
    "on_deleteCustomer_clicked",
    "on_addCustomerClerk_clicked",
    "on_updateCustomerClerk_clicked",
    "on_viewTitles_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x08,    1 /* Private */,
       3,    0,  201,    2, 0x08,    2 /* Private */,
       4,    0,  202,    2, 0x08,    3 /* Private */,
       5,    0,  203,    2, 0x08,    4 /* Private */,
       6,    0,  204,    2, 0x08,    5 /* Private */,
       7,    1,  205,    2, 0x08,    6 /* Private */,
       9,    0,  208,    2, 0x08,    8 /* Private */,
      10,    0,  209,    2, 0x08,    9 /* Private */,
      11,    0,  210,    2, 0x08,   10 /* Private */,
      12,    0,  211,    2, 0x08,   11 /* Private */,
      13,    0,  212,    2, 0x08,   12 /* Private */,
      14,    0,  213,    2, 0x08,   13 /* Private */,
      15,    0,  214,    2, 0x08,   14 /* Private */,
      16,    0,  215,    2, 0x08,   15 /* Private */,
      17,    0,  216,    2, 0x08,   16 /* Private */,
      18,    0,  217,    2, 0x08,   17 /* Private */,
      19,    1,  218,    2, 0x08,   18 /* Private */,
      21,    0,  221,    2, 0x08,   20 /* Private */,
      22,    0,  222,    2, 0x08,   21 /* Private */,
      23,    1,  223,    2, 0x08,   22 /* Private */,
      25,    0,  226,    2, 0x08,   24 /* Private */,
      26,    0,  227,    2, 0x08,   25 /* Private */,
      27,    0,  228,    2, 0x08,   26 /* Private */,
      28,    0,  229,    2, 0x08,   27 /* Private */,
      29,    0,  230,    2, 0x08,   28 /* Private */,
      30,    1,  231,    2, 0x08,   29 /* Private */,
      31,    0,  234,    2, 0x08,   31 /* Private */,
      32,    0,  235,    2, 0x08,   32 /* Private */,
      33,    0,  236,    2, 0x08,   33 /* Private */,
      34,    0,  237,    2, 0x08,   34 /* Private */,
      35,    0,  238,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_loginButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addUserButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_userIDBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_deleteUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNextUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getNextUserID'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showNextTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getNextTitleID'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_addTitle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addTitleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateTitle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateTitleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_titleIDBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_deleteTitleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stackedWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_addCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addCustomerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_customerUpdateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_customerDeleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_customerIDBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_deleteTitle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteCustomer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addCustomerClerk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateCustomerClerk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_viewTitles_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_addUser_clicked(); break;
        case 2: _t->on_addUserButton_clicked(); break;
        case 3: _t->on_updateButton_clicked(); break;
        case 4: _t->on_updateUser_clicked(); break;
        case 5: _t->on_userIDBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_deleteUser_clicked(); break;
        case 7: _t->on_deleteButton_clicked(); break;
        case 8: _t->showNextUser(); break;
        case 9: { int _r = _t->getNextUserID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->showNextTitle(); break;
        case 11: { int _r = _t->getNextTitleID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->on_addTitle_clicked(); break;
        case 13: _t->on_addTitleButton_clicked(); break;
        case 14: _t->on_updateTitle_clicked(); break;
        case 15: _t->on_updateTitleButton_clicked(); break;
        case 16: _t->on_titleIDBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_deleteTitleButton_clicked(); break;
        case 18: _t->on_backButton_clicked(); break;
        case 19: _t->on_stackedWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_addCustomer_clicked(); break;
        case 21: _t->on_updateCustomer_clicked(); break;
        case 22: _t->on_addCustomerButton_clicked(); break;
        case 23: _t->on_customerUpdateButton_clicked(); break;
        case 24: _t->on_customerDeleteButton_clicked(); break;
        case 25: _t->on_customerIDBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_deleteTitle_clicked(); break;
        case 27: _t->on_deleteCustomer_clicked(); break;
        case 28: _t->on_addCustomerClerk_clicked(); break;
        case 29: _t->on_updateCustomerClerk_clicked(); break;
        case 30: _t->on_viewTitles_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
