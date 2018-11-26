#ifndef SUBJECTINPUTFORM_H
#define SUBJECTINPUTFORM_H

#include <QWidget>
#include<QtWidgets>

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

private:
    Ui::SubjectInputForm *ui;
    QList<QLineEdit*> lines;
};

#endif // SUBJECTINPUTFORM_H
