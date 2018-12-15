

#ifndef SPECIALIYINPUTFORM_H
#define SPECIALIYINPUTFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class SpecialiyInputForm;
}

class SpecialiyInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit SpecialiyInputForm(QWidget *parent = nullptr);
    ~SpecialiyInputForm();
private slots:
    void completed();
    void cancel();

private:

    QList<QPair<int, int>> departments;
    Ui::SpecialiyInputForm *ui;
};

#endif // SPECIALIYINPUTFORM_H
