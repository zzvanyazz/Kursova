#include "studenrinputform.h"
#include "ui_studenrinputform.h"
#include<QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
StudenrInputForm::StudenrInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudenrInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));


}

StudenrInputForm::~StudenrInputForm()
{
    delete ui;
}
void StudenrInputForm::completed(){
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

}
void StudenrInputForm::cancel(){
     ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
