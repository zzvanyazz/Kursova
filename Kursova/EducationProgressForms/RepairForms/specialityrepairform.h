#ifndef SPECIALITYREPAIRFORM_H
#define SPECIALITYREPAIRFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class SpecialityRepairForm;
}

class SpecialityRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit SpecialityRepairForm(QWidget *parent = nullptr);
    ~SpecialityRepairForm();
private slots:
    void deleteDepartment();
    void completed();
    void cancel();
private:
    QList<QPair<int, int>> spe;
    void setSpesiality();
    Ui::SpecialityRepairForm *ui;
};

#endif // SPECIALITYREPAIRFORM_H
