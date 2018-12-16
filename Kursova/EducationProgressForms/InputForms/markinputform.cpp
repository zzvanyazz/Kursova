#include "markinputform.h"
#include "ui_markinputform.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
MarkInputForm::MarkInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarkInputForm)
{
    ui->setupUi(this);
    panel = new QuickAccessPanelItem("College",  QuickAccessPanelItem::Status::college,0, ui->QuicAccessPanelItem );
    panel->block =true;
    connect(ui->buttonOk, &QPushButton::pressed, this, &MarkInputForm::completed);
    connect(ui->ButtonCancel, &QPushButton::pressed, this, &MarkInputForm::completed);
    connect(panel,&QuickAccessPanelItem::selected,this,&MarkInputForm::groupSelected);
    ui->QuicAccessPanelItem->layout()->addWidget(panel);

}

MarkInputForm::~MarkInputForm()
{
    delete ui;
}
void MarkInputForm::groupSelected(int id){
    currentGroup = id;
    QSqlQuery*  subjects = dbHelper.getSubject();

    QSqlQuery *student = dbHelper.getStudent("grup = "+QString().number(id));
    ui->studentscomboBox->clear();
    if(student->first()){
        do{

            ui->studentscomboBox->addItem( student->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString()+ " "
                                           +student->value((int)DatabaseHelper::ColumnsOfStudent::name).toString(),
                                           student->value((int)DatabaseHelper::ColumnsOfStudent::ID));


        }while(student->next());

    }else return;

    for(QPair<QLineEdit*, int> e:lines){
        e.first->parentWidget()->hide();

        delete e.first->parentWidget();

    }
    lines.clear();
    if(subjects->first()){
        do{

            QWidget *w = new QWidget();
            QHBoxLayout *p=new QHBoxLayout();
            QLabel *text=new QLabel();
            QLineEdit *line = new QLineEdit(w);
            line->setValidator( new QIntValidator);
            lines.push_back(QPair<QLineEdit*, int>(line, subjects->value(0).toInt()));
            QSqlQuery *sub = dbHelper.getSubject("ID = " + subjects->value(0).toString());
            sub->first();
            text->setText(sub->value((int)DatabaseHelper::ColumnsOfSubject::name).toString());
            p->addWidget(text);
            p->addWidget(line);
            w->setLayout(p);
            ui->scrollAreaWidgetContents->layout()->addWidget(w);
        }while(subjects->next());
    }else{}
    QSqlQuery marks = dbHelper.exec("SELECT * FROM education_progress WHERE student = "+QString().number( ui->studentscomboBox->currentData().toInt()) +
                                    " and semester = " + QString().number(ui->comboBoxSemester->currentIndex()));
    if (marks.first()){
        do{

            for( QPair<QLineEdit*, int> l : lines){
                if (l.second == marks.value((int)DatabaseHelper::ColumnsOfEducationProgress::subject).toInt()){
                    l.first->setText(marks.value((int)DatabaseHelper::ColumnsOfEducationProgress::mark).toString());

                }
            }

        }while (marks.next()) ;


    }
}

void MarkInputForm::completed(){
    dbHelper.exec("DELETE FROM education_progress WHERE student = "+ui->studentscomboBox->currentData().toString());
    for(QPair<QLineEdit*, int> l : lines){
        if(!l.first->text().isEmpty()){
            dbHelper.addMark(ui->studentscomboBox->currentData().toInt(), currentGroup, ui->comboBoxSemester->currentIndex(), l.second, l.first->text().toInt());
            l.first->clear();
        }
    }
}
