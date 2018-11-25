/********************************************************************************
** Form generated from reading UI file 'adddatawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATAWINDOW_H
#define UI_ADDDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDataWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addDataWindow)
    {
        if (addDataWindow->objectName().isEmpty())
            addDataWindow->setObjectName(QStringLiteral("addDataWindow"));
        addDataWindow->resize(441, 290);
        centralwidget = new QWidget(addDataWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addDataWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addDataWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 441, 20));
        addDataWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(addDataWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        addDataWindow->setStatusBar(statusbar);

        retranslateUi(addDataWindow);

        QMetaObject::connectSlotsByName(addDataWindow);
    } // setupUi

    void retranslateUi(QMainWindow *addDataWindow)
    {
        addDataWindow->setWindowTitle(QApplication::translate("addDataWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDataWindow: public Ui_addDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATAWINDOW_H
