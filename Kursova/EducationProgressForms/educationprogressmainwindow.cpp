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

}
void EducationProgressMainWindow::showAddDataWindow(){
    if(w->isVisible()) return;
    addDataWindow *w = new addDataWindow(this);
    w->show();

}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
