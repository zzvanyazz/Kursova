#include "educationprogressmainwindow.h"
#include "ui_educationprogressmainwindow.h"
#include <QtWidgets>
#include <databasehelper.h>
#include <EducationProgressForms/quickaccesspanelitem.h>
#include <EducationProgressForms/adddatawindow.h>
#include <EducationProgressForms/InputForms/markinputform.h>
EducationProgressMainWindow::EducationProgressMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EducationProgressMainWindow)
{
    ui->setupUi(this);

    connect(ui->ButtonAddPanelItem, SIGNAL (pressed()),this, SLOT (addItemQuickAccessPanel()));
    connect(ui->ButtonShowAddWindow2, SIGNAL (pressed()),this, SLOT (showAddDataWindow()));
    connect(ui->ButtonShowInpuMarksForm, SIGNAL (pressed()),this, SLOT (showMarkInputForm()));



}




void EducationProgressMainWindow::addItemQuickAccessPanel(){
    QuickAccessPanelItem *d;
    QString name = "College";
    d = new QuickAccessPanelItem(name,  QuickAccessPanelItem::Status::college,0, this );
    ui->QuickAccessPanel->layout()->addWidget(d);
    QuickAccessItems.append(d);
    connect(d, &QuickAccessPanelItem::selected, this, &EducationProgressMainWindow::showTable);

}
void EducationProgressMainWindow::showAddDataWindow(){
    addDataWindow *w = new addDataWindow(this);
    w->show();
    for(QuickAccessPanelItem *Item: QuickAccessItems){
        connect(w, SIGNAL( closeEvent(QCloseEvent*)), Item, SLOT(Reload()));
    }



}
void EducationProgressMainWindow::showMarkInputForm(){
    QMainWindow  *w = new QMainWindow(this);

    MarkInputForm *m = new MarkInputForm();
    w->setCentralWidget(m);
    w->show();

}

void EducationProgressMainWindow::showTable(int GroupID){
    int i = 0, j = 0;
    QSqlQuery *students = dbHelper.getStudent("Grup = "+QString().number(GroupID)+" group by surname");
    QSqlQuery*  subjects = new QSqlQuery(dbHelper.db);
    subjects->exec("SELECT DISTINCT subject FROM education_progress WHERE \"group\"="+QString().number(GroupID)+";");
    QLabel *empty = new QLabel();
    ui->Table->addWidget(empty, i, j);
    if(subjects->first()){
        do{
            j++;
            QLabel *n = new QLabel;
            QSqlQuery *Sub = dbHelper.getSubject("ID = "+QString().number(subjects->value(0).toInt()));

             Sub->first();
            n->setText(Sub->value((int)DatabaseHelper::ColumnsOfSubject::name).toString());
            ui->Table->addWidget(n, i, j);


        }while(subjects->next());
    }
    i++;
    j = 0;
    if(students->first()&&subjects->first()){
        do{
            QLabel *name = new QLabel;
            name->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum );
            name->setStyleSheet("background-color: rgb(200, 185, 255);");
            name->setText(students->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString()+" "+students->value((int)DatabaseHelper::ColumnsOfStudent::name).toString());
            ui->Table->addWidget(name, i, j);

            do{
                 j++;
                QSqlQuery *data = new QSqlQuery(dbHelper.db);
                data->exec("SELECT mark from education_progress WHERE student = "+students->value((int)DatabaseHelper::ColumnsOfStudent::ID).toString()
                           +" AND subject = "+subjects->value(0).toString()+" AND semester = 0");
                QLabel *mark = new QLabel;

                mark->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum );
                mark->setStyleSheet("background-color: rgb(203, 250, 255)");
                if (data->first()){
                mark->setText(data->value(0).toString());
                ui->Table->addWidget(mark, i , j);
                }else {
                    mark->setText("/");
                    ui->Table->addWidget(mark, i , j);
                }

            }while(subjects->next());
            subjects->first();
            i++;
            j = 0;
        }while(students->next());
    }
    else;










}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
