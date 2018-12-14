#include "subjectinputform.h"
#include "ui_subjectinputform.h"
#include<QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
SubjectInputForm::SubjectInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    connect(ui->subjectCount,SIGNAL(valueChanged(int)),this,SLOT(subjectValueChanged(int)));
}

SubjectInputForm::~SubjectInputForm()
{
    delete ui;
}
void SubjectInputForm::completed(){
    for(QLineEdit *l :lines){
        if(!l->text().isEmpty())
            dbHelper.addSubject(l->text());
    }
cancel();


}
void SubjectInputForm::cancel(){
     ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}

void SubjectInputForm::subjectValueChanged(int value){
    for(int i = 0; i < lines.length(); i++){
        ui->conteiner->layout()->removeWidget(lines[i]->parentWidget());
        lines[i]->parentWidget()->hide();

    }
    lines.clear();
    for(int i = 0;i<value;i++){
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
