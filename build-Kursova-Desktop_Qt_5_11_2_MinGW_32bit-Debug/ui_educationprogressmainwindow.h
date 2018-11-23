/********************************************************************************
** Form generated from reading UI file 'educationprogressmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUCATIONPROGRESSMAINWINDOW_H
#define UI_EDUCATIONPROGRESSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EducationProgressMainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EducationProgressMainWindow)
    {
        if (EducationProgressMainWindow->objectName().isEmpty())
            EducationProgressMainWindow->setObjectName(QStringLiteral("EducationProgressMainWindow"));
        EducationProgressMainWindow->resize(1074, 600);
        centralwidget = new QWidget(EducationProgressMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        EducationProgressMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EducationProgressMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1074, 25));
        EducationProgressMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EducationProgressMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EducationProgressMainWindow->setStatusBar(statusbar);

        retranslateUi(EducationProgressMainWindow);

        QMetaObject::connectSlotsByName(EducationProgressMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EducationProgressMainWindow)
    {
        EducationProgressMainWindow->setWindowTitle(QApplication::translate("EducationProgressMainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EducationProgressMainWindow: public Ui_EducationProgressMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONPROGRESSMAINWINDOW_H
