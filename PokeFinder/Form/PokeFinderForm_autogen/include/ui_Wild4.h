/********************************************************************************
** Form generated from reading UI file 'Wild4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WILD4_H
#define UI_WILD4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Wild4
{
public:
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_7;
    QLabel *labelProfile;
    QComboBox *comboBoxProfiles;
    QPushButton *pushButtonProfileManager;
    QLabel *labelProfileTID;
    QLabel *labelProfileTIDValue;
    QLabel *labelProfileSID;
    QLabel *labelProfileSIDValue;
    QFrame *line;
    QLabel *labelProfileGame;
    QLabel *labelProfileGameValue;
    QLabel *labelProfileNationalDex;
    QLabel *labelProfileNationalDexValue;
    QTabWidget *tabRNGSelector;
    QWidget *tabGenerator;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_3;
    QLabel *labelGeneratorLead;
    ComboMenu *comboMenuGeneratorLead;
    QCheckBox *checkBoxGeneratorPokeRadarShiny;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeed;
    QLabel *labelGeneratorStartingAdvance;
    TextBox *textBoxGeneratorInitialAdvances;
    QLabel *labelGeneratorMaxAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QLabel *labelGeneratorOffset;
    TextBox *textBoxGeneratorOffset;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxGeneratorSettings;
    QGridLayout *gridLayout_10;
    QLabel *labelGeneratorEncounter;
    ComboBox *comboBoxGeneratorEncounter;
    QLabel *labelGeneratorLocation;
    ComboBox *comboBoxGeneratorLocation;
    QLabel *labelGeneratorPokemon;
    ComboBox *comboBoxGeneratorPokemon;
    QLabel *labelGeneratorTime;
    QComboBox *comboBoxGeneratorTime;
    QLabel *labelGeneratorHappiness;
    ComboBox *comboBoxGeneratorHappiness;
    QCheckBox *checkBoxGeneratorDualSlot;
    ComboBox *comboBoxGeneratorDualSlot;
    QCheckBox *checkBoxGeneratorFeebasTile;
    QCheckBox *checkBoxGeneratorPokeRadar;
    QCheckBox *checkBoxGeneratorRadio;
    QComboBox *comboBoxGeneratorRadio;
    QCheckBox *checkBoxGeneratorSwarm;
    QCheckBox *checkBoxGeneratorReplacement;
    ComboBox *comboBoxGeneratorReplacement0;
    ComboBox *comboBoxGeneratorReplacement1;
    QLabel *labelGeneratorPlainsBlock;
    QSpinBox *spinBoxGeneratorPlainsBlock;
    QLabel *labelGeneratorForestBlock;
    QSpinBox *spinBoxGeneratorForestBlock;
    QLabel *labelGeneratorPeakBlock;
    QSpinBox *spinBoxGeneratorPeakBlock;
    QLabel *labelGeneratorWaterBlock;
    QSpinBox *spinBoxGeneratorWaterBlock;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSpreadSearcher;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherLead;
    ComboMenu *comboMenuSearcherLead;
    QCheckBox *checkBoxSearcherPokeRadarShiny;
    QLabel *labelSearcherMinDelay;
    TextBox *textBoxSearcherMinDelay;
    QLabel *labelSearcherMaxDelay;
    TextBox *textBoxSearcherMaxDelay;
    QLabel *labelSearcherMinAdvance;
    TextBox *textBoxSearcherMinAdvance;
    QLabel *labelSearcherMaxAdvance;
    TextBox *textBoxSearcherMaxAdvance;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxSearcherSettings;
    QGridLayout *gridLayout_5;
    QLabel *labelSearcherEncounter;
    ComboBox *comboBoxSearcherEncounter;
    QLabel *labelSearcherLocation;
    ComboBox *comboBoxSearcherLocation;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QLabel *labelSearcherTime;
    QComboBox *comboBoxSearcherTime;
    QLabel *labelSearcherHappiness;
    ComboBox *comboBoxSearcherHappiness;
    QCheckBox *checkBoxSearcherDualSlot;
    ComboBox *comboBoxSearcherDualSlot;
    QCheckBox *checkBoxSearcherFeebasTile;
    QCheckBox *checkBoxSearcherPokeRadar;
    QCheckBox *checkBoxSearcherRadio;
    QComboBox *comboBoxSearcherRadio;
    QCheckBox *checkBoxSearcherSwarm;
    QCheckBox *checkBoxSearcherReplacement;
    ComboBox *comboBoxSearcherReplacement0;
    ComboBox *comboBoxSearcherReplacement1;
    QLabel *labelSearcherPlainsBlock;
    QSpinBox *spinBoxSearcherPlainsBlock;
    QLabel *labelSearcherForestBlock;
    QSpinBox *spinBoxSearcherForestBlock;
    QLabel *labelSearcherPeakBlock;
    QSpinBox *spinBoxSearcherPeakBlock;
    QLabel *labelSearcherWaterBlock;
    QSpinBox *spinBoxSearcherWaterBlock;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
    QToolButton *closebutton;
    QButtonGroup *buttonGroupGenerator;
    QButtonGroup *buttonGroupSearcher;

    void setupUi(QWidget *Wild4)
    {
        if (Wild4->objectName().isEmpty())
            Wild4->setObjectName("Wild4");
        Wild4->resize(1200, 700);
        gridLayout_9 = new QGridLayout(Wild4);
        gridLayout_9->setObjectName("gridLayout_9");
        groupBoxProfile = new QGroupBox(Wild4);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_7 = new QGridLayout(groupBoxProfile);
        gridLayout_7->setObjectName("gridLayout_7");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_7->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_7->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_7->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_7->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");

        gridLayout_7->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_7->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");

        gridLayout_7->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_7->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_7->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_7->addWidget(labelProfileGameValue, 0, 6, 1, 1);

        labelProfileNationalDex = new QLabel(groupBoxProfile);
        labelProfileNationalDex->setObjectName("labelProfileNationalDex");

        gridLayout_7->addWidget(labelProfileNationalDex, 1, 5, 1, 1);

        labelProfileNationalDexValue = new QLabel(groupBoxProfile);
        labelProfileNationalDexValue->setObjectName("labelProfileNationalDexValue");

        gridLayout_7->addWidget(labelProfileNationalDexValue, 1, 6, 1, 1);


        gridLayout_9->addWidget(groupBoxProfile, 1, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Wild4);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_11 = new QGridLayout(tabGenerator);
        gridLayout_11->setObjectName("gridLayout_11");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        gridLayout_3 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_3->setObjectName("gridLayout_3");
        labelGeneratorLead = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorLead->setObjectName("labelGeneratorLead");

        gridLayout_3->addWidget(labelGeneratorLead, 0, 0, 1, 1);

        comboMenuGeneratorLead = new ComboMenu(groupBoxGeneratorRNGInfo);
        comboMenuGeneratorLead->setObjectName("comboMenuGeneratorLead");

        gridLayout_3->addWidget(comboMenuGeneratorLead, 0, 1, 1, 1);

        checkBoxGeneratorPokeRadarShiny = new QCheckBox(groupBoxGeneratorRNGInfo);
        checkBoxGeneratorPokeRadarShiny->setObjectName("checkBoxGeneratorPokeRadarShiny");

        gridLayout_3->addWidget(checkBoxGeneratorPokeRadarShiny, 1, 0, 1, 2);

        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_3->addWidget(labelGeneratorSeed, 2, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_3->addWidget(textBoxGeneratorSeed, 2, 1, 1, 1);

        labelGeneratorStartingAdvance = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorStartingAdvance->setObjectName("labelGeneratorStartingAdvance");

        gridLayout_3->addWidget(labelGeneratorStartingAdvance, 3, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(textBoxGeneratorInitialAdvances, 3, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");

        gridLayout_3->addWidget(labelGeneratorMaxAdvances, 4, 0, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_3->addWidget(textBoxGeneratorMaxAdvances, 4, 1, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_3->addWidget(labelGeneratorOffset, 5, 0, 1, 1);

        textBoxGeneratorOffset = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");

        gridLayout_3->addWidget(textBoxGeneratorOffset, 5, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_3->addWidget(pushButtonGenerate, 6, 0, 1, 2);


        gridLayout_11->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        gridLayout_10 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_10->setObjectName("gridLayout_10");
        labelGeneratorEncounter = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorEncounter->setObjectName("labelGeneratorEncounter");

        gridLayout_10->addWidget(labelGeneratorEncounter, 0, 0, 1, 2);

        comboBoxGeneratorEncounter = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->setObjectName("comboBoxGeneratorEncounter");

        gridLayout_10->addWidget(comboBoxGeneratorEncounter, 0, 2, 1, 2);

        labelGeneratorLocation = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLocation->setObjectName("labelGeneratorLocation");

        gridLayout_10->addWidget(labelGeneratorLocation, 1, 0, 1, 2);

        comboBoxGeneratorLocation = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorLocation->setObjectName("comboBoxGeneratorLocation");

        gridLayout_10->addWidget(comboBoxGeneratorLocation, 1, 2, 1, 2);

        labelGeneratorPokemon = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPokemon->setObjectName("labelGeneratorPokemon");

        gridLayout_10->addWidget(labelGeneratorPokemon, 2, 0, 1, 2);

        comboBoxGeneratorPokemon = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorPokemon->setObjectName("comboBoxGeneratorPokemon");

        gridLayout_10->addWidget(comboBoxGeneratorPokemon, 2, 2, 1, 2);

        labelGeneratorTime = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorTime->setObjectName("labelGeneratorTime");

        gridLayout_10->addWidget(labelGeneratorTime, 3, 0, 1, 2);

        comboBoxGeneratorTime = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorTime->addItem(QString());
        comboBoxGeneratorTime->addItem(QString());
        comboBoxGeneratorTime->addItem(QString());
        comboBoxGeneratorTime->setObjectName("comboBoxGeneratorTime");

        gridLayout_10->addWidget(comboBoxGeneratorTime, 3, 2, 1, 2);

        labelGeneratorHappiness = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorHappiness->setObjectName("labelGeneratorHappiness");

        gridLayout_10->addWidget(labelGeneratorHappiness, 4, 0, 1, 2);

        comboBoxGeneratorHappiness = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorHappiness->addItem(QString());
        comboBoxGeneratorHappiness->addItem(QString());
        comboBoxGeneratorHappiness->addItem(QString());
        comboBoxGeneratorHappiness->addItem(QString());
        comboBoxGeneratorHappiness->addItem(QString());
        comboBoxGeneratorHappiness->setObjectName("comboBoxGeneratorHappiness");

        gridLayout_10->addWidget(comboBoxGeneratorHappiness, 4, 2, 1, 2);

        checkBoxGeneratorDualSlot = new QCheckBox(groupBoxGeneratorSettings);
        buttonGroupGenerator = new QButtonGroup(Wild4);
        buttonGroupGenerator->setObjectName("buttonGroupGenerator");
        buttonGroupGenerator->setExclusive(false);
        buttonGroupGenerator->addButton(checkBoxGeneratorDualSlot);
        checkBoxGeneratorDualSlot->setObjectName("checkBoxGeneratorDualSlot");

        gridLayout_10->addWidget(checkBoxGeneratorDualSlot, 5, 0, 1, 2);

        comboBoxGeneratorDualSlot = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorDualSlot->addItem(QString());
        comboBoxGeneratorDualSlot->addItem(QString());
        comboBoxGeneratorDualSlot->addItem(QString());
        comboBoxGeneratorDualSlot->addItem(QString());
        comboBoxGeneratorDualSlot->addItem(QString());
        comboBoxGeneratorDualSlot->setObjectName("comboBoxGeneratorDualSlot");

        gridLayout_10->addWidget(comboBoxGeneratorDualSlot, 5, 2, 1, 2);

        checkBoxGeneratorFeebasTile = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorFeebasTile->setObjectName("checkBoxGeneratorFeebasTile");

        gridLayout_10->addWidget(checkBoxGeneratorFeebasTile, 6, 0, 1, 4);

        checkBoxGeneratorPokeRadar = new QCheckBox(groupBoxGeneratorSettings);
        buttonGroupGenerator->addButton(checkBoxGeneratorPokeRadar);
        checkBoxGeneratorPokeRadar->setObjectName("checkBoxGeneratorPokeRadar");

        gridLayout_10->addWidget(checkBoxGeneratorPokeRadar, 7, 0, 1, 4);

        checkBoxGeneratorRadio = new QCheckBox(groupBoxGeneratorSettings);
        buttonGroupGenerator->addButton(checkBoxGeneratorRadio);
        checkBoxGeneratorRadio->setObjectName("checkBoxGeneratorRadio");

        gridLayout_10->addWidget(checkBoxGeneratorRadio, 8, 0, 1, 2);

        comboBoxGeneratorRadio = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorRadio->addItem(QString());
        comboBoxGeneratorRadio->addItem(QString());
        comboBoxGeneratorRadio->addItem(QString());
        comboBoxGeneratorRadio->setObjectName("comboBoxGeneratorRadio");

        gridLayout_10->addWidget(comboBoxGeneratorRadio, 8, 2, 1, 2);

        checkBoxGeneratorSwarm = new QCheckBox(groupBoxGeneratorSettings);
        buttonGroupGenerator->addButton(checkBoxGeneratorSwarm);
        checkBoxGeneratorSwarm->setObjectName("checkBoxGeneratorSwarm");

        gridLayout_10->addWidget(checkBoxGeneratorSwarm, 9, 0, 1, 4);

        checkBoxGeneratorReplacement = new QCheckBox(groupBoxGeneratorSettings);
        buttonGroupGenerator->addButton(checkBoxGeneratorReplacement);
        checkBoxGeneratorReplacement->setObjectName("checkBoxGeneratorReplacement");

        gridLayout_10->addWidget(checkBoxGeneratorReplacement, 10, 0, 1, 2);

        comboBoxGeneratorReplacement0 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorReplacement0->setObjectName("comboBoxGeneratorReplacement0");

        gridLayout_10->addWidget(comboBoxGeneratorReplacement0, 10, 2, 1, 1);

        comboBoxGeneratorReplacement1 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorReplacement1->setObjectName("comboBoxGeneratorReplacement1");

        gridLayout_10->addWidget(comboBoxGeneratorReplacement1, 10, 3, 1, 1);

        labelGeneratorPlainsBlock = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPlainsBlock->setObjectName("labelGeneratorPlainsBlock");

        gridLayout_10->addWidget(labelGeneratorPlainsBlock, 11, 0, 1, 1);

        spinBoxGeneratorPlainsBlock = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorPlainsBlock->setObjectName("spinBoxGeneratorPlainsBlock");

        gridLayout_10->addWidget(spinBoxGeneratorPlainsBlock, 11, 1, 1, 1);

        labelGeneratorForestBlock = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorForestBlock->setObjectName("labelGeneratorForestBlock");

        gridLayout_10->addWidget(labelGeneratorForestBlock, 11, 2, 1, 1);

        spinBoxGeneratorForestBlock = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorForestBlock->setObjectName("spinBoxGeneratorForestBlock");

        gridLayout_10->addWidget(spinBoxGeneratorForestBlock, 11, 3, 1, 1);

        labelGeneratorPeakBlock = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPeakBlock->setObjectName("labelGeneratorPeakBlock");

        gridLayout_10->addWidget(labelGeneratorPeakBlock, 12, 0, 1, 1);

        spinBoxGeneratorPeakBlock = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorPeakBlock->setObjectName("spinBoxGeneratorPeakBlock");

        gridLayout_10->addWidget(spinBoxGeneratorPeakBlock, 12, 1, 1, 1);

        labelGeneratorWaterBlock = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorWaterBlock->setObjectName("labelGeneratorWaterBlock");

        gridLayout_10->addWidget(labelGeneratorWaterBlock, 12, 2, 1, 1);

        spinBoxGeneratorWaterBlock = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorWaterBlock->setObjectName("spinBoxGeneratorWaterBlock");

        gridLayout_10->addWidget(spinBoxGeneratorWaterBlock, 12, 3, 1, 1);


        gridLayout_11->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabGenerator);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGeneratorFilters->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBoxGeneratorFilters);
        gridLayout->setObjectName("gridLayout");
        filterGenerator = new Filter(groupBoxGeneratorFilters);
        filterGenerator->setObjectName("filterGenerator");

        gridLayout->addWidget(filterGenerator, 0, 0, 2, 1);


        gridLayout_11->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_11->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabGenerator, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_8 = new QGridLayout(tabSpreadSearcher);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        gridLayout_2 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSearcherLead = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherLead->setObjectName("labelSearcherLead");

        gridLayout_2->addWidget(labelSearcherLead, 0, 0, 1, 1);

        comboMenuSearcherLead = new ComboMenu(groupBoxSearcherRNGInfo);
        comboMenuSearcherLead->setObjectName("comboMenuSearcherLead");

        gridLayout_2->addWidget(comboMenuSearcherLead, 0, 2, 1, 1);

        checkBoxSearcherPokeRadarShiny = new QCheckBox(groupBoxSearcherRNGInfo);
        checkBoxSearcherPokeRadarShiny->setObjectName("checkBoxSearcherPokeRadarShiny");

        gridLayout_2->addWidget(checkBoxSearcherPokeRadarShiny, 1, 0, 1, 2);

        labelSearcherMinDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinDelay->setObjectName("labelSearcherMinDelay");

        gridLayout_2->addWidget(labelSearcherMinDelay, 2, 0, 1, 1);

        textBoxSearcherMinDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinDelay->setObjectName("textBoxSearcherMinDelay");
        textBoxSearcherMinDelay->setText(QString::fromUtf8("600"));

        gridLayout_2->addWidget(textBoxSearcherMinDelay, 2, 1, 1, 1);

        labelSearcherMaxDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxDelay->setObjectName("labelSearcherMaxDelay");

        gridLayout_2->addWidget(labelSearcherMaxDelay, 2, 2, 1, 1);

        textBoxSearcherMaxDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxDelay->setObjectName("textBoxSearcherMaxDelay");
        textBoxSearcherMaxDelay->setText(QString::fromUtf8("2000"));

        gridLayout_2->addWidget(textBoxSearcherMaxDelay, 2, 3, 1, 1);

        labelSearcherMinAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinAdvance->setObjectName("labelSearcherMinAdvance");

        gridLayout_2->addWidget(labelSearcherMinAdvance, 3, 0, 1, 1);

        textBoxSearcherMinAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinAdvance->setObjectName("textBoxSearcherMinAdvance");
        textBoxSearcherMinAdvance->setText(QString::fromUtf8("1"));

        gridLayout_2->addWidget(textBoxSearcherMinAdvance, 3, 1, 1, 1);

        labelSearcherMaxAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvance->setObjectName("labelSearcherMaxAdvance");

        gridLayout_2->addWidget(labelSearcherMaxAdvance, 3, 2, 1, 1);

        textBoxSearcherMaxAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvance->setObjectName("textBoxSearcherMaxAdvance");
        textBoxSearcherMaxAdvance->setText(QString::fromUtf8("1000"));

        gridLayout_2->addWidget(textBoxSearcherMaxAdvance, 3, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 4);


        gridLayout_8->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        gridLayout_5 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_5->setObjectName("gridLayout_5");
        labelSearcherEncounter = new QLabel(groupBoxSearcherSettings);
        labelSearcherEncounter->setObjectName("labelSearcherEncounter");

        gridLayout_5->addWidget(labelSearcherEncounter, 0, 0, 1, 2);

        comboBoxSearcherEncounter = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->setObjectName("comboBoxSearcherEncounter");

        gridLayout_5->addWidget(comboBoxSearcherEncounter, 0, 2, 1, 2);

        labelSearcherLocation = new QLabel(groupBoxSearcherSettings);
        labelSearcherLocation->setObjectName("labelSearcherLocation");

        gridLayout_5->addWidget(labelSearcherLocation, 1, 0, 1, 2);

        comboBoxSearcherLocation = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherLocation->setObjectName("comboBoxSearcherLocation");

        gridLayout_5->addWidget(comboBoxSearcherLocation, 1, 2, 1, 2);

        labelSearcherPokemon = new QLabel(groupBoxSearcherSettings);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_5->addWidget(labelSearcherPokemon, 2, 0, 1, 2);

        comboBoxSearcherPokemon = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_5->addWidget(comboBoxSearcherPokemon, 2, 2, 1, 2);

        labelSearcherTime = new QLabel(groupBoxSearcherSettings);
        labelSearcherTime->setObjectName("labelSearcherTime");

        gridLayout_5->addWidget(labelSearcherTime, 3, 0, 1, 2);

        comboBoxSearcherTime = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherTime->addItem(QString());
        comboBoxSearcherTime->addItem(QString());
        comboBoxSearcherTime->addItem(QString());
        comboBoxSearcherTime->setObjectName("comboBoxSearcherTime");

        gridLayout_5->addWidget(comboBoxSearcherTime, 3, 2, 1, 2);

        labelSearcherHappiness = new QLabel(groupBoxSearcherSettings);
        labelSearcherHappiness->setObjectName("labelSearcherHappiness");

        gridLayout_5->addWidget(labelSearcherHappiness, 4, 0, 1, 2);

        comboBoxSearcherHappiness = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherHappiness->addItem(QString());
        comboBoxSearcherHappiness->addItem(QString());
        comboBoxSearcherHappiness->addItem(QString());
        comboBoxSearcherHappiness->addItem(QString());
        comboBoxSearcherHappiness->addItem(QString());
        comboBoxSearcherHappiness->setObjectName("comboBoxSearcherHappiness");

        gridLayout_5->addWidget(comboBoxSearcherHappiness, 4, 2, 1, 2);

        checkBoxSearcherDualSlot = new QCheckBox(groupBoxSearcherSettings);
        buttonGroupSearcher = new QButtonGroup(Wild4);
        buttonGroupSearcher->setObjectName("buttonGroupSearcher");
        buttonGroupSearcher->setExclusive(false);
        buttonGroupSearcher->addButton(checkBoxSearcherDualSlot);
        checkBoxSearcherDualSlot->setObjectName("checkBoxSearcherDualSlot");

        gridLayout_5->addWidget(checkBoxSearcherDualSlot, 5, 0, 1, 2);

        comboBoxSearcherDualSlot = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherDualSlot->addItem(QString());
        comboBoxSearcherDualSlot->addItem(QString());
        comboBoxSearcherDualSlot->addItem(QString());
        comboBoxSearcherDualSlot->addItem(QString());
        comboBoxSearcherDualSlot->addItem(QString());
        comboBoxSearcherDualSlot->setObjectName("comboBoxSearcherDualSlot");

        gridLayout_5->addWidget(comboBoxSearcherDualSlot, 5, 2, 1, 2);

        checkBoxSearcherFeebasTile = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherFeebasTile->setObjectName("checkBoxSearcherFeebasTile");

        gridLayout_5->addWidget(checkBoxSearcherFeebasTile, 6, 0, 1, 4);

        checkBoxSearcherPokeRadar = new QCheckBox(groupBoxSearcherSettings);
        buttonGroupSearcher->addButton(checkBoxSearcherPokeRadar);
        checkBoxSearcherPokeRadar->setObjectName("checkBoxSearcherPokeRadar");

        gridLayout_5->addWidget(checkBoxSearcherPokeRadar, 7, 0, 1, 4);

        checkBoxSearcherRadio = new QCheckBox(groupBoxSearcherSettings);
        buttonGroupSearcher->addButton(checkBoxSearcherRadio);
        checkBoxSearcherRadio->setObjectName("checkBoxSearcherRadio");

        gridLayout_5->addWidget(checkBoxSearcherRadio, 8, 0, 1, 2);

        comboBoxSearcherRadio = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherRadio->addItem(QString());
        comboBoxSearcherRadio->addItem(QString());
        comboBoxSearcherRadio->addItem(QString());
        comboBoxSearcherRadio->setObjectName("comboBoxSearcherRadio");

        gridLayout_5->addWidget(comboBoxSearcherRadio, 8, 2, 1, 2);

        checkBoxSearcherSwarm = new QCheckBox(groupBoxSearcherSettings);
        buttonGroupSearcher->addButton(checkBoxSearcherSwarm);
        checkBoxSearcherSwarm->setObjectName("checkBoxSearcherSwarm");

        gridLayout_5->addWidget(checkBoxSearcherSwarm, 9, 0, 1, 4);

        checkBoxSearcherReplacement = new QCheckBox(groupBoxSearcherSettings);
        buttonGroupSearcher->addButton(checkBoxSearcherReplacement);
        checkBoxSearcherReplacement->setObjectName("checkBoxSearcherReplacement");

        gridLayout_5->addWidget(checkBoxSearcherReplacement, 10, 0, 1, 2);

        comboBoxSearcherReplacement0 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherReplacement0->setObjectName("comboBoxSearcherReplacement0");

        gridLayout_5->addWidget(comboBoxSearcherReplacement0, 10, 2, 1, 1);

        comboBoxSearcherReplacement1 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherReplacement1->setObjectName("comboBoxSearcherReplacement1");

        gridLayout_5->addWidget(comboBoxSearcherReplacement1, 10, 3, 1, 1);

        labelSearcherPlainsBlock = new QLabel(groupBoxSearcherSettings);
        labelSearcherPlainsBlock->setObjectName("labelSearcherPlainsBlock");

        gridLayout_5->addWidget(labelSearcherPlainsBlock, 11, 0, 1, 1);

        spinBoxSearcherPlainsBlock = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherPlainsBlock->setObjectName("spinBoxSearcherPlainsBlock");

        gridLayout_5->addWidget(spinBoxSearcherPlainsBlock, 11, 1, 1, 1);

        labelSearcherForestBlock = new QLabel(groupBoxSearcherSettings);
        labelSearcherForestBlock->setObjectName("labelSearcherForestBlock");

        gridLayout_5->addWidget(labelSearcherForestBlock, 11, 2, 1, 1);

        spinBoxSearcherForestBlock = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherForestBlock->setObjectName("spinBoxSearcherForestBlock");

        gridLayout_5->addWidget(spinBoxSearcherForestBlock, 11, 3, 1, 1);

        labelSearcherPeakBlock = new QLabel(groupBoxSearcherSettings);
        labelSearcherPeakBlock->setObjectName("labelSearcherPeakBlock");

        gridLayout_5->addWidget(labelSearcherPeakBlock, 12, 0, 1, 1);

        spinBoxSearcherPeakBlock = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherPeakBlock->setObjectName("spinBoxSearcherPeakBlock");

        gridLayout_5->addWidget(spinBoxSearcherPeakBlock, 12, 1, 1, 1);

        labelSearcherWaterBlock = new QLabel(groupBoxSearcherSettings);
        labelSearcherWaterBlock->setObjectName("labelSearcherWaterBlock");

        gridLayout_5->addWidget(labelSearcherWaterBlock, 12, 2, 1, 1);

        spinBoxSearcherWaterBlock = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherWaterBlock->setObjectName("spinBoxSearcherWaterBlock");

        gridLayout_5->addWidget(spinBoxSearcherWaterBlock, 12, 3, 1, 1);


        gridLayout_8->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_4->setObjectName("gridLayout_4");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_4->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_8->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_8->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_8->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        gridLayout_9->addWidget(tabRNGSelector, 2, 0, 1, 1);

        closebutton = new QToolButton(Wild4);
        closebutton->setObjectName("closebutton");

        gridLayout_9->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, comboMenuGeneratorLead);
        QWidget::setTabOrder(comboMenuGeneratorLead, checkBoxGeneratorPokeRadarShiny);
        QWidget::setTabOrder(checkBoxGeneratorPokeRadarShiny, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorEncounter);
        QWidget::setTabOrder(comboBoxGeneratorEncounter, comboBoxGeneratorLocation);
        QWidget::setTabOrder(comboBoxGeneratorLocation, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, comboBoxGeneratorTime);
        QWidget::setTabOrder(comboBoxGeneratorTime, comboBoxGeneratorHappiness);
        QWidget::setTabOrder(comboBoxGeneratorHappiness, checkBoxGeneratorDualSlot);
        QWidget::setTabOrder(checkBoxGeneratorDualSlot, comboBoxGeneratorDualSlot);
        QWidget::setTabOrder(comboBoxGeneratorDualSlot, checkBoxGeneratorFeebasTile);
        QWidget::setTabOrder(checkBoxGeneratorFeebasTile, checkBoxGeneratorPokeRadar);
        QWidget::setTabOrder(checkBoxGeneratorPokeRadar, checkBoxGeneratorRadio);
        QWidget::setTabOrder(checkBoxGeneratorRadio, comboBoxGeneratorRadio);
        QWidget::setTabOrder(comboBoxGeneratorRadio, checkBoxGeneratorSwarm);
        QWidget::setTabOrder(checkBoxGeneratorSwarm, checkBoxGeneratorReplacement);
        QWidget::setTabOrder(checkBoxGeneratorReplacement, comboBoxGeneratorReplacement0);
        QWidget::setTabOrder(comboBoxGeneratorReplacement0, comboBoxGeneratorReplacement1);
        QWidget::setTabOrder(comboBoxGeneratorReplacement1, spinBoxGeneratorPlainsBlock);
        QWidget::setTabOrder(spinBoxGeneratorPlainsBlock, spinBoxGeneratorForestBlock);
        QWidget::setTabOrder(spinBoxGeneratorForestBlock, spinBoxGeneratorPeakBlock);
        QWidget::setTabOrder(spinBoxGeneratorPeakBlock, spinBoxGeneratorWaterBlock);
        QWidget::setTabOrder(spinBoxGeneratorWaterBlock, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, comboMenuSearcherLead);
        QWidget::setTabOrder(comboMenuSearcherLead, checkBoxSearcherPokeRadarShiny);
        QWidget::setTabOrder(checkBoxSearcherPokeRadarShiny, textBoxSearcherMinDelay);
        QWidget::setTabOrder(textBoxSearcherMinDelay, textBoxSearcherMaxDelay);
        QWidget::setTabOrder(textBoxSearcherMaxDelay, textBoxSearcherMinAdvance);
        QWidget::setTabOrder(textBoxSearcherMinAdvance, textBoxSearcherMaxAdvance);
        QWidget::setTabOrder(textBoxSearcherMaxAdvance, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherEncounter);
        QWidget::setTabOrder(comboBoxSearcherEncounter, comboBoxSearcherLocation);
        QWidget::setTabOrder(comboBoxSearcherLocation, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, comboBoxSearcherTime);
        QWidget::setTabOrder(comboBoxSearcherTime, comboBoxSearcherHappiness);
        QWidget::setTabOrder(comboBoxSearcherHappiness, checkBoxSearcherDualSlot);
        QWidget::setTabOrder(checkBoxSearcherDualSlot, comboBoxSearcherDualSlot);
        QWidget::setTabOrder(comboBoxSearcherDualSlot, checkBoxSearcherFeebasTile);
        QWidget::setTabOrder(checkBoxSearcherFeebasTile, checkBoxSearcherPokeRadar);
        QWidget::setTabOrder(checkBoxSearcherPokeRadar, checkBoxSearcherRadio);
        QWidget::setTabOrder(checkBoxSearcherRadio, comboBoxSearcherRadio);
        QWidget::setTabOrder(comboBoxSearcherRadio, checkBoxSearcherSwarm);
        QWidget::setTabOrder(checkBoxSearcherSwarm, checkBoxSearcherReplacement);
        QWidget::setTabOrder(checkBoxSearcherReplacement, comboBoxSearcherReplacement0);
        QWidget::setTabOrder(comboBoxSearcherReplacement0, comboBoxSearcherReplacement1);
        QWidget::setTabOrder(comboBoxSearcherReplacement1, spinBoxSearcherPlainsBlock);
        QWidget::setTabOrder(spinBoxSearcherPlainsBlock, spinBoxSearcherForestBlock);
        QWidget::setTabOrder(spinBoxSearcherForestBlock, spinBoxSearcherPeakBlock);
        QWidget::setTabOrder(spinBoxSearcherPeakBlock, spinBoxSearcherWaterBlock);
        QWidget::setTabOrder(spinBoxSearcherWaterBlock, tableViewSearcher);

        retranslateUi(Wild4);

        QMetaObject::connectSlotsByName(Wild4);
    } // setupUi

    void retranslateUi(QWidget *Wild4)
    {
        Wild4->setWindowTitle(QCoreApplication::translate("Wild4", "Gen 4 Wild", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Wild4", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Wild4", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Wild4", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Wild4", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Wild4", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Wild4", "Game", nullptr));
        labelProfileNationalDex->setText(QCoreApplication::translate("Wild4", "National Dex", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Wild4", "RNG Info", nullptr));
        labelGeneratorLead->setText(QCoreApplication::translate("Wild4", "Lead", nullptr));
        checkBoxGeneratorPokeRadarShiny->setText(QCoreApplication::translate("Wild4", "Poke Radar Shiny", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Wild4", "Seed", nullptr));
        labelGeneratorStartingAdvance->setText(QCoreApplication::translate("Wild4", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Wild4", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Wild4", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Wild4", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Wild4", "Settings", nullptr));
        labelGeneratorEncounter->setText(QCoreApplication::translate("Wild4", "Encounter", nullptr));
        comboBoxGeneratorEncounter->setItemText(0, QCoreApplication::translate("Wild4", "Grass", nullptr));
        comboBoxGeneratorEncounter->setItemText(1, QCoreApplication::translate("Wild4", "Rock Smash", nullptr));
        comboBoxGeneratorEncounter->setItemText(2, QCoreApplication::translate("Wild4", "Bug Catching Contest", nullptr));
        comboBoxGeneratorEncounter->setItemText(3, QCoreApplication::translate("Wild4", "Headbutt", nullptr));
        comboBoxGeneratorEncounter->setItemText(4, QCoreApplication::translate("Wild4", "Headbutt Alt", nullptr));
        comboBoxGeneratorEncounter->setItemText(5, QCoreApplication::translate("Wild4", "Headbutt Special", nullptr));
        comboBoxGeneratorEncounter->setItemText(6, QCoreApplication::translate("Wild4", "Surfing", nullptr));
        comboBoxGeneratorEncounter->setItemText(7, QCoreApplication::translate("Wild4", "Old Rod", nullptr));
        comboBoxGeneratorEncounter->setItemText(8, QCoreApplication::translate("Wild4", "Good Rod", nullptr));
        comboBoxGeneratorEncounter->setItemText(9, QCoreApplication::translate("Wild4", "Super Rod", nullptr));

        labelGeneratorLocation->setText(QCoreApplication::translate("Wild4", "Location", nullptr));
        labelGeneratorPokemon->setText(QCoreApplication::translate("Wild4", "Pok\303\251mon", nullptr));
        labelGeneratorTime->setText(QCoreApplication::translate("Wild4", "Time", nullptr));
        comboBoxGeneratorTime->setItemText(0, QCoreApplication::translate("Wild4", "Morning", nullptr));
        comboBoxGeneratorTime->setItemText(1, QCoreApplication::translate("Wild4", "Day", nullptr));
        comboBoxGeneratorTime->setItemText(2, QCoreApplication::translate("Wild4", "Night", nullptr));

        labelGeneratorHappiness->setText(QCoreApplication::translate("Wild4", "Happiness", nullptr));
        comboBoxGeneratorHappiness->setItemText(0, QCoreApplication::translate("Wild4", "+0%", nullptr));
        comboBoxGeneratorHappiness->setItemText(1, QCoreApplication::translate("Wild4", "+20%", nullptr));
        comboBoxGeneratorHappiness->setItemText(2, QCoreApplication::translate("Wild4", "+30%", nullptr));
        comboBoxGeneratorHappiness->setItemText(3, QCoreApplication::translate("Wild4", "+40%", nullptr));
        comboBoxGeneratorHappiness->setItemText(4, QCoreApplication::translate("Wild4", "+50%", nullptr));

        checkBoxGeneratorDualSlot->setText(QCoreApplication::translate("Wild4", "Dual Slot", nullptr));
        comboBoxGeneratorDualSlot->setItemText(0, QCoreApplication::translate("Wild4", "Ruby", nullptr));
        comboBoxGeneratorDualSlot->setItemText(1, QCoreApplication::translate("Wild4", "Sapphire", nullptr));
        comboBoxGeneratorDualSlot->setItemText(2, QCoreApplication::translate("Wild4", "Fire Red", nullptr));
        comboBoxGeneratorDualSlot->setItemText(3, QCoreApplication::translate("Wild4", "Leaf Green", nullptr));
        comboBoxGeneratorDualSlot->setItemText(4, QCoreApplication::translate("Wild4", "Emerald", nullptr));

        checkBoxGeneratorFeebasTile->setText(QCoreApplication::translate("Wild4", "Feebas Tile", nullptr));
        checkBoxGeneratorPokeRadar->setText(QCoreApplication::translate("Wild4", "Poke Radar", nullptr));
        checkBoxGeneratorRadio->setText(QCoreApplication::translate("Wild4", "Radio", nullptr));
        comboBoxGeneratorRadio->setItemText(0, QCoreApplication::translate("Wild4", "Hoenn Sound", nullptr));
        comboBoxGeneratorRadio->setItemText(1, QCoreApplication::translate("Wild4", "Sinnoh Sound", nullptr));
        comboBoxGeneratorRadio->setItemText(2, QCoreApplication::translate("Wild4", "Mysterious Transmission", nullptr));

        checkBoxGeneratorSwarm->setText(QCoreApplication::translate("Wild4", "Swarm", nullptr));
        checkBoxGeneratorReplacement->setText(QCoreApplication::translate("Wild4", "Replacement", nullptr));
        labelGeneratorPlainsBlock->setText(QCoreApplication::translate("Wild4", "Plains Block", nullptr));
        labelGeneratorForestBlock->setText(QCoreApplication::translate("Wild4", "Forest Block", nullptr));
        labelGeneratorPeakBlock->setText(QCoreApplication::translate("Wild4", "Peak Block", nullptr));
        labelGeneratorWaterBlock->setText(QCoreApplication::translate("Wild4", "Water Block", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Wild4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Wild4", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Wild4", "RNG Info", nullptr));
        labelSearcherLead->setText(QCoreApplication::translate("Wild4", "Lead", nullptr));
        checkBoxSearcherPokeRadarShiny->setText(QCoreApplication::translate("Wild4", "Poke Radar Shiny", nullptr));
        labelSearcherMinDelay->setText(QCoreApplication::translate("Wild4", "Min Delay", nullptr));
        labelSearcherMaxDelay->setText(QCoreApplication::translate("Wild4", "Max Delay", nullptr));
        labelSearcherMinAdvance->setText(QCoreApplication::translate("Wild4", "Min Advance", nullptr));
        labelSearcherMaxAdvance->setText(QCoreApplication::translate("Wild4", "Max Advance", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Wild4", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Wild4", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Wild4", "Settings", nullptr));
        labelSearcherEncounter->setText(QCoreApplication::translate("Wild4", "Encounter", nullptr));
        comboBoxSearcherEncounter->setItemText(0, QCoreApplication::translate("Wild4", "Grass", nullptr));
        comboBoxSearcherEncounter->setItemText(1, QCoreApplication::translate("Wild4", "Rock Smash", nullptr));
        comboBoxSearcherEncounter->setItemText(2, QCoreApplication::translate("Wild4", "Bug Catching Contest", nullptr));
        comboBoxSearcherEncounter->setItemText(3, QCoreApplication::translate("Wild4", "Headbutt", nullptr));
        comboBoxSearcherEncounter->setItemText(4, QCoreApplication::translate("Wild4", "Headbutt Alt", nullptr));
        comboBoxSearcherEncounter->setItemText(5, QCoreApplication::translate("Wild4", "Headbutt Special", nullptr));
        comboBoxSearcherEncounter->setItemText(6, QCoreApplication::translate("Wild4", "Surfing", nullptr));
        comboBoxSearcherEncounter->setItemText(7, QCoreApplication::translate("Wild4", "Old Rod", nullptr));
        comboBoxSearcherEncounter->setItemText(8, QCoreApplication::translate("Wild4", "Good Rod", nullptr));
        comboBoxSearcherEncounter->setItemText(9, QCoreApplication::translate("Wild4", "Super Rod", nullptr));

        labelSearcherLocation->setText(QCoreApplication::translate("Wild4", "Location", nullptr));
        labelSearcherPokemon->setText(QCoreApplication::translate("Wild4", "Pok\303\251mon", nullptr));
        labelSearcherTime->setText(QCoreApplication::translate("Wild4", "Time", nullptr));
        comboBoxSearcherTime->setItemText(0, QCoreApplication::translate("Wild4", "Morning", nullptr));
        comboBoxSearcherTime->setItemText(1, QCoreApplication::translate("Wild4", "Day", nullptr));
        comboBoxSearcherTime->setItemText(2, QCoreApplication::translate("Wild4", "Night", nullptr));

        labelSearcherHappiness->setText(QCoreApplication::translate("Wild4", "Happiness", nullptr));
        comboBoxSearcherHappiness->setItemText(0, QCoreApplication::translate("Wild4", "+0%", nullptr));
        comboBoxSearcherHappiness->setItemText(1, QCoreApplication::translate("Wild4", "+20%", nullptr));
        comboBoxSearcherHappiness->setItemText(2, QCoreApplication::translate("Wild4", "+30%", nullptr));
        comboBoxSearcherHappiness->setItemText(3, QCoreApplication::translate("Wild4", "+40%", nullptr));
        comboBoxSearcherHappiness->setItemText(4, QCoreApplication::translate("Wild4", "+50%", nullptr));

        checkBoxSearcherDualSlot->setText(QCoreApplication::translate("Wild4", "Dual Slot", nullptr));
        comboBoxSearcherDualSlot->setItemText(0, QCoreApplication::translate("Wild4", "Ruby", nullptr));
        comboBoxSearcherDualSlot->setItemText(1, QCoreApplication::translate("Wild4", "Sapphire", nullptr));
        comboBoxSearcherDualSlot->setItemText(2, QCoreApplication::translate("Wild4", "Fire Red", nullptr));
        comboBoxSearcherDualSlot->setItemText(3, QCoreApplication::translate("Wild4", "Leaf Green", nullptr));
        comboBoxSearcherDualSlot->setItemText(4, QCoreApplication::translate("Wild4", "Emerald", nullptr));

        checkBoxSearcherFeebasTile->setText(QCoreApplication::translate("Wild4", "Feebas Tile", nullptr));
        checkBoxSearcherPokeRadar->setText(QCoreApplication::translate("Wild4", "Poke Radar", nullptr));
        checkBoxSearcherRadio->setText(QCoreApplication::translate("Wild4", "Radio", nullptr));
        comboBoxSearcherRadio->setItemText(0, QCoreApplication::translate("Wild4", "Hoenn Sound", nullptr));
        comboBoxSearcherRadio->setItemText(1, QCoreApplication::translate("Wild4", "Sinnoh Sound", nullptr));
        comboBoxSearcherRadio->setItemText(2, QCoreApplication::translate("Wild4", "Mysterious Transmission", nullptr));

        checkBoxSearcherSwarm->setText(QCoreApplication::translate("Wild4", "Swarm", nullptr));
        checkBoxSearcherReplacement->setText(QCoreApplication::translate("Wild4", "Replacement", nullptr));
        labelSearcherPlainsBlock->setText(QCoreApplication::translate("Wild4", "Plains Block", nullptr));
        labelSearcherForestBlock->setText(QCoreApplication::translate("Wild4", "Forest Block", nullptr));
        labelSearcherPeakBlock->setText(QCoreApplication::translate("Wild4", "Peak Block", nullptr));
        labelSearcherWaterBlock->setText(QCoreApplication::translate("Wild4", "Water Block", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Wild4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("Wild4", "Searcher", nullptr));
        closebutton->setText(QCoreApplication::translate("Wild4", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wild4: public Ui_Wild4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WILD4_H
