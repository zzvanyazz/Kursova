  #include "educationprogressmainwindow.h"
#include "ui_educationprogressmainwindow.h"
#include <QtWidgets>
#include <databasehelper.h>
#include <EducationProgressForms/quickaccesspanelitem.h>
#include <EducationProgressForms/adddatawindow.h>
EducationProgressMainWindow::EducationProgressMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EducationProgressMainWindow)
{
    ui->setupUi(this);
   connect(ui->ButtonAddPanelItem, SIGNAL (pressed()),this, SLOT (addItemQuickAccessPanel()));
   connect(ui->ButtonShowAddWindow, SIGNAL (pressed()),this, SLOT (showAddDataWindow()));

}




void EducationProgressMainWindow::addItemQuickAccessPanel(){
    QuickAccessPanelItem *d;
    QString name = "College";
    d = new QuickAccessPanelItem(name,  QuickAccessPanelItem::Status::college,0, this );
    ui->QuickAccessPanel->layout()->addWidget(d);
    QuickAccessItems.append(d);

}
void EducationProgressMainWindow::showAddDataWindow(){
    if(w->isVisible()) return;
    addDataWindow *w = new addDataWindow(this);
    w->show();
    for(QuickAccessPanelItem *Item: QuickAccessItems){
    connect(w, SIGNAL( closeEvent(QCloseEvent*)), Item, SLOT(Reload()));
    }



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
