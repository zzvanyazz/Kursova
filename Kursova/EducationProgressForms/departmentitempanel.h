#ifndef DEPARTMENTITEMPANEL_H
#define DEPARTMENTITEMPANEL_H
#include <databasehelper.h>
#include <QWidget>

namespace Ui {
class DepartmentItemPanel;
}

class DepartmentItemPanel : public QWidget
{
    Q_OBJECT
    DatabaseHelper dbHelper;

public:
     enum Status{college, department, spesiality};
    explicit DepartmentItemPanel(QString name, QList<int> itemsID, Status status, QWidget *parent = nullptr);
    ~DepartmentItemPanel();

private:

     QList<int> itemsID;

     Status status;
    Ui::DepartmentItemPanel *ui;
};

#endif // DEPARTMENTITEMPANEL_H
