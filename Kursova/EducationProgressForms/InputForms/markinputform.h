#ifndef MARKINPUTFORM_H
#define MARKINPUTFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class MarkInputForm;
}

class MarkInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit MarkInputForm(QWidget *parent = nullptr);
    ~MarkInputForm();

private:
    DatabaseHelper dbHelper;
    Ui::MarkInputForm *ui;
};

#endif // MARKINPUTFORM_H
