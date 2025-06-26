/********************************************************************************
** Form generated from reading UI file 'IDs3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDS3_H
#define UI_IDS3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/DateTimeEdit.hpp"
#include "Form/Controls/IDsFilter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IDs3
{
public:
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout_2;
    IDsFilter *idFilter;
    TableView *tableView;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabXDColo;
    QGridLayout *gridLayout_6;
    QLabel *labelSeedXDColo;
    TextBox *textBoxSeedXDColo;
    QLabel *labelInitialAdvancesXDColo;
    TextBox *textBoxInitialAdvancesXDColo;
    QLabel *labelMaxAdvancesXDColo;
    TextBox *textBoxMaxAdvancesXDColo;
    QPushButton *pushButtonGenerateXDColo;
    QWidget *tabFRLGE;
    QGridLayout *gridLayout_7;
    QLabel *labelTIDFRLGE;
    TextBox *textBoxTIDFRLGE;
    QLabel *labelInitialAdvancesFRLGE;
    TextBox *textBoxInitialAdvancesFRLGE;
    QLabel *labelMaxAdvancesFRLGE;
    TextBox *textBoxMaxAdvancesFRLGE;
    QPushButton *pushButtonGenerateFRLGE;
    QWidget *tabRS;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBoxDeadBatteryRS;
    QRadioButton *radioButtonDateTimeRS;
    DateTimeEdit *dateTimeEditRS;
    QRadioButton *radioButtonSeedRS;
    TextBox *textBoxSeedRS;
    QLabel *labelInitialAdvancesRS;
    TextBox *textBoxInitialAdvancesRS;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvancesRS;
    QPushButton *pushButtonGenerateRS;
    QToolButton *closebutton;

    void setupUi(QWidget *IDs3)
    {
        if (IDs3->objectName().isEmpty())
            IDs3->setObjectName("IDs3");
        IDs3->resize(710, 570);
        gridLayout_9 = new QGridLayout(IDs3);
        gridLayout_9->setObjectName("gridLayout_9");
        groupBoxFilters = new QGroupBox(IDs3);
        groupBoxFilters->setObjectName("groupBoxFilters");
        gridLayout_2 = new QGridLayout(groupBoxFilters);
        gridLayout_2->setObjectName("gridLayout_2");
        idFilter = new IDsFilter(groupBoxFilters);
        idFilter->setObjectName("idFilter");

        gridLayout_2->addWidget(idFilter, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBoxFilters, 1, 1, 1, 1);

        tableView = new TableView(IDs3);
        tableView->setObjectName("tableView");

        gridLayout_9->addWidget(tableView, 2, 0, 1, 2);

        groupBoxRNGInfo = new QGroupBox(IDs3);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout = new QGridLayout(groupBoxRNGInfo);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(groupBoxRNGInfo);
        tabWidget->setObjectName("tabWidget");
        tabXDColo = new QWidget();
        tabXDColo->setObjectName("tabXDColo");
        gridLayout_6 = new QGridLayout(tabXDColo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelSeedXDColo = new QLabel(tabXDColo);
        labelSeedXDColo->setObjectName("labelSeedXDColo");

        gridLayout_6->addWidget(labelSeedXDColo, 0, 0, 1, 1);

        textBoxSeedXDColo = new TextBox(tabXDColo);
        textBoxSeedXDColo->setObjectName("textBoxSeedXDColo");

        gridLayout_6->addWidget(textBoxSeedXDColo, 0, 1, 1, 1);

        labelInitialAdvancesXDColo = new QLabel(tabXDColo);
        labelInitialAdvancesXDColo->setObjectName("labelInitialAdvancesXDColo");

        gridLayout_6->addWidget(labelInitialAdvancesXDColo, 1, 0, 1, 1);

        textBoxInitialAdvancesXDColo = new TextBox(tabXDColo);
        textBoxInitialAdvancesXDColo->setObjectName("textBoxInitialAdvancesXDColo");
        textBoxInitialAdvancesXDColo->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxInitialAdvancesXDColo, 1, 1, 1, 1);

        labelMaxAdvancesXDColo = new QLabel(tabXDColo);
        labelMaxAdvancesXDColo->setObjectName("labelMaxAdvancesXDColo");

        gridLayout_6->addWidget(labelMaxAdvancesXDColo, 2, 0, 1, 1);

        textBoxMaxAdvancesXDColo = new TextBox(tabXDColo);
        textBoxMaxAdvancesXDColo->setObjectName("textBoxMaxAdvancesXDColo");
        textBoxMaxAdvancesXDColo->setText(QString::fromUtf8("100000"));

        gridLayout_6->addWidget(textBoxMaxAdvancesXDColo, 2, 1, 1, 1);

        pushButtonGenerateXDColo = new QPushButton(tabXDColo);
        pushButtonGenerateXDColo->setObjectName("pushButtonGenerateXDColo");

        gridLayout_6->addWidget(pushButtonGenerateXDColo, 3, 0, 1, 2);

        tabWidget->addTab(tabXDColo, QString());
        tabFRLGE = new QWidget();
        tabFRLGE->setObjectName("tabFRLGE");
        gridLayout_7 = new QGridLayout(tabFRLGE);
        gridLayout_7->setObjectName("gridLayout_7");
        labelTIDFRLGE = new QLabel(tabFRLGE);
        labelTIDFRLGE->setObjectName("labelTIDFRLGE");

        gridLayout_7->addWidget(labelTIDFRLGE, 0, 0, 1, 1);

        textBoxTIDFRLGE = new TextBox(tabFRLGE);
        textBoxTIDFRLGE->setObjectName("textBoxTIDFRLGE");

        gridLayout_7->addWidget(textBoxTIDFRLGE, 0, 1, 1, 1);

        labelInitialAdvancesFRLGE = new QLabel(tabFRLGE);
        labelInitialAdvancesFRLGE->setObjectName("labelInitialAdvancesFRLGE");

        gridLayout_7->addWidget(labelInitialAdvancesFRLGE, 1, 0, 1, 1);

        textBoxInitialAdvancesFRLGE = new TextBox(tabFRLGE);
        textBoxInitialAdvancesFRLGE->setObjectName("textBoxInitialAdvancesFRLGE");
        textBoxInitialAdvancesFRLGE->setText(QString::fromUtf8("0"));

        gridLayout_7->addWidget(textBoxInitialAdvancesFRLGE, 1, 1, 1, 1);

        labelMaxAdvancesFRLGE = new QLabel(tabFRLGE);
        labelMaxAdvancesFRLGE->setObjectName("labelMaxAdvancesFRLGE");

        gridLayout_7->addWidget(labelMaxAdvancesFRLGE, 2, 0, 1, 1);

        textBoxMaxAdvancesFRLGE = new TextBox(tabFRLGE);
        textBoxMaxAdvancesFRLGE->setObjectName("textBoxMaxAdvancesFRLGE");
        textBoxMaxAdvancesFRLGE->setText(QString::fromUtf8("100000"));

        gridLayout_7->addWidget(textBoxMaxAdvancesFRLGE, 2, 1, 1, 1);

        pushButtonGenerateFRLGE = new QPushButton(tabFRLGE);
        pushButtonGenerateFRLGE->setObjectName("pushButtonGenerateFRLGE");

        gridLayout_7->addWidget(pushButtonGenerateFRLGE, 3, 0, 1, 2);

        tabWidget->addTab(tabFRLGE, QString());
        tabRS = new QWidget();
        tabRS->setObjectName("tabRS");
        gridLayout_8 = new QGridLayout(tabRS);
        gridLayout_8->setObjectName("gridLayout_8");
        checkBoxDeadBatteryRS = new QCheckBox(tabRS);
        checkBoxDeadBatteryRS->setObjectName("checkBoxDeadBatteryRS");

        gridLayout_8->addWidget(checkBoxDeadBatteryRS, 0, 0, 1, 1);

        radioButtonDateTimeRS = new QRadioButton(tabRS);
        radioButtonDateTimeRS->setObjectName("radioButtonDateTimeRS");
        radioButtonDateTimeRS->setChecked(true);

        gridLayout_8->addWidget(radioButtonDateTimeRS, 1, 0, 1, 1);

        dateTimeEditRS = new DateTimeEdit(tabRS);
        dateTimeEditRS->setObjectName("dateTimeEditRS");

        gridLayout_8->addWidget(dateTimeEditRS, 1, 1, 1, 1);

        radioButtonSeedRS = new QRadioButton(tabRS);
        radioButtonSeedRS->setObjectName("radioButtonSeedRS");

        gridLayout_8->addWidget(radioButtonSeedRS, 2, 0, 1, 1);

        textBoxSeedRS = new TextBox(tabRS);
        textBoxSeedRS->setObjectName("textBoxSeedRS");

        gridLayout_8->addWidget(textBoxSeedRS, 2, 1, 1, 1);

        labelInitialAdvancesRS = new QLabel(tabRS);
        labelInitialAdvancesRS->setObjectName("labelInitialAdvancesRS");

        gridLayout_8->addWidget(labelInitialAdvancesRS, 3, 0, 1, 1);

        textBoxInitialAdvancesRS = new TextBox(tabRS);
        textBoxInitialAdvancesRS->setObjectName("textBoxInitialAdvancesRS");
        textBoxInitialAdvancesRS->setText(QString::fromUtf8("0"));

        gridLayout_8->addWidget(textBoxInitialAdvancesRS, 3, 1, 1, 1);

        labelMaxAdvances = new QLabel(tabRS);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_8->addWidget(labelMaxAdvances, 4, 0, 1, 1);

        textBoxMaxAdvancesRS = new TextBox(tabRS);
        textBoxMaxAdvancesRS->setObjectName("textBoxMaxAdvancesRS");
        textBoxMaxAdvancesRS->setText(QString::fromUtf8("100000"));

        gridLayout_8->addWidget(textBoxMaxAdvancesRS, 4, 1, 1, 1);

        pushButtonGenerateRS = new QPushButton(tabRS);
        pushButtonGenerateRS->setObjectName("pushButtonGenerateRS");

        gridLayout_8->addWidget(pushButtonGenerateRS, 5, 0, 1, 2);

        tabWidget->addTab(tabRS, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBoxRNGInfo, 1, 0, 1, 1);

        closebutton = new QToolButton(IDs3);
        closebutton->setObjectName("closebutton");

        gridLayout_9->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, textBoxSeedXDColo);
        QWidget::setTabOrder(textBoxSeedXDColo, textBoxInitialAdvancesXDColo);
        QWidget::setTabOrder(textBoxInitialAdvancesXDColo, textBoxMaxAdvancesXDColo);
        QWidget::setTabOrder(textBoxMaxAdvancesXDColo, pushButtonGenerateXDColo);
        QWidget::setTabOrder(pushButtonGenerateXDColo, textBoxTIDFRLGE);
        QWidget::setTabOrder(textBoxTIDFRLGE, textBoxInitialAdvancesFRLGE);
        QWidget::setTabOrder(textBoxInitialAdvancesFRLGE, textBoxMaxAdvancesFRLGE);
        QWidget::setTabOrder(textBoxMaxAdvancesFRLGE, pushButtonGenerateFRLGE);
        QWidget::setTabOrder(pushButtonGenerateFRLGE, checkBoxDeadBatteryRS);
        QWidget::setTabOrder(checkBoxDeadBatteryRS, radioButtonDateTimeRS);
        QWidget::setTabOrder(radioButtonDateTimeRS, dateTimeEditRS);
        QWidget::setTabOrder(dateTimeEditRS, radioButtonSeedRS);
        QWidget::setTabOrder(radioButtonSeedRS, textBoxSeedRS);
        QWidget::setTabOrder(textBoxSeedRS, textBoxInitialAdvancesRS);
        QWidget::setTabOrder(textBoxInitialAdvancesRS, textBoxMaxAdvancesRS);
        QWidget::setTabOrder(textBoxMaxAdvancesRS, pushButtonGenerateRS);
        QWidget::setTabOrder(pushButtonGenerateRS, tableView);

        retranslateUi(IDs3);

        QMetaObject::connectSlotsByName(IDs3);
    } // setupUi

    void retranslateUi(QWidget *IDs3)
    {
        IDs3->setWindowTitle(QCoreApplication::translate("IDs3", "Gen 3 TID\\SID", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("IDs3", "Filters", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("IDs3", "RNG Info", nullptr));
        labelSeedXDColo->setText(QCoreApplication::translate("IDs3", "Seed", nullptr));
        labelInitialAdvancesXDColo->setText(QCoreApplication::translate("IDs3", "Initial Advances", nullptr));
        labelMaxAdvancesXDColo->setText(QCoreApplication::translate("IDs3", "Max Advances", nullptr));
        pushButtonGenerateXDColo->setText(QCoreApplication::translate("IDs3", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabXDColo), QCoreApplication::translate("IDs3", "XD/Colo", nullptr));
        labelTIDFRLGE->setText(QCoreApplication::translate("IDs3", "TID", nullptr));
        labelInitialAdvancesFRLGE->setText(QCoreApplication::translate("IDs3", "Initial Advances", nullptr));
        labelMaxAdvancesFRLGE->setText(QCoreApplication::translate("IDs3", "Max Advances", nullptr));
        pushButtonGenerateFRLGE->setText(QCoreApplication::translate("IDs3", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFRLGE), QCoreApplication::translate("IDs3", "FRLGE", nullptr));
        checkBoxDeadBatteryRS->setText(QCoreApplication::translate("IDs3", "Dead Battery", nullptr));
        radioButtonDateTimeRS->setText(QCoreApplication::translate("IDs3", "Date/Time", nullptr));
        radioButtonSeedRS->setText(QCoreApplication::translate("IDs3", "Seed", nullptr));
        labelInitialAdvancesRS->setText(QCoreApplication::translate("IDs3", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("IDs3", "Max Advances", nullptr));
        pushButtonGenerateRS->setText(QCoreApplication::translate("IDs3", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRS), QCoreApplication::translate("IDs3", "RS", nullptr));
        closebutton->setText(QCoreApplication::translate("IDs3", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IDs3: public Ui_IDs3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDS3_H
