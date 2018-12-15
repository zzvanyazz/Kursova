#ifndef STUDENTREPAIRFORM_H
#define STUDENTREPAIRFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class StudentRepairForm;
}

class StudentRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit StudentRepairForm(QWidget *parent = nullptr);
    ~StudentRepairForm();
private slots:
    void deleteStudent();
    void completed();
    void cancel();
private:
    void setStudent();
     QList<QPair<int, int>> stu;
    Ui::StudentRepairForm *ui;
};

#endif // STUDENTREPAIRFORM_H
