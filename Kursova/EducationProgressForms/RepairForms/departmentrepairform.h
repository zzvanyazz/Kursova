#ifndef DEPARTMENTREPAIRFORM_H
#define DEPARTMENTREPAIRFORM_H

#include <QWidget>
#include <databasehelper.h>

namespace Ui {
class DepartmentRepairForm;
}

class DepartmentRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit DepartmentRepairForm(QWidget *parent = nullptr);
    ~DepartmentRepairForm();

private slots:
    void deleteDepartment();
    void completed();
    void cancel();

private:
    QList<QPair<int, int>> dep;
    void setDepartments();
    Ui::DepartmentRepairForm *ui;
};

#endif // DEPARTMENTREPAIRFORM_H
