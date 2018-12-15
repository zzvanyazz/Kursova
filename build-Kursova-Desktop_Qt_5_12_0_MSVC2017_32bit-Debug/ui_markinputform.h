/********************************************************************************
** Form generated from reading UI file 'markinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKINPUTFORM_H
#define UI_MARKINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkInputForm
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *studentscomboBox;
    QWidget *QuicAccessPanelItem;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBoxSemester;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *MarkInputForm)
    {
        if (MarkInputForm->objectName().isEmpty())
            MarkInputForm->setObjectName(QString::fromUtf8("MarkInputForm"));
        MarkInputForm->resize(896, 465);
        verticalLayout_4 = new QVBoxLayout(MarkInputForm);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget = new QWidget(MarkInputForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setSizeIncrement(QSize(0, 0));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        studentscomboBox = new QComboBox(widget_2);
        studentscomboBox->setObjectName(QString::fromUtf8("studentscomboBox"));

        horizontalLayout_2->addWidget(studentscomboBox);


        verticalLayout->addWidget(widget_2);

        QuicAccessPanelItem = new QWidget(widget);
        QuicAccessPanelItem->setObjectName(QString::fromUtf8("QuicAccessPanelItem"));
        horizontalLayout_3 = new QHBoxLayout(QuicAccessPanelItem);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addWidget(QuicAccessPanelItem);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addWidget(widget);

        widget_4 = new QWidget(MarkInputForm);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 0);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(label_2);

        comboBoxSemester = new QComboBox(widget_5);
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->setObjectName(QString::fromUtf8("comboBoxSemester"));
        sizePolicy4.setHeightForWidth(comboBoxSemester->sizePolicy().hasHeightForWidth());
        comboBoxSemester->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(comboBoxSemester);


        verticalLayout_3->addWidget(widget_5, 0, Qt::AlignLeft);

        scrollArea = new QScrollArea(widget_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setSizeIncrement(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 637, 371));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        horizontalLayout_4->addWidget(widget_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        widget_3 = new QWidget(MarkInputForm);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(widget_3);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout->addWidget(buttonOk);

        ButtonCancel = new QPushButton(widget_3);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));

        horizontalLayout->addWidget(ButtonCancel);


        verticalLayout_4->addWidget(widget_3);


        retranslateUi(MarkInputForm);

        QMetaObject::connectSlotsByName(MarkInputForm);
    } // setupUi

    void retranslateUi(QWidget *MarkInputForm)
    {
        MarkInputForm->setWindowTitle(QApplication::translate("MarkInputForm", "Form", nullptr));
        label->setText(QApplication::translate("MarkInputForm", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
        label_2->setText(QApplication::translate("MarkInputForm", "\320\241\320\265\320\274\320\265\321\201\321\202\321\200", nullptr));
        comboBoxSemester->setItemText(0, QApplication::translate("MarkInputForm", "1", nullptr));
        comboBoxSemester->setItemText(1, QApplication::translate("MarkInputForm", "2", nullptr));

        buttonOk->setText(QApplication::translate("MarkInputForm", "\320\236\320\272", nullptr));
        ButtonCancel->setText(QApplication::translate("MarkInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkInputForm: public Ui_MarkInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKINPUTFORM_H
