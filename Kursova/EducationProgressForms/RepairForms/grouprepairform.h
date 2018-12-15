#ifndef GROUPREPAIRFORM_H
#define GROUPREPAIRFORM_H

#include <QWidget>

namespace Ui {
class GroupRepairForm;
}

class GroupRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit GroupRepairForm(QWidget *parent = nullptr);
    ~GroupRepairForm();

private slots:
    void deleteDepartment();
    void completed();
    void cancel();
private:
    QList<QPair<int, int>> gru;
    void setGroup();
    Ui::GroupRepairForm *ui;
};

#endif // GROUPREPAIRFORM_H
