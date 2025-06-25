/********************************************************************************
** Form generated from reading UI file 'ProfileManager4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEMANAGER4_H
#define UI_PROFILEMANAGER4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileManager4
{
public:
    QGridLayout *gridLayout;
    TableView *tableView;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonDelete;

    void setupUi(QWidget *ProfileManager4)
    {
        if (ProfileManager4->objectName().isEmpty())
            ProfileManager4->setObjectName("ProfileManager4");
        ProfileManager4->resize(630, 300);
        gridLayout = new QGridLayout(ProfileManager4);
        gridLayout->setObjectName("gridLayout");
        tableView = new TableView(ProfileManager4);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 3);

        pushButtonOk = new QPushButton(ProfileManager4);
        pushButtonOk->setObjectName("pushButtonOk");

        gridLayout->addWidget(pushButtonOk, 2, 0, 1, 3);

        pushButtonEdit = new QPushButton(ProfileManager4);
        pushButtonEdit->setObjectName("pushButtonEdit");

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        pushButtonNew = new QPushButton(ProfileManager4);
        pushButtonNew->setObjectName("pushButtonNew");

        gridLayout->addWidget(pushButtonNew, 0, 0, 1, 1);

        pushButtonDelete = new QPushButton(ProfileManager4);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 2, 1, 1);


        retranslateUi(ProfileManager4);

        QMetaObject::connectSlotsByName(ProfileManager4);
    } // setupUi

    void retranslateUi(QWidget *ProfileManager4)
    {
        ProfileManager4->setWindowTitle(QCoreApplication::translate("ProfileManager4", "Profile Manager Gen 4", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ProfileManager4", "Done", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("ProfileManager4", "Edit", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("ProfileManager4", "New", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ProfileManager4", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileManager4: public Ui_ProfileManager4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEMANAGER4_H
