/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../untitled/mainwindow.h"
#include <QtGui/qtextcursor.h>
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
struct qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQuizWidgetENDCLASS = QtMocHelpers::stringData(
    "QuizWidget",
    "startQuiz",
    "",
    "showQuestion",
    "Node*",
    "node",
    "processAnswer",
    "nextQuestion",
    "prevQuestion",
    "finishQuiz",
    "clearSelection",
    "updateStatus",
    "loadQuestionsFromFile",
    "fileName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[13];
    char stringdata8[13];
    char stringdata9[11];
    char stringdata10[15];
    char stringdata11[13];
    char stringdata12[22];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t qt_meta_stringdata_CLASSQuizWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QuizWidget"
        QT_MOC_LITERAL(11, 9),  // "startQuiz"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "showQuestion"
        QT_MOC_LITERAL(35, 5),  // "Node*"
        QT_MOC_LITERAL(41, 4),  // "node"
        QT_MOC_LITERAL(46, 13),  // "processAnswer"
        QT_MOC_LITERAL(60, 12),  // "nextQuestion"
        QT_MOC_LITERAL(73, 12),  // "prevQuestion"
        QT_MOC_LITERAL(86, 10),  // "finishQuiz"
        QT_MOC_LITERAL(97, 14),  // "clearSelection"
        QT_MOC_LITERAL(112, 12),  // "updateStatus"
        QT_MOC_LITERAL(125, 21),  // "loadQuestionsFromFile"
        QT_MOC_LITERAL(147, 8)   // "fileName"
    },
    "QuizWidget",
    "startQuiz",
    "",
    "showQuestion",
    "Node*",
    "node",
    "processAnswer",
    "nextQuestion",
    "prevQuestion",
    "finishQuiz",
    "clearSelection",
    "updateStatus",
    "loadQuestionsFromFile",
    "fileName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuizWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    0,   75,    2, 0x08,    7 /* Private */,
      10,    0,   76,    2, 0x08,    8 /* Private */,
      11,    0,   77,    2, 0x08,    9 /* Private */,
      12,    1,   78,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject QuizWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuizWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuizWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QuizWidget, std::true_type>,
        // method 'startQuiz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Node *, std::false_type>,
        // method 'processAnswer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prevQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finishQuiz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadQuestionsFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QuizWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuizWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startQuiz(); break;
        case 1: _t->showQuestion((*reinterpret_cast< std::add_pointer_t<Node*>>(_a[1]))); break;
        case 2: _t->processAnswer(); break;
        case 3: _t->nextQuestion(); break;
        case 4: _t->prevQuestion(); break;
        case 5: _t->finishQuiz(); break;
        case 6: _t->clearSelection(); break;
        case 7: _t->updateStatus(); break;
        case 8: _t->loadQuestionsFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QuizWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuizWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuizWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QuizWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_pushButton_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 23)   // "on_pushButton_2_clicked"
    },
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
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
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
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
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
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
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
