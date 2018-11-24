#include "educationprogressmainwindow.h"
#include "ui_educationprogressmainwindow.h"
#include <QtWidgets>
#include <databasehelper.h>
#include <EducationProgressForms/quickaccesspanelitem.h>
EducationProgressMainWindow::EducationProgressMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EducationProgressMainWindow)
{
    ui->setupUi(this);
   connect(ui->AddButton, SIGNAL (pressed()),this, SLOT (addItemQuickAccessPanel()));

}




void EducationProgressMainWindow::addItemQuickAccessPanel(){
    QuickAccessPanelItem *d;
    QString name = "College";
    DatabaseHelper dbHelper;
    QSqlQuery *query = dbHelper.getDepartment();
        qDebug() << 7 <<'\n';
    QList<int> listID;
    if(query->first()){
        do{
            listID.append(query->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt());
        }while (query->next());
        qDebug() << 12 << '\n';
    }
        qDebug() << 8 <<'\n';
    d = new QuickAccessPanelItem(name, listID, QuickAccessPanelItem::Status::college, this );
    ui->QuickAccessPanel->layout()->addWidget(d);
        qDebug() << 9 <<'\n';

}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
