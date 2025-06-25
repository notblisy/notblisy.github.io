/********************************************************************************
** Form generated from reading UI file 'Event5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT5_H
#define UI_EVENT5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Event5
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
    QGridLayout *gridLayout_8;
    QLabel *labelGeneratorSpecies;
    ComboBox *comboBoxGeneratorSpecies;
    QPushButton *pushButtonGeneratorImport;
    QCheckBox *checkBoxGeneratorHP;
    QSpinBox *spinBoxGeneratorHP;
    QCheckBox *checkBoxGeneratorAtk;
    QSpinBox *spinBoxGeneratorAtk;
    QCheckBox *checkBoxGeneratorDef;
    QSpinBox *spinBoxGeneratorDef;
    QCheckBox *checkBoxGeneratorSpA;
    QSpinBox *spinBoxGeneratorSpA;
    QCheckBox *checkBoxGeneratorSpD;
    QSpinBox *spinBoxGeneratorSpD;
    QCheckBox *checkBoxGeneratorSpe;
    QSpinBox *spinBoxGeneratorSpe;
    QLabel *labelGeneratorLevel;
    QSpinBox *spinBoxGeneratorLevel;
    QLabel *labelGeneratorAbility;
    QComboBox *comboBoxGeneratorAbility;
    QLabel *labelGeneratorGender;
    QComboBox *comboBoxGeneratorGender;
    QCheckBox *checkBoxGeneratorNature;
    QComboBox *comboBoxGeneratorNature;
    QLabel *labelGeneratorShiny;
    ComboBox *comboBoxGeneratorShiny;
    QLabel *labelGeneratorEventTID;
    TextBox *textBoxGeneratorEventTID;
    QLabel *labelGeneratorEventSID;
    TextBox *textBoxGeneratorEventSID;
    QCheckBox *checkBoxGeneratorEgg;
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
    QGridLayout *gridLayout_9;
    QLabel *labelSearcherSpecies;
    ComboBox *comboBoxSearcherSpecies;
    QPushButton *pushButtonSearcherImport;
    QCheckBox *checkBoxSearcherHP;
    QSpinBox *spinBoxSearcherHP;
    QCheckBox *checkBoxSearcherAtk;
    QSpinBox *spinBoxSearcherAtk;
    QCheckBox *checkBoxSearcherDef;
    QSpinBox *spinBoxSearcherDef;
    QCheckBox *checkBoxSearcherSpA;
    QSpinBox *spinBoxSearcherSpA;
    QCheckBox *checkBoxSearcherSpD;
    QSpinBox *spinBoxSearcherSpD;
    QCheckBox *checkBoxSearcherSpe;
    QSpinBox *spinBoxSearcherSpe;
    QLabel *labelSearcherLevel;
    QSpinBox *spinBoxSearcherLevel;
    QLabel *labelSearcherAbility;
    QComboBox *comboBoxSearcherAbility;
    QLabel *labelSearcherGender;
    QComboBox *comboBoxSearcherGender;
    QCheckBox *checkBoxSearcherNature;
    QComboBox *comboBoxSearcherNature;
    QLabel *labelSearcherShiny;
    ComboBox *comboBoxSearcherShiny;
    QLabel *labelSearcherEventTID;
    TextBox *textBoxSearcherEventTID;
    QLabel *labelSearcherEventSID;
    TextBox *textBoxSearcherEventSID;
    QCheckBox *checkBoxSearcherEgg;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;

    void setupUi(QWidget *Event5)
    {
        if (Event5->objectName().isEmpty())
            Event5->setObjectName("Event5");
        Event5->resize(1200, 700);
        gridLayout_7 = new QGridLayout(Event5);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxProfile = new QGroupBox(Event5);
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


        gridLayout_7->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Event5);
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
        gridLayout_8 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_8->setObjectName("gridLayout_8");
        labelGeneratorSpecies = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSpecies->setObjectName("labelGeneratorSpecies");

        gridLayout_8->addWidget(labelGeneratorSpecies, 0, 0, 1, 1);

        comboBoxGeneratorSpecies = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecies->setObjectName("comboBoxGeneratorSpecies");

        gridLayout_8->addWidget(comboBoxGeneratorSpecies, 0, 1, 1, 1);

        pushButtonGeneratorImport = new QPushButton(groupBoxGeneratorSettings);
        pushButtonGeneratorImport->setObjectName("pushButtonGeneratorImport");

        gridLayout_8->addWidget(pushButtonGeneratorImport, 0, 2, 1, 2);

        checkBoxGeneratorHP = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorHP->setObjectName("checkBoxGeneratorHP");

        gridLayout_8->addWidget(checkBoxGeneratorHP, 1, 0, 1, 1);

        spinBoxGeneratorHP = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorHP->setObjectName("spinBoxGeneratorHP");
        spinBoxGeneratorHP->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorHP, 1, 1, 1, 1);

        checkBoxGeneratorAtk = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorAtk->setObjectName("checkBoxGeneratorAtk");

        gridLayout_8->addWidget(checkBoxGeneratorAtk, 2, 0, 1, 1);

        spinBoxGeneratorAtk = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorAtk->setObjectName("spinBoxGeneratorAtk");
        spinBoxGeneratorAtk->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorAtk, 2, 1, 1, 1);

        checkBoxGeneratorDef = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorDef->setObjectName("checkBoxGeneratorDef");

        gridLayout_8->addWidget(checkBoxGeneratorDef, 3, 0, 1, 1);

        spinBoxGeneratorDef = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorDef->setObjectName("spinBoxGeneratorDef");
        spinBoxGeneratorDef->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorDef, 3, 1, 1, 1);

        checkBoxGeneratorSpA = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorSpA->setObjectName("checkBoxGeneratorSpA");

        gridLayout_8->addWidget(checkBoxGeneratorSpA, 4, 0, 1, 1);

        spinBoxGeneratorSpA = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorSpA->setObjectName("spinBoxGeneratorSpA");
        spinBoxGeneratorSpA->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorSpA, 4, 1, 1, 1);

        checkBoxGeneratorSpD = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorSpD->setObjectName("checkBoxGeneratorSpD");

        gridLayout_8->addWidget(checkBoxGeneratorSpD, 5, 0, 1, 1);

        spinBoxGeneratorSpD = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorSpD->setObjectName("spinBoxGeneratorSpD");
        spinBoxGeneratorSpD->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorSpD, 5, 1, 1, 1);

        checkBoxGeneratorSpe = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorSpe->setObjectName("checkBoxGeneratorSpe");

        gridLayout_8->addWidget(checkBoxGeneratorSpe, 6, 0, 1, 1);

        spinBoxGeneratorSpe = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorSpe->setObjectName("spinBoxGeneratorSpe");
        spinBoxGeneratorSpe->setMaximum(31);

        gridLayout_8->addWidget(spinBoxGeneratorSpe, 6, 1, 1, 1);

        labelGeneratorLevel = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLevel->setObjectName("labelGeneratorLevel");

        gridLayout_8->addWidget(labelGeneratorLevel, 7, 0, 1, 1);

        spinBoxGeneratorLevel = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorLevel->setObjectName("spinBoxGeneratorLevel");
        spinBoxGeneratorLevel->setMinimum(1);
        spinBoxGeneratorLevel->setMaximum(100);

        gridLayout_8->addWidget(spinBoxGeneratorLevel, 7, 1, 1, 1);

        labelGeneratorAbility = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorAbility->setObjectName("labelGeneratorAbility");

        gridLayout_8->addWidget(labelGeneratorAbility, 1, 2, 1, 1);

        comboBoxGeneratorAbility = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorAbility->addItem(QString::fromUtf8("0"));
        comboBoxGeneratorAbility->addItem(QString::fromUtf8("1"));
        comboBoxGeneratorAbility->addItem(QString::fromUtf8("H"));
        comboBoxGeneratorAbility->addItem(QString::fromUtf8("0/1"));
        comboBoxGeneratorAbility->setObjectName("comboBoxGeneratorAbility");

        gridLayout_8->addWidget(comboBoxGeneratorAbility, 1, 3, 1, 1);

        labelGeneratorGender = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorGender->setObjectName("labelGeneratorGender");

        gridLayout_8->addWidget(labelGeneratorGender, 2, 2, 1, 1);

        comboBoxGeneratorGender = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender->addItem(QString());
        comboBoxGeneratorGender->addItem(QString());
        comboBoxGeneratorGender->addItem(QString());
        comboBoxGeneratorGender->setObjectName("comboBoxGeneratorGender");

        gridLayout_8->addWidget(comboBoxGeneratorGender, 2, 3, 1, 1);

        checkBoxGeneratorNature = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorNature->setObjectName("checkBoxGeneratorNature");

        gridLayout_8->addWidget(checkBoxGeneratorNature, 3, 2, 1, 1);

        comboBoxGeneratorNature = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorNature->setObjectName("comboBoxGeneratorNature");

        gridLayout_8->addWidget(comboBoxGeneratorNature, 3, 3, 1, 1);

        labelGeneratorShiny = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorShiny->setObjectName("labelGeneratorShiny");

        gridLayout_8->addWidget(labelGeneratorShiny, 4, 2, 1, 1);

        comboBoxGeneratorShiny = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorShiny->addItem(QString());
        comboBoxGeneratorShiny->addItem(QString());
        comboBoxGeneratorShiny->addItem(QString());
        comboBoxGeneratorShiny->setObjectName("comboBoxGeneratorShiny");

        gridLayout_8->addWidget(comboBoxGeneratorShiny, 4, 3, 1, 1);

        labelGeneratorEventTID = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorEventTID->setObjectName("labelGeneratorEventTID");

        gridLayout_8->addWidget(labelGeneratorEventTID, 5, 2, 1, 1);

        textBoxGeneratorEventTID = new TextBox(groupBoxGeneratorSettings);
        textBoxGeneratorEventTID->setObjectName("textBoxGeneratorEventTID");

        gridLayout_8->addWidget(textBoxGeneratorEventTID, 5, 3, 1, 1);

        labelGeneratorEventSID = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorEventSID->setObjectName("labelGeneratorEventSID");

        gridLayout_8->addWidget(labelGeneratorEventSID, 6, 2, 1, 1);

        textBoxGeneratorEventSID = new TextBox(groupBoxGeneratorSettings);
        textBoxGeneratorEventSID->setObjectName("textBoxGeneratorEventSID");

        gridLayout_8->addWidget(textBoxGeneratorEventSID, 6, 3, 1, 1);

        checkBoxGeneratorEgg = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorEgg->setObjectName("checkBoxGeneratorEgg");

        gridLayout_8->addWidget(checkBoxGeneratorEgg, 7, 2, 1, 2);


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
        gridLayout_9 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_9->setObjectName("gridLayout_9");
        labelSearcherSpecies = new QLabel(groupBoxSearcherSettings);
        labelSearcherSpecies->setObjectName("labelSearcherSpecies");

        gridLayout_9->addWidget(labelSearcherSpecies, 0, 0, 1, 1);

        comboBoxSearcherSpecies = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecies->setObjectName("comboBoxSearcherSpecies");

        gridLayout_9->addWidget(comboBoxSearcherSpecies, 0, 1, 1, 1);

        pushButtonSearcherImport = new QPushButton(groupBoxSearcherSettings);
        pushButtonSearcherImport->setObjectName("pushButtonSearcherImport");

        gridLayout_9->addWidget(pushButtonSearcherImport, 0, 2, 1, 2);

        checkBoxSearcherHP = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherHP->setObjectName("checkBoxSearcherHP");

        gridLayout_9->addWidget(checkBoxSearcherHP, 1, 0, 1, 1);

        spinBoxSearcherHP = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherHP->setObjectName("spinBoxSearcherHP");
        spinBoxSearcherHP->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherHP, 1, 1, 1, 1);

        checkBoxSearcherAtk = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherAtk->setObjectName("checkBoxSearcherAtk");

        gridLayout_9->addWidget(checkBoxSearcherAtk, 2, 0, 1, 1);

        spinBoxSearcherAtk = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherAtk->setObjectName("spinBoxSearcherAtk");
        spinBoxSearcherAtk->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherAtk, 2, 1, 1, 1);

        checkBoxSearcherDef = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherDef->setObjectName("checkBoxSearcherDef");

        gridLayout_9->addWidget(checkBoxSearcherDef, 3, 0, 1, 1);

        spinBoxSearcherDef = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherDef->setObjectName("spinBoxSearcherDef");
        spinBoxSearcherDef->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherDef, 3, 1, 1, 1);

        checkBoxSearcherSpA = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherSpA->setObjectName("checkBoxSearcherSpA");

        gridLayout_9->addWidget(checkBoxSearcherSpA, 4, 0, 1, 1);

        spinBoxSearcherSpA = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherSpA->setObjectName("spinBoxSearcherSpA");
        spinBoxSearcherSpA->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherSpA, 4, 1, 1, 1);

        checkBoxSearcherSpD = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherSpD->setObjectName("checkBoxSearcherSpD");

        gridLayout_9->addWidget(checkBoxSearcherSpD, 5, 0, 1, 1);

        spinBoxSearcherSpD = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherSpD->setObjectName("spinBoxSearcherSpD");
        spinBoxSearcherSpD->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherSpD, 5, 1, 1, 1);

        checkBoxSearcherSpe = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherSpe->setObjectName("checkBoxSearcherSpe");

        gridLayout_9->addWidget(checkBoxSearcherSpe, 6, 0, 1, 1);

        spinBoxSearcherSpe = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherSpe->setObjectName("spinBoxSearcherSpe");
        spinBoxSearcherSpe->setMaximum(31);

        gridLayout_9->addWidget(spinBoxSearcherSpe, 6, 1, 1, 1);

        labelSearcherLevel = new QLabel(groupBoxSearcherSettings);
        labelSearcherLevel->setObjectName("labelSearcherLevel");

        gridLayout_9->addWidget(labelSearcherLevel, 7, 0, 1, 1);

        spinBoxSearcherLevel = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherLevel->setObjectName("spinBoxSearcherLevel");
        spinBoxSearcherLevel->setMinimum(1);
        spinBoxSearcherLevel->setMaximum(100);

        gridLayout_9->addWidget(spinBoxSearcherLevel, 7, 1, 1, 1);

        labelSearcherAbility = new QLabel(groupBoxSearcherSettings);
        labelSearcherAbility->setObjectName("labelSearcherAbility");

        gridLayout_9->addWidget(labelSearcherAbility, 1, 2, 1, 1);

        comboBoxSearcherAbility = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherAbility->addItem(QString::fromUtf8("0"));
        comboBoxSearcherAbility->addItem(QString::fromUtf8("1"));
        comboBoxSearcherAbility->addItem(QString::fromUtf8("H"));
        comboBoxSearcherAbility->addItem(QString::fromUtf8("0/1"));
        comboBoxSearcherAbility->setObjectName("comboBoxSearcherAbility");

        gridLayout_9->addWidget(comboBoxSearcherAbility, 1, 3, 1, 1);

        labelSearcherGender = new QLabel(groupBoxSearcherSettings);
        labelSearcherGender->setObjectName("labelSearcherGender");

        gridLayout_9->addWidget(labelSearcherGender, 2, 2, 1, 1);

        comboBoxSearcherGender = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender->addItem(QString());
        comboBoxSearcherGender->addItem(QString());
        comboBoxSearcherGender->addItem(QString());
        comboBoxSearcherGender->setObjectName("comboBoxSearcherGender");

        gridLayout_9->addWidget(comboBoxSearcherGender, 2, 3, 1, 1);

        checkBoxSearcherNature = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherNature->setObjectName("checkBoxSearcherNature");

        gridLayout_9->addWidget(checkBoxSearcherNature, 3, 2, 1, 1);

        comboBoxSearcherNature = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherNature->setObjectName("comboBoxSearcherNature");

        gridLayout_9->addWidget(comboBoxSearcherNature, 3, 3, 1, 1);

        labelSearcherShiny = new QLabel(groupBoxSearcherSettings);
        labelSearcherShiny->setObjectName("labelSearcherShiny");

        gridLayout_9->addWidget(labelSearcherShiny, 4, 2, 1, 1);

        comboBoxSearcherShiny = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherShiny->addItem(QString());
        comboBoxSearcherShiny->addItem(QString());
        comboBoxSearcherShiny->addItem(QString());
        comboBoxSearcherShiny->setObjectName("comboBoxSearcherShiny");

        gridLayout_9->addWidget(comboBoxSearcherShiny, 4, 3, 1, 1);

        labelSearcherEventTID = new QLabel(groupBoxSearcherSettings);
        labelSearcherEventTID->setObjectName("labelSearcherEventTID");

        gridLayout_9->addWidget(labelSearcherEventTID, 5, 2, 1, 1);

        textBoxSearcherEventTID = new TextBox(groupBoxSearcherSettings);
        textBoxSearcherEventTID->setObjectName("textBoxSearcherEventTID");

        gridLayout_9->addWidget(textBoxSearcherEventTID, 5, 3, 1, 1);

        labelSearcherEventSID = new QLabel(groupBoxSearcherSettings);
        labelSearcherEventSID->setObjectName("labelSearcherEventSID");

        gridLayout_9->addWidget(labelSearcherEventSID, 6, 2, 1, 1);

        textBoxSearcherEventSID = new TextBox(groupBoxSearcherSettings);
        textBoxSearcherEventSID->setObjectName("textBoxSearcherEventSID");

        gridLayout_9->addWidget(textBoxSearcherEventSID, 6, 3, 1, 1);

        checkBoxSearcherEgg = new QCheckBox(groupBoxSearcherSettings);
        checkBoxSearcherEgg->setObjectName("checkBoxSearcherEgg");

        gridLayout_9->addWidget(checkBoxSearcherEgg, 7, 2, 1, 2);


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

        gridLayout_7->addWidget(tabRNGSelector, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorSpecies);
        QWidget::setTabOrder(comboBoxGeneratorSpecies, pushButtonGeneratorImport);
        QWidget::setTabOrder(pushButtonGeneratorImport, checkBoxGeneratorHP);
        QWidget::setTabOrder(checkBoxGeneratorHP, spinBoxGeneratorHP);
        QWidget::setTabOrder(spinBoxGeneratorHP, checkBoxGeneratorAtk);
        QWidget::setTabOrder(checkBoxGeneratorAtk, spinBoxGeneratorAtk);
        QWidget::setTabOrder(spinBoxGeneratorAtk, checkBoxGeneratorDef);
        QWidget::setTabOrder(checkBoxGeneratorDef, spinBoxGeneratorDef);
        QWidget::setTabOrder(spinBoxGeneratorDef, checkBoxGeneratorSpA);
        QWidget::setTabOrder(checkBoxGeneratorSpA, spinBoxGeneratorSpA);
        QWidget::setTabOrder(spinBoxGeneratorSpA, checkBoxGeneratorSpD);
        QWidget::setTabOrder(checkBoxGeneratorSpD, spinBoxGeneratorSpD);
        QWidget::setTabOrder(spinBoxGeneratorSpD, checkBoxGeneratorSpe);
        QWidget::setTabOrder(checkBoxGeneratorSpe, spinBoxGeneratorSpe);
        QWidget::setTabOrder(spinBoxGeneratorSpe, spinBoxGeneratorLevel);
        QWidget::setTabOrder(spinBoxGeneratorLevel, comboBoxGeneratorAbility);
        QWidget::setTabOrder(comboBoxGeneratorAbility, comboBoxGeneratorGender);
        QWidget::setTabOrder(comboBoxGeneratorGender, checkBoxGeneratorNature);
        QWidget::setTabOrder(checkBoxGeneratorNature, comboBoxGeneratorNature);
        QWidget::setTabOrder(comboBoxGeneratorNature, comboBoxGeneratorShiny);
        QWidget::setTabOrder(comboBoxGeneratorShiny, textBoxGeneratorEventTID);
        QWidget::setTabOrder(textBoxGeneratorEventTID, textBoxGeneratorEventSID);
        QWidget::setTabOrder(textBoxGeneratorEventSID, checkBoxGeneratorEgg);
        QWidget::setTabOrder(checkBoxGeneratorEgg, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, textBoxSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxSearcherMaxAdvances, dateEditSearcherStartDate);
        QWidget::setTabOrder(dateEditSearcherStartDate, dateEditSearcherEndDate);
        QWidget::setTabOrder(dateEditSearcherEndDate, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherSpecies);
        QWidget::setTabOrder(comboBoxSearcherSpecies, pushButtonSearcherImport);
        QWidget::setTabOrder(pushButtonSearcherImport, checkBoxSearcherHP);
        QWidget::setTabOrder(checkBoxSearcherHP, spinBoxSearcherHP);
        QWidget::setTabOrder(spinBoxSearcherHP, checkBoxSearcherAtk);
        QWidget::setTabOrder(checkBoxSearcherAtk, spinBoxSearcherAtk);
        QWidget::setTabOrder(spinBoxSearcherAtk, checkBoxSearcherDef);
        QWidget::setTabOrder(checkBoxSearcherDef, spinBoxSearcherDef);
        QWidget::setTabOrder(spinBoxSearcherDef, checkBoxSearcherSpA);
        QWidget::setTabOrder(checkBoxSearcherSpA, spinBoxSearcherSpA);
        QWidget::setTabOrder(spinBoxSearcherSpA, checkBoxSearcherSpD);
        QWidget::setTabOrder(checkBoxSearcherSpD, spinBoxSearcherSpD);
        QWidget::setTabOrder(spinBoxSearcherSpD, checkBoxSearcherSpe);
        QWidget::setTabOrder(checkBoxSearcherSpe, spinBoxSearcherSpe);
        QWidget::setTabOrder(spinBoxSearcherSpe, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, comboBoxSearcherAbility);
        QWidget::setTabOrder(comboBoxSearcherAbility, comboBoxSearcherGender);
        QWidget::setTabOrder(comboBoxSearcherGender, checkBoxSearcherNature);
        QWidget::setTabOrder(checkBoxSearcherNature, comboBoxSearcherNature);
        QWidget::setTabOrder(comboBoxSearcherNature, comboBoxSearcherShiny);
        QWidget::setTabOrder(comboBoxSearcherShiny, textBoxSearcherEventTID);
        QWidget::setTabOrder(textBoxSearcherEventTID, textBoxSearcherEventSID);
        QWidget::setTabOrder(textBoxSearcherEventSID, checkBoxSearcherEgg);
        QWidget::setTabOrder(checkBoxSearcherEgg, tableViewSearcher);

        retranslateUi(Event5);

        QMetaObject::connectSlotsByName(Event5);
    } // setupUi

    void retranslateUi(QWidget *Event5)
    {
        Event5->setWindowTitle(QCoreApplication::translate("Event5", "Gen 5 Event", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Event5", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Event5", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Event5", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Event5", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Event5", "SID", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("Event5", "MAC Address", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("Event5", "DS Type", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("Event5", "VCount", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("Event5", "Timer0", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("Event5", "GxStat", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("Event5", "VFrame", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("Event5", "Keypresses", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Event5", "Game", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Event5", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Event5", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Event5", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Event5", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Event5", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Event5", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Event5", "Settings", nullptr));
        labelGeneratorSpecies->setText(QCoreApplication::translate("Event5", "Species", nullptr));
        pushButtonGeneratorImport->setText(QCoreApplication::translate("Event5", "Import", nullptr));
        checkBoxGeneratorHP->setText(QCoreApplication::translate("Event5", "HP", nullptr));
        checkBoxGeneratorAtk->setText(QCoreApplication::translate("Event5", "Atk", nullptr));
        checkBoxGeneratorDef->setText(QCoreApplication::translate("Event5", "Def", nullptr));
        checkBoxGeneratorSpA->setText(QCoreApplication::translate("Event5", "SpA", nullptr));
        checkBoxGeneratorSpD->setText(QCoreApplication::translate("Event5", "SpD", nullptr));
        checkBoxGeneratorSpe->setText(QCoreApplication::translate("Event5", "Spe", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("Event5", "Level", nullptr));
        labelGeneratorAbility->setText(QCoreApplication::translate("Event5", "Ability", nullptr));

        labelGeneratorGender->setText(QCoreApplication::translate("Event5", "Gender", nullptr));
        comboBoxGeneratorGender->setItemText(0, QCoreApplication::translate("Event5", "\342\231\202 Only", nullptr));
        comboBoxGeneratorGender->setItemText(1, QCoreApplication::translate("Event5", "\342\231\200 Only", nullptr));
        comboBoxGeneratorGender->setItemText(2, QCoreApplication::translate("Event5", "Random", nullptr));

        checkBoxGeneratorNature->setText(QCoreApplication::translate("Event5", "Nature", nullptr));
        labelGeneratorShiny->setText(QCoreApplication::translate("Event5", "Shiny", nullptr));
        comboBoxGeneratorShiny->setItemText(0, QCoreApplication::translate("Event5", "Never", nullptr));
        comboBoxGeneratorShiny->setItemText(1, QCoreApplication::translate("Event5", "Random", nullptr));
        comboBoxGeneratorShiny->setItemText(2, QCoreApplication::translate("Event5", "Always", nullptr));

        labelGeneratorEventTID->setText(QCoreApplication::translate("Event5", "Event TID", nullptr));
        labelGeneratorEventSID->setText(QCoreApplication::translate("Event5", "Event SID", nullptr));
        checkBoxGeneratorEgg->setText(QCoreApplication::translate("Event5", "Egg", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Event5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Event5", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Event5", "RNG Info", nullptr));
        labelSearcherInitialAdvances->setText(QCoreApplication::translate("Event5", "Initial Advances", nullptr));
        labelSearcherMaxAdvances->setText(QCoreApplication::translate("Event5", "Max Advances", nullptr));
        labelSearcherStartDate->setText(QCoreApplication::translate("Event5", "Start Date", nullptr));
        labelSearcherEndDate->setText(QCoreApplication::translate("Event5", "End Date", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Event5", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Event5", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Event5", "Settings", nullptr));
        labelSearcherSpecies->setText(QCoreApplication::translate("Event5", "Species", nullptr));
        pushButtonSearcherImport->setText(QCoreApplication::translate("Event5", "Import", nullptr));
        checkBoxSearcherHP->setText(QCoreApplication::translate("Event5", "HP", nullptr));
        checkBoxSearcherAtk->setText(QCoreApplication::translate("Event5", "Atk", nullptr));
        checkBoxSearcherDef->setText(QCoreApplication::translate("Event5", "Def", nullptr));
        checkBoxSearcherSpA->setText(QCoreApplication::translate("Event5", "SpA", nullptr));
        checkBoxSearcherSpD->setText(QCoreApplication::translate("Event5", "SpD", nullptr));
        checkBoxSearcherSpe->setText(QCoreApplication::translate("Event5", "Spe", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("Event5", "Level", nullptr));
        labelSearcherAbility->setText(QCoreApplication::translate("Event5", "Ability", nullptr));

        labelSearcherGender->setText(QCoreApplication::translate("Event5", "Gender", nullptr));
        comboBoxSearcherGender->setItemText(0, QCoreApplication::translate("Event5", "\342\231\202 Only", nullptr));
        comboBoxSearcherGender->setItemText(1, QCoreApplication::translate("Event5", "\342\231\200 Only", nullptr));
        comboBoxSearcherGender->setItemText(2, QCoreApplication::translate("Event5", "Random", nullptr));

        checkBoxSearcherNature->setText(QCoreApplication::translate("Event5", "Nature", nullptr));
        labelSearcherShiny->setText(QCoreApplication::translate("Event5", "Shiny", nullptr));
        comboBoxSearcherShiny->setItemText(0, QCoreApplication::translate("Event5", "Never", nullptr));
        comboBoxSearcherShiny->setItemText(1, QCoreApplication::translate("Event5", "Random", nullptr));
        comboBoxSearcherShiny->setItemText(2, QCoreApplication::translate("Event5", "Always", nullptr));

        labelSearcherEventTID->setText(QCoreApplication::translate("Event5", "Event TID", nullptr));
        labelSearcherEventSID->setText(QCoreApplication::translate("Event5", "Event SID", nullptr));
        checkBoxSearcherEgg->setText(QCoreApplication::translate("Event5", "Egg", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Event5", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSearcher), QCoreApplication::translate("Event5", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Event5: public Ui_Event5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT5_H
