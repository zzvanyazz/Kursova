#include "groupinputform.h"
#include "ui_groupinputform.h"
#include<QtWidgets>
#include <QSqlQuery>
#include <EducationProgressForms/adddatawindow.h>
GroupInputForm::GroupInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    ui->groupNumber->setValidator( new QIntValidator);
    QSqlQuery *specialityQuery = dbHelper.getSpesialty();
    int i = 0;
    if(specialityQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            ui->boxDepartments->addItem(specialityQuery->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString(), specialityQuery->value((int)DatabaseHelper::ColumnsOfDepartment::ID ));

        }while(specialityQuery->next());
    }else {
        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодної спеціальності");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;

    }
    QSqlQuery *lecturerQuery = dbHelper.getLecturer();
    if(lecturerQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            ui->boxCurator->addItem(lecturerQuery->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString(), lecturerQuery->value((int)DatabaseHelper::ColumnsOfDepartment::ID ));

        }while(lecturerQuery->next());
    }else{
        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодного викладача");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;
    }


}

GroupInputForm::~GroupInputForm()
{
    delete ui;
}
void GroupInputForm::completed(){
    if(ui->groupNumber->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть номер групи");
        return;
    }else if(ui->groupName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я групи");
        return;
    }
    dbHelper.addGroup(
                ui->groupNumber->text().toInt(),
                ui->groupName->text(),
                ui->boxDepartments->itemData(ui->boxDepartments->currentIndex()).toInt(),
                ui->boxCurator->itemData(ui->boxCurator->currentIndex()).toInt());
    if(ui->spinBoxCounter->value() == 1) cancel();
    ui->spinBoxCounter->setValue(ui->spinBoxCounter->value()-1);
}
void GroupInputForm::cancel(){
    ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
