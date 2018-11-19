#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db =  QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DatabasePath);

    MainWindow w;
    w.show();

    return a.exec();
}
