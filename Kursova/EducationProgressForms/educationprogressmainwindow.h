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
    int currentGroup  = 0;



public:
    explicit EducationProgressMainWindow(QWidget *parent = nullptr);
    ~EducationProgressMainWindow();
private slots:

    void addItemQuickAccessPanel();
    void showAddDataWindow();
    void showTable(int);
void FormEducationChanged();
    void showMarkInputForm();
    void showRepairWindow();


private:
     QWidget *w2;
    QList<QuickAccessPanelItem*> QuickAccessItems;
     addDataWindow *w;


    Ui::EducationProgressMainWindow *ui;

};

#endif // EDUCATIONPROGRESSMAINWINDOW_H
