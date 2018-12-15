/********************************************************************************
** Form generated from reading UI file 'educationprogressmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUCATIONPROGRESSMAINWINDOW_H
#define UI_EDUCATIONPROGRESSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QWidget *EducationPregressWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *InfoWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelGrup;
    QLabel *name_grup;
    QLabel *labelCurator;
    QLabel *name_curator;
    QLabel *labelSemester;
    QComboBox *comboBoxSemester;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *TableConteiner;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *FunctionalPanelConteiner;
    QVBoxLayout *verticalLayout_2;
    QWidget *FunctionalPanel;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *CheckFormOfEducation;
    QPushButton *ButtonShowAddWindow2;
    QPushButton *ButtonShowInpuMarksForm;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EducationProgressMainWindow)
    {
        if (EducationProgressMainWindow->objectName().isEmpty())
            EducationProgressMainWindow->setObjectName(QString::fromUtf8("EducationProgressMainWindow"));
        EducationProgressMainWindow->resize(975, 518);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EducationProgressMainWindow->sizePolicy().hasHeightForWidth());
        EducationProgressMainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(EducationProgressMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        QuickAccessContainer = new QWidget();
        QuickAccessContainer->setObjectName(QString::fromUtf8("QuickAccessContainer"));
        QuickAccessContainer->setGeometry(QRect(0, 0, 221, 444));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(QuickAccessContainer->sizePolicy().hasHeightForWidth());
        QuickAccessContainer->setSizePolicy(sizePolicy2);
        QuickAccessContainer->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(QuickAccessContainer);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(QuickAccessContainer);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        SearchLine = new QLineEdit(widget);
        SearchLine->setObjectName(QString::fromUtf8("SearchLine"));
        sizePolicy2.setHeightForWidth(SearchLine->sizePolicy().hasHeightForWidth());
        SearchLine->setSizePolicy(sizePolicy2);
        SearchLine->setEchoMode(QLineEdit::Normal);
        SearchLine->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout_2->addWidget(SearchLine);

        ButtonAddPanelItem = new QPushButton(widget);
        ButtonAddPanelItem->setObjectName(QString::fromUtf8("ButtonAddPanelItem"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ButtonAddPanelItem->sizePolicy().hasHeightForWidth());
        ButtonAddPanelItem->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(ButtonAddPanelItem);


        verticalLayout_3->addWidget(widget);

        QuickAccessPanel = new QWidget(QuickAccessContainer);
        QuickAccessPanel->setObjectName(QString::fromUtf8("QuickAccessPanel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(QuickAccessPanel->sizePolicy().hasHeightForWidth());
        QuickAccessPanel->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(QuickAccessPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, -1, -1);

        verticalLayout_3->addWidget(QuickAccessPanel);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(QuickAccessContainer);

        horizontalLayout->addWidget(scrollArea);

        EducationPregressWidget = new QWidget(centralwidget);
        EducationPregressWidget->setObjectName(QString::fromUtf8("EducationPregressWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(EducationPregressWidget->sizePolicy().hasHeightForWidth());
        EducationPregressWidget->setSizePolicy(sizePolicy6);
        verticalLayout_6 = new QVBoxLayout(EducationPregressWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        InfoWidget = new QWidget(EducationPregressWidget);
        InfoWidget->setObjectName(QString::fromUtf8("InfoWidget"));
        sizePolicy.setHeightForWidth(InfoWidget->sizePolicy().hasHeightForWidth());
        InfoWidget->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(InfoWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        labelGrup = new QLabel(InfoWidget);
        labelGrup->setObjectName(QString::fromUtf8("labelGrup"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelGrup->sizePolicy().hasHeightForWidth());
        labelGrup->setSizePolicy(sizePolicy7);
        QFont font;
        font.setPointSize(12);
        labelGrup->setFont(font);

        horizontalLayout_3->addWidget(labelGrup);

        name_grup = new QLabel(InfoWidget);
        name_grup->setObjectName(QString::fromUtf8("name_grup"));
        name_grup->setFont(font);

        horizontalLayout_3->addWidget(name_grup);

        labelCurator = new QLabel(InfoWidget);
        labelCurator->setObjectName(QString::fromUtf8("labelCurator"));
        sizePolicy7.setHeightForWidth(labelCurator->sizePolicy().hasHeightForWidth());
        labelCurator->setSizePolicy(sizePolicy7);
        labelCurator->setFont(font);

        horizontalLayout_3->addWidget(labelCurator);

        name_curator = new QLabel(InfoWidget);
        name_curator->setObjectName(QString::fromUtf8("name_curator"));
        name_curator->setFont(font);

        horizontalLayout_3->addWidget(name_curator);

        labelSemester = new QLabel(InfoWidget);
        labelSemester->setObjectName(QString::fromUtf8("labelSemester"));
        sizePolicy7.setHeightForWidth(labelSemester->sizePolicy().hasHeightForWidth());
        labelSemester->setSizePolicy(sizePolicy7);

        horizontalLayout_3->addWidget(labelSemester);

        comboBoxSemester = new QComboBox(InfoWidget);
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->setObjectName(QString::fromUtf8("comboBoxSemester"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(comboBoxSemester->sizePolicy().hasHeightForWidth());
        comboBoxSemester->setSizePolicy(sizePolicy8);

        horizontalLayout_3->addWidget(comboBoxSemester);


        verticalLayout_6->addWidget(InfoWidget);

        scrollArea_2 = new QScrollArea(EducationPregressWidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 510, 389));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TableConteiner = new QWidget(scrollAreaWidgetContents);
        TableConteiner->setObjectName(QString::fromUtf8("TableConteiner"));
        sizePolicy3.setHeightForWidth(TableConteiner->sizePolicy().hasHeightForWidth());
        TableConteiner->setSizePolicy(sizePolicy3);
        horizontalLayout_4 = new QHBoxLayout(TableConteiner);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(TableConteiner);

        verticalSpacer_3 = new QSpacerItem(20, 367, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea_2);


        horizontalLayout->addWidget(EducationPregressWidget);

        FunctionalPanelConteiner = new QWidget(centralwidget);
        FunctionalPanelConteiner->setObjectName(QString::fromUtf8("FunctionalPanelConteiner"));
        sizePolicy1.setHeightForWidth(FunctionalPanelConteiner->sizePolicy().hasHeightForWidth());
        FunctionalPanelConteiner->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(FunctionalPanelConteiner);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        FunctionalPanel = new QWidget(FunctionalPanelConteiner);
        FunctionalPanel->setObjectName(QString::fromUtf8("FunctionalPanel"));
        verticalLayout_4 = new QVBoxLayout(FunctionalPanel);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        CheckFormOfEducation = new QCheckBox(FunctionalPanel);
        CheckFormOfEducation->setObjectName(QString::fromUtf8("CheckFormOfEducation"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(CheckFormOfEducation->sizePolicy().hasHeightForWidth());
        CheckFormOfEducation->setSizePolicy(sizePolicy9);

        verticalLayout_4->addWidget(CheckFormOfEducation);

        ButtonShowAddWindow2 = new QPushButton(FunctionalPanel);
        ButtonShowAddWindow2->setObjectName(QString::fromUtf8("ButtonShowAddWindow2"));

        verticalLayout_4->addWidget(ButtonShowAddWindow2);

        ButtonShowInpuMarksForm = new QPushButton(FunctionalPanel);
        ButtonShowInpuMarksForm->setObjectName(QString::fromUtf8("ButtonShowInpuMarksForm"));

        verticalLayout_4->addWidget(ButtonShowInpuMarksForm);

        pushButton = new QPushButton(FunctionalPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout_2->addWidget(FunctionalPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(FunctionalPanelConteiner);

        EducationProgressMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EducationProgressMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 975, 25));
        EducationProgressMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EducationProgressMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EducationProgressMainWindow->setStatusBar(statusbar);

        retranslateUi(EducationProgressMainWindow);

        QMetaObject::connectSlotsByName(EducationProgressMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EducationProgressMainWindow)
    {
        EducationProgressMainWindow->setWindowTitle(QApplication::translate("EducationProgressMainWindow", "MainWindow", nullptr));
        ButtonAddPanelItem->setText(QApplication::translate("EducationProgressMainWindow", "+", nullptr));
        labelGrup->setText(QApplication::translate("EducationProgressMainWindow", "\320\223\321\200\321\203\320\277\320\260:", nullptr));
        name_grup->setText(QString());
        labelCurator->setText(QApplication::translate("EducationProgressMainWindow", "\320\232\321\203\321\200\320\260\321\202\320\276\321\200:", nullptr));
        name_curator->setText(QString());
        labelSemester->setText(QApplication::translate("EducationProgressMainWindow", "\320\241\320\265\320\274\320\265\321\201\321\202\321\200", nullptr));
        comboBoxSemester->setItemText(0, QApplication::translate("EducationProgressMainWindow", "1", nullptr));
        comboBoxSemester->setItemText(1, QApplication::translate("EducationProgressMainWindow", "2", nullptr));

        CheckFormOfEducation->setText(QApplication::translate("EducationProgressMainWindow", "\320\233\320\270\321\210\320\265 \320\264\320\265\321\200\320\266\320\260\320\262\320\275\320\270\320\272\320\270", nullptr));
        ButtonShowAddWindow2->setText(QApplication::translate("EducationProgressMainWindow", "+", nullptr));
        ButtonShowInpuMarksForm->setText(QApplication::translate("EducationProgressMainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\276\321\206\321\226\320\275\320\272\320\270", nullptr));
        pushButton->setText(QApplication::translate("EducationProgressMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EducationProgressMainWindow: public Ui_EducationProgressMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATIONPROGRESSMAINWINDOW_H
