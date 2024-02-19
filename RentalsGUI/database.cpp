#include "database.h"

Database::Database() : connected(false)
{
    if (openDatabase()) {
        connected = true;
    }
    else
    {
        qDebug() << "Database connection failed.";
    }
}

Database::~Database()
{
    closeDatabase();
}

bool Database::isConnected() const
{
    return connected;
}

bool Database::openDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("Firme.2424");
    db.setDatabaseName("rental");

    if (db.open()) {
        qDebug() << "Database connection established.";
        return true;
    }
    else
    {
        qDebug() << "Failed to open database:" << db.lastError().text();
        return false;
    }
}

void Database::closeDatabase()
{
    if (db.isOpen()) {
        db.close();
        qDebug() << "Database connection closed.";
    }
}
