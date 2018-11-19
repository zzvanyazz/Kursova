#include "databasehelper.h"
#include <QMessageBox>




void DatabaseHelper::addDepartment(QString){}


void DatabaseHelper::addStudent(QString, QString, QString, int, bool){}


void DatabaseHelper::addSpecialty(QString, int){}


void DatabaseHelper::addGrup(int, QString, int, int){}


void DatabaseHelper::addLecturer(QString, QString, QString){}


void DatabaseHelper::addSubject(QString){}


void DatabaseHelper::addLesson(int, int, int, int, int, QString){}


void DatabaseHelper::addMark(int, int, bool, int, int, int, int){}



DatabaseHelper::DatabaseHelper(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DatabasePath);



}
