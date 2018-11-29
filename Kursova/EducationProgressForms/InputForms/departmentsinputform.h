#ifndef DEPARTMENTSINPUTFORM_H
#define DEPARTMENTSINPUTFORM_H

#include <QWidget>
#include<QtWidgets>
#include <databasehelper.h>
namespace Ui {
class DepartmentsInputForm;
}

class DepartmentsInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit DepartmentsInputForm(QWidget *parent = nullptr);
    ~DepartmentsInputForm();
private slots:
    void completed();
    void cancel();
    void departmentValueChanged(int);

private:
    DatabaseHelper dbHelper;
    QList<QLineEdit*> lines;
    Ui::DepartmentsInputForm *ui;
};

#endif // DEPARTMENTSINPUTFORM_H
