#ifndef MARKINPUTFORM_H
#define MARKINPUTFORM_H

#include <QWidget>
#include <databasehelper.h>
#include<EducationProgressForms/quickaccesspanelitem.h>

namespace Ui {
class MarkInputForm;
}

class MarkInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit MarkInputForm(QWidget *parent = nullptr);
    ~MarkInputForm();
public slots:
    void studentSelected(int);


private:
    DatabaseHelper dbHelper;
    Ui::MarkInputForm *ui;
    QuickAccessPanelItem *panel;
};

#endif // MARKINPUTFORM_H
