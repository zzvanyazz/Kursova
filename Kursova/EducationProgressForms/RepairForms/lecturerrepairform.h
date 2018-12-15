#ifndef LECTURERREPAIRFORM_H
#define LECTURERREPAIRFORM_H

#include <QWidget>

namespace Ui {
class LecturerRepairForm;
}

class LecturerRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit LecturerRepairForm(QWidget *parent = nullptr);
    ~LecturerRepairForm();
private slots:
    void deleteDepartment();
    void completed();
    void cancel();

private:
    QList<QPair<int, int>> lec;
    void setLecturer();
    Ui::LecturerRepairForm *ui;
};

#endif // LECTURERREPAIRFORM_H
