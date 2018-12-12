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
    model = new QSqlQueryModel;
    model->setQuery(*dbHelper.getSubject());
    ui->tableView->setModel(model);

}




void EducationProgressMainWindow::addItemQuickAccessPanel(){
    QuickAccessPanelItem *d;
    QString name = "College";
    d = new QuickAccessPanelItem(name,  QuickAccessPanelItem::Status::college,0, this );
    ui->QuickAccessPanel->layout()->addWidget(d);
    QuickAccessItems.append(d);

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

void EducationProgressMainWindow::showTable(){
    QSqlQuery *q1 = dbHelper.getGroup("number = "+((QPushButton*)QObject::sender())->text());
    q1->first();
    QString ID = q1->value((int)DatabaseHelper::ColumnsOfGroup::ID).toString();
    QSqlQuery *students = dbHelper.getStudent("gurp = "+ID);
    if(students->first()){
        do{

        }while (students->next());
    }

}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
