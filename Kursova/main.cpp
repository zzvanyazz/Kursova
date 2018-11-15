#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);




    QString path = "college.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);


    MainWindow w;
    w.show();

    return a.exec();
}
