/********************************************************************************
** Form generated from reading UI file 'Wild5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WILD5_H
#define UI_WILD5_H

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
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Wild5
{
public:
    QGridLayout *gridLayout_8;
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
    QLabel *labelGeneratorLead;
    ComboMenu *comboMenuGeneratorLead;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeed;
    QLabel *labelGeneratorIVAdvances;
    TextBox *textBoxGeneratorIVAdvances;
    QLabel *labelGeneratorInitialAdvances;
    TextBox *textBoxGeneratorInitialAdvances;
    QLabel *labelGeneratorMaxAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QLabel *labelGeneratorOffset;
    TextBox *textBoxGeneratorOffset;
    QLabel *labelGeneratorLuckyPower;
    ComboBox *comboBoxGeneratorLuckyPower;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxGeneratorSettings;
    QGridLayout *gridLayout_7;
    QLabel *labelGeneratorEncounter;
    ComboBox *comboBoxGeneratorEncounter;
    QLabel *labelGeneratorLocation;
    ComboBox *comboBoxGeneratorLocation;
    QLabel *labelGeneratorPokemon;
    ComboBox *comboBoxGeneratorPokemon;
    QLabel *labelGeneratorSeason;
    QComboBox *comboBoxGeneratorSeason;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSearcher;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherLead;
    ComboMenu *comboMenuSearcherLead;
    QLabel *labelSearcherInitialIVAdvances;
    TextBox *textBoxSearcherInitialIVAdvances;
    QLabel *labelSearcherMaxIVAdvances;
    TextBox *textBoxSearcherMaxIVAdvances;
    QLabel *labelSearcherInitialAdvances;
    TextBox *textBoxSearcherInitialAdvances;
    QLabel *labelSearcherMaxAdvances;
    TextBox *textBoxSearcherMaxAdvances;
    QLabel *labelSearcherLuckyPower;
    ComboBox *comboBoxSearcherLuckyPower;
    QLabel *labelSearcherStartDate;
    DateEdit *dateEditSearcherStartDate;
    QLabel *labelSearcherEndDate;
    DateEdit *dateEditSearcherEndDate;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxSearcherSettings;
    QGridLayout *gridLayout_9;
    QLabel *labelSearcherEncounter;
    ComboBox *comboBoxSearcherEncounter;
    QLabel *labelSearcherLocation;
    ComboBox *comboBoxSearcherLocation;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QComboBox *comboBoxSearcherSeason;
    QLabel *labelSearcherSeason;
    QLabel *labelIVFastSearch;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;

    void setupUi(QWidget *Wild5)
    {
        if (Wild5->objectName().isEmpty())
            Wild5->setObjectName("Wild5");
        Wild5->resize(1200, 700);
        gridLayout_8 = new QGridLayout(Wild5);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBoxProfile = new QGroupBox(Wild5);
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


        gridLayout_8->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Wild5);
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
        labelGeneratorLead = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorLead->setObjectName("labelGeneratorLead");

        gridLayout_6->addWidget(labelGeneratorLead, 0, 0, 1, 1);

        comboMenuGeneratorLead = new ComboMenu(groupBoxGeneratorRNGInfo);
        comboMenuGeneratorLead->setObjectName("comboMenuGeneratorLead");

        gridLayout_6->addWidget(comboMenuGeneratorLead, 0, 1, 1, 1);

        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_6->addWidget(labelGeneratorSeed, 1, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_6->addWidget(textBoxGeneratorSeed, 1, 1, 1, 1);

        labelGeneratorIVAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorIVAdvances->setObjectName("labelGeneratorIVAdvances");

        gridLayout_6->addWidget(labelGeneratorIVAdvances, 2, 0, 1, 1);

        textBoxGeneratorIVAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorIVAdvances->setObjectName("textBoxGeneratorIVAdvances");

        gridLayout_6->addWidget(textBoxGeneratorIVAdvances, 2, 1, 1, 1);

        labelGeneratorInitialAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");

        gridLayout_6->addWidget(labelGeneratorInitialAdvances, 3, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxGeneratorInitialAdvances, 3, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");

        gridLayout_6->addWidget(labelGeneratorMaxAdvances, 4, 0, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_6->addWidget(textBoxGeneratorMaxAdvances, 4, 1, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_6->addWidget(labelGeneratorOffset, 5, 0, 1, 1);

        textBoxGeneratorOffset = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");

        gridLayout_6->addWidget(textBoxGeneratorOffset, 5, 1, 1, 1);

        labelGeneratorLuckyPower = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorLuckyPower->setObjectName("labelGeneratorLuckyPower");

        gridLayout_6->addWidget(labelGeneratorLuckyPower, 6, 0, 1, 1);

        comboBoxGeneratorLuckyPower = new ComboBox(groupBoxGeneratorRNGInfo);
        comboBoxGeneratorLuckyPower->addItem(QString::fromUtf8("0"));
        comboBoxGeneratorLuckyPower->addItem(QString::fromUtf8("1"));
        comboBoxGeneratorLuckyPower->addItem(QString::fromUtf8("2"));
        comboBoxGeneratorLuckyPower->addItem(QString::fromUtf8("3"));
        comboBoxGeneratorLuckyPower->addItem(QString());
        comboBoxGeneratorLuckyPower->setObjectName("comboBoxGeneratorLuckyPower");

        gridLayout_6->addWidget(comboBoxGeneratorLuckyPower, 6, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 7, 0, 1, 2);


        gridLayout_12->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorSettings->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_7->setObjectName("gridLayout_7");
        labelGeneratorEncounter = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorEncounter->setObjectName("labelGeneratorEncounter");

        gridLayout_7->addWidget(labelGeneratorEncounter, 0, 0, 1, 1);

        comboBoxGeneratorEncounter = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->setObjectName("comboBoxGeneratorEncounter");

        gridLayout_7->addWidget(comboBoxGeneratorEncounter, 0, 1, 1, 1);

        labelGeneratorLocation = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLocation->setObjectName("labelGeneratorLocation");

        gridLayout_7->addWidget(labelGeneratorLocation, 1, 0, 1, 1);

        comboBoxGeneratorLocation = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorLocation->setObjectName("comboBoxGeneratorLocation");

        gridLayout_7->addWidget(comboBoxGeneratorLocation, 1, 1, 1, 1);

        labelGeneratorPokemon = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPokemon->setObjectName("labelGeneratorPokemon");

        gridLayout_7->addWidget(labelGeneratorPokemon, 2, 0, 1, 1);

        comboBoxGeneratorPokemon = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorPokemon->setObjectName("comboBoxGeneratorPokemon");

        gridLayout_7->addWidget(comboBoxGeneratorPokemon, 2, 1, 1, 1);

        labelGeneratorSeason = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSeason->setObjectName("labelGeneratorSeason");

        gridLayout_7->addWidget(labelGeneratorSeason, 3, 0, 1, 1);

        comboBoxGeneratorSeason = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSeason->addItem(QString());
        comboBoxGeneratorSeason->addItem(QString());
        comboBoxGeneratorSeason->addItem(QString());
        comboBoxGeneratorSeason->addItem(QString());
        comboBoxGeneratorSeason->setObjectName("comboBoxGeneratorSeason");

        gridLayout_7->addWidget(comboBoxGeneratorSeason, 3, 1, 1, 1);


        gridLayout_12->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabGenerator);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
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
        labelSearcherLead = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherLead->setObjectName("labelSearcherLead");

        gridLayout_2->addWidget(labelSearcherLead, 0, 0, 1, 1);

        comboMenuSearcherLead = new ComboMenu(groupBoxSearcherRNGInfo);
        comboMenuSearcherLead->setObjectName("comboMenuSearcherLead");

        gridLayout_2->addWidget(comboMenuSearcherLead, 0, 1, 1, 1);

        labelSearcherInitialIVAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherInitialIVAdvances->setObjectName("labelSearcherInitialIVAdvances");

        gridLayout_2->addWidget(labelSearcherInitialIVAdvances, 1, 0, 1, 1);

        textBoxSearcherInitialIVAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialIVAdvances->setObjectName("textBoxSearcherInitialIVAdvances");

        gridLayout_2->addWidget(textBoxSearcherInitialIVAdvances, 1, 1, 1, 1);

        labelSearcherMaxIVAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxIVAdvances->setObjectName("labelSearcherMaxIVAdvances");

        gridLayout_2->addWidget(labelSearcherMaxIVAdvances, 2, 0, 1, 1);

        textBoxSearcherMaxIVAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxIVAdvances->setObjectName("textBoxSearcherMaxIVAdvances");

        gridLayout_2->addWidget(textBoxSearcherMaxIVAdvances, 2, 1, 1, 1);

        labelSearcherInitialAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherInitialAdvances->setObjectName("labelSearcherInitialAdvances");

        gridLayout_2->addWidget(labelSearcherInitialAdvances, 3, 0, 1, 1);

        textBoxSearcherInitialAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialAdvances->setObjectName("textBoxSearcherInitialAdvances");

        gridLayout_2->addWidget(textBoxSearcherInitialAdvances, 3, 1, 1, 1);

        labelSearcherMaxAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvances->setObjectName("labelSearcherMaxAdvances");

        gridLayout_2->addWidget(labelSearcherMaxAdvances, 4, 0, 1, 1);

        textBoxSearcherMaxAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvances->setObjectName("textBoxSearcherMaxAdvances");
        textBoxSearcherMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_2->addWidget(textBoxSearcherMaxAdvances, 4, 1, 1, 1);

        labelSearcherLuckyPower = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherLuckyPower->setObjectName("labelSearcherLuckyPower");

        gridLayout_2->addWidget(labelSearcherLuckyPower, 5, 0, 1, 1);

        comboBoxSearcherLuckyPower = new ComboBox(groupBoxSearcherRNGInfo);
        comboBoxSearcherLuckyPower->addItem(QString::fromUtf8("0"));
        comboBoxSearcherLuckyPower->addItem(QString::fromUtf8("1"));
        comboBoxSearcherLuckyPower->addItem(QString::fromUtf8("2"));
        comboBoxSearcherLuckyPower->addItem(QString::fromUtf8("3"));
        comboBoxSearcherLuckyPower->addItem(QString());
        comboBoxSearcherLuckyPower->setObjectName("comboBoxSearcherLuckyPower");

        gridLayout_2->addWidget(comboBoxSearcherLuckyPower, 5, 1, 1, 1);

        labelSearcherStartDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherStartDate->setObjectName("labelSearcherStartDate");

        gridLayout_2->addWidget(labelSearcherStartDate, 6, 0, 1, 1);

        dateEditSearcherStartDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherStartDate->setObjectName("dateEditSearcherStartDate");

        gridLayout_2->addWidget(dateEditSearcherStartDate, 6, 1, 1, 1);

        labelSearcherEndDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherEndDate->setObjectName("labelSearcherEndDate");

        gridLayout_2->addWidget(labelSearcherEndDate, 7, 0, 1, 1);

        dateEditSearcherEndDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherEndDate->setObjectName("dateEditSearcherEndDate");

        gridLayout_2->addWidget(dateEditSearcherEndDate, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 8, 0, 1, 2);


        gridLayout_3->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        sizePolicy1.setHeightForWidth(groupBoxSearcherSettings->sizePolicy().hasHeightForWidth());
        groupBoxSearcherSettings->setSizePolicy(sizePolicy1);
        gridLayout_9 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_9->setObjectName("gridLayout_9");
        labelSearcherEncounter = new QLabel(groupBoxSearcherSettings);
        labelSearcherEncounter->setObjectName("labelSearcherEncounter");

        gridLayout_9->addWidget(labelSearcherEncounter, 0, 0, 1, 1);

        comboBoxSearcherEncounter = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->setObjectName("comboBoxSearcherEncounter");

        gridLayout_9->addWidget(comboBoxSearcherEncounter, 0, 1, 1, 1);

        labelSearcherLocation = new QLabel(groupBoxSearcherSettings);
        labelSearcherLocation->setObjectName("labelSearcherLocation");

        gridLayout_9->addWidget(labelSearcherLocation, 1, 0, 1, 1);

        comboBoxSearcherLocation = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherLocation->setObjectName("comboBoxSearcherLocation");

        gridLayout_9->addWidget(comboBoxSearcherLocation, 1, 1, 1, 1);

        labelSearcherPokemon = new QLabel(groupBoxSearcherSettings);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_9->addWidget(labelSearcherPokemon, 2, 0, 1, 1);

        comboBoxSearcherPokemon = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_9->addWidget(comboBoxSearcherPokemon, 2, 1, 1, 1);

        comboBoxSearcherSeason = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSeason->addItem(QString());
        comboBoxSearcherSeason->addItem(QString());
        comboBoxSearcherSeason->addItem(QString());
        comboBoxSearcherSeason->addItem(QString());
        comboBoxSearcherSeason->setObjectName("comboBoxSearcherSeason");

        gridLayout_9->addWidget(comboBoxSearcherSeason, 3, 1, 1, 1);

        labelSearcherSeason = new QLabel(groupBoxSearcherSettings);
        labelSearcherSeason->setObjectName("labelSearcherSeason");

        gridLayout_9->addWidget(labelSearcherSeason, 3, 0, 1, 1);

        labelIVFastSearch = new QLabel(groupBoxSearcherSettings);
        labelIVFastSearch->setObjectName("labelIVFastSearch");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelIVFastSearch->sizePolicy().hasHeightForWidth());
        labelIVFastSearch->setSizePolicy(sizePolicy3);

        gridLayout_9->addWidget(labelIVFastSearch, 4, 0, 1, 2);


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
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_3->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSearcher, QString());

        gridLayout_8->addWidget(tabRNGSelector, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, comboMenuGeneratorLead);
        QWidget::setTabOrder(comboMenuGeneratorLead, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorIVAdvances);
        QWidget::setTabOrder(textBoxGeneratorIVAdvances, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, comboBoxGeneratorLuckyPower);
        QWidget::setTabOrder(comboBoxGeneratorLuckyPower, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorEncounter);
        QWidget::setTabOrder(comboBoxGeneratorEncounter, comboBoxGeneratorLocation);
        QWidget::setTabOrder(comboBoxGeneratorLocation, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, comboBoxGeneratorSeason);
        QWidget::setTabOrder(comboBoxGeneratorSeason, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, comboMenuSearcherLead);
        QWidget::setTabOrder(comboMenuSearcherLead, textBoxSearcherInitialIVAdvances);
        QWidget::setTabOrder(textBoxSearcherInitialIVAdvances, textBoxSearcherMaxIVAdvances);
        QWidget::setTabOrder(textBoxSearcherMaxIVAdvances, textBoxSearcherInitialAdvances);
        QWidget::setTabOrder(textBoxSearcherInitialAdvances, textBoxSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxSearcherMaxAdvances, comboBoxSearcherLuckyPower);
        QWidget::setTabOrder(comboBoxSearcherLuckyPower, dateEditSearcherStartDate);
        QWidget::setTabOrder(dateEditSearcherStartDate, dateEditSearcherEndDate);
        QWidget::setTabOrder(dateEditSearcherEndDate, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherEncounter);
        QWidget::setTabOrder(comboBoxSearcherEncounter, comboBoxSearcherLocation);
        QWidget::setTabOrder(comboBoxSearcherLocation, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, comboBoxSearcherSeason);
        QWidget::setTabOrder(comboBoxSearcherSeason, tableViewSearcher);

        retranslateUi(Wild5);

        QMetaObject::connectSlotsByName(Wild5);
    } // setupUi

    void retranslateUi(QWidget *Wild5)
    {
        Wild5->setWindowTitle(QCoreApplication::translate("Wild5", "Gen 5 Wild", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Wild5", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Wild5", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Wild5", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Wild5", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Wild5", "SID", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("Wild5", "MAC Address", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("Wild5", "DS Type", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("Wild5", "VCount", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("Wild5", "Timer0", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("Wild5", "GxStat", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("Wild5", "VFrame", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("Wild5", "Keypresses", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Wild5", "Game", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Wild5", "RNG Info", nullptr));
        labelGeneratorLead->setText(QCoreApplication::translate("Wild5", "Lead", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Wild5", "Seed", nullptr));
        labelGeneratorIVAdvances->setText(QCoreApplication::translate("Wild5", "IV Advances", nullptr));
        textBoxGeneratorIVAdvances->setText(QCoreApplication::translate("Wild5", "0", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Wild5", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Wild5", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Wild5", "Offset", nullptr));
        labelGeneratorLuckyPower->setText(QCoreApplication::translate("Wild5", "Lucky Power", nullptr));
        comboBoxGeneratorLuckyPower->setItemText(4, QCoreApplication::translate("Wild5", "S/MAX", nullptr));

        pushButtonGenerate->setText(QCoreApplication::translate("Wild5", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Wild5", "Settings", nullptr));
        labelGeneratorEncounter->setText(QCoreApplication::translate("Wild5", "Encounter", nullptr));
        comboBoxGeneratorEncounter->setItemText(0, QCoreApplication::translate("Wild5", "Grass", nullptr));
        comboBoxGeneratorEncounter->setItemText(1, QCoreApplication::translate("Wild5", "Dark Grass", nullptr));
        comboBoxGeneratorEncounter->setItemText(2, QCoreApplication::translate("Wild5", "Rustling Grass", nullptr));
        comboBoxGeneratorEncounter->setItemText(3, QCoreApplication::translate("Wild5", "Surfing", nullptr));
        comboBoxGeneratorEncounter->setItemText(4, QCoreApplication::translate("Wild5", "Rippling Surfing", nullptr));
        comboBoxGeneratorEncounter->setItemText(5, QCoreApplication::translate("Wild5", "Fishing", nullptr));
        comboBoxGeneratorEncounter->setItemText(6, QCoreApplication::translate("Wild5", "Rippling Fishing", nullptr));

        labelGeneratorLocation->setText(QCoreApplication::translate("Wild5", "Location", nullptr));
        labelGeneratorPokemon->setText(QCoreApplication::translate("Wild5", "Pok\303\251mon", nullptr));
        labelGeneratorSeason->setText(QCoreApplication::translate("Wild5", "Season", nullptr));
        comboBoxGeneratorSeason->setItemText(0, QCoreApplication::translate("Wild5", "Spring", nullptr));
        comboBoxGeneratorSeason->setItemText(1, QCoreApplication::translate("Wild5", "Summer", nullptr));
        comboBoxGeneratorSeason->setItemText(2, QCoreApplication::translate("Wild5", "Autumn", nullptr));
        comboBoxGeneratorSeason->setItemText(3, QCoreApplication::translate("Wild5", "Winter", nullptr));

        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Wild5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Wild5", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Wild5", "RNG Info", nullptr));
        labelSearcherLead->setText(QCoreApplication::translate("Wild5", "Lead", nullptr));
        labelSearcherInitialIVAdvances->setText(QCoreApplication::translate("Wild5", "Initial IV Advances", nullptr));
        textBoxSearcherInitialIVAdvances->setText(QCoreApplication::translate("Wild5", "0", nullptr));
        labelSearcherMaxIVAdvances->setText(QCoreApplication::translate("Wild5", "Max IV Advances", nullptr));
        textBoxSearcherMaxIVAdvances->setText(QCoreApplication::translate("Wild5", "0", nullptr));
        labelSearcherInitialAdvances->setText(QCoreApplication::translate("Wild5", "Initial Advances", nullptr));
        textBoxSearcherInitialAdvances->setText(QCoreApplication::translate("Wild5", "0", nullptr));
        labelSearcherMaxAdvances->setText(QCoreApplication::translate("Wild5", "Max Advances", nullptr));
        labelSearcherLuckyPower->setText(QCoreApplication::translate("Wild5", "Lucky Power", nullptr));
        comboBoxSearcherLuckyPower->setItemText(4, QCoreApplication::translate("Wild5", "S/MAX", nullptr));

        labelSearcherStartDate->setText(QCoreApplication::translate("Wild5", "Start Date", nullptr));
        labelSearcherEndDate->setText(QCoreApplication::translate("Wild5", "End Date", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Wild5", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Wild5", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Wild5", "Settings", nullptr));
        labelSearcherEncounter->setText(QCoreApplication::translate("Wild5", "Encounter", nullptr));
        comboBoxSearcherEncounter->setItemText(0, QCoreApplication::translate("Wild5", "Grass", nullptr));
        comboBoxSearcherEncounter->setItemText(1, QCoreApplication::translate("Wild5", "Dark Grass", nullptr));
        comboBoxSearcherEncounter->setItemText(2, QCoreApplication::translate("Wild5", "Rustling Grass", nullptr));
        comboBoxSearcherEncounter->setItemText(3, QCoreApplication::translate("Wild5", "Surfing", nullptr));
        comboBoxSearcherEncounter->setItemText(4, QCoreApplication::translate("Wild5", "Rippling Surfing", nullptr));
        comboBoxSearcherEncounter->setItemText(5, QCoreApplication::translate("Wild5", "Fishing", nullptr));
        comboBoxSearcherEncounter->setItemText(6, QCoreApplication::translate("Wild5", "Rippling Fishing", nullptr));

        labelSearcherLocation->setText(QCoreApplication::translate("Wild5", "Location", nullptr));
        labelSearcherPokemon->setText(QCoreApplication::translate("Wild5", "Pok\303\251mon", nullptr));
        comboBoxSearcherSeason->setItemText(0, QCoreApplication::translate("Wild5", "Spring", nullptr));
        comboBoxSearcherSeason->setItemText(1, QCoreApplication::translate("Wild5", "Summer", nullptr));
        comboBoxSearcherSeason->setItemText(2, QCoreApplication::translate("Wild5", "Autumn", nullptr));
        comboBoxSearcherSeason->setItemText(3, QCoreApplication::translate("Wild5", "Winter", nullptr));

        labelSearcherSeason->setText(QCoreApplication::translate("Wild5", "Season", nullptr));
        labelIVFastSearch->setText(QString());
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Wild5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSearcher), QCoreApplication::translate("Wild5", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wild5: public Ui_Wild5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WILD5_H
