#include "adddatawindow.h"
#include "ui_adddatawindow.h"
#include <EducationProgressForms/InputForms/departmentsinputform.h>
#include <EducationProgressForms/InputForms/groupinputform.h>
#include <EducationProgressForms/InputForms/lecturerinputform.h>
#include <EducationProgressForms/InputForms/specialiyinputform.h>
#include <EducationProgressForms/InputForms/studenrinputform.h>
#include <EducationProgressForms/InputForms/subjectinputform.h>
addDataWindow::addDataWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addDataWindow)
{
    ui->setupUi(this);
    connect(ui->ButtonAddDepartment, SIGNAL(pressed()), this, SLOT(setInputForm()));
    connect(ui->ButtonAddGroup,      SIGNAL(pressed()), this, SLOT(setInputForm()));
    connect(ui->ButtonAddSpeciality, SIGNAL(pressed()), this, SLOT(setInputForm()));
    connect(ui->ButtonAddStudent,    SIGNAL(pressed()), this, SLOT(setInputForm()));
    connect(ui->ButtonAddSubject,    SIGNAL(pressed()), this, SLOT(setInputForm()));
    connect(ui->ButtonAddLecturer,   SIGNAL(pressed()), this, SLOT(setInputForm()));
}

void addDataWindow::setInputForm(){
    ui->Menu->hide();
qDebug() << "!!!!" <<  endl;
    QWidget *w;

    if(QObject::sender() == ui->ButtonAddDepartment){
         w= new DepartmentsInputForm( ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(53, 8, 89, 255));");
    }
    else if(QObject::sender() == ui->ButtonAddSpeciality){
        w = new SpecialiyInputForm(  ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(10, 7, 77, 255));");
    }
    else if(QObject::sender() == ui->ButtonAddGroup){
        w = new GroupInputForm( this);
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(5, 61, 8, 255));");
    }
    else if(QObject::sender() == ui->ButtonAddLecturer){
        w = new LecturerInputForm(  ui->centralwidget);
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));");

    }
    else if(QObject::sender() == ui->ButtonAddStudent){
        w = new StudenrInputForm( ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.365385 rgba(0, 0, 0, 255), stop:1 rgba(53, 35, 5, 255));");
    }
    else if(QObject::sender() == ui->ButtonAddSubject){
        w = new SubjectInputForm( ui->centralwidget);
          ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));");
    }
    qDebug() << "!!!! 2" <<  endl;

    ui->centralwidget->layout()->addWidget(w);
    qDebug() << "!!!! 3" <<  endl;


}


addDataWindow::~addDataWindow()
{
    delete ui;
}
