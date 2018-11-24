#ifndef QuickAccessPanelItem_H
#define QuickAccessPanelItem_H
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
    Ui::QuickAccessPanelItem *ui;
};

#endif // QuickAccessPanelItem_H
