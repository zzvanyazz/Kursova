#include "adddatawindow.h"
#include "ui_adddatawindow.h"

addDataWindow::addDataWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addDataWindow)
{
    ui->setupUi(this);
}

addDataWindow::~addDataWindow()
{
    delete ui;
}
