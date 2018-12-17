#include "repairdatamainwindow.h"
#include "ui_repairdatamainwindow.h"
#include <EducationProgressForms/RepairForms/departmentrepairform.h>
#include <EducationProgressForms/RepairForms/grouprepairform.h>
#include <EducationProgressForms/RepairForms/specialityrepairform.h>
#include <EducationProgressForms/RepairForms/studentrepairform.h>
#include <EducationProgressForms/RepairForms/lecturerrepairform.h>
#include <EducationProgressForms/RepairForms/subjectrepairform.h>
RepairDataMainWindow::RepairDataMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RepairDataMainWindow)
{
    ui->setupUi(this);
    connect(ui->ButtonRepairDepartment, SIGNAL(pressed()), this, SLOT(setRepairForms()));
    connect(ui->ButtonRepairGroup,      SIGNAL(pressed()), this, SLOT(setRepairForms()));
    connect(ui->ButtonRepairSpeciality, SIGNAL(pressed()), this, SLOT(setRepairForms()));
    connect(ui->ButtonRepairStudent,    SIGNAL(pressed()), this, SLOT(setRepairForms()));
    connect(ui->ButtonRepairSubject,    SIGNAL(pressed()), this, SLOT(setRepairForms()));
    connect(ui->ButtonRepairLecturer,   SIGNAL(pressed()), this, SLOT(setRepairForms()));
    setWindowTitle(" ");
}

void RepairDataMainWindow::setRepairForms(){
    ui->Menu->hide();

    QWidget *w;

    if(QObject::sender() == ui->ButtonRepairDepartment){
         w= new DepartmentRepairForm( ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(53, 8, 89, 255));");
         setWindowTitle("Редагування відділення");
    }
    else if(QObject::sender() == ui->ButtonRepairSpeciality){
        w = new SpecialityRepairForm(  ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(10, 7, 77, 255));");
         setWindowTitle("Редагування спеціальності");
    }
    else if(QObject::sender() == ui->ButtonRepairGroup){
        w = new GroupRepairForm( this);
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(5, 61, 8, 255));");
        setWindowTitle("Редагування групи");
    }
    else if(QObject::sender() == ui->ButtonRepairLecturer){
        w = new LecturerRepairForm(  ui->centralwidget);
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));");
        setWindowTitle("Редагування викладача");

    }
    else if(QObject::sender() == ui->ButtonRepairStudent){
        w = new StudentRepairForm( ui->centralwidget);
         ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.365385 rgba(0, 0, 0, 255), stop:1 rgba(53, 35, 5, 255));");
         setWindowTitle("Редагування студента");
    }
    else if(QObject::sender() == ui->ButtonRepairSubject){
        w = new SubjectRepairForm( ui->centralwidget);
          ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));");
          setWindowTitle("Редагування предмету");
    }
    qDebug() << "!!!! 2" <<  endl;

    ui->centralwidget->layout()->addWidget(w);
   // qDebug() << "!!!! 3" <<  endl;

}

RepairDataMainWindow::~RepairDataMainWindow()
{
    delete ui;
}
