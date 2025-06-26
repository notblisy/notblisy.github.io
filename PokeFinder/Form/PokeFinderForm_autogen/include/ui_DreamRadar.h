/********************************************************************************
** Form generated from reading UI file 'DreamRadar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DREAMRADAR_H
#define UI_DREAMRADAR_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_DreamRadar
{
public:
    QGridLayout *gridLayout_26;
    QTabWidget *tabRNGSelector;
    QWidget *tabGenerator;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_7;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeed;
    QLabel *labelGeneratorInitialAdvances;
    TextBox *textBoxGeneratorInitialAdvances;
    QLabel *labelGeneratorMaxAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxGeneratorSettings;
    QGridLayout *gridLayout;
    QLabel *labelGeneratorSlot1;
    ComboBox *comboBoxGeneratorSpecie1;
    ComboBox *comboBoxGeneratorGender1;
    QLabel *labelGeneratorSlot2;
    ComboBox *comboBoxGeneratorSpecie2;
    ComboBox *comboBoxGeneratorGender2;
    QLabel *labelGeneratorSlot3;
    ComboBox *comboBoxGeneratorSpecie3;
    ComboBox *comboBoxGeneratorGender3;
    QLabel *labelGeneratorSlot4;
    ComboBox *comboBoxGeneratorSpecie4;
    ComboBox *comboBoxGeneratorGender4;
    QLabel *labelGeneratorSlot5;
    ComboBox *comboBoxGeneratorSpecie5;
    ComboBox *comboBoxGeneratorGender5;
    QLabel *labelGeneratorSlot6;
    ComboBox *comboBoxGeneratorSpecie6;
    ComboBox *comboBoxGeneratorGender6;
    QLabel *labelGeneratorBadges;
    QSpinBox *spinBoxGeneratorBadges;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout_19;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSearcher;
    QGridLayout *gridLayout_20;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_4;
    QLabel *label;
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
    QGridLayout *gridLayout_3;
    QLabel *labelSearcherSlot1;
    ComboBox *comboBoxSearcherSpecie1;
    ComboBox *comboBoxSearcherGender1;
    QLabel *labelSearcherSlot2;
    ComboBox *comboBoxSearcherSpecie2;
    ComboBox *comboBoxSearcherGender2;
    QLabel *labelSearcherSlot3;
    ComboBox *comboBoxSearcherSpecie3;
    ComboBox *comboBoxSearcherGender3;
    QLabel *labelSearcherSlot4;
    ComboBox *comboBoxSearcherSpecie4;
    ComboBox *comboBoxSearcherGender4;
    QLabel *labelSearcherSlot5;
    ComboBox *comboBoxSearcherSpecie5;
    ComboBox *comboBoxSearcherGender5;
    QLabel *labelSearcherSlot6;
    ComboBox *comboBoxSearcherSpecie6;
    ComboBox *comboBoxSearcherGender6;
    QLabel *labelSearcherBadges;
    QSpinBox *spinBoxSearcherBadges;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_24;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
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

    void setupUi(QWidget *DreamRadar)
    {
        if (DreamRadar->objectName().isEmpty())
            DreamRadar->setObjectName("DreamRadar");
        DreamRadar->resize(1200, 700);
        gridLayout_26 = new QGridLayout(DreamRadar);
        gridLayout_26->setObjectName("gridLayout_26");
        tabRNGSelector = new QTabWidget(DreamRadar);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_2 = new QGridLayout(tabGenerator);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGeneratorRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_7->setObjectName("gridLayout_7");
        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_7->addWidget(labelGeneratorSeed, 0, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_7->addWidget(textBoxGeneratorSeed, 0, 1, 1, 1);

        labelGeneratorInitialAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");

        gridLayout_7->addWidget(labelGeneratorInitialAdvances, 1, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_7->addWidget(textBoxGeneratorInitialAdvances, 1, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");

        gridLayout_7->addWidget(labelGeneratorMaxAdvances, 2, 0, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_7->addWidget(textBoxGeneratorMaxAdvances, 2, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_7->addWidget(pushButtonGenerate, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        sizePolicy.setHeightForWidth(groupBoxGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorSettings->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout->setObjectName("gridLayout");
        labelGeneratorSlot1 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot1->setObjectName("labelGeneratorSlot1");

        gridLayout->addWidget(labelGeneratorSlot1, 0, 0, 1, 1);

        comboBoxGeneratorSpecie1 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie1->setObjectName("comboBoxGeneratorSpecie1");

        gridLayout->addWidget(comboBoxGeneratorSpecie1, 0, 1, 1, 1);

        comboBoxGeneratorGender1 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender1->setObjectName("comboBoxGeneratorGender1");

        gridLayout->addWidget(comboBoxGeneratorGender1, 0, 2, 1, 1);

        labelGeneratorSlot2 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot2->setObjectName("labelGeneratorSlot2");

        gridLayout->addWidget(labelGeneratorSlot2, 1, 0, 1, 1);

        comboBoxGeneratorSpecie2 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie2->setObjectName("comboBoxGeneratorSpecie2");

        gridLayout->addWidget(comboBoxGeneratorSpecie2, 1, 1, 1, 1);

        comboBoxGeneratorGender2 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender2->setObjectName("comboBoxGeneratorGender2");

        gridLayout->addWidget(comboBoxGeneratorGender2, 1, 2, 1, 1);

        labelGeneratorSlot3 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot3->setObjectName("labelGeneratorSlot3");

        gridLayout->addWidget(labelGeneratorSlot3, 2, 0, 1, 1);

        comboBoxGeneratorSpecie3 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie3->setObjectName("comboBoxGeneratorSpecie3");

        gridLayout->addWidget(comboBoxGeneratorSpecie3, 2, 1, 1, 1);

        comboBoxGeneratorGender3 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender3->setObjectName("comboBoxGeneratorGender3");

        gridLayout->addWidget(comboBoxGeneratorGender3, 2, 2, 1, 1);

        labelGeneratorSlot4 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot4->setObjectName("labelGeneratorSlot4");

        gridLayout->addWidget(labelGeneratorSlot4, 3, 0, 1, 1);

        comboBoxGeneratorSpecie4 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie4->setObjectName("comboBoxGeneratorSpecie4");

        gridLayout->addWidget(comboBoxGeneratorSpecie4, 3, 1, 1, 1);

        comboBoxGeneratorGender4 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender4->setObjectName("comboBoxGeneratorGender4");

        gridLayout->addWidget(comboBoxGeneratorGender4, 3, 2, 1, 1);

        labelGeneratorSlot5 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot5->setObjectName("labelGeneratorSlot5");

        gridLayout->addWidget(labelGeneratorSlot5, 4, 0, 1, 1);

        comboBoxGeneratorSpecie5 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie5->setObjectName("comboBoxGeneratorSpecie5");

        gridLayout->addWidget(comboBoxGeneratorSpecie5, 4, 1, 1, 1);

        comboBoxGeneratorGender5 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender5->setObjectName("comboBoxGeneratorGender5");

        gridLayout->addWidget(comboBoxGeneratorGender5, 4, 2, 1, 1);

        labelGeneratorSlot6 = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorSlot6->setObjectName("labelGeneratorSlot6");

        gridLayout->addWidget(labelGeneratorSlot6, 5, 0, 1, 1);

        comboBoxGeneratorSpecie6 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecie6->setObjectName("comboBoxGeneratorSpecie6");

        gridLayout->addWidget(comboBoxGeneratorSpecie6, 5, 1, 1, 1);

        comboBoxGeneratorGender6 = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorGender6->setObjectName("comboBoxGeneratorGender6");

        gridLayout->addWidget(comboBoxGeneratorGender6, 5, 2, 1, 1);

        labelGeneratorBadges = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorBadges->setObjectName("labelGeneratorBadges");

        gridLayout->addWidget(labelGeneratorBadges, 6, 0, 1, 1);

        spinBoxGeneratorBadges = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorBadges->setObjectName("spinBoxGeneratorBadges");
        spinBoxGeneratorBadges->setMaximum(8);

        gridLayout->addWidget(spinBoxGeneratorBadges, 6, 1, 1, 2);


        gridLayout_2->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabGenerator);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxGeneratorFilters->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters->setSizePolicy(sizePolicy1);
        gridLayout_19 = new QGridLayout(groupBoxGeneratorFilters);
        gridLayout_19->setObjectName("gridLayout_19");
        filterGenerator = new Filter(groupBoxGeneratorFilters);
        filterGenerator->setObjectName("filterGenerator");

        gridLayout_19->addWidget(filterGenerator, 0, 0, 2, 1);


        gridLayout_2->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_2->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabGenerator, QString());
        tabSearcher = new QWidget();
        tabSearcher->setObjectName("tabSearcher");
        gridLayout_20 = new QGridLayout(tabSearcher);
        gridLayout_20->setObjectName("gridLayout_20");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxSearcherRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxSearcherRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(groupBoxSearcherRNGInfo);
        label->setObjectName("label");

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        textBoxSearcherInitialAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialAdvances->setObjectName("textBoxSearcherInitialAdvances");
        textBoxSearcherInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_4->addWidget(textBoxSearcherInitialAdvances, 0, 1, 1, 1);

        labelSearcherMaxAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvances->setObjectName("labelSearcherMaxAdvances");

        gridLayout_4->addWidget(labelSearcherMaxAdvances, 1, 0, 1, 1);

        textBoxSearcherMaxAdvances = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvances->setObjectName("textBoxSearcherMaxAdvances");
        textBoxSearcherMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_4->addWidget(textBoxSearcherMaxAdvances, 1, 1, 1, 1);

        labelSearcherStartDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherStartDate->setObjectName("labelSearcherStartDate");

        gridLayout_4->addWidget(labelSearcherStartDate, 2, 0, 1, 1);

        dateEditSearcherStartDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherStartDate->setObjectName("dateEditSearcherStartDate");

        gridLayout_4->addWidget(dateEditSearcherStartDate, 2, 1, 1, 1);

        labelSearcherEndDate = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherEndDate->setObjectName("labelSearcherEndDate");

        gridLayout_4->addWidget(labelSearcherEndDate, 3, 0, 1, 1);

        dateEditSearcherEndDate = new DateEdit(groupBoxSearcherRNGInfo);
        dateEditSearcherEndDate->setObjectName("dateEditSearcherEndDate");

        gridLayout_4->addWidget(dateEditSearcherEndDate, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_4->addLayout(horizontalLayout, 4, 0, 1, 2);


        gridLayout_20->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        sizePolicy.setHeightForWidth(groupBoxSearcherSettings->sizePolicy().hasHeightForWidth());
        groupBoxSearcherSettings->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_3->setObjectName("gridLayout_3");
        labelSearcherSlot1 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot1->setObjectName("labelSearcherSlot1");

        gridLayout_3->addWidget(labelSearcherSlot1, 0, 0, 1, 1);

        comboBoxSearcherSpecie1 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie1->setObjectName("comboBoxSearcherSpecie1");

        gridLayout_3->addWidget(comboBoxSearcherSpecie1, 0, 1, 1, 1);

        comboBoxSearcherGender1 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender1->setObjectName("comboBoxSearcherGender1");

        gridLayout_3->addWidget(comboBoxSearcherGender1, 0, 2, 1, 1);

        labelSearcherSlot2 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot2->setObjectName("labelSearcherSlot2");

        gridLayout_3->addWidget(labelSearcherSlot2, 1, 0, 1, 1);

        comboBoxSearcherSpecie2 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie2->setObjectName("comboBoxSearcherSpecie2");

        gridLayout_3->addWidget(comboBoxSearcherSpecie2, 1, 1, 1, 1);

        comboBoxSearcherGender2 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender2->setObjectName("comboBoxSearcherGender2");

        gridLayout_3->addWidget(comboBoxSearcherGender2, 1, 2, 1, 1);

        labelSearcherSlot3 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot3->setObjectName("labelSearcherSlot3");

        gridLayout_3->addWidget(labelSearcherSlot3, 2, 0, 1, 1);

        comboBoxSearcherSpecie3 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie3->setObjectName("comboBoxSearcherSpecie3");

        gridLayout_3->addWidget(comboBoxSearcherSpecie3, 2, 1, 1, 1);

        comboBoxSearcherGender3 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender3->setObjectName("comboBoxSearcherGender3");

        gridLayout_3->addWidget(comboBoxSearcherGender3, 2, 2, 1, 1);

        labelSearcherSlot4 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot4->setObjectName("labelSearcherSlot4");

        gridLayout_3->addWidget(labelSearcherSlot4, 3, 0, 1, 1);

        comboBoxSearcherSpecie4 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie4->setObjectName("comboBoxSearcherSpecie4");

        gridLayout_3->addWidget(comboBoxSearcherSpecie4, 3, 1, 1, 1);

        comboBoxSearcherGender4 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender4->setObjectName("comboBoxSearcherGender4");

        gridLayout_3->addWidget(comboBoxSearcherGender4, 3, 2, 1, 1);

        labelSearcherSlot5 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot5->setObjectName("labelSearcherSlot5");

        gridLayout_3->addWidget(labelSearcherSlot5, 4, 0, 1, 1);

        comboBoxSearcherSpecie5 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie5->setObjectName("comboBoxSearcherSpecie5");

        gridLayout_3->addWidget(comboBoxSearcherSpecie5, 4, 1, 1, 1);

        comboBoxSearcherGender5 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender5->setObjectName("comboBoxSearcherGender5");

        gridLayout_3->addWidget(comboBoxSearcherGender5, 4, 2, 1, 1);

        labelSearcherSlot6 = new QLabel(groupBoxSearcherSettings);
        labelSearcherSlot6->setObjectName("labelSearcherSlot6");

        gridLayout_3->addWidget(labelSearcherSlot6, 5, 0, 1, 1);

        comboBoxSearcherSpecie6 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecie6->setObjectName("comboBoxSearcherSpecie6");

        gridLayout_3->addWidget(comboBoxSearcherSpecie6, 5, 1, 1, 1);

        comboBoxSearcherGender6 = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherGender6->setObjectName("comboBoxSearcherGender6");

        gridLayout_3->addWidget(comboBoxSearcherGender6, 5, 2, 1, 1);

        labelSearcherBadges = new QLabel(groupBoxSearcherSettings);
        labelSearcherBadges->setObjectName("labelSearcherBadges");

        gridLayout_3->addWidget(labelSearcherBadges, 6, 0, 1, 1);

        spinBoxSearcherBadges = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherBadges->setObjectName("spinBoxSearcherBadges");
        spinBoxSearcherBadges->setMaximum(8);

        gridLayout_3->addWidget(spinBoxSearcherBadges, 6, 1, 1, 2);


        gridLayout_20->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy1.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy1);
        gridLayout_24 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_24->setObjectName("gridLayout_24");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_24->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_20->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_20->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");

        gridLayout_20->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSearcher, QString());

        gridLayout_26->addWidget(tabRNGSelector, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(DreamRadar);
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
        labelProfileTIDValue->setText(QString::fromUtf8("12345"));

        gridLayout_5->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_5->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");
        labelProfileSIDValue->setText(QString::fromUtf8("54321"));

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


        gridLayout_26->addWidget(groupBoxProfile, 1, 0, 1, 1);

        closebutton = new QToolButton(DreamRadar);
        closebutton->setObjectName("closebutton");

        gridLayout_26->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorSpecie1);
        QWidget::setTabOrder(comboBoxGeneratorSpecie1, comboBoxGeneratorGender1);
        QWidget::setTabOrder(comboBoxGeneratorGender1, comboBoxGeneratorSpecie2);
        QWidget::setTabOrder(comboBoxGeneratorSpecie2, comboBoxGeneratorGender2);
        QWidget::setTabOrder(comboBoxGeneratorGender2, comboBoxGeneratorSpecie3);
        QWidget::setTabOrder(comboBoxGeneratorSpecie3, comboBoxGeneratorGender3);
        QWidget::setTabOrder(comboBoxGeneratorGender3, comboBoxGeneratorSpecie4);
        QWidget::setTabOrder(comboBoxGeneratorSpecie4, comboBoxGeneratorGender4);
        QWidget::setTabOrder(comboBoxGeneratorGender4, comboBoxGeneratorSpecie5);
        QWidget::setTabOrder(comboBoxGeneratorSpecie5, comboBoxGeneratorGender5);
        QWidget::setTabOrder(comboBoxGeneratorGender5, comboBoxGeneratorSpecie6);
        QWidget::setTabOrder(comboBoxGeneratorSpecie6, comboBoxGeneratorGender6);
        QWidget::setTabOrder(comboBoxGeneratorGender6, spinBoxGeneratorBadges);
        QWidget::setTabOrder(spinBoxGeneratorBadges, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, textBoxSearcherInitialAdvances);
        QWidget::setTabOrder(textBoxSearcherInitialAdvances, textBoxSearcherMaxAdvances);
        QWidget::setTabOrder(textBoxSearcherMaxAdvances, dateEditSearcherStartDate);
        QWidget::setTabOrder(dateEditSearcherStartDate, dateEditSearcherEndDate);
        QWidget::setTabOrder(dateEditSearcherEndDate, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherSpecie1);
        QWidget::setTabOrder(comboBoxSearcherSpecie1, comboBoxSearcherGender1);
        QWidget::setTabOrder(comboBoxSearcherGender1, comboBoxSearcherSpecie2);
        QWidget::setTabOrder(comboBoxSearcherSpecie2, comboBoxSearcherGender2);
        QWidget::setTabOrder(comboBoxSearcherGender2, comboBoxSearcherSpecie3);
        QWidget::setTabOrder(comboBoxSearcherSpecie3, comboBoxSearcherGender3);
        QWidget::setTabOrder(comboBoxSearcherGender3, comboBoxSearcherSpecie4);
        QWidget::setTabOrder(comboBoxSearcherSpecie4, comboBoxSearcherGender4);
        QWidget::setTabOrder(comboBoxSearcherGender4, comboBoxSearcherSpecie5);
        QWidget::setTabOrder(comboBoxSearcherSpecie5, comboBoxSearcherGender5);
        QWidget::setTabOrder(comboBoxSearcherGender5, comboBoxSearcherSpecie6);
        QWidget::setTabOrder(comboBoxSearcherSpecie6, comboBoxSearcherGender6);
        QWidget::setTabOrder(comboBoxSearcherGender6, spinBoxSearcherBadges);
        QWidget::setTabOrder(spinBoxSearcherBadges, tableViewSearcher);

        retranslateUi(DreamRadar);

        QMetaObject::connectSlotsByName(DreamRadar);
    } // setupUi

    void retranslateUi(QWidget *DreamRadar)
    {
        DreamRadar->setWindowTitle(QCoreApplication::translate("DreamRadar", "Dream Radar", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("DreamRadar", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("DreamRadar", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("DreamRadar", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("DreamRadar", "Max Advances", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("DreamRadar", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("DreamRadar", "Settings", nullptr));
        labelGeneratorSlot1->setText(QCoreApplication::translate("DreamRadar", "Slot 1", nullptr));
        labelGeneratorSlot2->setText(QCoreApplication::translate("DreamRadar", "Slot 2", nullptr));
        labelGeneratorSlot3->setText(QCoreApplication::translate("DreamRadar", "Slot 3", nullptr));
        labelGeneratorSlot4->setText(QCoreApplication::translate("DreamRadar", "Slot 4", nullptr));
        labelGeneratorSlot5->setText(QCoreApplication::translate("DreamRadar", "Slot 5", nullptr));
        labelGeneratorSlot6->setText(QCoreApplication::translate("DreamRadar", "Slot 6", nullptr));
        labelGeneratorBadges->setText(QCoreApplication::translate("DreamRadar", "Badges", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("DreamRadar", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("DreamRadar", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("DreamRadar", "RNG Info", nullptr));
        label->setText(QCoreApplication::translate("DreamRadar", "Initial Advances", nullptr));
        labelSearcherMaxAdvances->setText(QCoreApplication::translate("DreamRadar", "Max Advances", nullptr));
        labelSearcherStartDate->setText(QCoreApplication::translate("DreamRadar", "Start Date", nullptr));
        labelSearcherEndDate->setText(QCoreApplication::translate("DreamRadar", "End Date", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("DreamRadar", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DreamRadar", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("DreamRadar", "Settings", nullptr));
        labelSearcherSlot1->setText(QCoreApplication::translate("DreamRadar", "Slot 1", nullptr));
        labelSearcherSlot2->setText(QCoreApplication::translate("DreamRadar", "Slot 2", nullptr));
        labelSearcherSlot3->setText(QCoreApplication::translate("DreamRadar", "Slot 3", nullptr));
        labelSearcherSlot4->setText(QCoreApplication::translate("DreamRadar", "Slot 4", nullptr));
        labelSearcherSlot5->setText(QCoreApplication::translate("DreamRadar", "Slot 5", nullptr));
        labelSearcherSlot6->setText(QCoreApplication::translate("DreamRadar", "Slot 6", nullptr));
        labelSearcherBadges->setText(QCoreApplication::translate("DreamRadar", "Badges", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("DreamRadar", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSearcher), QCoreApplication::translate("DreamRadar", "Searcher", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("DreamRadar", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("DreamRadar", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("DreamRadar", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("DreamRadar", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("DreamRadar", "SID", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("DreamRadar", "MAC Address", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("DreamRadar", "DS Type", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("DreamRadar", "VCount", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("DreamRadar", "Timer0", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("DreamRadar", "GxStat", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("DreamRadar", "VFrame", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("DreamRadar", "Keypresses", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("DreamRadar", "Game", nullptr));
        closebutton->setText(QCoreApplication::translate("DreamRadar", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DreamRadar: public Ui_DreamRadar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DREAMRADAR_H
