#ifndef SUBJECTREPAIRFORM_H
#define SUBJECTREPAIRFORM_H

#include <QWidget>

namespace Ui {
class SubjectRepairForm;
}

class SubjectRepairForm : public QWidget
{
    Q_OBJECT

public:
    explicit SubjectRepairForm(QWidget *parent = nullptr);
    ~SubjectRepairForm();

private slots:
    void deleteDepartment();
    void completed();
    void cancel();

private:
    QList<QPair<int, int>> sub;
    void setSubject();
    Ui::SubjectRepairForm *ui;
};

#endif // SUBJECTREPAIRFORM_H
