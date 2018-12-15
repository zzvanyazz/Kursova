#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
#include <QDebug>
#include <EducationProgressForms/educationprogressmainwindow.h>
#include <EducationProgressForms/adddatawindow.h>
#include <EducationProgressForms/RepairForms/departmentrepairform.h>
#include <EducationProgressForms/RepairForms/specialityrepairform.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    SpecialityRepairForm w;

    w.show();


    return a.exec();
}
