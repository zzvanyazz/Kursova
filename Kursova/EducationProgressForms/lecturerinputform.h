#ifndef LECTURERINPUTFORM_H
#define LECTURERINPUTFORM_H

#include <QWidget>

namespace Ui {
class LecturerInputForm;
}

class LecturerInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit LecturerInputForm(QWidget *parent = nullptr);
    ~LecturerInputForm();
private slots:
    void completed();
    void cancel();

private:
    Ui::LecturerInputForm *ui;
};

#endif // LECTURERINPUTFORM_H
