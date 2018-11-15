#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString path = "college.sql";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");//not dbConnection
    db.setDatabaseName(path);
    if(db.open()){
        QMessageBox::warning(nullptr, "opened", "");

        QSqlQuery query;


        if(query.exec("create table person (id int primary key, "
                      "firstname varchar(20), lastname varchar(20)) if exist"))QMessageBox::warning(nullptr, "work", "");
        else QMessageBox::warning(nullptr, "not work", "");

    }
    else{
        QMessageBox::warning(nullptr, "", "not opened");
    }

    MainWindow w;
    w.show();

    return a.exec();
}
