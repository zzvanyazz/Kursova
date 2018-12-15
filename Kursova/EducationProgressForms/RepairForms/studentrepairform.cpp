#include "studentrepairform.h"
#include "ui_studentrepairform.h"
#include <QMessageBox>
#include <QMainWindow>
StudentRepairForm::StudentRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentRepairForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok, &QPushButton::pressed, this, &StudentRepairForm::completed);
    connect(ui->ButtonDelete, &QPushButton::pressed, this, &StudentRepairForm::deleteStudent );
    connect(ui->btn_cancel, &QPushButton::pressed, this, &StudentRepairForm::cancel );
    setStudent();
}

void StudentRepairForm::setStudent(){
    QSqlQuery* student =  dbHelper.getStudent();
    ui->findComboBox->clear();
    int i = 0;
    if(!student->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного студента"); cancel();}

    else{
        do{
            ui->findComboBox->addItem(student->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString()+ " "
                                      + student->value((int)DatabaseHelper::ColumnsOfStudent::name).toString()+" "
                                      +student->value((int)DatabaseHelper::ColumnsOfStudent::lastname ).toString());
            stu.append(QPair<int, int>(i, student->value((int)DatabaseHelper::ColumnsOfStudent::ID).toInt()));
            i++;
        }while(student->next());
    }

    QSqlQuery* group =  dbHelper.getGroup();

    if(!group->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодної спеціальності"); cancel();}
    else{
        do{
            ui->comboBox->addItem(group->value((int)DatabaseHelper::ColumnsOfGroup::number).toString(),
                                       group->value((int)DatabaseHelper::ColumnsOfSpesiality::ID));

        }while(group->next());
    }

}
void StudentRepairForm::deleteStudent(){
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : stu ){
        if(c == i.first){
            dbHelper.exec("DELETE FROM student WHERE ID = "+QString().number(i.second));
            dbHelper.exec("DELETE FROM education_progress WHERE student = " + QString().number(i.second));
            setStudent();
            return;
        }
    }
}
void StudentRepairForm::completed(){
    if(ui->studentSurname->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть прізвище студента ");
        return;
    }else if(ui->studentName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я студента");
        return;
    }
    else if(ui->studentLastName->text().isEmpty()){
            QMessageBox::warning(this, "Помилка", "Введіть по батькові студента");
            return;
        }
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : stu ){
        if(c == i.first){
            dbHelper.setStudent(i.second,
                              ui->comboBox->currentData().toInt(),
                              ui->studentName->text(),
                              ui->studentSurname->text(),
                              ui->studentLastName->text(),
                              ui->studyTypeCheck->isChecked());
            setStudent();
            return;
        }
    }
}
void StudentRepairForm::cancel(){
   ((QMainWindow*) parentWidget()->parent())->hide();
}



StudentRepairForm::~StudentRepairForm()
{
    delete ui;
}
