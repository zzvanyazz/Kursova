#ifndef ADDDATAWINDOW_H
#define ADDDATAWINDOW_H

#include <QMainWindow>

namespace Ui {
class addDataWindow;
}

class addDataWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addDataWindow(QWidget *parent = nullptr);
    ~addDataWindow();

private:
    Ui::addDataWindow *ui;
};

#endif // ADDDATAWINDOW_H
