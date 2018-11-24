#include "quickaccesspanelitem.h"
#include "ui_quickaccesspanelitem.h"
#include <databasehelper.h>
#include <QPushButton>
#include <QDebug>
QuickAccessPanelItem::QuickAccessPanelItem(QString name, QList<int> _itemsID, Status _status, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuickAccessPanelItem)
{

    ui->setupUi(this);
    itemsID = _itemsID;
    ui->Name->setText(name);
    status = _status;
    if(status == college){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
            childs.append(QPair<QPushButton*, int>(pushButton, ID));
            connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getDepartment("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
            pushButton->setText(text);
            qDebug() << text << '\n';

            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }else if(status == department){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
 childs.append(QPair<QPushButton*, int>(pushButton, ID));
          connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getSpecialty("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
            pushButton->setText(text);
            qDebug() << text << '\n';

            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }else if(status == spesiality){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
            childs.append(QPair<QPushButton*, int>(pushButton, ID));
     connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getGrup("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
            pushButton->setText(text);
            qDebug() << text << '\n';

            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }

}

void QuickAccessPanelItem::changeChild(){
    QuickAccessPanelItem *newItem;
    for(QPair<QPushButton*, int> p : childs){
        if(QObject::sender() == p.first){
            DatabaseHelper dbHelper;
            QSqlQuery *query = dbHelper.getDepartment();
            QList<int> listID;
            if(query->first()){
                do{
                    listID.append(query->value((int)DatabaseHelper::ColumnsOfDepartment::ID).toInt());
                }while (query->next());
            }
            d = new QuickAccessPanelItem(name, listID, QuickAccessPanelItem::Status::college, this );
            ui->QuickAccessPanel->layout()->addWidget(d);

            *newItem =
        }

    }





}

QuickAccessPanelItem::~QuickAccessPanelItem()
{
    delete ui;
}
