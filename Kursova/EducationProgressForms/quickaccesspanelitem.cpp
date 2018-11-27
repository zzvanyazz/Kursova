#include "quickaccesspanelitem.h"
#include "ui_quickaccesspanelitem.h"
#include <databasehelper.h>
#include <QPushButton>
#include <QDebug>

QuickAccessPanelItem::QuickAccessPanelItem(QString name,  Status _status, int thisID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuickAccessPanelItem)
{
    
    ui->setupUi(this);
    ui->SubItemsWidget->setAutoFillBackground(true);

    connect(ui->ButtonBack, SIGNAL(pressed()), this,SLOT(Back()) );
    Init(name, _status, thisID);

    
    
    
    
}


void QuickAccessPanelItem::Init(QString name, Status _status, int _thisID){
    QSqlQuery *query;
    switch (_status) {
    case college:

        query =  dbHelper.getDepartment();

        break;

    case department:
        query =  dbHelper.getSpesialty(" department = " + QString().number(_thisID));

        break;

    case spesiality:
        query =  dbHelper.getGrup(" spesiality = " + QString().number(_thisID));

        break;
    case grup:
        return;
    }


    ui->Name->setText(name);
    status = _status;
    thisID = _thisID;
    parent.push(QPair<Status, int>(status, thisID));

    itemsID.clear();

    if(query->first()){
        do{
            itemsID.append(query->value("ID").toInt());
        }while (query->next());
    }else {return;}



    for(QPair<QPushButton*, int> p: childs){
        ui->SubItemsWidget->layout()->removeWidget(p.first);
        qDebug() << 0.5 <<'\n';
        p.first->hide();
        delete p.first;
    }
    childs.clear();
    

    for(int ID : itemsID){
        QPushButton* pushButton = new QPushButton(this);
        childs.append(QPair<QPushButton*, int>(pushButton, ID));
        connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
        QString text;

        switch (status) {
        case college:
            query = dbHelper.getDepartment("ID = "+QString().number(ID));
            query->first();
            text = query->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
            break;

        case department:
            query = dbHelper.getSpesialty("ID = "+QString().number(ID));
            query->first();
            text = query->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString();
            break;

        case spesiality:
            query = dbHelper.getGrup("ID = "+QString().number(ID));
            query->first();
            text =  query->value((int)DatabaseHelper::ColumnsOfGrup::number).toString();


        }


        pushButton->setText(text);
        qDebug() << 1 <<'\n';
        ui->SubItemsWidget->layout()->addWidget(pushButton);
    }

}
void QuickAccessPanelItem::Back(){
    if(parent.length() == 1) return;
    QSqlQuery *q;
    QString name;
parent.pop();

    QPair<Status, int>p = parent.pop();
    switch(p.first) {
    case college:
        Init("college", college, p.second);
        break;

    case department:

        q = dbHelper.getDepartment("ID = "+QString().number(p.second));
        q->first();

        name =  q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
        Init(name, department, p.second);
        break;
    case spesiality:

        q = dbHelper.getSpesialty("ID = "+QString().number(p.second));
        q->first();
        name=  q->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString();
        Init(name, department, p.second);

    }







}



void QuickAccessPanelItem::changeChild(){
    QuickAccessPanelItem *newItem;
    qDebug() << 13 << endl;

    for(QPair<QPushButton*, int> p : childs){
        if(QObject::sender() == p.first){

            QSqlQuery *query ;



            switch (status) {
            case college:
                Init(p.first->text(), QuickAccessPanelItem::Status::department, p.second);
                return;

            case department:
                Init(p.first->text(),  QuickAccessPanelItem::Status::spesiality, p.second);
                return;

            case spesiality:
                Init(p.first->text(),  QuickAccessPanelItem::Status::grup, p.second);
                return;
            }



            
        }
        
    }
    

    
}

QuickAccessPanelItem::~QuickAccessPanelItem()
{
    delete ui;
}
