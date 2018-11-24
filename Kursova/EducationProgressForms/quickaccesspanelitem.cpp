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
    ui->SubItemsWidget->setAutoFillBackground(true);
    Init(name, _itemsID, _status);




}


void QuickAccessPanelItem::Init(QString name, QList<int> _itemsID, Status _status){
    itemsID = _itemsID;
    ui->Name->setText(name);
    status = _status;
    qDebug() << 0 <<'\n';
    /*  QWidget *w =  new QWidget(this);
    w->setLayout(new QVBoxLayout(w));
    ui->SubItemsWidget = w;
    w->show();
*/
    for(QPair<QPushButton*, int> p: childs){
        ui->SubItemsWidget->layout()->removeWidget(p.first);
        qDebug() << 0.5 <<'\n';
        p.first->hide();
        delete p.first;
    }
    childs.clear();

    if(status == college){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
            childs.append(QPair<QPushButton*, int>(pushButton, ID));
            connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getDepartment("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString();
            pushButton->setText(text);
            qDebug() << 1 <<'\n';
            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }else if(status == department){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
            childs.append(QPair<QPushButton*, int>(pushButton, ID));
            connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getSpesialty("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfSpesiality::name).toString();
            pushButton->setText(text);
            qDebug() << 2 <<'\n';

            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }else if(status == spesiality){
        for(int ID : itemsID){
            QPushButton* pushButton = new QPushButton(this);
            childs.append(QPair<QPushButton*, int>(pushButton, ID));
            connect(pushButton, SIGNAL (pressed()),this, SLOT (changeChild()));
            QString text = dbHelper.getGrup("ID = "+QString().number(ID))->value((int)DatabaseHelper::ColumnsOfGrup::number).toString();
            pushButton->setText(text);
            qDebug() << 3 <<'\n';

            ui->SubItemsWidget->layout()->addWidget(pushButton);
        }
    }
    qDebug() << 4 <<'\n';

}

void QuickAccessPanelItem::changeChild(){
    QuickAccessPanelItem *newItem;
    qDebug() << 13 << endl;
    if (status == college){
        for(QPair<QPushButton*, int> p : childs){
            if(QObject::sender() == p.first){
                DatabaseHelper dbHelper;
                QSqlQuery *query = dbHelper.getSpesialty(" department = " + QString().number(p.second));
                QList<int> listID;
                qDebug() << 14 << endl;
                if(query->first()){

                    do{
                        qDebug() << 15 << endl;
                        listID.append(query->value((int)DatabaseHelper::ColumnsOfSpesiality::ID).toInt());
                    }while (query->next());
                }
                Init(p.first->text(), listID, QuickAccessPanelItem::Status::department );
                return;

            }

        }
    }
    else if (status == department){
        for(QPair<QPushButton*, int> p : childs){
            if(QObject::sender() == p.first){
                DatabaseHelper dbHelper;
                QSqlQuery *query = dbHelper.getGrup(" spesiality = " + QString().number(p.second));
                QList<int> listID;
                qDebug() << 14 << endl;
                if(query->first()){

                    do{
                        qDebug() << 15 << endl;
                        listID.append(query->value((int)DatabaseHelper::ColumnsOfSpesiality::ID).toInt());
                    }while (query->next());
                }
                Init(p.first->text(), listID, QuickAccessPanelItem::Status::department );
                return;

            }

        }
    }

}

QuickAccessPanelItem::~QuickAccessPanelItem()
{
    delete ui;
}
