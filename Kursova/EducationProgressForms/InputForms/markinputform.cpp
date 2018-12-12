#include "markinputform.h"
#include "ui_markinputform.h"
#include <QSqlQuery>
#include<QMessageBox>
#include <EducationProgressForms/adddatawindow.h>
MarkInputForm::MarkInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarkInputForm)
{
    ui->setupUi(this);
    panel = new QuickAccessPanelItem("College",  QuickAccessPanelItem::Status::college,0, ui->QuicAccessPanelItem );
    connect(panel,&QuickAccessPanelItem::selected,this,&MarkInputForm::studentSelected);
    ui->QuicAccessPanelItem->layout()->addWidget(panel);
    //connect(ui->GroupConboBox,&QComboBox::changeEvent,this,&MarkInputForm::)
    QSqlQuery *groupQuery = dbHelper.getGroup();
    QSqlQuery *studentQuery =dbHelper.getStudent();
    int i = 0;
    if(groupQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            //ui->GroupConboBox->addItem(groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::number).toString(), groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::ID ));
        }while(groupQuery->next());
    }
        if(studentQuery->first()){
            do{

                //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
               // ui->SudentConboBox->addItem(studentQuery->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString(),studentQuery->value((int)DatabaseHelper::ColumnsOfStudent::ID));
            }while(studentQuery->next());
    }else {
        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодної групи");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;

    }


    //QSqlQuery departments = dbHelper.get
}

MarkInputForm::~MarkInputForm()
{
    delete ui;
}
void MarkInputForm::studentSelected(int id){
    QSqlQuery*  subjects = new QSqlQuery(dbHelper.db);
    subjects->exec("SELECT DISTINCT subject FROM education_progress WHERE \"group\"="+QString().number(id)+";");

}
