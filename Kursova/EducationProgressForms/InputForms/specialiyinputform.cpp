#include "specialiyinputform.h"
#include "ui_specialiyinputform.h"
#include<QtWidgets>

SpecialiyInputForm::SpecialiyInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpecialiyInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
}

SpecialiyInputForm::~SpecialiyInputForm()
{
    delete ui;
}
void SpecialiyInputForm::completed(){

}
void SpecialiyInputForm::cancel(){
    ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}

