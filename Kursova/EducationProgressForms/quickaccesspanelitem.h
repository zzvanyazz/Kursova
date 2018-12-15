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
    bool block = false;
    enum Status{college, department, spesiality, group};
    explicit QuickAccessPanelItem(QString name, Status status, int thisID, QWidget *parent = nullptr);
    ~QuickAccessPanelItem();
private slots:

    void changeChild();
    void Back();
    void Remove();
    void Reload();
signals:
void selected(int);




private:
    int thisID;
    QStack<QPair<Status, int>> parentList;
    QList<QPair<QPushButton*, int>> childs;
    QList<int> itemsID;
    DatabaseHelper dbHelper;
    Status status;

     void Init(QString name,  Status status,int thisID);


    Ui::QuickAccessPanelItem *ui;
};

#endif // QUICKACCESSPANELITEM_H
