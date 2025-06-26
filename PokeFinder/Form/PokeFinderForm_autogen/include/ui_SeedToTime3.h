/********************************************************************************
** Form generated from reading UI file 'SeedToTime3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEDTOTIME3_H
#define UI_SEEDTOTIME3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_SeedToTime3
{
public:
    QGridLayout *gridLayout;
    TextBox *textBoxSeed;
    QSpacerItem *horizontalSpacer;
    TextBox *textBoxYear;
    QLabel *seedLabel;
    QLabel *labelAdvances;
    TextBox *textBoxAdvances;
    QPushButton *pushButtonFind;
    QLabel *labelYear;
    TableView *tableView;
    QToolButton *closebutton;

    void setupUi(QWidget *SeedToTime3)
    {
        if (SeedToTime3->objectName().isEmpty())
            SeedToTime3->setObjectName("SeedToTime3");
        SeedToTime3->resize(540, 350);
        gridLayout = new QGridLayout(SeedToTime3);
        gridLayout->setObjectName("gridLayout");
        textBoxSeed = new TextBox(SeedToTime3);
        textBoxSeed->setObjectName("textBoxSeed");

        gridLayout->addWidget(textBoxSeed, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        textBoxYear = new TextBox(SeedToTime3);
        textBoxYear->setObjectName("textBoxYear");
        textBoxYear->setText(QString::fromUtf8("2000"));

        gridLayout->addWidget(textBoxYear, 2, 1, 1, 1);

        seedLabel = new QLabel(SeedToTime3);
        seedLabel->setObjectName("seedLabel");

        gridLayout->addWidget(seedLabel, 1, 0, 1, 1);

        labelAdvances = new QLabel(SeedToTime3);
        labelAdvances->setObjectName("labelAdvances");

        gridLayout->addWidget(labelAdvances, 3, 0, 1, 1);

        textBoxAdvances = new TextBox(SeedToTime3);
        textBoxAdvances->setObjectName("textBoxAdvances");
        textBoxAdvances->setEnabled(true);
        textBoxAdvances->setReadOnly(true);

        gridLayout->addWidget(textBoxAdvances, 3, 1, 1, 1);

        pushButtonFind = new QPushButton(SeedToTime3);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 3, 2, 1, 1);

        labelYear = new QLabel(SeedToTime3);
        labelYear->setObjectName("labelYear");

        gridLayout->addWidget(labelYear, 2, 0, 1, 1);

        tableView = new TableView(SeedToTime3);
        tableView->setObjectName("tableView");
        tableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableView, 4, 0, 1, 3);

        closebutton = new QToolButton(SeedToTime3);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(SeedToTime3);

        QMetaObject::connectSlotsByName(SeedToTime3);
    } // setupUi

    void retranslateUi(QWidget *SeedToTime3)
    {
        SeedToTime3->setWindowTitle(QCoreApplication::translate("SeedToTime3", "Gen 3 Seed to Time", nullptr));
        seedLabel->setText(QCoreApplication::translate("SeedToTime3", "16/32-Bit Seed", nullptr));
        labelAdvances->setText(QCoreApplication::translate("SeedToTime3", "Advances", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("SeedToTime3", "Find", nullptr));
        labelYear->setText(QCoreApplication::translate("SeedToTime3", "Year", nullptr));
        closebutton->setText(QCoreApplication::translate("SeedToTime3", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeedToTime3: public Ui_SeedToTime3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEDTOTIME3_H
