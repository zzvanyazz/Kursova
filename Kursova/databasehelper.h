#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H
#define DatabasePath "college.db"
#include <QtSql>

static class DatabaseHelper
{


    void chek(QSqlQuery*);

    public:





    enum class ColumnsOfDepartment        {ID, name};
    enum class ColumnsOfSpesiality        {ID, department, name};
    enum class ColumnsOfSubject           {ID, name};
    enum class ColumnsOfGroup             {ID, number, name, spesiality, curator};
    enum class ColumnsOfStudent           {ID, group, name, surname ,lastname , form_of_education};
    enum class ColumsOfLecturers          {ID, name, surname, lastname};
    enum class ColumnsOfSchedule          {ID, group, day_of_week, number_of_lesson, subject, lecturer, classroom};
    enum class ColumnsOfEducationProgress {ID, student, group, semester, subject, mark};



    DatabaseHelper();
    ~DatabaseHelper();
    QSqlDatabase db ;

    QSqlQuery exec(QString);







    // add------------------------------------------
    void addDepartment(QString name);
    void addStudent(int grup, QString name, QString surname, QString lastname,  bool form_of_education);
    void addSpesialty(int department, QString name);
    void addGroup(int number, QString name, int spesiality, int curator);
    void addLecturer(QString name, QString surname, QString lastname);
    void addSubject(QString name);
    void addLesson(int grup, int day_of_week, int number_of_week, int number_of_lesson,
                   int subject, int lecturer,  QString classroom);
    void addMark(int student, int grup, bool semester, int subject, int mark);


    //get------------------------------------------
    QSqlQuery* getDepartment(QString WHERE = "1");
    QSqlQuery* getStudent(QString WHERE = "1");
    QSqlQuery* getSpesialty(QString WHERE= "1");
    QSqlQuery* getGroup(QString WHERE= "1");
    QSqlQuery* getLecturer(QString WHERE= "1");
    QSqlQuery* getSubject(QString WHERE= "1");
    QSqlQuery* getLesson(QString WHERE= "1");
    QSqlQuery* getMark(QString WHERE= "1");





    //set------------------------------------------
    void setDepartment(int  ID, QString name);
    void setStudent(int ID, int grup, QString name, QString surname, QString lastname,  bool form_of_education);
    void setSpesialty(int ID, int department, QString name);
    void setGroup(int ID, int number, QString name, int spesiality, int curator);
    void setLecturer(int ID, QString name, QString surname, QString lastname);
    void setSubject(int ID, QString name);
    void setLesson(int ID , int grup, int day_of_week, int number_of_week, int number_of_lesson,
                   int subject, int lecturer,  QString classroom);
    void setMark(int ID, int student, int grup, bool semester, int subject, int mark);















} dbHelper;

#endif // DATABASEHELPER_H
