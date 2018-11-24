#include "departmentitempanel.h"
#include "ui_departmentitempanel.h"
#include <databasehelper.h>
#include <QPushButton>
DepartmentItemPanel::DepartmentItemPanel(QString name, QList<int> _itemsID, Status _status, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepartmentItemPanel)
{
    ui->setupUi(this);
    itemsID = _itemsID;
    ui->Name->setText(name);
    status = _status;
    for(int ID : itemsID){
        QPushButton* pushButton = new QPushButton(this);
        pushButton->setText((dbHelper.getDepartment("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name)).toString());
        ui->SubItemsWidget->layout()->addWidget(pushButton);
    }

}

DepartmentItemPanel::~DepartmentItemPanel()
{
    delete ui;
}
