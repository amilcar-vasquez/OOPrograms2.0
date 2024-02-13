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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginScreen;
    QPushButton *loginButton;
    QLabel *userLabel;
    QLabel *passwordLabel;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QWidget *managerScreen;
    QLabel *label_2;
    QPushButton *addUser;
    QPushButton *updateUser;
    QPushButton *deleteUser;
    QWidget *clerkScreen;
    QLabel *label_3;
    QWidget *addUserForm;
    QLabel *roleLabel;
    QLabel *usernameLabel;
    QLabel *passwordLabel_2;
    QLabel *fnameLabel;
    QLabel *lnameLabel;
    QComboBox *roleSelector;
    QLineEdit *enterUserBox;
    QLineEdit *enterPasswordBox;
    QLineEdit *enterFnameBox;
    QLineEdit *enterLnameBox;
    QPushButton *addUserButton;
    QWidget *updateUserForm;
    QLineEdit *updateFnameBox;
    QLabel *passwordLabel_3;
    QLabel *lnameLabel_2;
    QLineEdit *updateLnameBox;
    QLabel *usernameLabel_2;
    QLabel *roleLabel_2;
    QLineEdit *updatePasswordBox;
    QComboBox *updateRole;
    QLabel *fnameLabel_2;
    QLineEdit *updateUserBox;
    QPushButton *updateButton;
    QSpinBox *userIDBox;
    QPushButton *deleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 781, 491));
        loginScreen = new QWidget();
        loginScreen->setObjectName("loginScreen");
        loginButton = new QPushButton(loginScreen);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(410, 270, 80, 23));
        userLabel = new QLabel(loginScreen);
        userLabel->setObjectName("userLabel");
        userLabel->setGeometry(QRect(290, 210, 81, 16));
        passwordLabel = new QLabel(loginScreen);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(290, 240, 58, 15));
        username = new QLineEdit(loginScreen);
        username->setObjectName("username");
        username->setGeometry(QRect(380, 210, 113, 22));
        password = new QLineEdit(loginScreen);
        password->setObjectName("password");
        password->setGeometry(QRect(380, 240, 113, 22));
        label = new QLabel(loginScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 160, 161, 16));
        stackedWidget->addWidget(loginScreen);
        managerScreen = new QWidget();
        managerScreen->setObjectName("managerScreen");
        label_2 = new QLabel(managerScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 10, 221, 31));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        addUser = new QPushButton(managerScreen);
        addUser->setObjectName("addUser");
        addUser->setGeometry(QRect(60, 100, 101, 81));
        updateUser = new QPushButton(managerScreen);
        updateUser->setObjectName("updateUser");
        updateUser->setGeometry(QRect(280, 100, 111, 81));
        deleteUser = new QPushButton(managerScreen);
        deleteUser->setObjectName("deleteUser");
        deleteUser->setGeometry(QRect(480, 100, 121, 81));
        stackedWidget->addWidget(managerScreen);
        clerkScreen = new QWidget();
        clerkScreen->setObjectName("clerkScreen");
        label_3 = new QLabel(clerkScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 40, 121, 20));
        stackedWidget->addWidget(clerkScreen);
        addUserForm = new QWidget();
        addUserForm->setObjectName("addUserForm");
        roleLabel = new QLabel(addUserForm);
        roleLabel->setObjectName("roleLabel");
        roleLabel->setGeometry(QRect(40, 30, 58, 15));
        usernameLabel = new QLabel(addUserForm);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(40, 70, 71, 16));
        passwordLabel_2 = new QLabel(addUserForm);
        passwordLabel_2->setObjectName("passwordLabel_2");
        passwordLabel_2->setGeometry(QRect(40, 100, 71, 16));
        fnameLabel = new QLabel(addUserForm);
        fnameLabel->setObjectName("fnameLabel");
        fnameLabel->setGeometry(QRect(40, 140, 81, 16));
        lnameLabel = new QLabel(addUserForm);
        lnameLabel->setObjectName("lnameLabel");
        lnameLabel->setGeometry(QRect(40, 170, 81, 16));
        roleSelector = new QComboBox(addUserForm);
        roleSelector->addItem(QString());
        roleSelector->addItem(QString());
        roleSelector->addItem(QString());
        roleSelector->setObjectName("roleSelector");
        roleSelector->setGeometry(QRect(90, 30, 79, 23));
        enterUserBox = new QLineEdit(addUserForm);
        enterUserBox->setObjectName("enterUserBox");
        enterUserBox->setGeometry(QRect(130, 70, 113, 22));
        enterPasswordBox = new QLineEdit(addUserForm);
        enterPasswordBox->setObjectName("enterPasswordBox");
        enterPasswordBox->setGeometry(QRect(130, 100, 113, 22));
        enterFnameBox = new QLineEdit(addUserForm);
        enterFnameBox->setObjectName("enterFnameBox");
        enterFnameBox->setGeometry(QRect(130, 140, 113, 22));
        enterLnameBox = new QLineEdit(addUserForm);
        enterLnameBox->setObjectName("enterLnameBox");
        enterLnameBox->setGeometry(QRect(130, 170, 113, 22));
        addUserButton = new QPushButton(addUserForm);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(130, 220, 121, 23));
        stackedWidget->addWidget(addUserForm);
        updateUserForm = new QWidget();
        updateUserForm->setObjectName("updateUserForm");
        updateFnameBox = new QLineEdit(updateUserForm);
        updateFnameBox->setObjectName("updateFnameBox");
        updateFnameBox->setGeometry(QRect(110, 130, 113, 22));
        passwordLabel_3 = new QLabel(updateUserForm);
        passwordLabel_3->setObjectName("passwordLabel_3");
        passwordLabel_3->setGeometry(QRect(20, 90, 71, 16));
        lnameLabel_2 = new QLabel(updateUserForm);
        lnameLabel_2->setObjectName("lnameLabel_2");
        lnameLabel_2->setGeometry(QRect(20, 160, 81, 16));
        updateLnameBox = new QLineEdit(updateUserForm);
        updateLnameBox->setObjectName("updateLnameBox");
        updateLnameBox->setGeometry(QRect(110, 160, 113, 22));
        usernameLabel_2 = new QLabel(updateUserForm);
        usernameLabel_2->setObjectName("usernameLabel_2");
        usernameLabel_2->setGeometry(QRect(20, 60, 71, 16));
        roleLabel_2 = new QLabel(updateUserForm);
        roleLabel_2->setObjectName("roleLabel_2");
        roleLabel_2->setGeometry(QRect(20, 20, 58, 15));
        updatePasswordBox = new QLineEdit(updateUserForm);
        updatePasswordBox->setObjectName("updatePasswordBox");
        updatePasswordBox->setGeometry(QRect(110, 90, 113, 22));
        updateRole = new QComboBox(updateUserForm);
        updateRole->addItem(QString());
        updateRole->addItem(QString());
        updateRole->addItem(QString());
        updateRole->setObjectName("updateRole");
        updateRole->setGeometry(QRect(70, 20, 79, 23));
        fnameLabel_2 = new QLabel(updateUserForm);
        fnameLabel_2->setObjectName("fnameLabel_2");
        fnameLabel_2->setGeometry(QRect(20, 130, 81, 16));
        updateUserBox = new QLineEdit(updateUserForm);
        updateUserBox->setObjectName("updateUserBox");
        updateUserBox->setGeometry(QRect(110, 60, 113, 22));
        updateButton = new QPushButton(updateUserForm);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(240, 220, 80, 23));
        userIDBox = new QSpinBox(updateUserForm);
        userIDBox->setObjectName("userIDBox");
        userIDBox->setGeometry(QRect(480, 30, 42, 23));
        deleteButton = new QPushButton(updateUserForm);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(360, 220, 80, 23));
        stackedWidget->addWidget(updateUserForm);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        userLabel->setText(QCoreApplication::translate("MainWindow", "username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome! Please Login:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Manager's Menu", nullptr));
        addUser->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        updateUser->setText(QCoreApplication::translate("MainWindow", "Update User", nullptr));
        deleteUser->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Clerk's Menu", nullptr));
        roleLabel->setText(QCoreApplication::translate("MainWindow", "Role:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        fnameLabel->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        lnameLabel->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
        roleSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Set Role", nullptr));
        roleSelector->setItemText(1, QCoreApplication::translate("MainWindow", "Clerk", nullptr));
        roleSelector->setItemText(2, QCoreApplication::translate("MainWindow", "Manager", nullptr));

        addUserButton->setText(QCoreApplication::translate("MainWindow", "Add New User", nullptr));
        passwordLabel_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        lnameLabel_2->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
        usernameLabel_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        roleLabel_2->setText(QCoreApplication::translate("MainWindow", "Role:", nullptr));
        updateRole->setItemText(0, QCoreApplication::translate("MainWindow", "Set Role", nullptr));
        updateRole->setItemText(1, QCoreApplication::translate("MainWindow", "Clerk", nullptr));
        updateRole->setItemText(2, QCoreApplication::translate("MainWindow", "Manager", nullptr));

        fnameLabel_2->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update User", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
