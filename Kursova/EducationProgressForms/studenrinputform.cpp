#include "studenrinputform.h"
#include "ui_studenrinputform.h"
#include<QtWidgets>

StudenrInputForm::StudenrInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudenrInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));

}

StudenrInputForm::~StudenrInputForm()
{
    delete ui;
}
void StudenrInputForm::completed(){

}
void StudenrInputForm::cancel(){
    ((QMainWindow*) parent())->close();
}
