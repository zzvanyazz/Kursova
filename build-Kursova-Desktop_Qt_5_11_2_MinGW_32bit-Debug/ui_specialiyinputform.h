/********************************************************************************
** Form generated from reading UI file 'specialiyinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpecialiyInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *boxDepartment;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *SpecialiyInputForm)
    {
        if (SpecialiyInputForm->objectName().isEmpty())
            SpecialiyInputForm->setObjectName(QStringLiteral("SpecialiyInputForm"));
        SpecialiyInputForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(SpecialiyInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SpecialiyInputForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        boxDepartment = new QComboBox(SpecialiyInputForm);
        boxDepartment->setObjectName(QStringLiteral("boxDepartment"));

        horizontalLayout_2->addWidget(boxDepartment);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(SpecialiyInputForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(SpecialiyInputForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(SpecialiyInputForm);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(SpecialiyInputForm);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SpecialiyInputForm);

        QMetaObject::connectSlotsByName(SpecialiyInputForm);
    } // setupUi

    void retranslateUi(QWidget *SpecialiyInputForm)
    {
        SpecialiyInputForm->setWindowTitle(QApplication::translate("SpecialiyInputForm", "Form", nullptr));
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
