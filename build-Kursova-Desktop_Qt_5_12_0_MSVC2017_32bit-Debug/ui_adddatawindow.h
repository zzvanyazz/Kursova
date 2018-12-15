/********************************************************************************
** Form generated from reading UI file 'adddatawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATAWINDOW_H
#define UI_ADDDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDataWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *Menu;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ButtonAddDepartment;
    QPushButton *ButtonAddSpeciality;
    QPushButton *ButtonAddGroup;
    QPushButton *ButtonAddStudent;
    QPushButton *ButtonAddLecturer;
    QPushButton *ButtonAddSubject;

    void setupUi(QMainWindow *addDataWindow)
    {
        if (addDataWindow->objectName().isEmpty())
            addDataWindow->setObjectName(QString::fromUtf8("addDataWindow"));
        addDataWindow->resize(600, 400);
        addDataWindow->setMinimumSize(QSize(600, 400));
        addDataWindow->setMaximumSize(QSize(600, 400));
        addDataWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(addDataWindow);
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
        ButtonAddDepartment = new QPushButton(Menu);
        ButtonAddDepartment->setObjectName(QString::fromUtf8("ButtonAddDepartment"));
        ButtonAddDepartment->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonAddDepartment->sizePolicy().hasHeightForWidth());
        ButtonAddDepartment->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        ButtonAddDepartment->setFont(font);
        ButtonAddDepartment->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17017 rgba(0, 27, 72, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(105, 12, 137, 255));\n"
"font: 10pt \"Rockwell\";"));
        ButtonAddDepartment->setAutoDefault(false);
        ButtonAddDepartment->setFlat(false);

        verticalLayout_2->addWidget(ButtonAddDepartment);

        ButtonAddSpeciality = new QPushButton(Menu);
        ButtonAddSpeciality->setObjectName(QString::fromUtf8("ButtonAddSpeciality"));
        ButtonAddSpeciality->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonAddSpeciality->sizePolicy().hasHeightForWidth());
        ButtonAddSpeciality->setSizePolicy(sizePolicy);
        ButtonAddSpeciality->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.171853 rgba(8, 72, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(0, 27, 72, 255));\n"
"font: 10pt \"Rockwell\";\n"
""));

        verticalLayout_2->addWidget(ButtonAddSpeciality);

        ButtonAddGroup = new QPushButton(Menu);
        ButtonAddGroup->setObjectName(QString::fromUtf8("ButtonAddGroup"));
        ButtonAddGroup->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonAddGroup->sizePolicy().hasHeightForWidth());
        ButtonAddGroup->setSizePolicy(sizePolicy);
        ButtonAddGroup->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17282 rgba(72, 71, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(0, 72, 15, 255));"));

        verticalLayout_2->addWidget(ButtonAddGroup);

        ButtonAddStudent = new QPushButton(Menu);
        ButtonAddStudent->setObjectName(QString::fromUtf8("ButtonAddStudent"));
        ButtonAddStudent->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonAddStudent->sizePolicy().hasHeightForWidth());
        ButtonAddStudent->setSizePolicy(sizePolicy);
        ButtonAddStudent->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0.372, stop:0.17282 rgba(72, 43, 0, 255), stop:0.371371 rgba(0, 0, 0, 255), stop:0.668669 rgba(4, 0, 5, 255), stop:1 rgba(72, 71, 0, 255));"));

        verticalLayout_2->addWidget(ButtonAddStudent);

        ButtonAddLecturer = new QPushButton(Menu);
        ButtonAddLecturer->setObjectName(QString::fromUtf8("ButtonAddLecturer"));
        ButtonAddLecturer->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonAddLecturer->sizePolicy().hasHeightForWidth());
        ButtonAddLecturer->setSizePolicy(sizePolicy);
        ButtonAddLecturer->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.865, x2:0.702, y2:1, stop:0 rgba(0, 72, 65, 255), stop:1 rgba(0, 0, 0, 255));"));

        verticalLayout_2->addWidget(ButtonAddLecturer);

        ButtonAddSubject = new QPushButton(Menu);
        ButtonAddSubject->setObjectName(QString::fromUtf8("ButtonAddSubject"));
        ButtonAddSubject->setEnabled(true);
        sizePolicy.setHeightForWidth(ButtonAddSubject->sizePolicy().hasHeightForWidth());
        ButtonAddSubject->setSizePolicy(sizePolicy);
        ButtonAddSubject->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.865, x2:0.702, y2:1, stop:0 rgba(0, 72, 65, 255), stop:1 rgba(0, 0, 0, 255));"));

        verticalLayout_2->addWidget(ButtonAddSubject);


        verticalLayout->addWidget(Menu);

        addDataWindow->setCentralWidget(centralwidget);

        retranslateUi(addDataWindow);

        ButtonAddDepartment->setDefault(false);


        QMetaObject::connectSlotsByName(addDataWindow);
    } // setupUi

    void retranslateUi(QMainWindow *addDataWindow)
    {
        addDataWindow->setWindowTitle(QApplication::translate("addDataWindow", "MainWindow", nullptr));
        ButtonAddDepartment->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\262\321\226\320\264\320\264\321\226\320\273\320\265\320\275\320\275\321\217", nullptr));
        ButtonAddSpeciality->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\201\320\277\320\265\321\206\321\226\320\260\320\273\321\214\320\275\321\226\321\201\321\202\321\214", nullptr));
        ButtonAddGroup->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\263\321\200\321\203\320\277\321\203", nullptr));
        ButtonAddStudent->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        ButtonAddLecturer->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\262\320\270\320\272\320\273\320\260\320\264\320\260\321\207\320\260", nullptr));
        ButtonAddSubject->setText(QApplication::translate("addDataWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDataWindow: public Ui_addDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATAWINDOW_H
