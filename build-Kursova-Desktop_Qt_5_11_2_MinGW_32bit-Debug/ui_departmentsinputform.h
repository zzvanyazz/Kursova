/********************************************************************************
** Form generated from reading UI file 'departmentsinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTSINPUTFORM_H
#define UI_DEPARTMENTSINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentsInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *departmentCounter;
    QScrollArea *scrollArea;
    QWidget *conteiner;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *DepartmentsInputForm)
    {
        if (DepartmentsInputForm->objectName().isEmpty())
            DepartmentsInputForm->setObjectName(QStringLiteral("DepartmentsInputForm"));
        DepartmentsInputForm->resize(400, 300);
        DepartmentsInputForm->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(53, 8, 89, 255));"));
        verticalLayout = new QVBoxLayout(DepartmentsInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalWidget_3 = new QWidget(DepartmentsInputForm);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(horizontalWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label);

        departmentCounter = new QSpinBox(horizontalWidget_3);
        departmentCounter->setObjectName(QStringLiteral("departmentCounter"));
        departmentCounter->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        departmentCounter->setMinimum(1);

        horizontalLayout_3->addWidget(departmentCounter);


        verticalLayout->addWidget(horizontalWidget_3);

        scrollArea = new QScrollArea(DepartmentsInputForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        conteiner = new QWidget();
        conteiner->setObjectName(QStringLiteral("conteiner"));
        conteiner->setGeometry(QRect(0, 0, 394, 204));
        verticalLayout_2 = new QVBoxLayout(conteiner);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(conteiner);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(DepartmentsInputForm);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(DepartmentsInputForm);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DepartmentsInputForm);

        QMetaObject::connectSlotsByName(DepartmentsInputForm);
    } // setupUi

    void retranslateUi(QWidget *DepartmentsInputForm)
    {
        DepartmentsInputForm->setWindowTitle(QApplication::translate("DepartmentsInputForm", "Form", nullptr));
        label->setText(QApplication::translate("DepartmentsInputForm", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\262\321\226\320\264\320\264\321\226\320\273\320\265\320\275\321\214", nullptr));
        btn_ok->setText(QApplication::translate("DepartmentsInputForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("DepartmentsInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentsInputForm: public Ui_DepartmentsInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTSINPUTFORM_H
