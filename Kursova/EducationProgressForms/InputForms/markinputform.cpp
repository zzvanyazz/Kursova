#include "markinputform.h"
#include "ui_markinputform.h"
#include <QSqlQuery>
MarkInputForm::MarkInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarkInputForm)
{
    ui->setupUi(this);


    //QSqlQuery departments = dbHelper.get
}

MarkInputForm::~MarkInputForm()
{
    delete ui;
}
