#include "subjectrepairform.h"
#include "ui_subjectrepairform.h"
#include <databasehelper.h>
#include <QMessageBox>
#include <QMainWindow>
SubjectRepairForm::SubjectRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectRepairForm)
{
    ui->setupUi(this);
    connect(ui->ButtonOk, &QPushButton::pressed, this, &SubjectRepairForm::completed);
    connect(ui->ButtonDelete, &QPushButton::pressed, this, &SubjectRepairForm::deleteDepartment );
    connect(ui->ButtonCancel, &QPushButton::pressed, this, &SubjectRepairForm::cancel );
    setSubject();
}

void SubjectRepairForm::setSubject(){
    QSqlQuery* subject =  dbHelper.getSubject();
    ui->findComboBox->clear();
    int i = 0;
    if(!subject->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного предмету");}

    else{
        do{
            ui->findComboBox->addItem(subject->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            sub.append(QPair<int, int>(i, subject->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt()));
            i++;
        }while(subject->next());
    }



}
void SubjectRepairForm::deleteDepartment(){



    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : sub ){
        if(c == i.first){
            dbHelper.exec("DELETE FROM subjects WHERE ID = "+QString().number(i.second));
            setSubject();
            return;
        }
    }

}
void SubjectRepairForm::completed(){
    if(ui->lineEditInput->text().isEmpty()) return;
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : sub ){
        if(c == i.first){
            dbHelper.setDepartment(i.second, ui->lineEditInput->text());
            ui->lineEditInput->clear();
            setSubject();

            return;
        }
    }

}
void SubjectRepairForm::cancel(){
    ((QMainWindow*) parentWidget()->parent())->hide();
}
SubjectRepairForm::~SubjectRepairForm()
{
    delete ui;
}
