/********************************************************************************
** Form generated from reading UI file 'ProfileManager8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEMANAGER8_H
#define UI_PROFILEMANAGER8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileManager8
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonDelete;
    TableView *tableView;
    QPushButton *pushButtonOk;

    void setupUi(QWidget *ProfileManager8)
    {
        if (ProfileManager8->objectName().isEmpty())
            ProfileManager8->setObjectName("ProfileManager8");
        ProfileManager8->resize(630, 300);
        gridLayout = new QGridLayout(ProfileManager8);
        gridLayout->setObjectName("gridLayout");
        pushButtonNew = new QPushButton(ProfileManager8);
        pushButtonNew->setObjectName("pushButtonNew");

        gridLayout->addWidget(pushButtonNew, 0, 0, 1, 1);

        pushButtonEdit = new QPushButton(ProfileManager8);
        pushButtonEdit->setObjectName("pushButtonEdit");

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        pushButtonDelete = new QPushButton(ProfileManager8);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 2, 1, 1);

        tableView = new TableView(ProfileManager8);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 3);

        pushButtonOk = new QPushButton(ProfileManager8);
        pushButtonOk->setObjectName("pushButtonOk");

        gridLayout->addWidget(pushButtonOk, 2, 0, 1, 3);


        retranslateUi(ProfileManager8);

        QMetaObject::connectSlotsByName(ProfileManager8);
    } // setupUi

    void retranslateUi(QWidget *ProfileManager8)
    {
        ProfileManager8->setWindowTitle(QCoreApplication::translate("ProfileManager8", "Profile Manager Gen 8", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("ProfileManager8", "New", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("ProfileManager8", "Edit", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ProfileManager8", "Delete", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ProfileManager8", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileManager8: public Ui_ProfileManager8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEMANAGER8_H
