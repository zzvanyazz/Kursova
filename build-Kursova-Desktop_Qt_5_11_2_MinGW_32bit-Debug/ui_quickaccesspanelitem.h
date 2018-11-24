/********************************************************************************
** Form generated from reading UI file 'quickaccesspanelitem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKACCESSPANELITEM_H
#define UI_QUICKACCESSPANELITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickAccessPanelItem
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *ToolBar;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ButtonBack;
    QLineEdit *LineSearch;
    QLabel *Name;
    QWidget *SubItemsWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *QuickAccessPanelItem)
    {
        if (QuickAccessPanelItem->objectName().isEmpty())
            QuickAccessPanelItem->setObjectName(QStringLiteral("QuickAccessPanelItem"));
        QuickAccessPanelItem->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuickAccessPanelItem->sizePolicy().hasHeightForWidth());
        QuickAccessPanelItem->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QuickAccessPanelItem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        ToolBar = new QWidget(QuickAccessPanelItem);
        ToolBar->setObjectName(QStringLiteral("ToolBar"));
        sizePolicy.setHeightForWidth(ToolBar->sizePolicy().hasHeightForWidth());
        ToolBar->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(ToolBar);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        ButtonBack = new QPushButton(ToolBar);
        ButtonBack->setObjectName(QStringLiteral("ButtonBack"));
        ButtonBack->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonBack->sizePolicy().hasHeightForWidth());
        ButtonBack->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(ButtonBack);

        LineSearch = new QLineEdit(ToolBar);
        LineSearch->setObjectName(QStringLiteral("LineSearch"));

        horizontalLayout_2->addWidget(LineSearch);


        verticalLayout->addWidget(ToolBar);

        Name = new QLabel(QuickAccessPanelItem);
        Name->setObjectName(QStringLiteral("Name"));
        sizePolicy.setHeightForWidth(Name->sizePolicy().hasHeightForWidth());
        Name->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Demi Cond"));
        font.setPointSize(10);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        Name->setFont(font);
        Name->setTextFormat(Qt::AutoText);
        Name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Name);

        SubItemsWidget = new QWidget(QuickAccessPanelItem);
        SubItemsWidget->setObjectName(QStringLiteral("SubItemsWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SubItemsWidget->sizePolicy().hasHeightForWidth());
        SubItemsWidget->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(SubItemsWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, -1, 2, -1);

        verticalLayout->addWidget(SubItemsWidget);


        retranslateUi(QuickAccessPanelItem);

        QMetaObject::connectSlotsByName(QuickAccessPanelItem);
    } // setupUi

    void retranslateUi(QWidget *QuickAccessPanelItem)
    {
        QuickAccessPanelItem->setWindowTitle(QApplication::translate("QuickAccessPanelItem", "Form", nullptr));
        ButtonBack->setText(QString());
        Name->setText(QApplication::translate("QuickAccessPanelItem", "text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuickAccessPanelItem: public Ui_QuickAccessPanelItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKACCESSPANELITEM_H
