#include "quickaccesspanelitem.h"
#include "ui_quickaccesspanelitem.h"
#include <databasehelper.h>
#include <QPushButton>
#include <QDebug>

QuickAccessPanelItem::QuickAccessPanelItem(QString name, QList<int> _itemsID, Status _status, int thisID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuickAccessPanelItem)
{
    
    ui->setupUi(this);
    ui->SubItemsWidget->setAutoFillBackground(true);
    Init(name, _itemsID, _status, thisID);
   // connect(ui->ButtonBack, SIGNAL(pressed()), this,SLOT(Back()) );

    
    
    
    
}


void QuickAccessPanelItem::Init(QString name, QList<int> _itemsID, Status _status, int _thisID){
    parent.push_front(QPair<Status, int>(status, thisID));
    itemsID = _itemsID;
    ui->Name->setText(name);
    status = _status;
    thisID = _thisID;

    qDebug() << 0 <<'\n';

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
        QSqlQuery *query;
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

}/*
void QuickAccessPanelItem::Back(){
   // parent.pop()
    DatabaseHelper dbHelper;
    QSqlQuery *query ;
    qDebug()<<0.7, endl;
    qDebug() << "p.second "<< p.second << endl;
    switch (status) {
    case college:

        query =  dbHelper.getSpesialty(" department = " + QString().number(p.second));
        qDebug() << 13.3 << endl;
        break;

    case department:
        query =  dbHelper.getGrup(" spesiality = " + QString().number(p.second));
        qDebug() << 13.4 << endl;
        break;

    case spesiality:
        query =  dbHelper.getStudent(" grup = " + QString().number(p.second));
        qDebug() << 13.5 << endl;
        break;
    }

    QList<int> listID;
    qDebug() << 14 << endl;
    //   if(query == nullptr) qDebug() << "!!!!!" << endl;;


    if(query->first()){
        qDebug() << 14.5 << endl;
        do{
            qDebug() << 15 << endl;
            listID.append(query->value("ID").toInt());
        }while (query->next());
    }else {qDebug() << 15.5 << endl;return;}
    switch (status) {
    case college:
        Init(p.first->text(), listID, QuickAccessPanelItem::Status::department, p.second);
        return;

    case department:
        Init(p.first->text(), listID, QuickAccessPanelItem::Status::spesiality, p.second);
        return;

    case spesiality:
        Init(p.first->text(), listID, QuickAccessPanelItem::Status::grup, p.second);
        return;
    }


}*/



void QuickAccessPanelItem::changeChild(){
    QuickAccessPanelItem *newItem;
    qDebug() << 13 << endl;

    for(QPair<QPushButton*, int> p : childs){
        if(QObject::sender() == p.first){
            DatabaseHelper dbHelper;
            QSqlQuery *query ;
            qDebug()<<0.7, endl;
            qDebug() << "p.second "<< p.second << endl;
            switch (status) {
            case college:

                query =  dbHelper.getSpesialty(" department = " + QString().number(p.second));
                qDebug() << 13.3 << endl;
                break;

            case department:
                query =  dbHelper.getGrup(" spesiality = " + QString().number(p.second));
                qDebug() << 13.4 << endl;
                break;

            case spesiality:
                query =  dbHelper.getStudent(" grup = " + QString().number(p.second));
                qDebug() << 13.5 << endl;
                break;
            }

            QList<int> listID;
            qDebug() << 14 << endl;
            //   if(query == nullptr) qDebug() << "!!!!!" << endl;;


            if(query->first()){
                qDebug() << 14.5 << endl;
                do{
                    qDebug() << 15 << endl;
                    listID.append(query->value("ID").toInt());
                }while (query->next());
            }else {qDebug() << 15.5 << endl;return;}
            switch (status) {
            case college:
                Init(p.first->text(), listID, QuickAccessPanelItem::Status::department, p.second);
                return;

            case department:
                Init(p.first->text(), listID, QuickAccessPanelItem::Status::spesiality, p.second);
                return;

            case spesiality:
                Init(p.first->text(), listID, QuickAccessPanelItem::Status::grup, p.second);
                return;
            }



            
        }
        
    }
    

    
}

QuickAccessPanelItem::~QuickAccessPanelItem()
{
    delete ui;
}
