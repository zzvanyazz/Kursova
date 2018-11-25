#include "subjectinputform.h"
#include "ui_subjectinputform.h"
#include<QtWidgets>

SubjectInputForm::SubjectInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    connect((ui->))
}

SubjectInputForm::~SubjectInputForm()
{
    delete ui;
}
void SubjectInputForm::completed(){

}
void SubjectInputForm::cancel(){
    ((QMainWindow*) parent())->close();
}

void SubjectInputForm::subjectValueChanged(int value){
    for(int i = 0;i<value;i++){
        QHBoxLayout *p=new QHBoxLayout(ui->scrollArea);
        QLabel *text=new QLabel(ui->scrollArea);
        QLineEdit *line=new QLineEdit(ui->scrollArea);
        lines.push_back(line);
        p->addWidget(text);
        p->addWidget(line);

    }

}
