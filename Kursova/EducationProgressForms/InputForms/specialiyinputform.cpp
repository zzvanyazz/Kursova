#include "specialiyinputform.h"
#include "ui_specialiyinputform.h"
#include<QtWidgets>
#include <QSqlQuery>
#include <EducationProgressForms/adddatawindow.h>
SpecialiyInputForm::SpecialiyInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpecialiyInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    QSqlQuery *q = dbHelper.getDepartment();
    int i = 0;
    if(q->first()){
        do{
           departments.append(QPair<int, int>(q->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt(), i));
           ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
           i++;
        }while(q->next());

    }
    else {

        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодного відділення");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;

    }



}



SpecialiyInputForm::~SpecialiyInputForm()
{
    delete ui;
}
void SpecialiyInputForm::completed(){
    if(ui->lineEdit->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть назву спеціальності");
        return;
    }
    int ID;
    for(QPair<int, int> p : departments){
        if(p.second == ui->boxDepartment->currentIndex()){
            ID = p.first;
            break;
        }
    }
    dbHelper.addSpesialty(ID, ui->lineEdit->text());
    if(ui->spinBox->value() == 1) cancel();
    ui->spinBox->setValue(ui->spinBox->value()-1);
    ui->lineEdit->clear();

}
void SpecialiyInputForm::cancel(){
    ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}

