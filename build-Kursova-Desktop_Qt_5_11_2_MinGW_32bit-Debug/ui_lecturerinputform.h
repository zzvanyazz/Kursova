/********************************************************************************
** Form generated from reading UI file 'lecturerinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTURERINPUTFORM_H
#define UI_LECTURERINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecturerInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *Counter;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lectureSurname;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lectureName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lectureLastName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *LecturerInputForm)
    {
        if (LecturerInputForm->objectName().isEmpty())
            LecturerInputForm->setObjectName(QStringLiteral("LecturerInputForm"));
        LecturerInputForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(LecturerInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(LecturerInputForm);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        Counter = new QSpinBox(widget);
        Counter->setObjectName(QStringLiteral("Counter"));
        Counter->setMinimum(1);

        horizontalLayout_5->addWidget(Counter);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(LecturerInputForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lectureSurname = new QLineEdit(LecturerInputForm);
        lectureSurname->setObjectName(QStringLiteral("lectureSurname"));

        horizontalLayout_2->addWidget(lectureSurname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(LecturerInputForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lectureName = new QLineEdit(LecturerInputForm);
        lectureName->setObjectName(QStringLiteral("lectureName"));

        horizontalLayout->addWidget(lectureName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(LecturerInputForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lectureLastName = new QLineEdit(LecturerInputForm);
        lectureLastName->setObjectName(QStringLiteral("lectureLastName"));

        horizontalLayout_3->addWidget(lectureLastName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_ok = new QPushButton(LecturerInputForm);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_4->addWidget(btn_ok);

        btn_cancel = new QPushButton(LecturerInputForm);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_4->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LecturerInputForm);

        QMetaObject::connectSlotsByName(LecturerInputForm);
    } // setupUi

    void retranslateUi(QWidget *LecturerInputForm)
    {
        LecturerInputForm->setWindowTitle(QApplication::translate("LecturerInputForm", "Form", nullptr));
        label_4->setText(QApplication::translate("LecturerInputForm", "\320\232\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\262\320\270\320\272\320\273\320\260\320\264\320\260\321\207\321\226\320\262 \320\264\320\273\321\217 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\217", nullptr));
        label->setText(QApplication::translate("LecturerInputForm", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        label_3->setText(QApplication::translate("LecturerInputForm", "\320\206\320\274'\321\217", nullptr));
        lectureName->setText(QString());
        label_2->setText(QApplication::translate("LecturerInputForm", "\320\237\320\276 \320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        btn_ok->setText(QApplication::translate("LecturerInputForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("LecturerInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecturerInputForm: public Ui_LecturerInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTURERINPUTFORM_H
