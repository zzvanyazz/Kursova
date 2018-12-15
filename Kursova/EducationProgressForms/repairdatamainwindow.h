#ifndef REPAIRDATAMAINWINDOW_H
#define REPAIRDATAMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class RepairDataMainWindow;
}

class RepairDataMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RepairDataMainWindow(QWidget *parent = nullptr);
    ~RepairDataMainWindow();
private slots:
void setRepairForms();

private:
    Ui::RepairDataMainWindow *ui;
};

#endif // REPAIRDATAMAINWINDOW_H
