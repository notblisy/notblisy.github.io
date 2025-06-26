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
#include <QtWidgets/QToolButton>
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_JirachiAdvancer
{
public:
    QGridLayout *gridLayout;
    TextBox *textBoxBruteForceRange;
    QLabel *labelTargetSeed;
    QLabel *labelStartingSeed;
    TextBox *textBoxTargetSeed;
    QListWidget *listWidget;
    QLabel *labelBruteForceRange;
    QLabel *labelMaxAdvances;
    QPushButton *pushButtonGenerate;
    TextBox *textBoxMaxAdvances;
    TextBox *textBoxStartingSeed;
    QToolButton *toolButton;

    void setupUi(QDialog *JirachiAdvancer)
    {
        if (JirachiAdvancer->objectName().isEmpty())
            JirachiAdvancer->setObjectName("JirachiAdvancer");
        JirachiAdvancer->resize(448, 364);
        gridLayout = new QGridLayout(JirachiAdvancer);
        gridLayout->setObjectName("gridLayout");
        textBoxBruteForceRange = new TextBox(JirachiAdvancer);
        textBoxBruteForceRange->setObjectName("textBoxBruteForceRange");

        gridLayout->addWidget(textBoxBruteForceRange, 2, 3, 1, 1);

        labelTargetSeed = new QLabel(JirachiAdvancer);
        labelTargetSeed->setObjectName("labelTargetSeed");

        gridLayout->addWidget(labelTargetSeed, 1, 2, 1, 1);

        labelStartingSeed = new QLabel(JirachiAdvancer);
        labelStartingSeed->setObjectName("labelStartingSeed");

        gridLayout->addWidget(labelStartingSeed, 1, 0, 1, 1);

        textBoxTargetSeed = new TextBox(JirachiAdvancer);
        textBoxTargetSeed->setObjectName("textBoxTargetSeed");

        gridLayout->addWidget(textBoxTargetSeed, 1, 3, 1, 1);

        listWidget = new QListWidget(JirachiAdvancer);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 4, 0, 1, 4);

        labelBruteForceRange = new QLabel(JirachiAdvancer);
        labelBruteForceRange->setObjectName("labelBruteForceRange");

        gridLayout->addWidget(labelBruteForceRange, 2, 2, 1, 1);

        labelMaxAdvances = new QLabel(JirachiAdvancer);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout->addWidget(labelMaxAdvances, 2, 0, 1, 1);

        pushButtonGenerate = new QPushButton(JirachiAdvancer);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout->addWidget(pushButtonGenerate, 3, 3, 1, 1);

        textBoxMaxAdvances = new TextBox(JirachiAdvancer);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");

        gridLayout->addWidget(textBoxMaxAdvances, 2, 1, 1, 1);

        textBoxStartingSeed = new TextBox(JirachiAdvancer);
        textBoxStartingSeed->setObjectName("textBoxStartingSeed");

        gridLayout->addWidget(textBoxStartingSeed, 1, 1, 1, 1);

        toolButton = new QToolButton(JirachiAdvancer);
        toolButton->setObjectName("toolButton");

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);


        retranslateUi(JirachiAdvancer);

        QMetaObject::connectSlotsByName(JirachiAdvancer);
    } // setupUi

    void retranslateUi(QDialog *JirachiAdvancer)
    {
        JirachiAdvancer->setWindowTitle(QCoreApplication::translate("JirachiAdvancer", "Jirachi Advancer", nullptr));
        labelTargetSeed->setText(QCoreApplication::translate("JirachiAdvancer", "Target Seed", nullptr));
        labelStartingSeed->setText(QCoreApplication::translate("JirachiAdvancer", "Starting Seed", nullptr));
        labelBruteForceRange->setText(QCoreApplication::translate("JirachiAdvancer", "Brute Force Range", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("JirachiAdvancer", "Max Advances", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("JirachiAdvancer", "Generate", nullptr));
        toolButton->setText(QCoreApplication::translate("JirachiAdvancer", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JirachiAdvancer: public Ui_JirachiAdvancer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIRACHIADVANCER_H
