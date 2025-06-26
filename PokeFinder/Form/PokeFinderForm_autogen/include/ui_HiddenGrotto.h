/********************************************************************************
** Form generated from reading UI file 'HiddenGrotto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIDDENGROTTO_H
#define UI_HIDDENGROTTO_H

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
#include "Form/Controls/CheckList.hpp"
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_HiddenGrotto
{
public:
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget;
    QWidget *tabGrotto;
    QGridLayout *gridLayout_4;
    QTabWidget *tabSlotRNGSelector;
    QWidget *tabGrottoGenerator;
    QGridLayout *gridLayout;
    QGroupBox *groupBoxGrottoGeneratorRNGInfo;
    QGridLayout *gridLayout_8;
    QLabel *labelGrottoGeneratorSeed;
    TextBox *textBoxGrottoGeneratorSeed;
    QLabel *labelGrottoGeneratorInitialAdvances;
    TextBox *textBoxGrottoGeneratorInitialAdvances;
    QLabel *labelGrottoGeneratorMaxAdvances;
    TextBox *textBoxGrottoGeneratorMaxAdvances;
    QLabel *labelGrottoGeneratorOffset;
    TextBox *textBoxGrottoGeneratorOffset;
    QLabel *labelGrottoGeneratorGrottoPower;
    ComboBox *comboBoxGrottoGeneratorGrottoPower;
    QPushButton *pushButtonGrottoGenerate;
    QGroupBox *groupBoxGrottoGeneratorSettings;
    QGridLayout *gridLayout_6;
    QLabel *labelGrottoGeneratorLocation;
    ComboBox *comboBoxGrottoGeneratorLocation;
    QLabel *labelGrottoGeneratorPokemon;
    ComboBox *comboBoxGrottoGeneratorPokemon;
    QLabel *labelGrottoGeneratorItems;
    ComboBox *comboBoxGrottoGeneratorItems;
    QGroupBox *groupBoxGrottoGeneratorFilter;
    QGridLayout *gridLayout_2;
    QLabel *labelGrottoGeneratorSlot;
    CheckList *checkListGrottoGeneratorSlot;
    QLabel *labelGrottoGeneratorGroup;
    CheckList *checkListGrottoGeneratorGroup;
    QLabel *labelGrottoGeneratorGender;
    CheckList *checkListGrottoGeneratorGender;
    TableView *tableViewGrottoGenerator;
    QWidget *tabSlotSearcher;
    QGridLayout *gridLayout_20;
    QGroupBox *groupBoxGrottoSearcherRNGInfo;
    QGridLayout *gridLayout_9;
    QLabel *labelGrottoSearcherInitialAdvances;
    TextBox *textBoxGrottoSearcherInitialAdvances;
    QLabel *labelGrottoSearcherMaxAdvances;
    TextBox *textBoxGrottoSearcherMaxAdvances;
    QLabel *labelGrottoSearcherGrottoPower;
    ComboBox *comboBoxGrottoSearcherGrottoPower;
    QLabel *labelGrottoSearcherStartDate;
    DateEdit *dateEditGrottoSearcherStartDate;
    QLabel *labelGrottoSearcherEndDate;
    DateEdit *dateEditGrottoSearcherEndDate;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonGrottoSearch;
    QPushButton *pushButtonGrottoCancel;
    QGroupBox *groupBoxGrottoSearcherSettings;
    QGridLayout *gridLayout_3;
    QLabel *labelGrottoSearcherLocation;
    ComboBox *comboBoxGrottoSearcherLocation;
    QLabel *labelGrottoSearcherPokemon;
    ComboBox *comboBoxGrottoSearcherPokemon;
    QLabel *labelGrottoSearcherItems;
    ComboBox *comboBoxGrottoSearcherItems;
    QGroupBox *groupBoxGrottoSearcherFilter;
    QGridLayout *gridLayout_7;
    QLabel *labelGrottoSearcherSlot;
    CheckList *checkListGrottoSearcherSlot;
    QLabel *labelGrottoSearcherGroup;
    CheckList *checkListGrottoSearcherGroup;
    QLabel *labelGrottoSearcherGender;
    CheckList *checkListGrottoSearcherGender;
    QProgressBar *progressBarGrotto;
    TableView *tableViewGrottoSearcher;
    QWidget *tabPokemon;
    QGridLayout *gridLayout_18;
    QTabWidget *tabRNGSelector_2;
    QWidget *tabPokemonGenerator;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBoxPokemonGeneratorRNGInfo;
    QGridLayout *gridLayout_12;
    QLabel *labelPokemonGeneratorLead;
    ComboMenu *comboMenuPokemonGeneratorLead;
    QLabel *labelGeneratorSeed_2;
    TextBox *textBoxPokemonGeneratorSeed;
    QLabel *labelPokemonGeneratorIVAdvances;
    TextBox *textBoxPokemonGeneratorIVAdvances;
    QLabel *labelPokemonGeneratorInitialAdvances;
    TextBox *textBoxPokemonGeneratorInitialAdvances;
    QLabel *labelPokemonGeneratorMaxAdvances;
    TextBox *textBoxPokemonGeneratorMaxAdvances;
    QLabel *labelPokemonGeneratorOffset;
    TextBox *textBoxPokemonGeneratorOffset;
    QPushButton *pushButtonPokemonGenerate;
    QGroupBox *groupBoxPokemonGeneratorSettings;
    QGridLayout *gridLayout_13;
    QLabel *labelPokemonGeneratorLocation;
    ComboBox *comboBoxPokemonGeneratorLocation;
    QLabel *labelPokemonGeneratorGroup;
    QComboBox *comboBoxPokemonGeneratorGroup;
    QLabel *labelPokemonGeneratorPokemon;
    ComboBox *comboBoxPokemonGeneratorPokemon;
    QLabel *labelPokemonGeneratorGender;
    ComboBox *comboBoxPokemonGeneratorGender;
    QGroupBox *groupBoxPokemonGeneratorFilter;
    QGridLayout *gridLayout_14;
    Filter *filterPokemonGenerator;
    TableView *tableViewPokemonGenerator;
    QWidget *tabPokemonSearcher;
    QGridLayout *gridLayout_21;
    QGroupBox *groupBoxPokemonSearcherRNGInfo;
    QGridLayout *gridLayout_15;
    QLabel *labelPokemonSearcherLead;
    ComboMenu *comboMenuPokemonSearcherLead;
    QLabel *labelPokemonSearcherInitialIVAdvances;
    TextBox *textBoxPokemonSearcherInitialIVAdvances;
    QLabel *labelPokemonSearcherMaxIVAdvances;
    TextBox *textBoxPokemonSearcherMaxIVAdvances;
    QLabel *labelPokemonSearcherInitialAdvances;
    TextBox *textBoxPokemonSearcherInitialAdvances;
    QLabel *labelPokemonSearcherMaxAdvances;
    TextBox *textBoxPokemonSearcherMaxAdvances;
    QLabel *labelPokemonSearcherStartDate;
    DateEdit *dateEditPokemonSearcherStartDate;
    QLabel *labelPokemonSearcherEndDate;
    DateEdit *dateEditPokemonSearcherEndDate;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonPokemonSearch;
    QPushButton *pushButtonPokemonCancel;
    QGroupBox *groupBoxPokemonSearcherSettings;
    QGridLayout *gridLayout_16;
    QLabel *labelPokemonSearcherLocation;
    ComboBox *comboBoxPokemonSearcherLocation;
    QLabel *labelPokemonSearcherGroup;
    QComboBox *comboBoxPokemonSearcherGroup;
    QLabel *labelPokemonSearcherPokemon;
    ComboBox *comboBoxPokemonSearcherPokemon;
    QLabel *labelPokemonSearcherGender;
    ComboBox *comboBoxPokemonSearcherGender;
    QLabel *labelPokemonSearcherIVFastSearch;
    QGroupBox *groupBoxPokemonSearcherFilter;
    QGridLayout *gridLayout_17;
    Filter *filterPokemonSearcher;
    QProgressBar *progressBarPokemon;
    TableView *tableViewPokemonSearcher;
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
    QToolButton *closebutton;

    void setupUi(QWidget *HiddenGrotto)
    {
        if (HiddenGrotto->objectName().isEmpty())
            HiddenGrotto->setObjectName("HiddenGrotto");
        HiddenGrotto->resize(1465, 888);
        gridLayout_10 = new QGridLayout(HiddenGrotto);
        gridLayout_10->setObjectName("gridLayout_10");
        tabWidget = new QTabWidget(HiddenGrotto);
        tabWidget->setObjectName("tabWidget");
        tabGrotto = new QWidget();
        tabGrotto->setObjectName("tabGrotto");
        gridLayout_4 = new QGridLayout(tabGrotto);
        gridLayout_4->setObjectName("gridLayout_4");
        tabSlotRNGSelector = new QTabWidget(tabGrotto);
        tabSlotRNGSelector->setObjectName("tabSlotRNGSelector");
        tabGrottoGenerator = new QWidget();
        tabGrottoGenerator->setObjectName("tabGrottoGenerator");
        gridLayout = new QGridLayout(tabGrottoGenerator);
        gridLayout->setObjectName("gridLayout");
        groupBoxGrottoGeneratorRNGInfo = new QGroupBox(tabGrottoGenerator);
        groupBoxGrottoGeneratorRNGInfo->setObjectName("groupBoxGrottoGeneratorRNGInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGrottoGeneratorRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxGrottoGeneratorRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(groupBoxGrottoGeneratorRNGInfo);
        gridLayout_8->setObjectName("gridLayout_8");
        labelGrottoGeneratorSeed = new QLabel(groupBoxGrottoGeneratorRNGInfo);
        labelGrottoGeneratorSeed->setObjectName("labelGrottoGeneratorSeed");

        gridLayout_8->addWidget(labelGrottoGeneratorSeed, 0, 0, 1, 1);

        textBoxGrottoGeneratorSeed = new TextBox(groupBoxGrottoGeneratorRNGInfo);
        textBoxGrottoGeneratorSeed->setObjectName("textBoxGrottoGeneratorSeed");

        gridLayout_8->addWidget(textBoxGrottoGeneratorSeed, 0, 1, 1, 1);

        labelGrottoGeneratorInitialAdvances = new QLabel(groupBoxGrottoGeneratorRNGInfo);
        labelGrottoGeneratorInitialAdvances->setObjectName("labelGrottoGeneratorInitialAdvances");

        gridLayout_8->addWidget(labelGrottoGeneratorInitialAdvances, 1, 0, 1, 1);

        textBoxGrottoGeneratorInitialAdvances = new TextBox(groupBoxGrottoGeneratorRNGInfo);
        textBoxGrottoGeneratorInitialAdvances->setObjectName("textBoxGrottoGeneratorInitialAdvances");
        textBoxGrottoGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_8->addWidget(textBoxGrottoGeneratorInitialAdvances, 1, 1, 1, 1);

        labelGrottoGeneratorMaxAdvances = new QLabel(groupBoxGrottoGeneratorRNGInfo);
        labelGrottoGeneratorMaxAdvances->setObjectName("labelGrottoGeneratorMaxAdvances");

        gridLayout_8->addWidget(labelGrottoGeneratorMaxAdvances, 2, 0, 1, 1);

        textBoxGrottoGeneratorMaxAdvances = new TextBox(groupBoxGrottoGeneratorRNGInfo);
        textBoxGrottoGeneratorMaxAdvances->setObjectName("textBoxGrottoGeneratorMaxAdvances");
        textBoxGrottoGeneratorMaxAdvances->setText(QString::fromUtf8("1000"));

        gridLayout_8->addWidget(textBoxGrottoGeneratorMaxAdvances, 2, 1, 1, 1);

        labelGrottoGeneratorOffset = new QLabel(groupBoxGrottoGeneratorRNGInfo);
        labelGrottoGeneratorOffset->setObjectName("labelGrottoGeneratorOffset");

        gridLayout_8->addWidget(labelGrottoGeneratorOffset, 3, 0, 1, 1);

        textBoxGrottoGeneratorOffset = new TextBox(groupBoxGrottoGeneratorRNGInfo);
        textBoxGrottoGeneratorOffset->setObjectName("textBoxGrottoGeneratorOffset");

        gridLayout_8->addWidget(textBoxGrottoGeneratorOffset, 3, 1, 1, 1);

        labelGrottoGeneratorGrottoPower = new QLabel(groupBoxGrottoGeneratorRNGInfo);
        labelGrottoGeneratorGrottoPower->setObjectName("labelGrottoGeneratorGrottoPower");

        gridLayout_8->addWidget(labelGrottoGeneratorGrottoPower, 4, 0, 1, 1);

        comboBoxGrottoGeneratorGrottoPower = new ComboBox(groupBoxGrottoGeneratorRNGInfo);
        comboBoxGrottoGeneratorGrottoPower->addItem(QString::fromUtf8("0"));
        comboBoxGrottoGeneratorGrottoPower->addItem(QString::fromUtf8("1"));
        comboBoxGrottoGeneratorGrottoPower->addItem(QString::fromUtf8("2"));
        comboBoxGrottoGeneratorGrottoPower->addItem(QString::fromUtf8("3"));
        comboBoxGrottoGeneratorGrottoPower->addItem(QString());
        comboBoxGrottoGeneratorGrottoPower->setObjectName("comboBoxGrottoGeneratorGrottoPower");

        gridLayout_8->addWidget(comboBoxGrottoGeneratorGrottoPower, 4, 1, 1, 1);

        pushButtonGrottoGenerate = new QPushButton(groupBoxGrottoGeneratorRNGInfo);
        pushButtonGrottoGenerate->setObjectName("pushButtonGrottoGenerate");

        gridLayout_8->addWidget(pushButtonGrottoGenerate, 5, 0, 1, 2);


        gridLayout->addWidget(groupBoxGrottoGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGrottoGeneratorSettings = new QGroupBox(tabGrottoGenerator);
        groupBoxGrottoGeneratorSettings->setObjectName("groupBoxGrottoGeneratorSettings");
        sizePolicy.setHeightForWidth(groupBoxGrottoGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxGrottoGeneratorSettings->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(groupBoxGrottoGeneratorSettings);
        gridLayout_6->setObjectName("gridLayout_6");
        labelGrottoGeneratorLocation = new QLabel(groupBoxGrottoGeneratorSettings);
        labelGrottoGeneratorLocation->setObjectName("labelGrottoGeneratorLocation");

        gridLayout_6->addWidget(labelGrottoGeneratorLocation, 0, 0, 1, 1);

        comboBoxGrottoGeneratorLocation = new ComboBox(groupBoxGrottoGeneratorSettings);
        comboBoxGrottoGeneratorLocation->setObjectName("comboBoxGrottoGeneratorLocation");

        gridLayout_6->addWidget(comboBoxGrottoGeneratorLocation, 0, 1, 1, 1);

        labelGrottoGeneratorPokemon = new QLabel(groupBoxGrottoGeneratorSettings);
        labelGrottoGeneratorPokemon->setObjectName("labelGrottoGeneratorPokemon");

        gridLayout_6->addWidget(labelGrottoGeneratorPokemon, 1, 0, 1, 1);

        comboBoxGrottoGeneratorPokemon = new ComboBox(groupBoxGrottoGeneratorSettings);
        comboBoxGrottoGeneratorPokemon->setObjectName("comboBoxGrottoGeneratorPokemon");

        gridLayout_6->addWidget(comboBoxGrottoGeneratorPokemon, 1, 1, 1, 1);

        labelGrottoGeneratorItems = new QLabel(groupBoxGrottoGeneratorSettings);
        labelGrottoGeneratorItems->setObjectName("labelGrottoGeneratorItems");

        gridLayout_6->addWidget(labelGrottoGeneratorItems, 2, 0, 1, 1);

        comboBoxGrottoGeneratorItems = new ComboBox(groupBoxGrottoGeneratorSettings);
        comboBoxGrottoGeneratorItems->setObjectName("comboBoxGrottoGeneratorItems");

        gridLayout_6->addWidget(comboBoxGrottoGeneratorItems, 2, 1, 1, 1);


        gridLayout->addWidget(groupBoxGrottoGeneratorSettings, 0, 1, 1, 1);

        groupBoxGrottoGeneratorFilter = new QGroupBox(tabGrottoGenerator);
        groupBoxGrottoGeneratorFilter->setObjectName("groupBoxGrottoGeneratorFilter");
        sizePolicy.setHeightForWidth(groupBoxGrottoGeneratorFilter->sizePolicy().hasHeightForWidth());
        groupBoxGrottoGeneratorFilter->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxGrottoGeneratorFilter);
        gridLayout_2->setObjectName("gridLayout_2");
        labelGrottoGeneratorSlot = new QLabel(groupBoxGrottoGeneratorFilter);
        labelGrottoGeneratorSlot->setObjectName("labelGrottoGeneratorSlot");

        gridLayout_2->addWidget(labelGrottoGeneratorSlot, 0, 0, 1, 1);

        checkListGrottoGeneratorSlot = new CheckList(groupBoxGrottoGeneratorFilter);
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("0"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("1"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("2"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("3"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("4"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("5"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("6"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("7"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("8"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("9"));
        checkListGrottoGeneratorSlot->addItem(QString::fromUtf8("10"));
        checkListGrottoGeneratorSlot->setObjectName("checkListGrottoGeneratorSlot");

        gridLayout_2->addWidget(checkListGrottoGeneratorSlot, 0, 1, 1, 1);

        labelGrottoGeneratorGroup = new QLabel(groupBoxGrottoGeneratorFilter);
        labelGrottoGeneratorGroup->setObjectName("labelGrottoGeneratorGroup");

        gridLayout_2->addWidget(labelGrottoGeneratorGroup, 1, 0, 1, 1);

        checkListGrottoGeneratorGroup = new CheckList(groupBoxGrottoGeneratorFilter);
        checkListGrottoGeneratorGroup->addItem(QString::fromUtf8("0"));
        checkListGrottoGeneratorGroup->addItem(QString::fromUtf8("1"));
        checkListGrottoGeneratorGroup->addItem(QString::fromUtf8("2"));
        checkListGrottoGeneratorGroup->addItem(QString::fromUtf8("3"));
        checkListGrottoGeneratorGroup->setObjectName("checkListGrottoGeneratorGroup");

        gridLayout_2->addWidget(checkListGrottoGeneratorGroup, 1, 1, 1, 1);

        labelGrottoGeneratorGender = new QLabel(groupBoxGrottoGeneratorFilter);
        labelGrottoGeneratorGender->setObjectName("labelGrottoGeneratorGender");

        gridLayout_2->addWidget(labelGrottoGeneratorGender, 2, 0, 1, 1);

        checkListGrottoGeneratorGender = new CheckList(groupBoxGrottoGeneratorFilter);
        checkListGrottoGeneratorGender->addItem(QString::fromUtf8("\342\231\202"));
        checkListGrottoGeneratorGender->addItem(QString::fromUtf8("\342\231\200"));
        checkListGrottoGeneratorGender->setObjectName("checkListGrottoGeneratorGender");

        gridLayout_2->addWidget(checkListGrottoGeneratorGender, 2, 1, 1, 1);


        gridLayout->addWidget(groupBoxGrottoGeneratorFilter, 0, 2, 1, 1);

        tableViewGrottoGenerator = new TableView(tabGrottoGenerator);
        tableViewGrottoGenerator->setObjectName("tableViewGrottoGenerator");

        gridLayout->addWidget(tableViewGrottoGenerator, 1, 0, 1, 3);

        tabSlotRNGSelector->addTab(tabGrottoGenerator, QString());
        tabSlotSearcher = new QWidget();
        tabSlotSearcher->setObjectName("tabSlotSearcher");
        gridLayout_20 = new QGridLayout(tabSlotSearcher);
        gridLayout_20->setObjectName("gridLayout_20");
        groupBoxGrottoSearcherRNGInfo = new QGroupBox(tabSlotSearcher);
        groupBoxGrottoSearcherRNGInfo->setObjectName("groupBoxGrottoSearcherRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxGrottoSearcherRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxGrottoSearcherRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_9 = new QGridLayout(groupBoxGrottoSearcherRNGInfo);
        gridLayout_9->setObjectName("gridLayout_9");
        labelGrottoSearcherInitialAdvances = new QLabel(groupBoxGrottoSearcherRNGInfo);
        labelGrottoSearcherInitialAdvances->setObjectName("labelGrottoSearcherInitialAdvances");

        gridLayout_9->addWidget(labelGrottoSearcherInitialAdvances, 0, 0, 1, 1);

        textBoxGrottoSearcherInitialAdvances = new TextBox(groupBoxGrottoSearcherRNGInfo);
        textBoxGrottoSearcherInitialAdvances->setObjectName("textBoxGrottoSearcherInitialAdvances");
        textBoxGrottoSearcherInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_9->addWidget(textBoxGrottoSearcherInitialAdvances, 0, 1, 1, 1);

        labelGrottoSearcherMaxAdvances = new QLabel(groupBoxGrottoSearcherRNGInfo);
        labelGrottoSearcherMaxAdvances->setObjectName("labelGrottoSearcherMaxAdvances");

        gridLayout_9->addWidget(labelGrottoSearcherMaxAdvances, 1, 0, 1, 1);

        textBoxGrottoSearcherMaxAdvances = new TextBox(groupBoxGrottoSearcherRNGInfo);
        textBoxGrottoSearcherMaxAdvances->setObjectName("textBoxGrottoSearcherMaxAdvances");
        textBoxGrottoSearcherMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_9->addWidget(textBoxGrottoSearcherMaxAdvances, 1, 1, 1, 1);

        labelGrottoSearcherGrottoPower = new QLabel(groupBoxGrottoSearcherRNGInfo);
        labelGrottoSearcherGrottoPower->setObjectName("labelGrottoSearcherGrottoPower");

        gridLayout_9->addWidget(labelGrottoSearcherGrottoPower, 2, 0, 1, 1);

        comboBoxGrottoSearcherGrottoPower = new ComboBox(groupBoxGrottoSearcherRNGInfo);
        comboBoxGrottoSearcherGrottoPower->addItem(QString::fromUtf8("0"));
        comboBoxGrottoSearcherGrottoPower->addItem(QString::fromUtf8("1"));
        comboBoxGrottoSearcherGrottoPower->addItem(QString::fromUtf8("2"));
        comboBoxGrottoSearcherGrottoPower->addItem(QString::fromUtf8("3"));
        comboBoxGrottoSearcherGrottoPower->addItem(QString());
        comboBoxGrottoSearcherGrottoPower->setObjectName("comboBoxGrottoSearcherGrottoPower");

        gridLayout_9->addWidget(comboBoxGrottoSearcherGrottoPower, 2, 1, 1, 1);

        labelGrottoSearcherStartDate = new QLabel(groupBoxGrottoSearcherRNGInfo);
        labelGrottoSearcherStartDate->setObjectName("labelGrottoSearcherStartDate");

        gridLayout_9->addWidget(labelGrottoSearcherStartDate, 3, 0, 1, 1);

        dateEditGrottoSearcherStartDate = new DateEdit(groupBoxGrottoSearcherRNGInfo);
        dateEditGrottoSearcherStartDate->setObjectName("dateEditGrottoSearcherStartDate");

        gridLayout_9->addWidget(dateEditGrottoSearcherStartDate, 3, 1, 1, 1);

        labelGrottoSearcherEndDate = new QLabel(groupBoxGrottoSearcherRNGInfo);
        labelGrottoSearcherEndDate->setObjectName("labelGrottoSearcherEndDate");

        gridLayout_9->addWidget(labelGrottoSearcherEndDate, 4, 0, 1, 1);

        dateEditGrottoSearcherEndDate = new DateEdit(groupBoxGrottoSearcherRNGInfo);
        dateEditGrottoSearcherEndDate->setObjectName("dateEditGrottoSearcherEndDate");

        gridLayout_9->addWidget(dateEditGrottoSearcherEndDate, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonGrottoSearch = new QPushButton(groupBoxGrottoSearcherRNGInfo);
        pushButtonGrottoSearch->setObjectName("pushButtonGrottoSearch");

        horizontalLayout->addWidget(pushButtonGrottoSearch);

        pushButtonGrottoCancel = new QPushButton(groupBoxGrottoSearcherRNGInfo);
        pushButtonGrottoCancel->setObjectName("pushButtonGrottoCancel");
        pushButtonGrottoCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonGrottoCancel);


        gridLayout_9->addLayout(horizontalLayout, 5, 0, 1, 2);


        gridLayout_20->addWidget(groupBoxGrottoSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxGrottoSearcherSettings = new QGroupBox(tabSlotSearcher);
        groupBoxGrottoSearcherSettings->setObjectName("groupBoxGrottoSearcherSettings");
        sizePolicy.setHeightForWidth(groupBoxGrottoSearcherSettings->sizePolicy().hasHeightForWidth());
        groupBoxGrottoSearcherSettings->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBoxGrottoSearcherSettings);
        gridLayout_3->setObjectName("gridLayout_3");
        labelGrottoSearcherLocation = new QLabel(groupBoxGrottoSearcherSettings);
        labelGrottoSearcherLocation->setObjectName("labelGrottoSearcherLocation");

        gridLayout_3->addWidget(labelGrottoSearcherLocation, 0, 0, 1, 1);

        comboBoxGrottoSearcherLocation = new ComboBox(groupBoxGrottoSearcherSettings);
        comboBoxGrottoSearcherLocation->setObjectName("comboBoxGrottoSearcherLocation");

        gridLayout_3->addWidget(comboBoxGrottoSearcherLocation, 0, 1, 1, 1);

        labelGrottoSearcherPokemon = new QLabel(groupBoxGrottoSearcherSettings);
        labelGrottoSearcherPokemon->setObjectName("labelGrottoSearcherPokemon");

        gridLayout_3->addWidget(labelGrottoSearcherPokemon, 1, 0, 1, 1);

        comboBoxGrottoSearcherPokemon = new ComboBox(groupBoxGrottoSearcherSettings);
        comboBoxGrottoSearcherPokemon->setObjectName("comboBoxGrottoSearcherPokemon");

        gridLayout_3->addWidget(comboBoxGrottoSearcherPokemon, 1, 1, 1, 1);

        labelGrottoSearcherItems = new QLabel(groupBoxGrottoSearcherSettings);
        labelGrottoSearcherItems->setObjectName("labelGrottoSearcherItems");

        gridLayout_3->addWidget(labelGrottoSearcherItems, 2, 0, 1, 1);

        comboBoxGrottoSearcherItems = new ComboBox(groupBoxGrottoSearcherSettings);
        comboBoxGrottoSearcherItems->setObjectName("comboBoxGrottoSearcherItems");

        gridLayout_3->addWidget(comboBoxGrottoSearcherItems, 2, 1, 1, 1);


        gridLayout_20->addWidget(groupBoxGrottoSearcherSettings, 0, 1, 1, 2);

        groupBoxGrottoSearcherFilter = new QGroupBox(tabSlotSearcher);
        groupBoxGrottoSearcherFilter->setObjectName("groupBoxGrottoSearcherFilter");
        sizePolicy.setHeightForWidth(groupBoxGrottoSearcherFilter->sizePolicy().hasHeightForWidth());
        groupBoxGrottoSearcherFilter->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(groupBoxGrottoSearcherFilter);
        gridLayout_7->setObjectName("gridLayout_7");
        labelGrottoSearcherSlot = new QLabel(groupBoxGrottoSearcherFilter);
        labelGrottoSearcherSlot->setObjectName("labelGrottoSearcherSlot");

        gridLayout_7->addWidget(labelGrottoSearcherSlot, 0, 0, 1, 1);

        checkListGrottoSearcherSlot = new CheckList(groupBoxGrottoSearcherFilter);
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("0"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("1"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("2"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("3"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("4"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("5"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("6"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("7"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("8"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("9"));
        checkListGrottoSearcherSlot->addItem(QString::fromUtf8("10"));
        checkListGrottoSearcherSlot->setObjectName("checkListGrottoSearcherSlot");

        gridLayout_7->addWidget(checkListGrottoSearcherSlot, 0, 1, 1, 1);

        labelGrottoSearcherGroup = new QLabel(groupBoxGrottoSearcherFilter);
        labelGrottoSearcherGroup->setObjectName("labelGrottoSearcherGroup");

        gridLayout_7->addWidget(labelGrottoSearcherGroup, 1, 0, 1, 1);

        checkListGrottoSearcherGroup = new CheckList(groupBoxGrottoSearcherFilter);
        checkListGrottoSearcherGroup->addItem(QString::fromUtf8("0"));
        checkListGrottoSearcherGroup->addItem(QString::fromUtf8("1"));
        checkListGrottoSearcherGroup->addItem(QString::fromUtf8("2"));
        checkListGrottoSearcherGroup->addItem(QString::fromUtf8("3"));
        checkListGrottoSearcherGroup->setObjectName("checkListGrottoSearcherGroup");

        gridLayout_7->addWidget(checkListGrottoSearcherGroup, 1, 1, 1, 1);

        labelGrottoSearcherGender = new QLabel(groupBoxGrottoSearcherFilter);
        labelGrottoSearcherGender->setObjectName("labelGrottoSearcherGender");

        gridLayout_7->addWidget(labelGrottoSearcherGender, 2, 0, 1, 1);

        checkListGrottoSearcherGender = new CheckList(groupBoxGrottoSearcherFilter);
        checkListGrottoSearcherGender->addItem(QString::fromUtf8("\342\231\202"));
        checkListGrottoSearcherGender->addItem(QString::fromUtf8("\342\231\200"));
        checkListGrottoSearcherGender->setObjectName("checkListGrottoSearcherGender");

        gridLayout_7->addWidget(checkListGrottoSearcherGender, 2, 1, 1, 1);


        gridLayout_20->addWidget(groupBoxGrottoSearcherFilter, 0, 3, 1, 1);

        progressBarGrotto = new QProgressBar(tabSlotSearcher);
        progressBarGrotto->setObjectName("progressBarGrotto");

        gridLayout_20->addWidget(progressBarGrotto, 1, 0, 1, 4);

        tableViewGrottoSearcher = new TableView(tabSlotSearcher);
        tableViewGrottoSearcher->setObjectName("tableViewGrottoSearcher");
        tableViewGrottoSearcher->setSortingEnabled(true);

        gridLayout_20->addWidget(tableViewGrottoSearcher, 2, 0, 1, 4);

        tabSlotRNGSelector->addTab(tabSlotSearcher, QString());

        gridLayout_4->addWidget(tabSlotRNGSelector, 0, 0, 1, 1);

        tabWidget->addTab(tabGrotto, QString());
        tabPokemon = new QWidget();
        tabPokemon->setObjectName("tabPokemon");
        gridLayout_18 = new QGridLayout(tabPokemon);
        gridLayout_18->setObjectName("gridLayout_18");
        tabRNGSelector_2 = new QTabWidget(tabPokemon);
        tabRNGSelector_2->setObjectName("tabRNGSelector_2");
        tabPokemonGenerator = new QWidget();
        tabPokemonGenerator->setObjectName("tabPokemonGenerator");
        gridLayout_11 = new QGridLayout(tabPokemonGenerator);
        gridLayout_11->setObjectName("gridLayout_11");
        groupBoxPokemonGeneratorRNGInfo = new QGroupBox(tabPokemonGenerator);
        groupBoxPokemonGeneratorRNGInfo->setObjectName("groupBoxPokemonGeneratorRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxPokemonGeneratorRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxPokemonGeneratorRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(groupBoxPokemonGeneratorRNGInfo);
        gridLayout_12->setObjectName("gridLayout_12");
        labelPokemonGeneratorLead = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelPokemonGeneratorLead->setObjectName("labelPokemonGeneratorLead");

        gridLayout_12->addWidget(labelPokemonGeneratorLead, 0, 0, 1, 1);

        comboMenuPokemonGeneratorLead = new ComboMenu(groupBoxPokemonGeneratorRNGInfo);
        comboMenuPokemonGeneratorLead->setObjectName("comboMenuPokemonGeneratorLead");

        gridLayout_12->addWidget(comboMenuPokemonGeneratorLead, 0, 1, 1, 1);

        labelGeneratorSeed_2 = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelGeneratorSeed_2->setObjectName("labelGeneratorSeed_2");

        gridLayout_12->addWidget(labelGeneratorSeed_2, 1, 0, 1, 1);

        textBoxPokemonGeneratorSeed = new TextBox(groupBoxPokemonGeneratorRNGInfo);
        textBoxPokemonGeneratorSeed->setObjectName("textBoxPokemonGeneratorSeed");

        gridLayout_12->addWidget(textBoxPokemonGeneratorSeed, 1, 1, 1, 1);

        labelPokemonGeneratorIVAdvances = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelPokemonGeneratorIVAdvances->setObjectName("labelPokemonGeneratorIVAdvances");

        gridLayout_12->addWidget(labelPokemonGeneratorIVAdvances, 2, 0, 1, 1);

        textBoxPokemonGeneratorIVAdvances = new TextBox(groupBoxPokemonGeneratorRNGInfo);
        textBoxPokemonGeneratorIVAdvances->setObjectName("textBoxPokemonGeneratorIVAdvances");
        textBoxPokemonGeneratorIVAdvances->setText(QString::fromUtf8("0"));

        gridLayout_12->addWidget(textBoxPokemonGeneratorIVAdvances, 2, 1, 1, 1);

        labelPokemonGeneratorInitialAdvances = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelPokemonGeneratorInitialAdvances->setObjectName("labelPokemonGeneratorInitialAdvances");

        gridLayout_12->addWidget(labelPokemonGeneratorInitialAdvances, 3, 0, 1, 1);

        textBoxPokemonGeneratorInitialAdvances = new TextBox(groupBoxPokemonGeneratorRNGInfo);
        textBoxPokemonGeneratorInitialAdvances->setObjectName("textBoxPokemonGeneratorInitialAdvances");
        textBoxPokemonGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_12->addWidget(textBoxPokemonGeneratorInitialAdvances, 3, 1, 1, 1);

        labelPokemonGeneratorMaxAdvances = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelPokemonGeneratorMaxAdvances->setObjectName("labelPokemonGeneratorMaxAdvances");

        gridLayout_12->addWidget(labelPokemonGeneratorMaxAdvances, 4, 0, 1, 1);

        textBoxPokemonGeneratorMaxAdvances = new TextBox(groupBoxPokemonGeneratorRNGInfo);
        textBoxPokemonGeneratorMaxAdvances->setObjectName("textBoxPokemonGeneratorMaxAdvances");
        textBoxPokemonGeneratorMaxAdvances->setText(QString::fromUtf8("1000"));

        gridLayout_12->addWidget(textBoxPokemonGeneratorMaxAdvances, 4, 1, 1, 1);

        labelPokemonGeneratorOffset = new QLabel(groupBoxPokemonGeneratorRNGInfo);
        labelPokemonGeneratorOffset->setObjectName("labelPokemonGeneratorOffset");

        gridLayout_12->addWidget(labelPokemonGeneratorOffset, 5, 0, 1, 1);

        textBoxPokemonGeneratorOffset = new TextBox(groupBoxPokemonGeneratorRNGInfo);
        textBoxPokemonGeneratorOffset->setObjectName("textBoxPokemonGeneratorOffset");

        gridLayout_12->addWidget(textBoxPokemonGeneratorOffset, 5, 1, 1, 1);

        pushButtonPokemonGenerate = new QPushButton(groupBoxPokemonGeneratorRNGInfo);
        pushButtonPokemonGenerate->setObjectName("pushButtonPokemonGenerate");

        gridLayout_12->addWidget(pushButtonPokemonGenerate, 6, 0, 1, 2);


        gridLayout_11->addWidget(groupBoxPokemonGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxPokemonGeneratorSettings = new QGroupBox(tabPokemonGenerator);
        groupBoxPokemonGeneratorSettings->setObjectName("groupBoxPokemonGeneratorSettings");
        sizePolicy.setHeightForWidth(groupBoxPokemonGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxPokemonGeneratorSettings->setSizePolicy(sizePolicy);
        gridLayout_13 = new QGridLayout(groupBoxPokemonGeneratorSettings);
        gridLayout_13->setObjectName("gridLayout_13");
        labelPokemonGeneratorLocation = new QLabel(groupBoxPokemonGeneratorSettings);
        labelPokemonGeneratorLocation->setObjectName("labelPokemonGeneratorLocation");

        gridLayout_13->addWidget(labelPokemonGeneratorLocation, 0, 0, 1, 1);

        comboBoxPokemonGeneratorLocation = new ComboBox(groupBoxPokemonGeneratorSettings);
        comboBoxPokemonGeneratorLocation->setObjectName("comboBoxPokemonGeneratorLocation");

        gridLayout_13->addWidget(comboBoxPokemonGeneratorLocation, 0, 1, 1, 1);

        labelPokemonGeneratorGroup = new QLabel(groupBoxPokemonGeneratorSettings);
        labelPokemonGeneratorGroup->setObjectName("labelPokemonGeneratorGroup");

        gridLayout_13->addWidget(labelPokemonGeneratorGroup, 1, 0, 1, 1);

        comboBoxPokemonGeneratorGroup = new QComboBox(groupBoxPokemonGeneratorSettings);
        comboBoxPokemonGeneratorGroup->addItem(QString::fromUtf8("0"));
        comboBoxPokemonGeneratorGroup->addItem(QString::fromUtf8("1"));
        comboBoxPokemonGeneratorGroup->addItem(QString::fromUtf8("2"));
        comboBoxPokemonGeneratorGroup->addItem(QString::fromUtf8("3"));
        comboBoxPokemonGeneratorGroup->setObjectName("comboBoxPokemonGeneratorGroup");

        gridLayout_13->addWidget(comboBoxPokemonGeneratorGroup, 1, 1, 1, 1);

        labelPokemonGeneratorPokemon = new QLabel(groupBoxPokemonGeneratorSettings);
        labelPokemonGeneratorPokemon->setObjectName("labelPokemonGeneratorPokemon");

        gridLayout_13->addWidget(labelPokemonGeneratorPokemon, 2, 0, 1, 1);

        comboBoxPokemonGeneratorPokemon = new ComboBox(groupBoxPokemonGeneratorSettings);
        comboBoxPokemonGeneratorPokemon->setObjectName("comboBoxPokemonGeneratorPokemon");

        gridLayout_13->addWidget(comboBoxPokemonGeneratorPokemon, 2, 1, 1, 1);

        labelPokemonGeneratorGender = new QLabel(groupBoxPokemonGeneratorSettings);
        labelPokemonGeneratorGender->setObjectName("labelPokemonGeneratorGender");

        gridLayout_13->addWidget(labelPokemonGeneratorGender, 3, 0, 1, 1);

        comboBoxPokemonGeneratorGender = new ComboBox(groupBoxPokemonGeneratorSettings);
        comboBoxPokemonGeneratorGender->setObjectName("comboBoxPokemonGeneratorGender");

        gridLayout_13->addWidget(comboBoxPokemonGeneratorGender, 3, 1, 1, 1);


        gridLayout_11->addWidget(groupBoxPokemonGeneratorSettings, 0, 1, 1, 1);

        groupBoxPokemonGeneratorFilter = new QGroupBox(tabPokemonGenerator);
        groupBoxPokemonGeneratorFilter->setObjectName("groupBoxPokemonGeneratorFilter");
        sizePolicy.setHeightForWidth(groupBoxPokemonGeneratorFilter->sizePolicy().hasHeightForWidth());
        groupBoxPokemonGeneratorFilter->setSizePolicy(sizePolicy);
        gridLayout_14 = new QGridLayout(groupBoxPokemonGeneratorFilter);
        gridLayout_14->setObjectName("gridLayout_14");
        filterPokemonGenerator = new Filter(groupBoxPokemonGeneratorFilter);
        filterPokemonGenerator->setObjectName("filterPokemonGenerator");

        gridLayout_14->addWidget(filterPokemonGenerator, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBoxPokemonGeneratorFilter, 0, 2, 1, 1);

        tableViewPokemonGenerator = new TableView(tabPokemonGenerator);
        tableViewPokemonGenerator->setObjectName("tableViewPokemonGenerator");

        gridLayout_11->addWidget(tableViewPokemonGenerator, 1, 0, 1, 3);

        tabRNGSelector_2->addTab(tabPokemonGenerator, QString());
        tabPokemonSearcher = new QWidget();
        tabPokemonSearcher->setObjectName("tabPokemonSearcher");
        gridLayout_21 = new QGridLayout(tabPokemonSearcher);
        gridLayout_21->setObjectName("gridLayout_21");
        groupBoxPokemonSearcherRNGInfo = new QGroupBox(tabPokemonSearcher);
        groupBoxPokemonSearcherRNGInfo->setObjectName("groupBoxPokemonSearcherRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxPokemonSearcherRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxPokemonSearcherRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_15 = new QGridLayout(groupBoxPokemonSearcherRNGInfo);
        gridLayout_15->setObjectName("gridLayout_15");
        labelPokemonSearcherLead = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherLead->setObjectName("labelPokemonSearcherLead");

        gridLayout_15->addWidget(labelPokemonSearcherLead, 0, 0, 1, 1);

        comboMenuPokemonSearcherLead = new ComboMenu(groupBoxPokemonSearcherRNGInfo);
        comboMenuPokemonSearcherLead->setObjectName("comboMenuPokemonSearcherLead");

        gridLayout_15->addWidget(comboMenuPokemonSearcherLead, 0, 1, 1, 1);

        labelPokemonSearcherInitialIVAdvances = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherInitialIVAdvances->setObjectName("labelPokemonSearcherInitialIVAdvances");

        gridLayout_15->addWidget(labelPokemonSearcherInitialIVAdvances, 1, 0, 1, 1);

        textBoxPokemonSearcherInitialIVAdvances = new TextBox(groupBoxPokemonSearcherRNGInfo);
        textBoxPokemonSearcherInitialIVAdvances->setObjectName("textBoxPokemonSearcherInitialIVAdvances");
        textBoxPokemonSearcherInitialIVAdvances->setText(QString::fromUtf8("0"));

        gridLayout_15->addWidget(textBoxPokemonSearcherInitialIVAdvances, 1, 1, 1, 1);

        labelPokemonSearcherMaxIVAdvances = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherMaxIVAdvances->setObjectName("labelPokemonSearcherMaxIVAdvances");

        gridLayout_15->addWidget(labelPokemonSearcherMaxIVAdvances, 2, 0, 1, 1);

        textBoxPokemonSearcherMaxIVAdvances = new TextBox(groupBoxPokemonSearcherRNGInfo);
        textBoxPokemonSearcherMaxIVAdvances->setObjectName("textBoxPokemonSearcherMaxIVAdvances");
        textBoxPokemonSearcherMaxIVAdvances->setText(QString::fromUtf8("0"));

        gridLayout_15->addWidget(textBoxPokemonSearcherMaxIVAdvances, 2, 1, 1, 1);

        labelPokemonSearcherInitialAdvances = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherInitialAdvances->setObjectName("labelPokemonSearcherInitialAdvances");

        gridLayout_15->addWidget(labelPokemonSearcherInitialAdvances, 3, 0, 1, 1);

        textBoxPokemonSearcherInitialAdvances = new TextBox(groupBoxPokemonSearcherRNGInfo);
        textBoxPokemonSearcherInitialAdvances->setObjectName("textBoxPokemonSearcherInitialAdvances");
        textBoxPokemonSearcherInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_15->addWidget(textBoxPokemonSearcherInitialAdvances, 3, 1, 1, 1);

        labelPokemonSearcherMaxAdvances = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherMaxAdvances->setObjectName("labelPokemonSearcherMaxAdvances");

        gridLayout_15->addWidget(labelPokemonSearcherMaxAdvances, 4, 0, 1, 1);

        textBoxPokemonSearcherMaxAdvances = new TextBox(groupBoxPokemonSearcherRNGInfo);
        textBoxPokemonSearcherMaxAdvances->setObjectName("textBoxPokemonSearcherMaxAdvances");
        textBoxPokemonSearcherMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_15->addWidget(textBoxPokemonSearcherMaxAdvances, 4, 1, 1, 1);

        labelPokemonSearcherStartDate = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherStartDate->setObjectName("labelPokemonSearcherStartDate");

        gridLayout_15->addWidget(labelPokemonSearcherStartDate, 5, 0, 1, 1);

        dateEditPokemonSearcherStartDate = new DateEdit(groupBoxPokemonSearcherRNGInfo);
        dateEditPokemonSearcherStartDate->setObjectName("dateEditPokemonSearcherStartDate");

        gridLayout_15->addWidget(dateEditPokemonSearcherStartDate, 5, 1, 1, 1);

        labelPokemonSearcherEndDate = new QLabel(groupBoxPokemonSearcherRNGInfo);
        labelPokemonSearcherEndDate->setObjectName("labelPokemonSearcherEndDate");

        gridLayout_15->addWidget(labelPokemonSearcherEndDate, 6, 0, 1, 1);

        dateEditPokemonSearcherEndDate = new DateEdit(groupBoxPokemonSearcherRNGInfo);
        dateEditPokemonSearcherEndDate->setObjectName("dateEditPokemonSearcherEndDate");

        gridLayout_15->addWidget(dateEditPokemonSearcherEndDate, 6, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonPokemonSearch = new QPushButton(groupBoxPokemonSearcherRNGInfo);
        pushButtonPokemonSearch->setObjectName("pushButtonPokemonSearch");

        horizontalLayout_2->addWidget(pushButtonPokemonSearch);

        pushButtonPokemonCancel = new QPushButton(groupBoxPokemonSearcherRNGInfo);
        pushButtonPokemonCancel->setObjectName("pushButtonPokemonCancel");
        pushButtonPokemonCancel->setEnabled(false);

        horizontalLayout_2->addWidget(pushButtonPokemonCancel);


        gridLayout_15->addLayout(horizontalLayout_2, 7, 0, 1, 2);


        gridLayout_21->addWidget(groupBoxPokemonSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxPokemonSearcherSettings = new QGroupBox(tabPokemonSearcher);
        groupBoxPokemonSearcherSettings->setObjectName("groupBoxPokemonSearcherSettings");
        sizePolicy.setHeightForWidth(groupBoxPokemonSearcherSettings->sizePolicy().hasHeightForWidth());
        groupBoxPokemonSearcherSettings->setSizePolicy(sizePolicy);
        gridLayout_16 = new QGridLayout(groupBoxPokemonSearcherSettings);
        gridLayout_16->setObjectName("gridLayout_16");
        labelPokemonSearcherLocation = new QLabel(groupBoxPokemonSearcherSettings);
        labelPokemonSearcherLocation->setObjectName("labelPokemonSearcherLocation");

        gridLayout_16->addWidget(labelPokemonSearcherLocation, 0, 0, 1, 1);

        comboBoxPokemonSearcherLocation = new ComboBox(groupBoxPokemonSearcherSettings);
        comboBoxPokemonSearcherLocation->setObjectName("comboBoxPokemonSearcherLocation");

        gridLayout_16->addWidget(comboBoxPokemonSearcherLocation, 0, 1, 1, 1);

        labelPokemonSearcherGroup = new QLabel(groupBoxPokemonSearcherSettings);
        labelPokemonSearcherGroup->setObjectName("labelPokemonSearcherGroup");

        gridLayout_16->addWidget(labelPokemonSearcherGroup, 1, 0, 1, 1);

        comboBoxPokemonSearcherGroup = new QComboBox(groupBoxPokemonSearcherSettings);
        comboBoxPokemonSearcherGroup->addItem(QString::fromUtf8("0"));
        comboBoxPokemonSearcherGroup->addItem(QString::fromUtf8("1"));
        comboBoxPokemonSearcherGroup->addItem(QString::fromUtf8("2"));
        comboBoxPokemonSearcherGroup->addItem(QString::fromUtf8("3"));
        comboBoxPokemonSearcherGroup->setObjectName("comboBoxPokemonSearcherGroup");

        gridLayout_16->addWidget(comboBoxPokemonSearcherGroup, 1, 1, 1, 1);

        labelPokemonSearcherPokemon = new QLabel(groupBoxPokemonSearcherSettings);
        labelPokemonSearcherPokemon->setObjectName("labelPokemonSearcherPokemon");

        gridLayout_16->addWidget(labelPokemonSearcherPokemon, 2, 0, 1, 1);

        comboBoxPokemonSearcherPokemon = new ComboBox(groupBoxPokemonSearcherSettings);
        comboBoxPokemonSearcherPokemon->setObjectName("comboBoxPokemonSearcherPokemon");

        gridLayout_16->addWidget(comboBoxPokemonSearcherPokemon, 2, 1, 1, 1);

        labelPokemonSearcherGender = new QLabel(groupBoxPokemonSearcherSettings);
        labelPokemonSearcherGender->setObjectName("labelPokemonSearcherGender");

        gridLayout_16->addWidget(labelPokemonSearcherGender, 3, 0, 1, 1);

        comboBoxPokemonSearcherGender = new ComboBox(groupBoxPokemonSearcherSettings);
        comboBoxPokemonSearcherGender->setObjectName("comboBoxPokemonSearcherGender");

        gridLayout_16->addWidget(comboBoxPokemonSearcherGender, 3, 1, 1, 1);

        labelPokemonSearcherIVFastSearch = new QLabel(groupBoxPokemonSearcherSettings);
        labelPokemonSearcherIVFastSearch->setObjectName("labelPokemonSearcherIVFastSearch");

        gridLayout_16->addWidget(labelPokemonSearcherIVFastSearch, 4, 0, 1, 2);


        gridLayout_21->addWidget(groupBoxPokemonSearcherSettings, 0, 1, 1, 2);

        groupBoxPokemonSearcherFilter = new QGroupBox(tabPokemonSearcher);
        groupBoxPokemonSearcherFilter->setObjectName("groupBoxPokemonSearcherFilter");
        sizePolicy.setHeightForWidth(groupBoxPokemonSearcherFilter->sizePolicy().hasHeightForWidth());
        groupBoxPokemonSearcherFilter->setSizePolicy(sizePolicy);
        gridLayout_17 = new QGridLayout(groupBoxPokemonSearcherFilter);
        gridLayout_17->setObjectName("gridLayout_17");
        filterPokemonSearcher = new Filter(groupBoxPokemonSearcherFilter);
        filterPokemonSearcher->setObjectName("filterPokemonSearcher");

        gridLayout_17->addWidget(filterPokemonSearcher, 0, 0, 1, 1);


        gridLayout_21->addWidget(groupBoxPokemonSearcherFilter, 0, 3, 1, 1);

        progressBarPokemon = new QProgressBar(tabPokemonSearcher);
        progressBarPokemon->setObjectName("progressBarPokemon");

        gridLayout_21->addWidget(progressBarPokemon, 1, 0, 1, 4);

        tableViewPokemonSearcher = new TableView(tabPokemonSearcher);
        tableViewPokemonSearcher->setObjectName("tableViewPokemonSearcher");
        tableViewPokemonSearcher->setSortingEnabled(true);

        gridLayout_21->addWidget(tableViewPokemonSearcher, 2, 0, 1, 4);

        tabRNGSelector_2->addTab(tabPokemonSearcher, QString());

        gridLayout_18->addWidget(tabRNGSelector_2, 0, 0, 1, 1);

        tabWidget->addTab(tabPokemon, QString());

        gridLayout_10->addWidget(tabWidget, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(HiddenGrotto);
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


        gridLayout_10->addWidget(groupBoxProfile, 1, 0, 1, 1);

        closebutton = new QToolButton(HiddenGrotto);
        closebutton->setObjectName("closebutton");

        gridLayout_10->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabWidget);
        QWidget::setTabOrder(tabWidget, tabSlotRNGSelector);
        QWidget::setTabOrder(tabSlotRNGSelector, textBoxGrottoGeneratorSeed);
        QWidget::setTabOrder(textBoxGrottoGeneratorSeed, textBoxGrottoGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGrottoGeneratorInitialAdvances, textBoxGrottoGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGrottoGeneratorMaxAdvances, textBoxGrottoGeneratorOffset);
        QWidget::setTabOrder(textBoxGrottoGeneratorOffset, comboBoxGrottoGeneratorGrottoPower);
        QWidget::setTabOrder(comboBoxGrottoGeneratorGrottoPower, pushButtonGrottoGenerate);
        QWidget::setTabOrder(pushButtonGrottoGenerate, comboBoxGrottoGeneratorLocation);
        QWidget::setTabOrder(comboBoxGrottoGeneratorLocation, comboBoxGrottoGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGrottoGeneratorPokemon, comboBoxGrottoGeneratorItems);
        QWidget::setTabOrder(comboBoxGrottoGeneratorItems, checkListGrottoGeneratorSlot);
        QWidget::setTabOrder(checkListGrottoGeneratorSlot, checkListGrottoGeneratorGroup);
        QWidget::setTabOrder(checkListGrottoGeneratorGroup, checkListGrottoGeneratorGender);
        QWidget::setTabOrder(checkListGrottoGeneratorGender, tableViewGrottoGenerator);
        QWidget::setTabOrder(tableViewGrottoGenerator, textBoxGrottoSearcherInitialAdvances);
        QWidget::setTabOrder(textBoxGrottoSearcherInitialAdvances, textBoxGrottoSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxGrottoSearcherMaxAdvances, comboBoxGrottoSearcherGrottoPower);
        QWidget::setTabOrder(comboBoxGrottoSearcherGrottoPower, dateEditGrottoSearcherStartDate);
        QWidget::setTabOrder(dateEditGrottoSearcherStartDate, dateEditGrottoSearcherEndDate);
        QWidget::setTabOrder(dateEditGrottoSearcherEndDate, pushButtonGrottoSearch);
        QWidget::setTabOrder(pushButtonGrottoSearch, pushButtonGrottoCancel);
        QWidget::setTabOrder(pushButtonGrottoCancel, comboBoxGrottoSearcherLocation);
        QWidget::setTabOrder(comboBoxGrottoSearcherLocation, comboBoxGrottoSearcherPokemon);
        QWidget::setTabOrder(comboBoxGrottoSearcherPokemon, comboBoxGrottoSearcherItems);
        QWidget::setTabOrder(comboBoxGrottoSearcherItems, checkListGrottoSearcherSlot);
        QWidget::setTabOrder(checkListGrottoSearcherSlot, checkListGrottoSearcherGroup);
        QWidget::setTabOrder(checkListGrottoSearcherGroup, checkListGrottoSearcherGender);
        QWidget::setTabOrder(checkListGrottoSearcherGender, tableViewGrottoSearcher);
        QWidget::setTabOrder(tableViewGrottoSearcher, tabRNGSelector_2);
        QWidget::setTabOrder(tabRNGSelector_2, comboMenuPokemonGeneratorLead);
        QWidget::setTabOrder(comboMenuPokemonGeneratorLead, textBoxPokemonGeneratorSeed);
        QWidget::setTabOrder(textBoxPokemonGeneratorSeed, textBoxPokemonGeneratorIVAdvances);
        QWidget::setTabOrder(textBoxPokemonGeneratorIVAdvances, textBoxPokemonGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxPokemonGeneratorInitialAdvances, textBoxPokemonGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxPokemonGeneratorMaxAdvances, textBoxPokemonGeneratorOffset);
        QWidget::setTabOrder(textBoxPokemonGeneratorOffset, pushButtonPokemonGenerate);
        QWidget::setTabOrder(pushButtonPokemonGenerate, comboBoxPokemonGeneratorLocation);
        QWidget::setTabOrder(comboBoxPokemonGeneratorLocation, comboBoxPokemonGeneratorGroup);
        QWidget::setTabOrder(comboBoxPokemonGeneratorGroup, comboBoxPokemonGeneratorPokemon);
        QWidget::setTabOrder(comboBoxPokemonGeneratorPokemon, comboBoxPokemonGeneratorGender);
        QWidget::setTabOrder(comboBoxPokemonGeneratorGender, tableViewPokemonGenerator);
        QWidget::setTabOrder(tableViewPokemonGenerator, comboMenuPokemonSearcherLead);
        QWidget::setTabOrder(comboMenuPokemonSearcherLead, textBoxPokemonSearcherInitialIVAdvances);
        QWidget::setTabOrder(textBoxPokemonSearcherInitialIVAdvances, textBoxPokemonSearcherMaxIVAdvances);
        QWidget::setTabOrder(textBoxPokemonSearcherMaxIVAdvances, textBoxPokemonSearcherInitialAdvances);
        QWidget::setTabOrder(textBoxPokemonSearcherInitialAdvances, textBoxPokemonSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxPokemonSearcherMaxAdvances, dateEditPokemonSearcherStartDate);
        QWidget::setTabOrder(dateEditPokemonSearcherStartDate, dateEditPokemonSearcherEndDate);
        QWidget::setTabOrder(dateEditPokemonSearcherEndDate, pushButtonPokemonSearch);
        QWidget::setTabOrder(pushButtonPokemonSearch, pushButtonPokemonCancel);
        QWidget::setTabOrder(pushButtonPokemonCancel, comboBoxPokemonSearcherLocation);
        QWidget::setTabOrder(comboBoxPokemonSearcherLocation, comboBoxPokemonSearcherGroup);
        QWidget::setTabOrder(comboBoxPokemonSearcherGroup, comboBoxPokemonSearcherPokemon);
        QWidget::setTabOrder(comboBoxPokemonSearcherPokemon, comboBoxPokemonSearcherGender);
        QWidget::setTabOrder(comboBoxPokemonSearcherGender, tableViewPokemonSearcher);

        retranslateUi(HiddenGrotto);

        QMetaObject::connectSlotsByName(HiddenGrotto);
    } // setupUi

    void retranslateUi(QWidget *HiddenGrotto)
    {
        HiddenGrotto->setWindowTitle(QCoreApplication::translate("HiddenGrotto", "Hidden Grotto", nullptr));
        groupBoxGrottoGeneratorRNGInfo->setTitle(QCoreApplication::translate("HiddenGrotto", "RNG Info", nullptr));
        labelGrottoGeneratorSeed->setText(QCoreApplication::translate("HiddenGrotto", "Seed", nullptr));
        labelGrottoGeneratorInitialAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Initial Advances", nullptr));
        labelGrottoGeneratorMaxAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Max Advances", nullptr));
        labelGrottoGeneratorOffset->setText(QCoreApplication::translate("HiddenGrotto", "Offset", nullptr));
        labelGrottoGeneratorGrottoPower->setText(QCoreApplication::translate("HiddenGrotto", "Grotto Power", nullptr));
        comboBoxGrottoGeneratorGrottoPower->setItemText(4, QCoreApplication::translate("HiddenGrotto", "S/MAX", nullptr));

        pushButtonGrottoGenerate->setText(QCoreApplication::translate("HiddenGrotto", "Generate", nullptr));
        groupBoxGrottoGeneratorSettings->setTitle(QCoreApplication::translate("HiddenGrotto", "Settings", nullptr));
        labelGrottoGeneratorLocation->setText(QCoreApplication::translate("HiddenGrotto", "Location", nullptr));
        labelGrottoGeneratorPokemon->setText(QCoreApplication::translate("HiddenGrotto", "Pokemon", nullptr));
        labelGrottoGeneratorItems->setText(QCoreApplication::translate("HiddenGrotto", "Items", nullptr));
        groupBoxGrottoGeneratorFilter->setTitle(QCoreApplication::translate("HiddenGrotto", "Filters", nullptr));
        labelGrottoGeneratorSlot->setText(QCoreApplication::translate("HiddenGrotto", "Slot", nullptr));

        labelGrottoGeneratorGroup->setText(QCoreApplication::translate("HiddenGrotto", "Group", nullptr));

        labelGrottoGeneratorGender->setText(QCoreApplication::translate("HiddenGrotto", "Gender", nullptr));

        tabSlotRNGSelector->setTabText(tabSlotRNGSelector->indexOf(tabGrottoGenerator), QCoreApplication::translate("HiddenGrotto", "Generator", nullptr));
        groupBoxGrottoSearcherRNGInfo->setTitle(QCoreApplication::translate("HiddenGrotto", "RNG Info", nullptr));
        labelGrottoSearcherInitialAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Initial Advances", nullptr));
        labelGrottoSearcherMaxAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Max Advances", nullptr));
        labelGrottoSearcherGrottoPower->setText(QCoreApplication::translate("HiddenGrotto", "Grotto Power", nullptr));
        comboBoxGrottoSearcherGrottoPower->setItemText(4, QCoreApplication::translate("HiddenGrotto", "S/MAX", nullptr));

        labelGrottoSearcherStartDate->setText(QCoreApplication::translate("HiddenGrotto", "Start Date", nullptr));
        labelGrottoSearcherEndDate->setText(QCoreApplication::translate("HiddenGrotto", "End Date", nullptr));
        pushButtonGrottoSearch->setText(QCoreApplication::translate("HiddenGrotto", "Search", nullptr));
        pushButtonGrottoCancel->setText(QCoreApplication::translate("HiddenGrotto", "Cancel", nullptr));
        groupBoxGrottoSearcherSettings->setTitle(QCoreApplication::translate("HiddenGrotto", "Settings", nullptr));
        labelGrottoSearcherLocation->setText(QCoreApplication::translate("HiddenGrotto", "Location", nullptr));
        labelGrottoSearcherPokemon->setText(QCoreApplication::translate("HiddenGrotto", "Pokemon", nullptr));
        labelGrottoSearcherItems->setText(QCoreApplication::translate("HiddenGrotto", "Items", nullptr));
        groupBoxGrottoSearcherFilter->setTitle(QCoreApplication::translate("HiddenGrotto", "Filters", nullptr));
        labelGrottoSearcherSlot->setText(QCoreApplication::translate("HiddenGrotto", "Slot", nullptr));

        labelGrottoSearcherGroup->setText(QCoreApplication::translate("HiddenGrotto", "Group", nullptr));

        labelGrottoSearcherGender->setText(QCoreApplication::translate("HiddenGrotto", "Gender", nullptr));

        tabSlotRNGSelector->setTabText(tabSlotRNGSelector->indexOf(tabSlotSearcher), QCoreApplication::translate("HiddenGrotto", "Searcher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGrotto), QCoreApplication::translate("HiddenGrotto", "Grotto", nullptr));
        groupBoxPokemonGeneratorRNGInfo->setTitle(QCoreApplication::translate("HiddenGrotto", "RNG Info", nullptr));
        labelPokemonGeneratorLead->setText(QCoreApplication::translate("HiddenGrotto", "Lead", nullptr));
        labelGeneratorSeed_2->setText(QCoreApplication::translate("HiddenGrotto", "Seed", nullptr));
        labelPokemonGeneratorIVAdvances->setText(QCoreApplication::translate("HiddenGrotto", "IV Advances", nullptr));
        labelPokemonGeneratorInitialAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Initial Advances", nullptr));
        labelPokemonGeneratorMaxAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Max Advances", nullptr));
        labelPokemonGeneratorOffset->setText(QCoreApplication::translate("HiddenGrotto", "Offset", nullptr));
        pushButtonPokemonGenerate->setText(QCoreApplication::translate("HiddenGrotto", "Generate", nullptr));
        groupBoxPokemonGeneratorSettings->setTitle(QCoreApplication::translate("HiddenGrotto", "Settings", nullptr));
        labelPokemonGeneratorLocation->setText(QCoreApplication::translate("HiddenGrotto", "Location", nullptr));
        labelPokemonGeneratorGroup->setText(QCoreApplication::translate("HiddenGrotto", "Group", nullptr));

        labelPokemonGeneratorPokemon->setText(QCoreApplication::translate("HiddenGrotto", "Pokemon", nullptr));
        labelPokemonGeneratorGender->setText(QCoreApplication::translate("HiddenGrotto", "Gender", nullptr));
        groupBoxPokemonGeneratorFilter->setTitle(QCoreApplication::translate("HiddenGrotto", "Filters", nullptr));
        tabRNGSelector_2->setTabText(tabRNGSelector_2->indexOf(tabPokemonGenerator), QCoreApplication::translate("HiddenGrotto", "Generator", nullptr));
        groupBoxPokemonSearcherRNGInfo->setTitle(QCoreApplication::translate("HiddenGrotto", "RNG Info", nullptr));
        labelPokemonSearcherLead->setText(QCoreApplication::translate("HiddenGrotto", "Lead", nullptr));
        labelPokemonSearcherInitialIVAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Initial IV Advances", nullptr));
        labelPokemonSearcherMaxIVAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Max IV Advances", nullptr));
        labelPokemonSearcherInitialAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Initial Advances", nullptr));
        labelPokemonSearcherMaxAdvances->setText(QCoreApplication::translate("HiddenGrotto", "Max Advances", nullptr));
        labelPokemonSearcherStartDate->setText(QCoreApplication::translate("HiddenGrotto", "Start Date", nullptr));
        labelPokemonSearcherEndDate->setText(QCoreApplication::translate("HiddenGrotto", "End Date", nullptr));
        pushButtonPokemonSearch->setText(QCoreApplication::translate("HiddenGrotto", "Search", nullptr));
        pushButtonPokemonCancel->setText(QCoreApplication::translate("HiddenGrotto", "Cancel", nullptr));
        groupBoxPokemonSearcherSettings->setTitle(QCoreApplication::translate("HiddenGrotto", "Settings", nullptr));
        labelPokemonSearcherLocation->setText(QCoreApplication::translate("HiddenGrotto", "Location", nullptr));
        labelPokemonSearcherGroup->setText(QCoreApplication::translate("HiddenGrotto", "Group", nullptr));

        labelPokemonSearcherPokemon->setText(QCoreApplication::translate("HiddenGrotto", "Pokemon", nullptr));
        labelPokemonSearcherGender->setText(QCoreApplication::translate("HiddenGrotto", "Gender", nullptr));
        labelPokemonSearcherIVFastSearch->setText(QString());
        groupBoxPokemonSearcherFilter->setTitle(QCoreApplication::translate("HiddenGrotto", "Filters", nullptr));
        tabRNGSelector_2->setTabText(tabRNGSelector_2->indexOf(tabPokemonSearcher), QCoreApplication::translate("HiddenGrotto", "Searcher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPokemon), QCoreApplication::translate("HiddenGrotto", "Pokemon", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("HiddenGrotto", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("HiddenGrotto", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("HiddenGrotto", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("HiddenGrotto", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("HiddenGrotto", "SID", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("HiddenGrotto", "MAC Address", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("HiddenGrotto", "DS Type", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("HiddenGrotto", "VCount", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("HiddenGrotto", "Timer0", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("HiddenGrotto", "GxStat", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("HiddenGrotto", "VFrame", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("HiddenGrotto", "Keypresses", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("HiddenGrotto", "Game", nullptr));
        closebutton->setText(QCoreApplication::translate("HiddenGrotto", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HiddenGrotto: public Ui_HiddenGrotto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIDDENGROTTO_H
