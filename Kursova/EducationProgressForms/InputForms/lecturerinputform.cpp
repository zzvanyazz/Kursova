#include "lecturerinputform.h"
#include "ui_lecturerinputform.h"
#include<QtWidgets>

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

}
void LecturerInputForm::cancel(){
    ((QMainWindow*) parent())->close();
}
