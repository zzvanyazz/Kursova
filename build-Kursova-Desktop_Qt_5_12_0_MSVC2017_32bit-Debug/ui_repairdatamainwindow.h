/********************************************************************************
** Form generated from reading UI file 'repairdatamainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIRDATAMAINWINDOW_H
#define UI_REPAIRDATAMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RepairDataMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *Menu;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ButtonRepairDepartment;
    QPushButton *ButtonRepairSpeciality;
    QPushButton *ButtonRepairGroup;
    QPushButton *ButtonRepairStudent;
    QPushButton *ButtonRepairLecturer;
    QPushButton *ButtonRepairSubject;

    void setupUi(QMainWindow *RepairDataMainWindow)
    {
        if (RepairDataMainWindow->objectName().isEmpty())
            RepairDataMainWindow->setObjectName(QString::fromUtf8("RepairDataMainWindow"));
        RepairDataMainWindow->resize(600, 400);
        RepairDataMainWindow->setMinimumSize(QSize(600, 400));
        RepairDataMainWindow->setMaximumSize(QSize(600, 400));
        RepairDataMainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(RepairDataMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        Menu = new QWidget(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);\n"
"background-color: rgb(51, 51, 51);"));
        verticalLayout_2 = new QVBoxLayout(Menu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ButtonRepairDepartment = new QPushButton(Menu);
        ButtonRepairDepartment->setObjectName(QString::fromUtf8("ButtonRepairDepartment"));
        ButtonRepairDepartment->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonRepairDepartment->sizePolicy().hasHeightForWidth());
        ButtonRepairDepartment->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        ButtonRepairDepartment->setFont(font);
        ButtonRepairDepartment->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17017 rgba(0, 27, 72, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(105, 12, 137, 255));\n"
"font: 10pt \"Rockwell\";"));
        ButtonRepairDepartment->setAutoDefault(false);
        ButtonRepairDepartment->setFlat(false);

        verticalLayout_2->addWidget(ButtonRepairDepartment);

        ButtonRepairSpeciality = new QPushButton(Menu);
        ButtonRepairSpeciality->setObjectName(QString::fromUtf8("ButtonRepairSpeciality"));
        ButtonRepairSpeciality->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonRepairSpeciality->sizePolicy().hasHeightForWidth());
        ButtonRepairSpeciality->setSizePolicy(sizePolicy);
        ButtonRepairSpeciality->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.171853 rgba(8, 72, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(0, 27, 72, 255));\n"
"font: 10pt \"Rockwell\";\n"
""));

        verticalLayout_2->addWidget(ButtonRepairSpeciality);

        ButtonRepairGroup = new QPushButton(Menu);
        ButtonRepairGroup->setObjectName(QString::fromUtf8("ButtonRepairGroup"));
        ButtonRepairGroup->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonRepairGroup->sizePolicy().hasHeightForWidth());
        ButtonRepairGroup->setSizePolicy(sizePolicy);
        ButtonRepairGroup->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17282 rgba(72, 71, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(0, 72, 15, 255));"));

        verticalLayout_2->addWidget(ButtonRepairGroup);

        ButtonRepairStudent = new QPushButton(Menu);
        ButtonRepairStudent->setObjectName(QString::fromUtf8("ButtonRepairStudent"));
        ButtonRepairStudent->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonRepairStudent->sizePolicy().hasHeightForWidth());
        ButtonRepairStudent->setSizePolicy(sizePolicy);
        ButtonRepairStudent->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17282 rgba(72, 43, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(72, 71, 0, 255));"));

        verticalLayout_2->addWidget(ButtonRepairStudent);

        ButtonRepairLecturer = new QPushButton(Menu);
        ButtonRepairLecturer->setObjectName(QString::fromUtf8("ButtonRepairLecturer"));
        ButtonRepairLecturer->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonRepairLecturer->sizePolicy().hasHeightForWidth());
        ButtonRepairLecturer->setSizePolicy(sizePolicy);
        ButtonRepairLecturer->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.865, x2:0.702, y2:1, stop:0 rgba(0, 72, 65, 255), stop:1 rgba(0, 0, 0, 255));"));

        verticalLayout_2->addWidget(ButtonRepairLecturer);

        ButtonRepairSubject = new QPushButton(Menu);
        ButtonRepairSubject->setObjectName(QString::fromUtf8("ButtonRepairSubject"));
        ButtonRepairSubject->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonRepairSubject->sizePolicy().hasHeightForWidth());
        ButtonRepairSubject->setSizePolicy(sizePolicy);
        ButtonRepairSubject->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.865, x2:0.702, y2:1, stop:0 rgba(0, 72, 65, 255), stop:1 rgba(0, 0, 0, 255));"));

        verticalLayout_2->addWidget(ButtonRepairSubject);


        verticalLayout->addWidget(Menu);

        RepairDataMainWindow->setCentralWidget(centralwidget);

        retranslateUi(RepairDataMainWindow);

        ButtonRepairDepartment->setDefault(false);


        QMetaObject::connectSlotsByName(RepairDataMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RepairDataMainWindow)
    {
        RepairDataMainWindow->setWindowTitle(QApplication::translate("RepairDataMainWindow", "MainWindow", nullptr));
        ButtonRepairDepartment->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\262\321\226\320\264\320\264\321\226\320\273\320\265\320\275\320\275\321\217", nullptr));
        ButtonRepairSpeciality->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \321\201\320\277\320\265\321\206\321\226\320\260\320\273\321\214\320\275\321\226\321\201\321\202\321\214", nullptr));
        ButtonRepairGroup->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\263\321\200\321\203\320\277\321\203", nullptr));
        ButtonRepairStudent->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        ButtonRepairLecturer->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\262\320\270\320\272\320\273\320\260\320\264\320\260\321\207\320\260", nullptr));
        ButtonRepairSubject->setText(QApplication::translate("RepairDataMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RepairDataMainWindow: public Ui_RepairDataMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIRDATAMAINWINDOW_H
