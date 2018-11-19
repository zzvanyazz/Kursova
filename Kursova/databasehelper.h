#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H
#define DatabasePath "college.db"
#include <QtSql>

class DatabaseHelper
{
    static QSqlDatabase db;

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

    // set------------------------------------------
    static void addDepartment(QString);
    static void addStudent(QString, QString, QString, int, bool);
    static void addSpecialty(QString, int);
    static void addGrup(int, QString, int, int);


    static void addLecturer(QString, QString, QString);
    static void addSubject(QString);


    static void addLesson(int, int, int, int, int, QString);
    static void addMark(int, int, bool, int, int, int, int);




    //get-------------------------------------------

    static QSqlQuery getStudent(QString);
    static QSqlQuery getSpecialty(QString);
    static QSqlQuery getGrup(QString);


    static QSqlQuery getLecturer(QString);
    static QSqlQuery getSubject(QString);


    static QSqlQuery getLesson(QString);
    static QSqlQuery getMark(QString);













};

#endif // DATABASEHELPER_H
