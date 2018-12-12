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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QWidget *EducationPregressWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *InfoWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelGrup;
    QLabel *name_grup;
    QLabel *labelCurator;
    QLabel *name_curator;
    QWidget *TableConteiner;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView;
    QWidget *FunctionalPanelConteiner;
    QVBoxLayout *verticalLayout_2;
    QWidget *FunctionalPanel;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *CheckFormOfEducation;
    QPushButton *ButtonShowAddWindow2;
    QPushButton *ButtonShowInpuMarksForm;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EducationProgressMainWindow)
    {
        if (EducationProgressMainWindow->objectName().isEmpty())
            EducationProgressMainWindow->setObjectName(QStringLiteral("EducationProgressMainWindow"));
        EducationProgressMainWindow->resize(975, 518);
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
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        QuickAccessContainer = new QWidget();
        QuickAccessContainer->setObjectName(QStringLiteral("QuickAccessContainer"));
        QuickAccessContainer->setGeometry(QRect(0, 0, 216, 456));
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
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(QuickAccessPanel->sizePolicy().hasHeightForWidth());
        QuickAccessPanel->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(QuickAccessPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, -1, -1);
        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addWidget(QuickAccessPanel);

        scrollArea->setWidget(QuickAccessContainer);

        horizontalLayout->addWidget(scrollArea);

        EducationPregressWidget = new QWidget(centralwidget);
        EducationPregressWidget->setObjectName(QStringLiteral("EducationPregressWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(EducationPregressWidget->sizePolicy().hasHeightForWidth());
        EducationPregressWidget->setSizePolicy(sizePolicy6);
        verticalLayout_6 = new QVBoxLayout(EducationPregressWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        InfoWidget = new QWidget(EducationPregressWidget);
        InfoWidget->setObjectName(QStringLiteral("InfoWidget"));
        sizePolicy.setHeightForWidth(InfoWidget->sizePolicy().hasHeightForWidth());
        InfoWidget->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(InfoWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        labelGrup = new QLabel(InfoWidget);
        labelGrup->setObjectName(QStringLiteral("labelGrup"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelGrup->sizePolicy().hasHeightForWidth());
        labelGrup->setSizePolicy(sizePolicy7);

        horizontalLayout_3->addWidget(labelGrup);

        name_grup = new QLabel(InfoWidget);
        name_grup->setObjectName(QStringLiteral("name_grup"));

        horizontalLayout_3->addWidget(name_grup);

        labelCurator = new QLabel(InfoWidget);
        labelCurator->setObjectName(QStringLiteral("labelCurator"));
        sizePolicy7.setHeightForWidth(labelCurator->sizePolicy().hasHeightForWidth());
        labelCurator->setSizePolicy(sizePolicy7);

        horizontalLayout_3->addWidget(labelCurator);

        name_curator = new QLabel(InfoWidget);
        name_curator->setObjectName(QStringLiteral("name_curator"));

        horizontalLayout_3->addWidget(name_curator);


        verticalLayout_6->addWidget(InfoWidget);

        TableConteiner = new QWidget(EducationPregressWidget);
        TableConteiner->setObjectName(QStringLiteral("TableConteiner"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(TableConteiner->sizePolicy().hasHeightForWidth());
        TableConteiner->setSizePolicy(sizePolicy8);
        horizontalLayout_4 = new QHBoxLayout(TableConteiner);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView = new QTableView(TableConteiner);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_4->addWidget(tableView);


        verticalLayout_6->addWidget(TableConteiner);


        horizontalLayout->addWidget(EducationPregressWidget);

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
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(CheckFormOfEducation->sizePolicy().hasHeightForWidth());
        CheckFormOfEducation->setSizePolicy(sizePolicy9);

        verticalLayout_4->addWidget(CheckFormOfEducation);

        ButtonShowAddWindow2 = new QPushButton(FunctionalPanel);
        ButtonShowAddWindow2->setObjectName(QStringLiteral("ButtonShowAddWindow2"));

        verticalLayout_4->addWidget(ButtonShowAddWindow2);

        ButtonShowInpuMarksForm = new QPushButton(FunctionalPanel);
        ButtonShowInpuMarksForm->setObjectName(QStringLiteral("ButtonShowInpuMarksForm"));

        verticalLayout_4->addWidget(ButtonShowInpuMarksForm);


        verticalLayout_2->addWidget(FunctionalPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(FunctionalPanelConteiner);

        EducationProgressMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EducationProgressMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 975, 20));
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
        labelGrup->setText(QApplication::translate("EducationProgressMainWindow", "\320\263\321\200\321\203\320\277\320\260:", nullptr));
        name_grup->setText(QString());
        labelCurator->setText(QApplication::translate("EducationProgressMainWindow", "\320\232\321\203\321\200\320\260\321\202\320\276\321\200:", nullptr));
        name_curator->setText(QString());
        CheckFormOfEducation->setText(QApplication::translate("EducationProgressMainWindow", "\320\233\320\270\321\210\320\265 \320\264\320\265\321\200\320\266\320\260\320\262\320\275\320\270\320\272\320\270", nullptr));
        ButtonShowAddWindow2->setText(QApplication::translate("EducationProgressMainWindow", "+", nullptr));
        ButtonShowInpuMarksForm->setText(QApplication::translate("EducationProgressMainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\276\321\206\321\226\320\275\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EducationProgressMainWindow: public Ui_EducationProgressMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONPROGRESSMAINWINDOW_H
