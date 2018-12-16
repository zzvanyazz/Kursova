#include "grouprepairform.h"
#include "ui_grouprepairform.h"
#include <QSqlQuery>
#include <databasehelper.h>
#include <QMessageBox>
#include <QMainWindow>
GroupRepairForm::GroupRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupRepairForm)
{

    ui->setupUi(this);
    connect(ui->btn_ok, &QPushButton::pressed, this, &GroupRepairForm::completed);
    connect(ui->ButtonDelete, &QPushButton::pressed, this, &GroupRepairForm::deleteDepartment );
    connect(ui->btn_cancel, &QPushButton::pressed, this, &GroupRepairForm::cancel );
        ui->groupNumber->setValidator( new QIntValidator);
    setGroup();
}


void GroupRepairForm::setGroup(){
    QSqlQuery* group =  dbHelper.getGroup();
    ui->findComboBox->clear();
    int i = 0;

    if(!group->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодної групи");/* cancel();*/}

    else{

        do{
            // QMessageBox::warning(this, "Помилка", spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString());
            ui->findComboBox->addItem(group->value((int)DatabaseHelper::ColumnsOfGroup::name).toString()+ "  " +group->value((int)DatabaseHelper::ColumnsOfGroup::number).toString());
            gru.append(QPair<int, int>(i, group->value((int)DatabaseHelper::ColumnsOfGroup::ID).toInt()));
            i++;
        }while(group->next());
    }
    QSqlQuery* spesiality =  dbHelper.getSpesialty();

    if(!spesiality->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодної спеціальності");}
    else{
        do{
            ui->boxSpesiality->addItem(spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString(),
                                       spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::ID));

        }while(spesiality->next());
    }
    QSqlQuery* lecturer =  dbHelper.getLecturer();

    if(!lecturer->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного викладача");}
    else{
        do{
            ui->boxCurator->addItem(lecturer->value((int)DatabaseHelper::ColumsOfLecturers::surname).toString()+" "
                                    +lecturer->value((int)DatabaseHelper::ColumsOfLecturers::name).toString()+" "
                                    +lecturer->value((int)DatabaseHelper::ColumsOfLecturers::lastname).toString(),
                                    lecturer->value((int)DatabaseHelper::ColumsOfLecturers::ID));

        }while(lecturer->next());
    }
}



void GroupRepairForm::deleteDepartment(){
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : gru ){
        if(c == i.first){
            dbHelper.exec("DELETE FROM groups WHERE ID = "+QString().number(i.second));
            setGroup();
            return;
        }
    }
}
void GroupRepairForm::completed(){
    if(ui->groupNumber->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть номер групи");
        return;
    }else if(ui->groupName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я групи");
        return;
    }
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : gru ){
        if(c == i.first){
            dbHelper.setGroup(i.second,
                              ui->groupNumber->text().toInt(),
                              ui->groupName->text(),
                              ui->boxSpesiality->currentData().toInt(),
                              ui->boxCurator->currentData().toInt());
            setGroup();
            return;
        }
    }
}
void GroupRepairForm::cancel(){
 ((QMainWindow*) parentWidget()->parent())->hide();
}







GroupRepairForm::~GroupRepairForm()
{
    delete ui;
}
