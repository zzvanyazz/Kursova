#include "groupinputform.h"
#include "ui_groupinputform.h"
#include<QtWidgets>
GroupInputForm::GroupInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
}

GroupInputForm::~GroupInputForm()
{
    delete ui;
}
void GroupInputForm::completed(){

}
void GroupInputForm::cancel(){
     ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
