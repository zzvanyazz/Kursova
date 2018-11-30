#ifndef SUBJECTINPUTFORM_H
#define SUBJECTINPUTFORM_H

#include <QWidget>
#include<QtWidgets>
#include <databasehelper.h>
namespace Ui {
class SubjectInputForm;
}

class SubjectInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit SubjectInputForm(QWidget *parent = nullptr);
    ~SubjectInputForm();
private slots:
    void completed();
    void cancel();
    void subjectValueChanged(int);

private:
    DatabaseHelper dbHelper;
    Ui::SubjectInputForm *ui;
    QList<QLineEdit*> lines;
};

#endif // SUBJECTINPUTFORM_H
