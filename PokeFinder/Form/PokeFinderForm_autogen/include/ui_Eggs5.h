/********************************************************************************
** Form generated from reading UI file 'Eggs5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGGS5_H
#define UI_EGGS5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/EggSettings.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Eggs5
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_5;
    QLabel *labelProfile;
    QComboBox *comboBoxProfiles;
    QPushButton *pushButtonProfileManager;
    QLabel *labelProfileTID;
    QLabel *labelProfileTIDValue;
    QLabel *labelProfileSID;
    QLabel *labelProfileSIDValue;
    QFrame *line_4;
    QLabel *labelProfileMACAddress;
    QLabel *labelProfileMACAddressValue;
    QLabel *labelProfileDSType;
    QLabel *labelProfileDSTypeValue;
    QFrame *line_3;
    QLabel *labelProfileVCount;
    QLabel *labelProfileVCountValue;
    QLabel *labelProfileTimer0;
    QLabel *labelProfileTimer0Value;
    QFrame *line_2;
    QLabel *labelProfileGxStat;
    QLabel *labelProfileGxStatValue;
    QLabel *labelProfileVFrame;
    QLabel *labelProfileVFrameValue;
    QFrame *line;
    QLabel *labelProfileKeypresses;
    QLabel *labelProfileKeypressesValue;
    QLabel *labelProfileGame;
    QLabel *labelProfileGameValue;
    QTabWidget *tabRNGSelector;
    QWidget *tabGenerator;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeed;
    QLabel *labelGeneratorInitialAdvances;
    TextBox *textBoxGeneratorInitialAdvances;
    QLabel *labelGeneratorMaxAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QLabel *labelGeneratorOffset;
    TextBox *textBoxGeneratorOffset;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxGeneratorSettings;
    QGridLayout *gridLayout_11;
    EggSettings *eggSettingsGenerator;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSearcher;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherInitialAdvances;
    TextBox *textBoxSearcherInitialAdvances;
    QLabel *labelSearcherMaxAdvances;
    TextBox *textBoxSearcherMaxAdvances;
    QLabel *labelSearcherStartDate;
    DateEdit *dateEditSearcherStartDate;
    QLabel *labelSearcherEndDate;
    DateEdit *dateEditSearcherEndDate;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxSearcherSettings;
    QGridLayout *gridLayout_13;
    EggSettings *eggSettingsSearcher;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
    QToolButton *closebutton;

    void setupUi(QWidget *Eggs5)
    {
        if (Eggs5->objectName().isEmpty())
            Eggs5->setObjectName("Eggs5");
        Eggs5->resize(1200, 700);
        gridLayout_7 = new QGridLayout(Eggs5);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxProfile = new QGroupBox(Eggs5);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_5 = new QGridLayout(groupBoxProfile);
        gridLayout_5->setObjectName("gridLayout_5");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_5->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_5->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_5->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_5->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");

        gridLayout_5->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_5->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");

        gridLayout_5->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line_4 = new QFrame(groupBoxProfile);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_4, 0, 4, 2, 1);

        labelProfileMACAddress = new QLabel(groupBoxProfile);
        labelProfileMACAddress->setObjectName("labelProfileMACAddress");

        gridLayout_5->addWidget(labelProfileMACAddress, 0, 5, 1, 1);

        labelProfileMACAddressValue = new QLabel(groupBoxProfile);
        labelProfileMACAddressValue->setObjectName("labelProfileMACAddressValue");

        gridLayout_5->addWidget(labelProfileMACAddressValue, 0, 6, 1, 1);

        labelProfileDSType = new QLabel(groupBoxProfile);
        labelProfileDSType->setObjectName("labelProfileDSType");

        gridLayout_5->addWidget(labelProfileDSType, 1, 5, 1, 1);

        labelProfileDSTypeValue = new QLabel(groupBoxProfile);
        labelProfileDSTypeValue->setObjectName("labelProfileDSTypeValue");

        gridLayout_5->addWidget(labelProfileDSTypeValue, 1, 6, 1, 1);

        line_3 = new QFrame(groupBoxProfile);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_3, 0, 7, 2, 1);

        labelProfileVCount = new QLabel(groupBoxProfile);
        labelProfileVCount->setObjectName("labelProfileVCount");

        gridLayout_5->addWidget(labelProfileVCount, 0, 8, 1, 1);

        labelProfileVCountValue = new QLabel(groupBoxProfile);
        labelProfileVCountValue->setObjectName("labelProfileVCountValue");

        gridLayout_5->addWidget(labelProfileVCountValue, 0, 9, 1, 1);

        labelProfileTimer0 = new QLabel(groupBoxProfile);
        labelProfileTimer0->setObjectName("labelProfileTimer0");

        gridLayout_5->addWidget(labelProfileTimer0, 1, 8, 1, 1);

        labelProfileTimer0Value = new QLabel(groupBoxProfile);
        labelProfileTimer0Value->setObjectName("labelProfileTimer0Value");

        gridLayout_5->addWidget(labelProfileTimer0Value, 1, 9, 1, 1);

        line_2 = new QFrame(groupBoxProfile);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_2, 0, 10, 2, 1);

        labelProfileGxStat = new QLabel(groupBoxProfile);
        labelProfileGxStat->setObjectName("labelProfileGxStat");

        gridLayout_5->addWidget(labelProfileGxStat, 0, 11, 1, 1);

        labelProfileGxStatValue = new QLabel(groupBoxProfile);
        labelProfileGxStatValue->setObjectName("labelProfileGxStatValue");

        gridLayout_5->addWidget(labelProfileGxStatValue, 0, 12, 1, 1);

        labelProfileVFrame = new QLabel(groupBoxProfile);
        labelProfileVFrame->setObjectName("labelProfileVFrame");

        gridLayout_5->addWidget(labelProfileVFrame, 1, 11, 1, 1);

        labelProfileVFrameValue = new QLabel(groupBoxProfile);
        labelProfileVFrameValue->setObjectName("labelProfileVFrameValue");

        gridLayout_5->addWidget(labelProfileVFrameValue, 1, 12, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line, 0, 13, 2, 1);

        labelProfileKeypresses = new QLabel(groupBoxProfile);
        labelProfileKeypresses->setObjectName("labelProfileKeypresses");

        gridLayout_5->addWidget(labelProfileKeypresses, 0, 14, 1, 1);

        labelProfileKeypressesValue = new QLabel(groupBoxProfile);
        labelProfileKeypressesValue->setObjectName("labelProfileKeypressesValue");

        gridLayout_5->addWidget(labelProfileKeypressesValue, 0, 15, 1, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_5->addWidget(labelProfileGame, 1, 14, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_5->addWidget(labelProfileGameValue, 1, 15, 1, 1);


        gridLayout_7->addWidget(groupBoxProfile, 1, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Eggs5);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_12 = new QGridLayout(tabGenerator);
        gridLayout_12->setObjectName("gridLayout_12");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGeneratorRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_6->addWidget(labelGeneratorSeed, 0, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_6->addWidget(textBoxGeneratorSeed, 0, 1, 1, 1);

        labelGeneratorInitialAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");

        gridLayout_6->addWidget(labelGeneratorInitialAdvances, 1, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxGeneratorInitialAdvances, 1, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");

        gridLayout_6->addWidget(labelGeneratorMaxAdvances, 2, 0, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_6->addWidget(textBoxGeneratorMaxAdvances, 2, 1, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_6->addWidget(labelGeneratorOffset, 3, 0, 1, 1);

        textBoxGeneratorOffset = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");

        gridLayout_6->addWidget(textBoxGeneratorOffset, 3, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 4, 0, 1, 2);


        gridLayout_12->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorSettings->setSizePolicy(sizePolicy1);
        gridLayout_11 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_11->setObjectName("gridLayout_11");
        eggSettingsGenerator = new EggSettings(groupBoxGeneratorSettings);
        eggSettingsGenerator->setObjectName("eggSettingsGenerator");

        gridLayout_11->addWidget(eggSettingsGenerator, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabGenerator);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxGeneratorFilters->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBoxGeneratorFilters);
        gridLayout->setObjectName("gridLayout");
        filterGenerator = new Filter(groupBoxGeneratorFilters);
        filterGenerator->setObjectName("filterGenerator");

        gridLayout->addWidget(filterGenerator, 0, 0, 2, 1);


        gridLayout_12->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_12->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabGenerator, QString());
        tabSearcher = new QWidget();
        tabSearcher->setObjectName("tabSearcher");
        gridLayout_3 = new QGridLayout(tabSearcher);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxSearcherRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxSearcherRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSearcherInitialAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherInitialAdvances->setObjectName("labelSearcherInitialAdvances");

        gridLayout_2->addWidget(labelSearcherInitialAdvances, 0, 0, 1, 1);

        textBoxSearcherInitialAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialAdvances->setObjectName("textBoxSearcherInitialAdvances");
        textBoxSearcherInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(textBoxSearcherInitialAdvances, 0, 1, 1, 1);

        labelSearcherMaxAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvances->setObjectName("labelSearcherMaxAdvances");

        gridLayout_2->addWidget(labelSearcherMaxAdvances, 1, 0, 1, 1);

        textBoxSearcherMaxAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvances->setObjectName("textBoxSearcherMaxAdvances");
        textBoxSearcherMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_2->addWidget(textBoxSearcherMaxAdvances, 1, 1, 1, 1);

        labelSearcherStartDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherStartDate->setObjectName("labelSearcherStartDate");

        gridLayout_2->addWidget(labelSearcherStartDate, 2, 0, 1, 1);

        dateEditSearcherStartDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherStartDate->setObjectName("dateEditSearcherStartDate");

        gridLayout_2->addWidget(dateEditSearcherStartDate, 2, 1, 1, 1);

        labelSearcherEndDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherEndDate->setObjectName("labelSearcherEndDate");

        gridLayout_2->addWidget(labelSearcherEndDate, 3, 0, 1, 1);

        dateEditSearcherEndDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherEndDate->setObjectName("dateEditSearcherEndDate");

        gridLayout_2->addWidget(dateEditSearcherEndDate, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 2);


        gridLayout_3->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        sizePolicy1.setHeightForWidth(groupBoxSearcherSettings->sizePolicy().hasHeightForWidth());
        groupBoxSearcherSettings->setSizePolicy(sizePolicy1);
        gridLayout_13 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_13->setObjectName("gridLayout_13");
        eggSettingsSearcher = new EggSettings(groupBoxSearcherSettings);
        eggSettingsSearcher->setObjectName("eggSettingsSearcher");

        gridLayout_13->addWidget(eggSettingsSearcher, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy2.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_4->setObjectName("gridLayout_4");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_4->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_3->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_3->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");

        gridLayout_3->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSearcher, QString());

        gridLayout_7->addWidget(tabRNGSelector, 2, 0, 1, 1);

        closebutton = new QToolButton(Eggs5);
        closebutton->setObjectName("closebutton");

        gridLayout_7->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, textBoxSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxSearcherMaxAdvances, dateEditSearcherStartDate);
        QWidget::setTabOrder(dateEditSearcherStartDate, dateEditSearcherEndDate);
        QWidget::setTabOrder(dateEditSearcherEndDate, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, tableViewSearcher);

        retranslateUi(Eggs5);

        QMetaObject::connectSlotsByName(Eggs5);
    } // setupUi

    void retranslateUi(QWidget *Eggs5)
    {
        Eggs5->setWindowTitle(QCoreApplication::translate("Eggs5", "Gen 5 Eggs", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Eggs5", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Eggs5", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Eggs5", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Eggs5", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Eggs5", "SID", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("Eggs5", "MAC Address", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("Eggs5", "DS Type", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("Eggs5", "VCount", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("Eggs5", "Timer0", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("Eggs5", "GxStat", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("Eggs5", "VFrame", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("Eggs5", "Keypresses", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Eggs5", "Game", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Eggs5", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Eggs5", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Eggs5", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Eggs5", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Eggs5", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Eggs5", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Eggs5", "Settings", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Eggs5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Eggs5", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Eggs5", "RNG Info", nullptr));
        labelSearcherInitialAdvances->setText(QCoreApplication::translate("Eggs5", "Initial Advances", nullptr));
        labelSearcherMaxAdvances->setText(QCoreApplication::translate("Eggs5", "Max Advances", nullptr));
        labelSearcherStartDate->setText(QCoreApplication::translate("Eggs5", "Start Date", nullptr));
        labelSearcherEndDate->setText(QCoreApplication::translate("Eggs5", "End Date", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Eggs5", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Eggs5", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Eggs5", "Settings", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Eggs5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSearcher), QCoreApplication::translate("Eggs5", "Searcher", nullptr));
        closebutton->setText(QCoreApplication::translate("Eggs5", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eggs5: public Ui_Eggs5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGGS5_H
