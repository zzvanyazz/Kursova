#include "repairdatamainwindow.h"
#include "ui_repairdatamainwindow.h"

RepairDataMainWindow::RepairDataMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RepairDataMainWindow)
{
    ui->setupUi(this);
    connect(ui->ButtonRepairDepartment, SIGNAL(pressed()), this, SLOT(setRepairForm()));
    connect(ui->ButtonRepairGroup,      SIGNAL(pressed()), this, SLOT(setRepairForm()));
    connect(ui->ButtonRepairSpeciality, SIGNAL(pressed()), this, SLOT(setRepairForm()));
    connect(ui->ButtonRepairStudent,    SIGNAL(pressed()), this, SLOT(setRepairForm()));
    connect(ui->ButtonRepairSubject,    SIGNAL(pressed()), this, SLOT(setRepairForm()));
    connect(ui->ButtonRepairLecturer,   SIGNAL(pressed()), this, SLOT(setRepairForm()));
}

void RepairDataMainWindow::setRepairForms(){
    ui->Menu->hide();
/*
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
  */
}

RepairDataMainWindow::~RepairDataMainWindow()
{
    delete ui;
}
