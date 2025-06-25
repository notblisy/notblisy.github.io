/********************************************************************************
** Form generated from reading UI file 'PIDToIV.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIDTOIV_H
#define UI_PIDTOIV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_PIDToIV
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPID;
    TextBox *textBoxPID;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonGenerate;
    TableView *tableView;

    void setupUi(QWidget *PIDToIV)
    {
        if (PIDToIV->objectName().isEmpty())
            PIDToIV->setObjectName("PIDToIV");
        PIDToIV->resize(480, 330);
        gridLayout = new QGridLayout(PIDToIV);
        gridLayout->setObjectName("gridLayout");
        labelPID = new QLabel(PIDToIV);
        labelPID->setObjectName("labelPID");

        gridLayout->addWidget(labelPID, 0, 0, 1, 1);

        textBoxPID = new TextBox(PIDToIV);
        textBoxPID->setObjectName("textBoxPID");

        gridLayout->addWidget(textBoxPID, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        pushButtonGenerate = new QPushButton(PIDToIV);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout->addWidget(pushButtonGenerate, 1, 2, 1, 1);

        tableView = new TableView(PIDToIV);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 2, 0, 1, 3);


        retranslateUi(PIDToIV);

        QMetaObject::connectSlotsByName(PIDToIV);
    } // setupUi

    void retranslateUi(QWidget *PIDToIV)
    {
        PIDToIV->setWindowTitle(QCoreApplication::translate("PIDToIV", "PID to IVs", nullptr));
        labelPID->setText(QCoreApplication::translate("PIDToIV", "PID", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("PIDToIV", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PIDToIV: public Ui_PIDToIV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIDTOIV_H
