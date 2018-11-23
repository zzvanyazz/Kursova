/********************************************************************************
** Form generated from reading UI file 'treedisplaying.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEDISPLAYING_H
#define UI_TREEDISPLAYING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeDisplaying
{
public:

    void setupUi(QWidget *TreeDisplaying)
    {
        if (TreeDisplaying->objectName().isEmpty())
            TreeDisplaying->setObjectName(QStringLiteral("TreeDisplaying"));
        TreeDisplaying->resize(1012, 518);

        retranslateUi(TreeDisplaying);

        QMetaObject::connectSlotsByName(TreeDisplaying);
    } // setupUi

    void retranslateUi(QWidget *TreeDisplaying)
    {
        TreeDisplaying->setWindowTitle(QApplication::translate("TreeDisplaying", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeDisplaying: public Ui_TreeDisplaying {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEDISPLAYING_H
