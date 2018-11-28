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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EducationProgressMainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *QuickAccessContainer;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SearchLine;
    QPushButton *ButtonAddPanelItem;
    QWidget *QuickAccessPanel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QWidget *FunctionalPanelConteiner;
    QVBoxLayout *verticalLayout_2;
    QWidget *FunctionalPanel;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *CheckFormOfEducation;
    QPushButton *ButtonShowAddWindow;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EducationProgressMainWindow)
    {
        if (EducationProgressMainWindow->objectName().isEmpty())
            EducationProgressMainWindow->setObjectName(QStringLiteral("EducationProgressMainWindow"));
        EducationProgressMainWindow->resize(1074, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EducationProgressMainWindow->sizePolicy().hasHeightForWidth());
        EducationProgressMainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(EducationProgressMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        QuickAccessContainer = new QWidget();
        QuickAccessContainer->setObjectName(QStringLiteral("QuickAccessContainer"));
        QuickAccessContainer->setGeometry(QRect(0, 0, 221, 526));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(QuickAccessContainer->sizePolicy().hasHeightForWidth());
        QuickAccessContainer->setSizePolicy(sizePolicy2);
        QuickAccessContainer->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(QuickAccessContainer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(QuickAccessContainer);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        SearchLine = new QLineEdit(widget);
        SearchLine->setObjectName(QStringLiteral("SearchLine"));
        sizePolicy2.setHeightForWidth(SearchLine->sizePolicy().hasHeightForWidth());
        SearchLine->setSizePolicy(sizePolicy2);
        SearchLine->setEchoMode(QLineEdit::Normal);
        SearchLine->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout_2->addWidget(SearchLine);

        ButtonAddPanelItem = new QPushButton(widget);
        ButtonAddPanelItem->setObjectName(QStringLiteral("ButtonAddPanelItem"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ButtonAddPanelItem->sizePolicy().hasHeightForWidth());
        ButtonAddPanelItem->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(ButtonAddPanelItem);


        verticalLayout_3->addWidget(widget);

        QuickAccessPanel = new QWidget(QuickAccessContainer);
        QuickAccessPanel->setObjectName(QStringLiteral("QuickAccessPanel"));
        sizePolicy1.setHeightForWidth(QuickAccessPanel->sizePolicy().hasHeightForWidth());
        QuickAccessPanel->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(QuickAccessPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, -1, -1);

        verticalLayout_3->addWidget(QuickAccessPanel);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(QuickAccessContainer);

        horizontalLayout->addWidget(scrollArea);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(4);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(widget_2);

        FunctionalPanelConteiner = new QWidget(centralwidget);
        FunctionalPanelConteiner->setObjectName(QStringLiteral("FunctionalPanelConteiner"));
        sizePolicy1.setHeightForWidth(FunctionalPanelConteiner->sizePolicy().hasHeightForWidth());
        FunctionalPanelConteiner->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(FunctionalPanelConteiner);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        FunctionalPanel = new QWidget(FunctionalPanelConteiner);
        FunctionalPanel->setObjectName(QStringLiteral("FunctionalPanel"));
        verticalLayout_4 = new QVBoxLayout(FunctionalPanel);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        CheckFormOfEducation = new QCheckBox(FunctionalPanel);
        CheckFormOfEducation->setObjectName(QStringLiteral("CheckFormOfEducation"));

        verticalLayout_4->addWidget(CheckFormOfEducation);

        ButtonShowAddWindow = new QPushButton(FunctionalPanel);
        ButtonShowAddWindow->setObjectName(QStringLiteral("ButtonShowAddWindow"));

        verticalLayout_4->addWidget(ButtonShowAddWindow);


        verticalLayout_2->addWidget(FunctionalPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(FunctionalPanelConteiner);

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
        ButtonAddPanelItem->setText(QApplication::translate("EducationProgressMainWindow", "+", nullptr));
        CheckFormOfEducation->setText(QApplication::translate("EducationProgressMainWindow", "\320\233\320\270\321\210\320\265 \320\264\320\265\321\200\320\266\320\260\320\262\320\275\320\270\320\272\320\270", nullptr));
        ButtonShowAddWindow->setText(QApplication::translate("EducationProgressMainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EducationProgressMainWindow: public Ui_EducationProgressMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONPROGRESSMAINWINDOW_H
