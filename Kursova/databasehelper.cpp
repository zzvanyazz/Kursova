#include "databasehelper.h"
#include <QMessageBox>



DatabaseHelper::DatabaseHelper(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DatabasePath);
}


bool DatabaseHelper::exec(QString e){

    QSqlQuery query(db);

    if(! query.exec(e)){
        QMessageBox::warning(nullptr, "Error", query.lastError().text());
        return false;
    }else return true;



}


void DatabaseHelper::chek(QSqlQuery* query){
    if(! query->exec()){
        QMessageBox::warning(nullptr, "Error", query->lastError().text());
        return;
    }else return;
}



//add------------------------------------------------
void DatabaseHelper::addDepartment(QString name){
    QSqlQuery query(db);
    query.exec("INSERT INTO department (name) VALUES (:name)");
    query.bindValue(":name", name);
    chek(&query);
}


void DatabaseHelper::addStudent(int grup, QString name, QString surname, QString lastname,  bool form_of_education){
    QSqlQuery query(db);
    query.exec("INSERT INTO student (grup, name, surname, lastname, form_of_education) "
               "VALUES (:grup, :name, :surname, :lastname, :form_of_education)");
    query.bindValue(":grup", grup);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":lastname", lastname);
    query.bindValue(":form_of_education", form_of_education);

    chek(&query);
}


void DatabaseHelper::addSpecialty(int department, QString name){
    QSqlQuery query(db);
    query.exec("INSERT INTO specialty (department, name) "
               "VALUES (:department, :name)");
    query.bindValue(":department", department);
    query.bindValue(":name", name);

    chek(&query);
}


void DatabaseHelper::addGrup(int number, QString name, int spesiality, int curator){
    QSqlQuery query(db);
    query.exec("INSERT INTO grups (number, name, spesiality, curator) "
               "VALUES (:number, :name, :spesiality, :curator)");
    query.bindValue(":number", number);
    query.bindValue(":name", name);
    query.bindValue(":spesiality", spesiality);
    query.bindValue(":curator", curator);
    chek(&query);
}


void DatabaseHelper::addLecturer(QString name, QString surname, QString lastname){
    QSqlQuery query(db);
    query.exec("INSERT INTO lecturers ( name, surname, lastname) "
               "VALUES ( :name, :surname, :lastname)");

    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":lastname", lastname);


    chek(&query);

}


void DatabaseHelper::addSubject(QString name){
    QSqlQuery query(db);
    query.exec("INSERT INTO subject (name) VALUES (:name)");
    query.bindValue(":name", name);
    chek(&query);
}


void DatabaseHelper::addLesson(int grup, int day_of_week, int number_of_week, int number_of_lesson,
                               int subject, int lecturer,  QString classroom){
    QSqlQuery query(db);
    query.exec("INSERT INTO schedule (grup, day_of_week, number_of_week, number_of_lesson, subject, lecturer, classroom) "
               "VALUES (:grup, :day_of_week, :number_of_week, :number_of_lesson, :subject, :lecturer, :classroom)");
    query.bindValue(":grup", grup);
    query.bindValue(":day_of_week", day_of_week);
    query.bindValue(":number_of_week", number_of_week);
    query.bindValue(":number_of_lesson", number_of_lesson);
    query.bindValue(":subject", subject);
    query.bindValue(":lecturer", lecturer);
    query.bindValue(":classroom", classroom);
    chek(&query);
}

void DatabaseHelper::addMark(int student, int grup, bool semester, int subject, int form_of_control, int lecturer, int mark){
    QSqlQuery query(db);
    query.exec("INSERT INTO education_progress (student, grup, semester, subject, form_of_control, lecturer, mark) "
               "VALUES (:student, :grup, :semester, :subject, :form_of_control, :lecturer, :mark)");
    query.bindValue(":student", student);
    query.bindValue(":grup", grup);
    query.bindValue(":semester", semester);
    query.bindValue(":subject", subject);
    query.bindValue(":form_of_control", form_of_control);
    query.bindValue(":lecturer", lecturer);
    query.bindValue(":mark", mark);

    chek(&query);
}




//get------------------------------------------------

QSqlQuery* DatabaseHelper::getStudent(QString where = "1"){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM student WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getSpecialty(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM specialty WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getGrup(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM grup WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getLecturer(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM lecturer WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getSubject(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM subjects WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getLesson(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM schedule WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getMark(QString where){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM education_progress WHERE " + where);

    return query;
}










