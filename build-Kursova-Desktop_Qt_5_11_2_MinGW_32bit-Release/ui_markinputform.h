/********************************************************************************
** Form generated from reading UI file 'markinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *GroupConboBox;
    QLabel *label_2;
    QComboBox *SudentConboBox;
    QScrollArea *SubjectsScrollArea;
    QWidget *SubjectsWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *MarkInputForm)
    {
        if (MarkInputForm->objectName().isEmpty())
            MarkInputForm->setObjectName(QStringLiteral("MarkInputForm"));
        MarkInputForm->resize(896, 465);
        verticalLayout = new QVBoxLayout(MarkInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(MarkInputForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        GroupConboBox = new QComboBox(widget);
        GroupConboBox->setObjectName(QStringLiteral("GroupConboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GroupConboBox->sizePolicy().hasHeightForWidth());
        GroupConboBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(GroupConboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        SudentConboBox = new QComboBox(widget);
        SudentConboBox->setObjectName(QStringLiteral("SudentConboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SudentConboBox->sizePolicy().hasHeightForWidth());
        SudentConboBox->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(SudentConboBox);


        verticalLayout->addWidget(widget);

        SubjectsScrollArea = new QScrollArea(MarkInputForm);
        SubjectsScrollArea->setObjectName(QStringLiteral("SubjectsScrollArea"));
        sizePolicy3.setHeightForWidth(SubjectsScrollArea->sizePolicy().hasHeightForWidth());
        SubjectsScrollArea->setSizePolicy(sizePolicy3);
        SubjectsScrollArea->setWidgetResizable(true);
        SubjectsWidget = new QWidget();
        SubjectsWidget->setObjectName(QStringLiteral("SubjectsWidget"));
        SubjectsWidget->setGeometry(QRect(0, 0, 876, 415));
        verticalLayout_2 = new QVBoxLayout(SubjectsWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        SubjectsScrollArea->setWidget(SubjectsWidget);

        verticalLayout->addWidget(SubjectsScrollArea);


        retranslateUi(MarkInputForm);

        QMetaObject::connectSlotsByName(MarkInputForm);
    } // setupUi

    void retranslateUi(QWidget *MarkInputForm)
    {
        MarkInputForm->setWindowTitle(QApplication::translate("MarkInputForm", "Form", nullptr));
        label->setText(QApplication::translate("MarkInputForm", "\320\223\321\200\321\203\320\277\320\260", nullptr));
        label_2->setText(QApplication::translate("MarkInputForm", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkInputForm: public Ui_MarkInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKINPUTFORM_H
