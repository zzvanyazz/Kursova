#ifndef QUICKACCESSPANELITEM_H
#define QUICKACCESSPANELITEM_H
#include <databasehelper.h>
#include <QWidget>
#include <QPushButton>
#include <QPair>

namespace Ui {
class QuickAccessPanelItem;
}

class QuickAccessPanelItem : public QWidget
{
    Q_OBJECT


public:
    enum Status{college, department, spesiality, grup};
    explicit QuickAccessPanelItem(QString name, QList<int> itemsID, Status status, int thisID, QWidget *parent = nullptr);
    ~QuickAccessPanelItem();
private slots:

    void changeChild();
    //void Back();

private:
    int thisID;
    QStack<QPair<Status, int>> parent;
    QList<QPair<QPushButton*, int>> childs;
    QList<int> itemsID;
    DatabaseHelper dbHelper;
    Status status;


     void Init(QString name, QList<int> itemsID, Status status,int thisID);


    Ui::QuickAccessPanelItem *ui;
};

#endif // QUICKACCESSPANELITEM_H
