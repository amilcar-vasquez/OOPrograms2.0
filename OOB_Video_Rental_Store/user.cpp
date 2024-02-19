#include "user.h"

user::user() {

}

void user::setUserID(QString id){
    userID=id;
}

QString user::getUserID(){
    return userID;
}

void user::setUserRole(int roleid){
    roleID=roleid;
}

int user::getUserRole(){
    return roleID;
}

QStringList user::verifyUsers(QString username,QString password){
    QSqlQuery qry;
    qry.prepare("select u.user_id,u.employee_id, u.first_name,u.last_name,u.username,u.password,u.role "
                "from users u "
                "where u.username =:uname and u.password = :pswd");
    qry.bindValue(":uname",username);
    qry.bindValue(":pswd",password);

    if(!qry.exec()){
        qDebug()<<"Login query Failed"<<db.lastError();
    }
    QStringList result;

    if(qry.size() == 1){
        // user::setUserID(qry.value("user_id")[1].toString);
        while(qry.next()){
            result << qry.value("user_id").toString();
            result << qry.value("employee_id").toString();
            result << qry.value("first_name").toString();
            result << qry.value("last_name").toString();
            result << qry.value("password").toString();
            result << qry.value("username").toString();
            result << qry.value("role").toString();
        }
    }

    return result;
}
bool user::addUser(QString empid,QString firstname, QString lastname, QString username, QString password, int roleID){
    QSqlQuery qry;
    qry.prepare("insert into users(employee_id,first_name,last_name,username,password,role) "
                "values(:eid,:fname,:lname,:uname,:pwd,:roleid)");
    qry.bindValue(":eid",empid);
    qry.bindValue(":fname",firstname);
    qry.bindValue(":lname",lastname);
    qry.bindValue(":pwd",password);
    qry.bindValue(":uname",username);
    qry.bindValue(":roleid",roleID);

    if(!qry.exec()){
        qDebug()<<"There was a problem with the query"<<db.lastError();
        return false;
    }
    return true;
}
bool user::editUser(int userID, QString firstname, QString lastname, QString username, QString password, int rID){
    QSqlQuery qry;
    qry.prepare("update users set first_name = :fname,last_name= :lname,username=:uname,password =:pwd,role =:roleid "
                "where user_ID =:uid");
    qry.bindValue(":fname",firstname);
    qry.bindValue(":lname",lastname);
    qry.bindValue(":uid",userID);
    qry.bindValue(":uname",username);
    qry.bindValue(":pwd",password);
    qry.bindValue(":roleid",rID);

    if(!qry.exec()){
        qDebug()<<"Problem with the query"<<db.lastError();
        return false;
    }
    return true;
}
bool user::removeUser(int uid){

    QSqlQuery qry;
    qry.prepare("delete from users where user_id = :id");
    qry.bindValue(":id",uid);

    if(!qry.exec()){
        qDebug()<<"Problem with Query"<<db.lastError();
    }

    return true;

}
QStringList user::searchForUser(int uid){
    QSqlQuery qry;
    qry.prepare("select * from users where user_id = :id ");
    qry.bindValue(":id",uid);

    if(!qry.exec()){
        qDebug()<<"Problem with Query"<<db.lastError();
    }
    QStringList result;

    if(qry.size() == 1){
        // user::setUserID(qry.value("user_id")[1].toString);
        while(qry.next()){
            result << qry.value("user_id").toString();
            result << qry.value("employee_id").toString();
            result << qry.value("first_name").toString();
            result << qry.value("last_name").toString();
            result << qry.value("username").toString();
            result << qry.value("password").toString();
            result << qry.value("role").toString();
        }
    }

    return result;

}
