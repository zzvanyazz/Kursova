#ifndef GROUPINPUTFORM_H
#define GROUPINPUTFORM_H

#include <QWidget>

namespace Ui {
class GroupInputForm;
}

class GroupInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit GroupInputForm(QWidget *parent = nullptr);
    ~GroupInputForm();
private slots:
    void completed();
    void cancel();

private:
    Ui::GroupInputForm *ui;
};

#endif // GROUPINPUTFORM_H
