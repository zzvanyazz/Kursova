/********************************************************************************
** Form generated from reading UI file 'groupinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPINPUTFORM_H
#define UI_GROUPINPUTFORM_H

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

class Ui_GroupInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *groupNumber;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *boxDepartments;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *boxCurator;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *hroupName;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *GroupInputForm)
    {
        if (GroupInputForm->objectName().isEmpty())
            GroupInputForm->setObjectName(QStringLiteral("GroupInputForm"));
        GroupInputForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(GroupInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(GroupInputForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        groupNumber = new QLineEdit(GroupInputForm);
        groupNumber->setObjectName(QStringLiteral("groupNumber"));

        horizontalLayout_3->addWidget(groupNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(GroupInputForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        boxDepartments = new QComboBox(GroupInputForm);
        boxDepartments->setObjectName(QStringLiteral("boxDepartments"));

        horizontalLayout_2->addWidget(boxDepartments);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(GroupInputForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        boxCurator = new QComboBox(GroupInputForm);
        boxCurator->setObjectName(QStringLiteral("boxCurator"));

        horizontalLayout_6->addWidget(boxCurator);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(GroupInputForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        hroupName = new QLineEdit(GroupInputForm);
        hroupName->setObjectName(QStringLiteral("hroupName"));

        horizontalLayout_5->addWidget(hroupName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(GroupInputForm);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(GroupInputForm);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GroupInputForm);

        QMetaObject::connectSlotsByName(GroupInputForm);
    } // setupUi

    void retranslateUi(QWidget *GroupInputForm)
    {
        GroupInputForm->setWindowTitle(QApplication::translate("GroupInputForm", "Form", nullptr));
        label->setText(QApplication::translate("GroupInputForm", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\270", nullptr));
        label_2->setText(QApplication::translate("GroupInputForm", "\320\222\321\226\320\264\320\264\321\226\320\273\320\265\320\275\320\275\321\217", nullptr));
        label_4->setText(QApplication::translate("GroupInputForm", "\320\232\321\203\321\200\320\260\321\202\320\276\321\200", nullptr));
        label_3->setText(QApplication::translate("GroupInputForm", "\321\226\320\235\320\260\320\267\320\262\320\260 \320\263\321\200\321\203\320\277\320\270", nullptr));
        btn_ok->setText(QApplication::translate("GroupInputForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("GroupInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupInputForm: public Ui_GroupInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPINPUTFORM_H
