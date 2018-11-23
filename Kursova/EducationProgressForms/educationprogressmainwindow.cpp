#include "educationprogressmainwindow.h"
#include "ui_educationprogressmainwindow.h"

EducationProgressMainWindow::EducationProgressMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EducationProgressMainWindow)
{
    ui->setupUi(this);
}

EducationProgressMainWindow::~EducationProgressMainWindow()
{
    delete ui;
}
