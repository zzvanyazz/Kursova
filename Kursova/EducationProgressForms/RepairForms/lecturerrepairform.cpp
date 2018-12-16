#include "lecturerrepairform.h"
#include "ui_lecturerrepairform.h"
#include <databasehelper.h>
#include <QMessageBox>
#include <QMainWindow>
LecturerRepairForm::LecturerRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecturerRepairForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok, &QPushButton::pressed, this, &LecturerRepairForm::completed);
    connect(ui->ButtonDelete, &QPushButton::pressed, this, &LecturerRepairForm::deleteDepartment );
    connect(ui->btn_cancel, &QPushButton::pressed, this, &LecturerRepairForm::cancel );
    setLecturer();
}

void LecturerRepairForm::setLecturer(){
    QSqlQuery* lecturer =  dbHelper.getLecturer();
    ui->findComboBox->clear();
    int i = 0;
    if(!lecturer->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного викладача");}

    else{
        do{
            ui->findComboBox->addItem(lecturer->value((int)DatabaseHelper::ColumsOfLecturers::surname).toString()+ " "
                                      + lecturer->value((int)DatabaseHelper::ColumsOfLecturers::name).toString()+" "
                                      +lecturer->value((int)DatabaseHelper::ColumsOfLecturers::lastname ).toString());
            lec.append(QPair<int, int>(i, lecturer->value((int)DatabaseHelper::ColumsOfLecturers::ID).toInt()));
            i++;
        }while(lecturer->next());
    }



}
void LecturerRepairForm::deleteDepartment(){



    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : lec ){
        if(c == i.first){
            dbHelper.exec("DELETE FROM lecturers WHERE ID = "+QString().number(i.second));
            setLecturer();
            return;
        }
    }

}
void LecturerRepairForm::completed(){
    if(ui->lectureSurname->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть прізвище викладача");

        return;
    }else if(ui->lectureName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я викладача");
        return;
    }
    else if(ui->lectureLastName->text().isEmpty()){
        QMessageBox::warning(this,"Помилка","Введіть по батькові викладача");
    }


    int c = ui->findComboBox->currentIndex();

    for(QPair<int, int > i : lec ){
        if(c == i.first){
            dbHelper.setLecturer(i.second,ui->lectureName->text(), ui->lectureSurname->text(), ui->lectureLastName->text());
            ui->lectureName->clear();
            ui->lectureSurname->clear();
            ui->lectureLastName->clear();
            setLecturer();

            return;
        }
    }

}
void LecturerRepairForm::cancel(){
    ((QMainWindow*) parentWidget()->parent())->hide();
}

LecturerRepairForm::~LecturerRepairForm()
{
    delete ui;
}
