#ifndef EDUCATIONPROGRESSMAINWINDOW_H
#define EDUCATIONPROGRESSMAINWINDOW_H
#include <databasehelper.h>
#include <QMainWindow>
#include <EducationProgressForms/adddatawindow.h>
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


private:
     addDataWindow *w;
    DatabaseHelper dbHelper;
    Ui::EducationProgressMainWindow *ui;
};

#endif // EDUCATIONPROGRESSMAINWINDOW_H
