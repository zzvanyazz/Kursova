#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include <databasehelper.h>
#include <QDebug>
#include <EducationProgressForms/educationprogressmainwindow.h>
#include <EducationProgressForms/adddatawindow.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStack<int> stack;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        while (!stack.isEmpty())

    qDebug() << stack.pop() << endl;
        qDebug() <<  "test 3 " << endl;


        EducationProgressMainWindow
                w;

    w.show();


    return a.exec();
}
