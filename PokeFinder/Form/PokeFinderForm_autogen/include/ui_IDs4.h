/********************************************************************************
** Form generated from reading UI file 'IDs4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDS4_H
#define UI_IDS4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/DateTimeEdit.hpp"
#include "Form/Controls/IDsFilter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IDs4
{
public:
    QGridLayout *gridLayout_3;
    TableView *tableViewSeedFinder;
    QGroupBox *groupBoxSearcher;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout;
    QLabel *labelYear;
    TextBox *textBoxYear;
    QLabel *labelSearcherMinDelay;
    TextBox *textBoxSearcherMinDelay;
    QLabel *labelSearcherMaxDelay;
    TextBox *textBoxSearcherMaxDelay;
    QCheckBox *checkBoxInfiniteSearch;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout_2;
    IDsFilter *idFilter;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
    QGroupBox *groupBoxSeedFinder;
    QGridLayout *gridLayout_6;
    QLabel *labelTID;
    TextBox *textBoxTID;
    QLabel *labelDateTime;
    DateTimeEdit *dateTimeEdit;
    QLabel *labelSeedFinderMinDelay;
    TextBox *textBoxSeedFinderMinDelay;
    QLabel *labelSeedFinderMaxDelay;
    TextBox *textBoxSeedFinderMaxDelay;
    QPushButton *pushButtonFind;
    QToolButton *closebutton;

    void setupUi(QWidget *IDs4)
    {
        if (IDs4->objectName().isEmpty())
            IDs4->setObjectName("IDs4");
        IDs4->resize(520, 600);
        gridLayout_3 = new QGridLayout(IDs4);
        gridLayout_3->setObjectName("gridLayout_3");
        tableViewSeedFinder = new TableView(IDs4);
        tableViewSeedFinder->setObjectName("tableViewSeedFinder");

        gridLayout_3->addWidget(tableViewSeedFinder, 3, 1, 1, 1);

        groupBoxSearcher = new QGroupBox(IDs4);
        groupBoxSearcher->setObjectName("groupBoxSearcher");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxSearcher->sizePolicy().hasHeightForWidth());
        groupBoxSearcher->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxSearcher);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBoxRNGInfo = new QGroupBox(groupBoxSearcher);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout = new QGridLayout(groupBoxRNGInfo);
        gridLayout->setObjectName("gridLayout");
        labelYear = new QLabel(groupBoxRNGInfo);
        labelYear->setObjectName("labelYear");

        gridLayout->addWidget(labelYear, 0, 0, 1, 1);

        textBoxYear = new TextBox(groupBoxRNGInfo);
        textBoxYear->setObjectName("textBoxYear");
        textBoxYear->setText(QString::fromUtf8("2000"));

        gridLayout->addWidget(textBoxYear, 0, 1, 1, 1);

        labelSearcherMinDelay = new QLabel(groupBoxRNGInfo);
        labelSearcherMinDelay->setObjectName("labelSearcherMinDelay");

        gridLayout->addWidget(labelSearcherMinDelay, 1, 0, 1, 1);

        textBoxSearcherMinDelay = new TextBox(groupBoxRNGInfo);
        textBoxSearcherMinDelay->setObjectName("textBoxSearcherMinDelay");
        textBoxSearcherMinDelay->setText(QString::fromUtf8("5000"));

        gridLayout->addWidget(textBoxSearcherMinDelay, 1, 1, 1, 1);

        labelSearcherMaxDelay = new QLabel(groupBoxRNGInfo);
        labelSearcherMaxDelay->setObjectName("labelSearcherMaxDelay");

        gridLayout->addWidget(labelSearcherMaxDelay, 2, 0, 1, 1);

        textBoxSearcherMaxDelay = new TextBox(groupBoxRNGInfo);
        textBoxSearcherMaxDelay->setObjectName("textBoxSearcherMaxDelay");
        textBoxSearcherMaxDelay->setText(QString::fromUtf8("6000"));

        gridLayout->addWidget(textBoxSearcherMaxDelay, 2, 1, 1, 1);

        checkBoxInfiniteSearch = new QCheckBox(groupBoxRNGInfo);
        checkBoxInfiniteSearch->setObjectName("checkBoxInfiniteSearch");

        gridLayout->addWidget(checkBoxInfiniteSearch, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        gridLayout_4->addWidget(groupBoxRNGInfo, 0, 0, 1, 1);

        groupBoxFilters = new QGroupBox(groupBoxSearcher);
        groupBoxFilters->setObjectName("groupBoxFilters");
        gridLayout_2 = new QGridLayout(groupBoxFilters);
        gridLayout_2->setObjectName("gridLayout_2");
        idFilter = new IDsFilter(groupBoxFilters);
        idFilter->setObjectName("idFilter");

        gridLayout_2->addWidget(idFilter, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxFilters, 0, 1, 1, 1);

        progressBar = new QProgressBar(groupBoxSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_4->addWidget(progressBar, 1, 0, 1, 2);


        gridLayout_3->addWidget(groupBoxSearcher, 1, 0, 1, 1);

        tableViewSearcher = new TableView(IDs4);
        tableViewSearcher->setObjectName("tableViewSearcher");

        gridLayout_3->addWidget(tableViewSearcher, 3, 0, 1, 1);

        groupBoxSeedFinder = new QGroupBox(IDs4);
        groupBoxSeedFinder->setObjectName("groupBoxSeedFinder");
        sizePolicy.setHeightForWidth(groupBoxSeedFinder->sizePolicy().hasHeightForWidth());
        groupBoxSeedFinder->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(groupBoxSeedFinder);
        gridLayout_6->setObjectName("gridLayout_6");
        labelTID = new QLabel(groupBoxSeedFinder);
        labelTID->setObjectName("labelTID");

        gridLayout_6->addWidget(labelTID, 0, 0, 1, 1);

        textBoxTID = new TextBox(groupBoxSeedFinder);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout_6->addWidget(textBoxTID, 0, 1, 1, 1);

        labelDateTime = new QLabel(groupBoxSeedFinder);
        labelDateTime->setObjectName("labelDateTime");

        gridLayout_6->addWidget(labelDateTime, 1, 0, 1, 1);

        dateTimeEdit = new DateTimeEdit(groupBoxSeedFinder);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout_6->addWidget(dateTimeEdit, 1, 1, 1, 1);

        labelSeedFinderMinDelay = new QLabel(groupBoxSeedFinder);
        labelSeedFinderMinDelay->setObjectName("labelSeedFinderMinDelay");

        gridLayout_6->addWidget(labelSeedFinderMinDelay, 2, 0, 1, 1);

        textBoxSeedFinderMinDelay = new TextBox(groupBoxSeedFinder);
        textBoxSeedFinderMinDelay->setObjectName("textBoxSeedFinderMinDelay");
        textBoxSeedFinderMinDelay->setText(QString::fromUtf8("5000"));

        gridLayout_6->addWidget(textBoxSeedFinderMinDelay, 2, 1, 1, 1);

        labelSeedFinderMaxDelay = new QLabel(groupBoxSeedFinder);
        labelSeedFinderMaxDelay->setObjectName("labelSeedFinderMaxDelay");

        gridLayout_6->addWidget(labelSeedFinderMaxDelay, 3, 0, 1, 1);

        textBoxSeedFinderMaxDelay = new TextBox(groupBoxSeedFinder);
        textBoxSeedFinderMaxDelay->setObjectName("textBoxSeedFinderMaxDelay");
        textBoxSeedFinderMaxDelay->setText(QString::fromUtf8("6000"));

        gridLayout_6->addWidget(textBoxSeedFinderMaxDelay, 3, 1, 1, 1);

        pushButtonFind = new QPushButton(groupBoxSeedFinder);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout_6->addWidget(pushButtonFind, 4, 0, 1, 2);


        gridLayout_3->addWidget(groupBoxSeedFinder, 1, 1, 1, 1);

        closebutton = new QToolButton(IDs4);
        closebutton->setObjectName("closebutton");

        gridLayout_3->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(textBoxYear, textBoxSearcherMinDelay);
        QWidget::setTabOrder(textBoxSearcherMinDelay, textBoxSearcherMaxDelay);
        QWidget::setTabOrder(textBoxSearcherMaxDelay, checkBoxInfiniteSearch);
        QWidget::setTabOrder(checkBoxInfiniteSearch, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, tableViewSearcher);
        QWidget::setTabOrder(tableViewSearcher, textBoxTID);
        QWidget::setTabOrder(textBoxTID, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, textBoxSeedFinderMinDelay);
        QWidget::setTabOrder(textBoxSeedFinderMinDelay, textBoxSeedFinderMaxDelay);
        QWidget::setTabOrder(textBoxSeedFinderMaxDelay, pushButtonFind);
        QWidget::setTabOrder(pushButtonFind, tableViewSeedFinder);

        retranslateUi(IDs4);

        QMetaObject::connectSlotsByName(IDs4);
    } // setupUi

    void retranslateUi(QWidget *IDs4)
    {
        IDs4->setWindowTitle(QCoreApplication::translate("IDs4", "Gen 4 TID/SID", nullptr));
        groupBoxSearcher->setTitle(QCoreApplication::translate("IDs4", "Searcher", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("IDs4", "RNG Info", nullptr));
        labelYear->setText(QCoreApplication::translate("IDs4", "Year", nullptr));
        labelSearcherMinDelay->setText(QCoreApplication::translate("IDs4", "Min Delay", nullptr));
        labelSearcherMaxDelay->setText(QCoreApplication::translate("IDs4", "Max Delay", nullptr));
        checkBoxInfiniteSearch->setText(QCoreApplication::translate("IDs4", "Infinite Search", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("IDs4", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("IDs4", "Cancel", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("IDs4", "Filters", nullptr));
        groupBoxSeedFinder->setTitle(QCoreApplication::translate("IDs4", "Seed Finder", nullptr));
        labelTID->setText(QCoreApplication::translate("IDs4", "TID Obtained", nullptr));
        labelDateTime->setText(QCoreApplication::translate("IDs4", "Date/Time", nullptr));
        labelSeedFinderMinDelay->setText(QCoreApplication::translate("IDs4", "Min Delay", nullptr));
        labelSeedFinderMaxDelay->setText(QCoreApplication::translate("IDs4", "Max Delay", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("IDs4", "Find", nullptr));
        closebutton->setText(QCoreApplication::translate("IDs4", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IDs4: public Ui_IDs4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDS4_H
