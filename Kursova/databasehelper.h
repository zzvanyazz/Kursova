#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H
#define DatabasePath "college.db"
#include <QtSql>

class DatabaseHelper
{

    QSqlDatabase db ;
    void chek(QSqlQuery*);

public:



    enum class ColumnsOfDepartment        {ID, name};
    enum class ColumnsOfSpesiality        {ID, department, name};
    enum class ColumnsOfSubject           {ID, name};
    enum class ColumnsOfGrup              {ID, number, name, spesiality, curator};
    enum class ColumnsOfStudent           {ID, grup, name, surname ,lastname , form_of_education};
    enum class ColumsOfLecturers          {ID, name, surname, lastname};
    enum class ColumnsOfSchedule          {ID, grup, day_of_week, number_of_week, number_of_lesson, subject, lecturer, classroom};
    enum class ColumnsOfEducationProgress {ID, student, grup, semester, subject, form_of_control, lecturer, mark};



    DatabaseHelper();

    bool exec(QString);



    // add------------------------------------------
    void addDepartment(QString);
    void addStudent(int, QString, QString, QString, bool);
    void addSpecialty(int, QString);
    void addGrup(int, QString, int, int);
    void addLecturer(QString, QString, QString);
    void addSubject(QString);
    void addLesson(int, int, int, int, int, int, QString);
    void addMark(int, int, bool, int, int, int, int);


    //get------------------------------------------
    QSqlQuery* getStudent(QString = "1");
    QSqlQuery* getSpecialty(QString= "1");
    QSqlQuery* getGrup(QString= "1");
    QSqlQuery* getLecturer(QString= "1");
    QSqlQuery* getSubject(QString= "1");
    QSqlQuery* getLesson(QString= "1");
    QSqlQuery* getMark(QString= "1");


    //set------------------------------------------
    void setDepartment(int, QString);
    void setStudent(int, int, QString, QString, QString, bool);
    void setSpecialty(int, int, QString);
    void setGrup(int, int, QString, int, int);
    void setLecturer(int, QString, QString, QString);
    void setSubject(int, QString);
    void setLesson(int, int, int, int, int, int, int, QString);
    void setMark(int, int, int, bool, int, int, int, int);














};

#endif // DATABASEHELPER_H
