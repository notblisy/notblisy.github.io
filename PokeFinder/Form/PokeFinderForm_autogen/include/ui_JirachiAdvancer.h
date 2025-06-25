/********************************************************************************
** Form generated from reading UI file 'JirachiAdvancer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIRACHIADVANCER_H
#define UI_JIRACHIADVANCER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_JirachiAdvancer
{
public:
    QGridLayout *gridLayout;
    QLabel *labelStartingSeed;
    TextBox *textBoxStartingSeed;
    QLabel *labelTargetSeed;
    TextBox *textBoxTargetSeed;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QLabel *labelBruteForceRange;
    TextBox *textBoxBruteForceRange;
    QPushButton *pushButtonGenerate;
    QListWidget *listWidget;

    void setupUi(QDialog *JirachiAdvancer)
    {
        if (JirachiAdvancer->objectName().isEmpty())
            JirachiAdvancer->setObjectName("JirachiAdvancer");
        JirachiAdvancer->resize(448, 364);
        gridLayout = new QGridLayout(JirachiAdvancer);
        gridLayout->setObjectName("gridLayout");
        labelStartingSeed = new QLabel(JirachiAdvancer);
        labelStartingSeed->setObjectName("labelStartingSeed");

        gridLayout->addWidget(labelStartingSeed, 0, 0, 1, 1);

        textBoxStartingSeed = new TextBox(JirachiAdvancer);
        textBoxStartingSeed->setObjectName("textBoxStartingSeed");

        gridLayout->addWidget(textBoxStartingSeed, 0, 1, 1, 1);

        labelTargetSeed = new QLabel(JirachiAdvancer);
        labelTargetSeed->setObjectName("labelTargetSeed");

        gridLayout->addWidget(labelTargetSeed, 0, 2, 1, 1);

        textBoxTargetSeed = new TextBox(JirachiAdvancer);
        textBoxTargetSeed->setObjectName("textBoxTargetSeed");

        gridLayout->addWidget(textBoxTargetSeed, 0, 3, 1, 1);

        labelMaxAdvances = new QLabel(JirachiAdvancer);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout->addWidget(labelMaxAdvances, 1, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(JirachiAdvancer);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");

        gridLayout->addWidget(textBoxMaxAdvances, 1, 1, 1, 1);

        labelBruteForceRange = new QLabel(JirachiAdvancer);
        labelBruteForceRange->setObjectName("labelBruteForceRange");

        gridLayout->addWidget(labelBruteForceRange, 1, 2, 1, 1);

        textBoxBruteForceRange = new TextBox(JirachiAdvancer);
        textBoxBruteForceRange->setObjectName("textBoxBruteForceRange");

        gridLayout->addWidget(textBoxBruteForceRange, 1, 3, 1, 1);

        pushButtonGenerate = new QPushButton(JirachiAdvancer);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout->addWidget(pushButtonGenerate, 2, 3, 1, 1);

        listWidget = new QListWidget(JirachiAdvancer);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 3, 0, 1, 4);


        retranslateUi(JirachiAdvancer);

        QMetaObject::connectSlotsByName(JirachiAdvancer);
    } // setupUi

    void retranslateUi(QDialog *JirachiAdvancer)
    {
        JirachiAdvancer->setWindowTitle(QCoreApplication::translate("JirachiAdvancer", "Jirachi Advancer", nullptr));
        labelStartingSeed->setText(QCoreApplication::translate("JirachiAdvancer", "Starting Seed", nullptr));
        labelTargetSeed->setText(QCoreApplication::translate("JirachiAdvancer", "Target Seed", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("JirachiAdvancer", "Max Advances", nullptr));
        labelBruteForceRange->setText(QCoreApplication::translate("JirachiAdvancer", "Brute Force Range", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("JirachiAdvancer", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JirachiAdvancer: public Ui_JirachiAdvancer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIRACHIADVANCER_H
