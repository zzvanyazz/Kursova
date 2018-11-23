#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
#include <QDebug>
#include <EducationProgressForms/educationprogressmainwindow.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


        EducationProgressMainWindow w;
    w.show();

    return a.exec();
}
