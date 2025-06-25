/********************************************************************************
** Form generated from reading UI file 'IDs8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDS8_H
#define UI_IDS8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/IDsFilter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IDs8
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelInitialAdvances;
    TextBox *textBoxInitialAdvances;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QLabel *labelSeed0;
    TextBox *textBoxSeed0;
    QLabel *labelSeed1;
    TextBox *textBoxSeed1;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxFilter;
    QGridLayout *gridLayout_7;
    IDsFilter *filter;
    TableView *tableView;

    void setupUi(QWidget *IDs8)
    {
        if (IDs8->objectName().isEmpty())
            IDs8->setObjectName("IDs8");
        IDs8->resize(1200, 600);
        IDs8->setMinimumSize(QSize(1200, 600));
        gridLayout = new QGridLayout(IDs8);
        gridLayout->setObjectName("gridLayout");
        groupBoxRNGInfo = new QGroupBox(IDs8);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout_6 = new QGridLayout(groupBoxRNGInfo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelInitialAdvances = new QLabel(groupBoxRNGInfo);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_6->addWidget(labelInitialAdvances, 0, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxInitialAdvances, 0, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxRNGInfo);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_6->addWidget(labelMaxAdvances, 1, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_6->addWidget(textBoxMaxAdvances, 1, 1, 1, 1);

        labelSeed0 = new QLabel(groupBoxRNGInfo);
        labelSeed0->setObjectName("labelSeed0");

        gridLayout_6->addWidget(labelSeed0, 2, 0, 1, 1);

        textBoxSeed0 = new TextBox(groupBoxRNGInfo);
        textBoxSeed0->setObjectName("textBoxSeed0");

        gridLayout_6->addWidget(textBoxSeed0, 2, 1, 1, 1);

        labelSeed1 = new QLabel(groupBoxRNGInfo);
        labelSeed1->setObjectName("labelSeed1");

        gridLayout_6->addWidget(labelSeed1, 3, 0, 1, 1);

        textBoxSeed1 = new TextBox(groupBoxRNGInfo);
        textBoxSeed1->setObjectName("textBoxSeed1");

        gridLayout_6->addWidget(textBoxSeed1, 3, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 4, 0, 1, 3);


        gridLayout->addWidget(groupBoxRNGInfo, 0, 0, 1, 1);

        groupBoxFilter = new QGroupBox(IDs8);
        groupBoxFilter->setObjectName("groupBoxFilter");
        gridLayout_7 = new QGridLayout(groupBoxFilter);
        gridLayout_7->setObjectName("gridLayout_7");
        filter = new IDsFilter(groupBoxFilter);
        filter->setObjectName("filter");

        gridLayout_7->addWidget(filter, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxFilter, 0, 1, 1, 1);

        tableView = new TableView(IDs8);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, tableView);

        retranslateUi(IDs8);

        QMetaObject::connectSlotsByName(IDs8);
    } // setupUi

    void retranslateUi(QWidget *IDs8)
    {
        IDs8->setWindowTitle(QCoreApplication::translate("IDs8", "Gen 8 TID/SID", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("IDs8", "RNG Info", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("IDs8", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("IDs8", "Max Advances", nullptr));
        labelSeed0->setText(QCoreApplication::translate("IDs8", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("IDs8", "Seed 1", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("IDs8", "Generate", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("IDs8", "Filters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IDs8: public Ui_IDs8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDS8_H
