/********************************************************************************
** Form generated from reading UI file 'ProfileManager3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEMANAGER3_H
#define UI_PROFILEMANAGER3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileManager3
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonDelete;
    TableView *tableView;
    QPushButton *pushButtonOk;

    void setupUi(QWidget *ProfileManager3)
    {
        if (ProfileManager3->objectName().isEmpty())
            ProfileManager3->setObjectName("ProfileManager3");
        ProfileManager3->resize(630, 300);
        gridLayout = new QGridLayout(ProfileManager3);
        gridLayout->setObjectName("gridLayout");
        pushButtonNew = new QPushButton(ProfileManager3);
        pushButtonNew->setObjectName("pushButtonNew");

        gridLayout->addWidget(pushButtonNew, 0, 0, 1, 1);

        pushButtonEdit = new QPushButton(ProfileManager3);
        pushButtonEdit->setObjectName("pushButtonEdit");

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        pushButtonDelete = new QPushButton(ProfileManager3);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 2, 1, 1);

        tableView = new TableView(ProfileManager3);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 3);

        pushButtonOk = new QPushButton(ProfileManager3);
        pushButtonOk->setObjectName("pushButtonOk");

        gridLayout->addWidget(pushButtonOk, 2, 0, 1, 3);


        retranslateUi(ProfileManager3);

        QMetaObject::connectSlotsByName(ProfileManager3);
    } // setupUi

    void retranslateUi(QWidget *ProfileManager3)
    {
        ProfileManager3->setWindowTitle(QCoreApplication::translate("ProfileManager3", "Profile Manager Gen 3", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("ProfileManager3", "New", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("ProfileManager3", "Edit", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ProfileManager3", "Delete", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ProfileManager3", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileManager3: public Ui_ProfileManager3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEMANAGER3_H
