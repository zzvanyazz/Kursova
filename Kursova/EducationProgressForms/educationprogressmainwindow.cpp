#include "educationprogressmainwindow.h"
#include "ui_educationprogressmainwindow.h"
#include <QtWidgets>
#include <databasehelper.h>
#include <EducationProgressForms/departmentitempanel.h>
EducationProgressMainWindow::EducationProgressMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EducationProgressMainWindow)
{
    ui->setupUi(this);
   connect(ui->AddButton, SIGNAL (pressed()),this, SLOT (addItemQuickAccessPanel()));

}




void EducationProgressMainWindow::addItemQuickAccessPanel(){
    DepartmentItemPanel *d;
    QString name = "College";
    DatabaseHelper dbHelper;
    QSqlQuery *query = dbHelper.getDepartment();
    QList<int> listID;
    if(query->first()){
        do{
            listID.append(query->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt());
        }while (query->next());
    }
    d = new DepartmentItemPanel(name, listID, DepartmentItemPanel::Status::college, this );
    ui->QuickAccessPanel->layout()->addWidget(d);

}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
