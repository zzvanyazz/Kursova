#include "lecturerinputform.h"
#include "ui_lecturerinputform.h"
#include<QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
LecturerInputForm::LecturerInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecturerInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
}

LecturerInputForm::~LecturerInputForm()
{
    delete ui;
}
void LecturerInputForm::completed(){
    if(ui->lectureSurname->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть прізвище викладача");
        return;
    }else if(ui->lectureName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я викладача");
        return;
    }
    else if(ui->lectureLastName->text().isEmpty()){
        QMessageBox::warning(this,"Помилка","Введіть по батькові викладача");
    }
    dbHelper.addLecturer(ui->lectureName->text(), ui->lectureSurname->text(), ui->lectureLastName->text());
    if(ui->Counter->value() == 1) cancel();
    ui->Counter->setValue(ui->Counter->value()-1);
    ui->lectureName->clear();
    ui->lectureLastName->clear();
    ui->lectureSurname->clear();

}
void LecturerInputForm::cancel(){
     ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
