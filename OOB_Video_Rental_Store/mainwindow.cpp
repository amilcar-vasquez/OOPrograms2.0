#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <user.h>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);

    loadCombobox();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void clearAllLineEdits(QWidget* parent) {
    // Find all QTextEdit widgets that are children of 'parent'
    QList<QLineEdit*> lineEdits = parent->findChildren<QLineEdit*>();

    // Loop through each QLineEdit and clear its text
    for (QLineEdit* lineEdit : lineEdits) {
        lineEdit->clear();
    }
}

void MainWindow::loadCombobox(){

    modifyingComboBox = true;

    // Clear the combo boxes before populating them
    ui->deleteID->clear();
    ui->modifyuserID->clear();

    // Prepare the SQL query to fetch user ID and concatenated name
    QString queryStr = "SELECT user_id, CONCAT(first_name, ' ', last_name) AS name FROM users";
    QSqlQuery qry;
    qry.prepare(queryStr);

    // Execute the query
    if (!qry.exec()) {
        qDebug() << "Failed to execute query: " << qry.lastError().text();
        modifyingComboBox = false; // Reset the flag
        return; // Exit function if query execution fails
    }
      ui->deleteID->addItem("Select an ID","");
      ui->modifyuserID->addItem("Select an ID", "");

    // Iterate over the results and populate the combo boxes
    while (qry.next()) {
        int userId = qry.value(0).toInt();
        QString userName = qry.value(1).toString();

        // Add user name to combo boxes with user ID as associated data

        ui->deleteID->addItem(userName, userId);

        ui->modifyuserID->addItem(userName, userId);
    }

    // Close the query to release resources
    qry.finish();

    modifyingComboBox = false; // Reset the flag
}


void MainWindow::on_loginBTN_clicked()
{
    QStringList userInfo = users.verifyUsers(ui->loginUsername->text(), ui->loginPassword->text());

    if (userInfo.size() > 1) {
        QMessageBox::information(this,"Login","Login Successfull");
        users.setUserID(userInfo[0]);
        users.setUserRole(userInfo[6].toInt());
       if(userInfo[6] == '1'){
            ui->stackedWidget->setCurrentIndex(2);
        }else{
            ui->stackedWidget->setCurrentIndex(1);
        }

    } else {
        // Handle case where user is not found or verification failed
        // For example, display an error message
        QMessageBox::critical(this, "Error", "Invalid username or password");
    }
}

void MainWindow::on_ManageruserBTN_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_UserOptionsHomeBTN_clicked()
{
    if(users.getUserRole() == 1){
        ui->stackedWidget->setCurrentIndex(2);
    }else{
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void MainWindow::on_UserOptionsCreateBTN_clicked()
{
    clearAllLineEdits(this);
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_UserOptionsModifyBTN_clicked()
{
    clearAllLineEdits(this);
    ui->stackedWidget->setCurrentIndex(5);
    loadCombobox();
}


void MainWindow::on_UserOptionsDeleteBTN_clicked()
{
    clearAllLineEdits(this);
    ui->stackedWidget->setCurrentIndex(6);
    loadCombobox();
}


void MainWindow::on_createuserBTN_clicked()
{

    if(ui->createROLE1->isChecked()){
        roleid=1;
    }else if(ui->createROLE2->isChecked()){
        roleid=2;
    }

    if (!roleid || ui->createEMPID->text().isEmpty() || ui->createFNAME->text().isEmpty() ||
        ui->createLNAME->text().isEmpty() || ui->createUNAME->text().isEmpty() || ui->createPWD->text().isEmpty()) {
        QMessageBox::critical(this, "Error", "Fields cannot be empty");
    }else{   bool insert = users.addUser(ui->createEMPID->text(),ui->createFNAME->text(),ui->createLNAME->text(),
                                    ui->createUNAME->text(),ui->createPWD->text(),roleid);
        (insert ==true) ? QMessageBox::information(this,"Successfull","Insert Successfull") : QMessageBox::critical(this, "Error", "Insert Failed");
    }
        loadCombobox();
    clearAllLineEdits(this);

}
void MainWindow::on_modifyuserBTN_clicked()
{
    if(ui->modifyROLE1->isChecked()){
        roleid=1;
    }else if(ui->modifyROLE2->isChecked()){
        roleid=2;
    }

    qDebug()<<roleid;

    if (!roleid || ui->modifyFNAME->text().isEmpty() || ui->modifyLNAME->text().isEmpty() ||
        ui->modifyUNAME->text().isEmpty() || ui->modifyPWD->text().isEmpty()) {
        QMessageBox::critical(this, "Error", "Fields cannot be empty");
    }else{
        bool modify = users.editUser(ui->modifyuserID->currentData().toInt(),ui->modifyFNAME->text(),ui->modifyLNAME->text(),
                                     ui->modifyUNAME->text(),ui->modifyPWD->text(),roleid);
        QMessageBox::information(this,"Sucessfull","Update Sucessfully");


    }

}

void MainWindow::on_deleteuserBTN_clicked()
{
    bool removeUser=users.removeUser(ui->deleteID->currentData().toInt());

    if(removeUser){
        QMessageBox::information(this,"Sucessfull","Delete was sucessfull");
        // loadCombobox();
    }else{
        QMessageBox::critical(this,"Problem","Problem deleting this user");
    }
    loadCombobox();

}

void MainWindow::on_cancelCreate_clicked()
{
    clearAllLineEdits(this);
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_cancelModify_clicked()
{
    clearAllLineEdits(this);
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_cancelDelete_clicked()
{
    clearAllLineEdits(this);
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_modifyuserID_currentTextChanged(const QString &arg1)
{
    if(ui->modifyuserID->currentData().toString() != ""){

        // Check if modification is due to user interaction
        if (!modifyingComboBox) {
            // Perform actions only when the modification is not due to programmatic changes
            ui->modifyEMPID->clear();
            ui->modifyFNAME->clear();
            ui->modifyLNAME->clear();
            ui->modifyUNAME->clear();
            ui->modifyROLE1->setChecked(false);
            ui->modifyROLE2->setChecked(false);

            QStringList list = users.searchForUser(ui->modifyuserID->currentData().toInt());

            ui->modifyEMPID->setText(list[1]);
            ui->modifyFNAME->setText(list[2]);
            ui->modifyLNAME->setText(list[3]);
            ui->modifyUNAME->setText(list[4]);
            ui->modifyPWD->setText(list[5]);
            (list[6] == '1') ? ui->modifyROLE1->setChecked(true) : ui->modifyROLE2->setChecked(true);
        }
    }else{
        clearAllLineEdits(this);
    }


}




