/********************************************************************************
** Form generated from reading UI file 'subjectinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTINPUTFORM_H
#define UI_SUBJECTINPUTFORM_H

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

class Ui_SubjectInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *subjectCount;
    QScrollArea *scrollArea;
    QWidget *conteiner;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *SubjectInputForm)
    {
        if (SubjectInputForm->objectName().isEmpty())
            SubjectInputForm->setObjectName(QString::fromUtf8("SubjectInputForm"));
        SubjectInputForm->resize(400, 300);
        SubjectInputForm->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));"));
        verticalLayout = new QVBoxLayout(SubjectInputForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalWidget_3 = new QWidget(SubjectInputForm);
        horizontalWidget_3->setObjectName(QString::fromUtf8("horizontalWidget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(horizontalWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        subjectCount = new QSpinBox(horizontalWidget_3);
        subjectCount->setObjectName(QString::fromUtf8("subjectCount"));
        subjectCount->setMinimum(1);

        horizontalLayout_3->addWidget(subjectCount);


        verticalLayout->addWidget(horizontalWidget_3);

        scrollArea = new QScrollArea(SubjectInputForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        conteiner = new QWidget();
        conteiner->setObjectName(QString::fromUtf8("conteiner"));
        conteiner->setGeometry(QRect(0, 0, 394, 204));
        verticalLayout_2 = new QVBoxLayout(conteiner);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(conteiner);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(SubjectInputForm);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(SubjectInputForm);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SubjectInputForm);

        QMetaObject::connectSlotsByName(SubjectInputForm);
    } // setupUi

    void retranslateUi(QWidget *SubjectInputForm)
    {
        SubjectInputForm->setWindowTitle(QApplication::translate("SubjectInputForm", "Form", nullptr));
        label->setText(QApplication::translate("SubjectInputForm", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\226\320\262", nullptr));
        btn_ok->setText(QApplication::translate("SubjectInputForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("SubjectInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubjectInputForm: public Ui_SubjectInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTINPUTFORM_H
