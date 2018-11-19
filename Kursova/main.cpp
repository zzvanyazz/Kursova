#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseHelper DatabaseHelperInit;

    MainWindow w;
    w.show();

    return a.exec();
}
