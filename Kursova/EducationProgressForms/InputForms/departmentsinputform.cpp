 #include "departmentsinputform.h"
#include "ui_departmentsinputform.h"
#include<QtWidgets>

DepartmentsInputForm::DepartmentsInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepartmentsInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    connect(ui->department,SIGNAL(valueChanged(int)),this,SLOT(departmentValueChanged(int)));
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

}
void DepartmentsInputForm::cancel(){

    ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
void DepartmentsInputForm::departmentValueChanged(int value){
    for(int i = 0;i<value;i++){
        QWidget *w = new QWidget();
        QHBoxLayout *p=new QHBoxLayout(ui->conteiner);
        QLabel *text=new QLabel(ui->conteiner);
        QLineEdit *line=new QLineEdit(ui->conteiner);
        lines.push_back(line);
        p->addWidget(text);
        p->addWidget(line);
        w->setLayout(p);
        ui->conteiner->layout()->addWidget(w);

    }


}
