#ifndef EDUCATIONPROGRESSMAINWINDOW_H
#define EDUCATIONPROGRESSMAINWINDOW_H
#include <databasehelper.h>
#include <QMainWindow>
#include <EducationProgressForms/quickaccesspanelitem.h>
#include <EducationProgressForms/adddatawindow.h>
#include<QDialog>
#include<QStandardItemModel>
#include<QSqlQueryModel>
namespace Ui {
class EducationProgressMainWindow;
}

class EducationProgressMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EducationProgressMainWindow(QWidget *parent = nullptr);
    ~EducationProgressMainWindow();
private slots:

    void addItemQuickAccessPanel();
    void showAddDataWindow();
    void showTable();
    void showMarkInputForm();

private:
    QList<QuickAccessPanelItem*> QuickAccessItems;
     addDataWindow *w;
    DatabaseHelper dbHelper;
    Ui::EducationProgressMainWindow *ui;
    QSqlQueryModel *model;
};

#endif // EDUCATIONPROGRESSMAINWINDOW_H
