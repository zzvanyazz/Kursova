#include "databasehelper.h"
#include <QMessageBox>
#include <QDir>
#include <QDebug>



DatabaseHelper::DatabaseHelper(){
    db =  QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("college.db");

    //db.setDatabaseName( "college.db");
    if(!db.open()) {
        QMessageBox::warning(nullptr, "Error open", db.lastError().text());
        return;
    }



}
DatabaseHelper::~DatabaseHelper(){
    db.close();
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
    query.prepare("INSERT INTO departments (name) VALUES (:name)");
    query.bindValue(":name", name);
    chek(&query);
}

void DatabaseHelper::addStudent(int grup, QString name, QString surname, QString lastname,  bool form_of_education){
    QSqlQuery query(db);
    query.prepare("INSERT INTO students (grup, name, surname, lastname, form_of_education) "
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
    query.prepare("INSERT INTO specialty (department, name) "
                  "VALUES (:department, :name)");
    query.bindValue(":department", department);
    query.bindValue(":name", name);

    chek(&query);
}

void DatabaseHelper::addGrup(int number, QString name, int spesiality, int curator){
    QSqlQuery query(db);
    query.prepare("INSERT INTO grups (number, name, spesiality, curator) "
                  "VALUES (:number, :name, :spesiality, :curator)");
    query.bindValue(":number", number);
    query.bindValue(":name", name);
    query.bindValue(":spesiality", spesiality);
    query.bindValue(":curator", curator);
    chek(&query);
}

void DatabaseHelper::addLecturer(QString name, QString surname, QString lastname){

    QSqlQuery query(db);
    query.prepare("INSERT INTO lecturers (name, surname, lastname) "
                  "VALUES (:name, :surname, :lastname)");

    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":lastname", lastname);


    chek(&query);

}

void DatabaseHelper::addSubject(QString name){
    QSqlQuery query(db);
    query.prepare("INSERT INTO subject (name) VALUES (:name)");
    query.bindValue(":name", name);
    chek(&query);
}

void DatabaseHelper::addLesson(int grup, int day_of_week, int number_of_week, int number_of_lesson,
                               int subject, int lecturer,  QString classroom){
    QSqlQuery query(db);
    query.prepare("INSERT INTO schedule (grup, day_of_week, number_of_week, number_of_lesson, subject, lecturer, classroom) "
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
    query.prepare("INSERT INTO education_progress (student, grup, semester, subject, form_of_control, lecturer, mark) "
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
QSqlQuery* DatabaseHelper::getDepartment(QString where ){
    QSqlQuery*  query = new QSqlQuery( db);

    query->exec("SELECT * FROM departments WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}

QSqlQuery* DatabaseHelper::getStudent(QString where ){
    QSqlQuery*  query = new QSqlQuery( db);

    query->exec("SELECT * FROM students WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}
QSqlQuery* DatabaseHelper::getSpecialty(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM specialty WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}
QSqlQuery* DatabaseHelper::getGrup(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM grups WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}
QSqlQuery* DatabaseHelper::getLecturer(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM lecturers WHERE " + where);

    return query;
}
QSqlQuery* DatabaseHelper::getSubject(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM subjects WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}
QSqlQuery* DatabaseHelper::getLesson(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM schedule WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}
QSqlQuery* DatabaseHelper::getMark(QString where ){
    QSqlQuery*  query = new QSqlQuery(db);

    query->exec("SELECT * FROM education_progress WHERE " + where);
    if(!query->first())return nullptr;
    return query;
}


//set----------------------------
void DatabaseHelper::setDepartment(int  ID, QString name){
    //   name =  "\""+name+"\"";
    QSqlQuery  query(db);

    query.prepare("UPDATE departments  Set name = :name WHERE ID ="+QString().number(ID));
    query.bindValue(":name", name);
    chek(&query);

}
void DatabaseHelper::setStudent(int ID, int grup, QString name, QString surname, QString lastname,  bool form_of_education){
    QSqlQuery query(db);
    query.prepare("UPDATE students SET  grup = :grup, name = :name, surname = :surname, lastname = :lastname, form_of_education = :form_of_education  WHERE ID = "+QString().number(ID));
    query.bindValue(":grup", grup);
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":lastname", lastname);
    query.bindValue(":form_of_education", form_of_education);

    chek(&query);
}
void DatabaseHelper::setSpecialty(int ID, int department, QString name){
    QSqlQuery query(db);
    query.prepare("UPDATE specialty SET department = 1,   name = :name  WHERE ID = "+QString().number(ID));


    query.bindValue(":department", department);
    query.bindValue(":name", name);

    chek(&query);
}
void DatabaseHelper::setGrup(int ID, int number, QString name, int spesiality, int curator){
    QSqlQuery query(db);
    query.prepare("UPDATE grups number = :number, name = :name, spesiality = :spesiality, curator = :curator WHERE ID = "+ QString().number(ID));
    query.bindValue(":number", number);
    query.bindValue(":name", name);
    query.bindValue(":spesiality", spesiality);
    query.bindValue(":curator", curator);
    chek(&query);
}
void DatabaseHelper::setLecturer(int ID, QString name, QString surname, QString lastname){
    QSqlQuery query(db);
    query.prepare("UPDATE lecturers name = :name, surname = :surname, lastname =:lastname WHERE ID ="+QString().number(ID) );

    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":lastname", lastname);


    chek(&query);
}
void DatabaseHelper::setSubject(int ID, QString name){
    QSqlQuery query(db);
    query.prepare("UPDATE subject name = :name VALUES ID = "+QString().number(ID));
    query.bindValue(":name", name);
    chek(&query);
}
void DatabaseHelper::setLesson(int ID , int grup, int day_of_week, int number_of_week, int number_of_lesson,
                               int subject, int lecturer,  QString classroom){
    QSqlQuery query(db);
    query.prepare("UPDATE schedule grup = :grup, day_of_week = :day_of_week, "
                  "number_of_week = :number_of_week, number_of_lesson = :number_of_lesson, "
                  "subject = :subject, lecturer = :lecturer, classroom = :classroom WHERE ID = " +QString().number(ID));

    query.bindValue(":grup", grup);
    query.bindValue(":day_of_week", day_of_week);
    query.bindValue(":number_of_week", number_of_week);
    query.bindValue(":number_of_lesson", number_of_lesson);
    query.bindValue(":subject", subject);
    query.bindValue(":lecturer", lecturer);
    query.bindValue(":classroom", classroom);
    chek(&query);

}
void DatabaseHelper::setMark(int ID, int student, int grup, bool semester, int subject, int form_of_control, int lecturer, int mark){
    QSqlQuery query(db);
    query.prepare("UPDATE education_progress student = :student, grup= :grup, semester = :semester,"
                  " subject = :subject, form_of_control = :form_of_control, lecturer = :lecturer, mark = :mark WHERE ID = " + QString().number(ID));

    query.bindValue(":student", student);
    query.bindValue(":grup", grup);
    query.bindValue(":semester", semester);
    query.bindValue(":subject", subject);
    query.bindValue(":form_of_control", form_of_control);
    query.bindValue(":lecturer", lecturer);
    query.bindValue(":mark", mark);

    chek(&query);
}







