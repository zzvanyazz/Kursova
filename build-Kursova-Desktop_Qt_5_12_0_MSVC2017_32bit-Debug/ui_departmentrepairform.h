/********************************************************************************
** Form generated from reading UI file 'departmentrepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTREPAIRFORM_H
#define UI_DEPARTMENTREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditInput;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonOk;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *DepartmentRepairForm)
    {
        if (DepartmentRepairForm->objectName().isEmpty())
            DepartmentRepairForm->setObjectName(QString::fromUtf8("DepartmentRepairForm"));
        DepartmentRepairForm->resize(359, 218);
        verticalLayout = new QVBoxLayout(DepartmentRepairForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(DepartmentRepairForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        findComboBox = new QFontComboBox(widget);
        findComboBox->setObjectName(QString::fromUtf8("findComboBox"));

        horizontalLayout->addWidget(findComboBox);

        ButtonDelete = new QPushButton(widget);
        ButtonDelete->setObjectName(QString::fromUtf8("ButtonDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonDelete->sizePolicy().hasHeightForWidth());
        ButtonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ButtonDelete);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(DepartmentRepairForm);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditInput = new QLineEdit(widget_2);
        lineEditInput->setObjectName(QString::fromUtf8("lineEditInput"));

        verticalLayout_2->addWidget(lineEditInput);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(DepartmentRepairForm);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ButtonOk = new QPushButton(widget_3);
        ButtonOk->setObjectName(QString::fromUtf8("ButtonOk"));

        horizontalLayout_2->addWidget(ButtonOk);

        ButtonCancel = new QPushButton(widget_3);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));

        horizontalLayout_2->addWidget(ButtonCancel);


        verticalLayout->addWidget(widget_3);


        retranslateUi(DepartmentRepairForm);

        QMetaObject::connectSlotsByName(DepartmentRepairForm);
    } // setupUi

    void retranslateUi(QWidget *DepartmentRepairForm)
    {
        DepartmentRepairForm->setWindowTitle(QApplication::translate("DepartmentRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("DepartmentRepairForm", "-", nullptr));
        ButtonOk->setText(QApplication::translate("DepartmentRepairForm", "\320\236\320\272", nullptr));
        ButtonCancel->setText(QApplication::translate("DepartmentRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentRepairForm: public Ui_DepartmentRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTREPAIRFORM_H
