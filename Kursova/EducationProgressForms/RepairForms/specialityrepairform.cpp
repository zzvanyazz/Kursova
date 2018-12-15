#include "specialityrepairform.h"
#include "ui_specialityrepairform.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QMainWindow>
SpecialityRepairForm::SpecialityRepairForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpecialityRepairForm)
{
    ui->setupUi(this);
    connect(ui->ButtonOk, &QPushButton::pressed, this, &SpecialityRepairForm::completed);
        connect(ui->ButtonDelete, &QPushButton::pressed, this, &SpecialityRepairForm::deleteDepartment );
        setSpesiality();

       ui->findComboBox->addItem("sadvcdscv");
}

void SpecialityRepairForm::setSpesiality(){
    QSqlQuery* spesiality =  dbHelper.getSpesialty();
    ui->findComboBox->clear();
    int i = 0;

    if(!spesiality->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодної спеціальності");}

    else{

        do{
            QMessageBox::warning(this, "Помилка", spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString());
            ui->findComboBox->addItem("spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString()");
            spe.append(QPair<int, int>(i, spesiality->value((int)DatabaseHelper::ColumnsOfSpesiality::ID).toInt()));
            i++;
        }while(spesiality->next());
    }
    QSqlQuery* departments =  dbHelper.getDepartment();
    ui->findComboBox->clear();
    if(!departments->first()) {QMessageBox::warning(this, "Помилка", "Ви не ввели жодного відділення");}
    else{
        do{
            ui->comboBoxDepartments->addItem(departments->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString(),
                                             departments->value((int)DatabaseHelper::ColumnsOfDepartment::ID));

        }while(departments->next());
    }



}



void SpecialityRepairForm::deleteDepartment(){
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : spe ){
        if(c == i.first){
            dbHelper.exec("DELETE FROM spesiality WHERE ID = "+QString().number(i.second));
        setSpesiality();
        return;
        }
    }
}
void SpecialityRepairForm::completed(){
    if(ui->lineEditInput->text().isEmpty()) return;
    int c = ui->findComboBox->currentIndex();
    for(QPair<int, int > i : spe ){
        if(c == i.first){
            dbHelper.setSpesialty(i.second,  ui->comboBoxDepartments->currentData().toInt(), ui->lineEditInput->text());
            ui->lineEditInput->clear();
            setSpesiality();

            return;
        }
    }
}
void SpecialityRepairForm::cancel(){
     ((QMainWindow*) parentWidget()->parent())->hide();
}




SpecialityRepairForm::~SpecialityRepairForm()
{
    delete ui;
}
