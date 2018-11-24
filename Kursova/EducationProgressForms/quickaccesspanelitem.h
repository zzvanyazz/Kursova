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
    enum Status{college, department, spesiality};
    explicit QuickAccessPanelItem(QString name, QList<int> itemsID, Status status, QWidget *parent = nullptr);
    ~QuickAccessPanelItem();
private slots:

    void changeChild();

private:
    QList<QPair<QPushButton*, int>> childs;
    QList<int> itemsID;
    DatabaseHelper dbHelper;
    Status status;


     void Init(QString name, QList<int> itemsID, Status status);


    Ui::QuickAccessPanelItem *ui;
};

#endif // QUICKACCESSPANELITEM_H
