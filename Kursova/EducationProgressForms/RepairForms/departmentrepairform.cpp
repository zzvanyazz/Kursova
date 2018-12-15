#include "departmentrepairform.h"
#include "ui_departmentrepairform.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QMainWindow>
DepartmentRepairForm::DepartmentRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepartmentRepairForm)
{
    ui->setupUi(this);
    connect(ui->ButtonOk, &QPushButton::pressed, this, &DepartmentRepairForm::completed);
    connect(ui->ButtonDelete, &QPushButton::pressed, this, &DepartmentRepairForm::deleteDepartment );
    setDepartments();
}

void DepartmentRepairForm::setDepartments(){
    QSqlQuery* departments =  dbHelper.getDepartment();
    ui->findComboBox->clear();
    int i = 0;
    if(!departments->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного відділення");}

    else{
        do{
            ui->findComboBox->addItem(departments->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            dep.append(QPair<int, int>(i, departments->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt()));
            i++;
        }while(departments->next());
    }



}
void DepartmentRepairForm::deleteDepartment(){



    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : dep ){
        if(c == i.first)
            dbHelper.exec("DELETE FROM departments WHERE ID = "+QString().number(i.second));
        setDepartments();
        return;
    }

}
void DepartmentRepairForm::completed(){
    if(ui->lineEditInput->text().isEmpty()) return;
    dbHelper.setDepartment(ui->findComboBox->currentData().toInt(), ui->lineEditInput->text());
    ui->lineEditInput->clear();
    setDepartments();

}
void DepartmentRepairForm::cancel(){
    ((QMainWindow*) parentWidget()->parent())->hide();
}

DepartmentRepairForm::~DepartmentRepairForm()
{
    delete ui;
}
