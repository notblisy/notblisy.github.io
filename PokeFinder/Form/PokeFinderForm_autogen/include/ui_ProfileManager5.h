/********************************************************************************
** Form generated from reading UI file 'ProfileManager5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEMANAGER5_H
#define UI_PROFILEMANAGER5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileManager5
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonDelete;
    TableView *tableView;
    QPushButton *pushButtonOk;

    void setupUi(QWidget *ProfileManager5)
    {
        if (ProfileManager5->objectName().isEmpty())
            ProfileManager5->setObjectName("ProfileManager5");
        ProfileManager5->resize(950, 300);
        gridLayout = new QGridLayout(ProfileManager5);
        gridLayout->setObjectName("gridLayout");
        pushButtonNew = new QPushButton(ProfileManager5);
        pushButtonNew->setObjectName("pushButtonNew");

        gridLayout->addWidget(pushButtonNew, 0, 0, 1, 1);

        pushButtonEdit = new QPushButton(ProfileManager5);
        pushButtonEdit->setObjectName("pushButtonEdit");

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        pushButtonDelete = new QPushButton(ProfileManager5);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 2, 1, 1);

        tableView = new TableView(ProfileManager5);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 3);

        pushButtonOk = new QPushButton(ProfileManager5);
        pushButtonOk->setObjectName("pushButtonOk");

        gridLayout->addWidget(pushButtonOk, 2, 0, 1, 3);


        retranslateUi(ProfileManager5);

        QMetaObject::connectSlotsByName(ProfileManager5);
    } // setupUi

    void retranslateUi(QWidget *ProfileManager5)
    {
        ProfileManager5->setWindowTitle(QCoreApplication::translate("ProfileManager5", "Profile Manager Gen 5", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("ProfileManager5", "New", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("ProfileManager5", "Edit", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ProfileManager5", "Delete", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ProfileManager5", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileManager5: public Ui_ProfileManager5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEMANAGER5_H
