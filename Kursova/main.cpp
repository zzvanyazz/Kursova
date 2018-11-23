#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseHelper help;
 //   help.setStudent(22, 22, "test", "test", "test", 0);
//   help.addDepartment( "test12aaa");
    help.setSpecialty(1, 1, "vb");
        MainWindow w;
    w.show();

    return a.exec();
}
