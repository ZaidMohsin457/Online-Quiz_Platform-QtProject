/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  font-size: 16px;\n"
"  color: #fff; /* White text color */\n"
"  background-color: #2c3e50; /* Dark gray background color */\n"
"  padding: 10px;\n"
"  border-radius: 5px;\n"
"}\n"
"\n"
"/* Example: Hover effect for QLabel */\n"
"QLabel:hover {\n"
"  background-color: #34495e; /* Slightly darker gray on hover */\n"
"  cursor: pointer;\n"
"}\n"
""));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  font-size: 16px;\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  border-radius: 5px;\n"
"  cursor: pointer;\n"
"  background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(52, 152, 219, 255), stop:1 rgba(41, 128, 185, 255));\n"
"  color: #fff;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(41, 128, 185, 255), stop:1 rgba(31, 97, 141, 255));\n"
"  border: 1px solid #1F618D; /* Add a border on hover */\n"
"  padding: 9px 19px; /* Adjust padding on hover */\n"
"}\n"
"QPushButton[size=\"large\"] {\n"
"  padding: 15px 30px;\n"
"  font-size: 20px;\n"
"}\n"
"\n"
"\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  border-radius: 5px;\n"
"  cursor: pointer;\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  font-size: 16px;\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  border-radius: 5px;\n"
"  cursor: pointer;\n"
"  background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(52, 152, 219, 255), stop:1 rgba(41, 128, 185, 255));\n"
"  color: #fff;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(41, 128, 185, 255), stop:1 rgba(31, 97, 141, 255));\n"
"  border: 1px solid #1F618D; /* Add a border on hover */\n"
"  padding: 9px 19px; /* Adjust padding on hover */\n"
"}\n"
"QPushButton[size=\"large\"] {\n"
"  padding: 15px 30px;\n"
"  font-size: 20px;\n"
"}\n"
"\n"
"/* Common styles for all button sizes */\n"
"QPushButton {\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  border-radius: 5px;\n"
"  cursor: pointer;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\"                                                                   User & Admin Hub: Choose Your Mode\"?", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login As  Student", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Login As Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
