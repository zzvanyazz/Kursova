#ifndef STUDENRINPUTFORM_H
#define STUDENRINPUTFORM_H

#include <QWidget>
#include<QSqlQuery>
#include<databasehelper.h>

namespace Ui {
class StudenrInputForm;
}

class StudenrInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit StudenrInputForm(QWidget *parent = nullptr);
    ~StudenrInputForm();
private slots:
    void completed();
    void cancel();

private:
    Ui::StudenrInputForm *ui;
    DatabaseHelper dbHelper;
};

#endif // STUDENRINPUTFORM_H
