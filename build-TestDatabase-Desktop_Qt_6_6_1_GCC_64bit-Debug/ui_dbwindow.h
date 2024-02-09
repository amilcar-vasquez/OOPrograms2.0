/********************************************************************************
** Form generated from reading UI file 'dbwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBWINDOW_H
#define UI_DBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *roleLabel;
    QComboBox *role;
    QLineEdit *password;
    QLabel *passwordLabel;
    QLineEdit *lastName;
    QPushButton *updateButton;
    QLabel *usernameLabel;
    QLabel *firstNameLabel;
    QPushButton *insertButton;
    QLabel *lastNameLabel;
    QLineEdit *username;
    QPushButton *deleteButton;
    QLineEdit *firstName;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DBWindow)
    {
        if (DBWindow->objectName().isEmpty())
            DBWindow->setObjectName("DBWindow");
        DBWindow->setEnabled(true);
        DBWindow->resize(800, 600);
        QFont font;
        font.setPointSize(11);
        DBWindow->setFont(font);
        centralwidget = new QWidget(DBWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        roleLabel = new QLabel(centralwidget);
        roleLabel->setObjectName("roleLabel");

        gridLayout->addWidget(roleLabel, 0, 0, 1, 1);

        role = new QComboBox(centralwidget);
        role->addItem(QString());
        role->addItem(QString());
        role->setObjectName("role");
        role->setToolTipDuration(6);
        role->setMinimumContentsLength(0);
        role->setProperty("employee", QVariant(0));
        role->setProperty("manager", QVariant(0));

        gridLayout->addWidget(role, 0, 3, 1, 1);

        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);
        password->setDragEnabled(false);

        gridLayout->addWidget(password, 2, 3, 1, 1);

        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 1);

        lastName = new QLineEdit(centralwidget);
        lastName->setObjectName("lastName");

        gridLayout->addWidget(lastName, 4, 3, 1, 1);

        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("updateButton");

        gridLayout->addWidget(updateButton, 5, 0, 1, 1);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName("usernameLabel");

        gridLayout->addWidget(usernameLabel, 1, 0, 1, 1);

        firstNameLabel = new QLabel(centralwidget);
        firstNameLabel->setObjectName("firstNameLabel");

        gridLayout->addWidget(firstNameLabel, 3, 0, 1, 1);

        insertButton = new QPushButton(centralwidget);
        insertButton->setObjectName("insertButton");

        gridLayout->addWidget(insertButton, 5, 1, 1, 1);

        lastNameLabel = new QLabel(centralwidget);
        lastNameLabel->setObjectName("lastNameLabel");

        gridLayout->addWidget(lastNameLabel, 4, 0, 1, 1);

        username = new QLineEdit(centralwidget);
        username->setObjectName("username");

        gridLayout->addWidget(username, 1, 3, 1, 1);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 5, 2, 1, 1);

        firstName = new QLineEdit(centralwidget);
        firstName->setObjectName("firstName");

        gridLayout->addWidget(firstName, 3, 3, 1, 1);

        DBWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DBWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        DBWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DBWindow);
        statusbar->setObjectName("statusbar");
        DBWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(role, username);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, firstName);
        QWidget::setTabOrder(firstName, lastName);
        QWidget::setTabOrder(lastName, updateButton);
        QWidget::setTabOrder(updateButton, insertButton);
        QWidget::setTabOrder(insertButton, deleteButton);

        retranslateUi(DBWindow);

        role->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DBWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DBWindow)
    {
        DBWindow->setWindowTitle(QCoreApplication::translate("DBWindow", "DBWindow", nullptr));
        roleLabel->setText(QCoreApplication::translate("DBWindow", "Role:", nullptr));
        role->setItemText(0, QCoreApplication::translate("DBWindow", "employee", nullptr));
        role->setItemText(1, QCoreApplication::translate("DBWindow", "manager", nullptr));

        passwordLabel->setText(QCoreApplication::translate("DBWindow", "Password:", nullptr));
        updateButton->setText(QCoreApplication::translate("DBWindow", "Update", nullptr));
        usernameLabel->setText(QCoreApplication::translate("DBWindow", "Username:", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("DBWindow", "First Name:", nullptr));
        insertButton->setText(QCoreApplication::translate("DBWindow", "Insert", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("DBWindow", "Last Name:", nullptr));
        deleteButton->setText(QCoreApplication::translate("DBWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBWindow: public Ui_DBWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBWINDOW_H
