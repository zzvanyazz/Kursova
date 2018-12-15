/********************************************************************************
** Form generated from reading UI file 'specialiyinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALIYINPUTFORM_H
#define UI_SPECIALIYINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpecialiyInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *boxDepartment;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *control;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *SpecialiyInputForm)
    {
        if (SpecialiyInputForm->objectName().isEmpty())
            SpecialiyInputForm->setObjectName(QString::fromUtf8("SpecialiyInputForm"));
        SpecialiyInputForm->resize(400, 283);
        SpecialiyInputForm->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(10, 7, 77, 255));"));
        verticalLayout = new QVBoxLayout(SpecialiyInputForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(SpecialiyInputForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SpecialiyInputForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        boxDepartment = new QComboBox(SpecialiyInputForm);
        boxDepartment->setObjectName(QString::fromUtf8("boxDepartment"));

        horizontalLayout_2->addWidget(boxDepartment);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(SpecialiyInputForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(SpecialiyInputForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        control = new QWidget(SpecialiyInputForm);
        control->setObjectName(QString::fromUtf8("control"));
        sizePolicy.setHeightForWidth(control->sizePolicy().hasHeightForWidth());
        control->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(control);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(control);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(control);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addWidget(control);


        retranslateUi(SpecialiyInputForm);

        QMetaObject::connectSlotsByName(SpecialiyInputForm);
    } // setupUi

    void retranslateUi(QWidget *SpecialiyInputForm)
    {
        SpecialiyInputForm->setWindowTitle(QApplication::translate("SpecialiyInputForm", "Form", nullptr));
        label_3->setText(QApplication::translate("SpecialiyInputForm", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\201\320\277\320\265\321\206\321\226\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\265\320\271 \320\264\320\273\321\217 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\217", nullptr));
        label->setText(QApplication::translate("SpecialiyInputForm", "\320\222\321\226\320\264\320\264\321\226\320\273\320\265\320\275\320\275\321\217", nullptr));
        label_2->setText(QApplication::translate("SpecialiyInputForm", "\320\235\320\260\320\267\320\262\320\260 \321\201\320\277\320\265\321\206\321\226\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\226", nullptr));
        btn_ok->setText(QApplication::translate("SpecialiyInputForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("SpecialiyInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecialiyInputForm: public Ui_SpecialiyInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALIYINPUTFORM_H
