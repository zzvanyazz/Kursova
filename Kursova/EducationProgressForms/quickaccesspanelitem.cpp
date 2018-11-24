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
        QString text = [&](){
            switch (status) {
            case college:
                return dbHelper.getDepartment("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();

            case department:
                return dbHelper.getSpesialty("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString();

            case spesiality:
                return dbHelper.getGrup("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfGrup::number).toString();
            }

        }();
        pushButton->setText(text);
        qDebug() << 1 <<'\n';
        ui->SubItemsWidget->layout()->addWidget(pushButton);
    }

}



void QuickAccessPanelItem::changeChild(){
    QuickAccessPanelItem *newItem;
    qDebug() << 13 << endl;

    for(QPair<QPushButton*, int> p : childs){
        if(QObject::sender() == p.first){
            DatabaseHelper dbHelper;
            QSqlQuery *query = [&](){
                switch (status) {
                case college:
                    return dbHelper.getSpesialty(" department = " + QString().number(p.second));

                case department:
                    return dbHelper.getGrup(" spesialty = " + QString().number(p.second));

                case spesiality:
                    return dbHelper.getStudent(" grup = " + QString().number(p.second));
                }
            }();
            QList<int> listID;
            qDebug() << 14 << endl;
            if(query->first()){
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
