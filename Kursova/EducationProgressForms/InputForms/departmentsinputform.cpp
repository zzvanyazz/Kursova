#include "departmentsinputform.h"
#include "ui_departmentsinputform.h"
#include<QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
DepartmentsInputForm::DepartmentsInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepartmentsInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    connect(ui->departmentCounter,SIGNAL(valueChanged(int)),this,SLOT(departmentValueChanged(int)));
    ui->conteiner->setAutoFillBackground(true);
    departmentValueChanged(1);
}

DepartmentsInputForm::~DepartmentsInputForm()
{
    delete ui;
}
void DepartmentsInputForm::completed(){
    for(QLineEdit  *l : lines){
        if(!l->text().isEmpty())
            dbHelper.addDepartment(l->text());
    }
    cancel();


}
void DepartmentsInputForm::cancel(){

    ((QMainWindow*)((QWidget*)parent())->parent())->hide();

}
void DepartmentsInputForm::departmentValueChanged(int value){
    for(int i = 0; i < lines.length(); i++){
        ui->conteiner->layout()->removeWidget(lines[i]->parentWidget());
        lines[i]->parentWidget()->hide();

    }
    lines.clear();

    for(int i = 0;i<value; i++){
        QWidget *w = new QWidget();
        QHBoxLayout *p=new QHBoxLayout(ui->conteiner);
        QLabel *text=new QLabel(ui->conteiner);
        QLineEdit *line=new QLineEdit(ui->conteiner);
        lines.push_back(line);
        text->setText(QString().number(i+1));
        text->setStyleSheet("color: rgb(255, 255, 255);");
        p->addWidget(text);
        p->addWidget(line);
        w->setLayout(p);
        ui->conteiner->layout()->addWidget(w);
    }


}
