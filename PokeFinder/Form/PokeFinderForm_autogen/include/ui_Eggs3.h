/********************************************************************************
** Form generated from reading UI file 'Eggs3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGGS3_H
#define UI_EGGS3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/EggSettings.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Eggs3
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_13;
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
    QTabWidget *tabEggSelection;
    QWidget *tabEmerald;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBoxEmeraldRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelEmeraldAdvanceHeld;
    TextBox *textBoxEmeraldInitialAdvancesHeld;
    TextBox *textBoxEmeraldMaxAdvancesHeld;
    QLabel *labelEmeraldPickupAdvance;
    TextBox *textBoxEmeraldInitialAdvancesPickup;
    TextBox *textBoxEmeraldMaxAdvancesPickup;
    QLabel *labelEmeraldOffset;
    TextBox *textBoxEmeraldOffsetHeld;
    TextBox *textBoxEmeraldOffsetPickup;
    QLabel *labelEmeraldCalibration;
    TextBox *textBoxEmeraldCalibration;
    QLabel *labelEmeraldRedraws;
    TextBox *textBoxEmeraldMinRedraws;
    TextBox *textBoxEmeraldMaxRedraws;
    QLabel *labelEmeraldMethod;
    ComboBox *comboBoxEmeraldMethod;
    QLabel *labelEmeraldCompatibility;
    ComboBox *comboBoxEmeraldCompatibility;
    QPushButton *pushButtonEmeraldGenerate;
    QGroupBox *groupBoxEmeraldSettings;
    QGridLayout *gridLayout_5;
    EggSettings *eggSettingsEmerald;
    QGroupBox *groupBoxEmeraldFilters;
    QGridLayout *gridLayout_4;
    Filter *filterEmerald;
    TableView *tableViewEmerald;
    QWidget *tabRSFRLG;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBoxRSFRLGRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelRSFRLGSeed;
    TextBox *textBoxRSFRLGSeedHeld;
    TextBox *textBoxRSFRLGSeedPickup;
    QLabel *labelRSFRLGAdvanceHeld;
    TextBox *textBoxRSFRLGInitialAdvancesHeld;
    TextBox *textBoxRSFRLGMaxAdvancesHeld;
    QLabel *labelRSFRLGPickupAdvance;
    TextBox *textBoxRSFRLGInitialAdvancesPickup;
    TextBox *textBoxRSFRLGMaxAdvancesPickup;
    QLabel *labelRSFRLGOffset;
    TextBox *textBoxRSFRLGOffsetHeld;
    TextBox *textBoxRSFRLGOffsetPickup;
    QLabel *labelRSFRLGMethod;
    ComboBox *comboBoxRSFRLGMethod;
    QLabel *labelRSFRLGCompatibility;
    ComboBox *comboBoxRSFRLGCompatibility;
    QPushButton *pushButtonRSFRLGGenerate;
    QGroupBox *groupBoxRSFRLGSettings;
    QGridLayout *gridLayout_7;
    EggSettings *eggSettingsRSFRLG;
    QGroupBox *groupBoxRSFRLGFilters;
    QGridLayout *gridLayout_3;
    Filter *filterRSFRLG;
    TableView *tableViewRSFRLG;

    void setupUi(QWidget *Eggs3)
    {
        if (Eggs3->objectName().isEmpty())
            Eggs3->setObjectName("Eggs3");
        Eggs3->resize(1200, 700);
        gridLayout = new QGridLayout(Eggs3);
        gridLayout->setObjectName("gridLayout");
        groupBoxProfile = new QGroupBox(Eggs3);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_13 = new QGridLayout(groupBoxProfile);
        gridLayout_13->setObjectName("gridLayout_13");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_13->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_13->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_13->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_13->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");
        labelProfileTIDValue->setText(QString::fromUtf8("12345"));

        gridLayout_13->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_13->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");
        labelProfileSIDValue->setText(QString::fromUtf8("54321"));

        gridLayout_13->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_13->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_13->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_13->addWidget(labelProfileGameValue, 0, 6, 1, 1);


        gridLayout->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabEggSelection = new QTabWidget(Eggs3);
        tabEggSelection->setObjectName("tabEggSelection");
        tabEmerald = new QWidget();
        tabEmerald->setObjectName("tabEmerald");
        gridLayout_17 = new QGridLayout(tabEmerald);
        gridLayout_17->setObjectName("gridLayout_17");
        groupBoxEmeraldRNGInfo = new QGroupBox(tabEmerald);
        groupBoxEmeraldRNGInfo->setObjectName("groupBoxEmeraldRNGInfo");
        gridLayout_2 = new QGridLayout(groupBoxEmeraldRNGInfo);
        gridLayout_2->setObjectName("gridLayout_2");
        labelEmeraldAdvanceHeld = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldAdvanceHeld->setObjectName("labelEmeraldAdvanceHeld");

        gridLayout_2->addWidget(labelEmeraldAdvanceHeld, 0, 0, 1, 1);

        textBoxEmeraldInitialAdvancesHeld = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldInitialAdvancesHeld->setObjectName("textBoxEmeraldInitialAdvancesHeld");
        textBoxEmeraldInitialAdvancesHeld->setText(QString::fromUtf8("1000"));

        gridLayout_2->addWidget(textBoxEmeraldInitialAdvancesHeld, 0, 1, 1, 1);

        textBoxEmeraldMaxAdvancesHeld = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldMaxAdvancesHeld->setObjectName("textBoxEmeraldMaxAdvancesHeld");
        textBoxEmeraldMaxAdvancesHeld->setText(QString::fromUtf8("5000"));

        gridLayout_2->addWidget(textBoxEmeraldMaxAdvancesHeld, 0, 2, 1, 1);

        labelEmeraldPickupAdvance = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldPickupAdvance->setObjectName("labelEmeraldPickupAdvance");

        gridLayout_2->addWidget(labelEmeraldPickupAdvance, 1, 0, 1, 1);

        textBoxEmeraldInitialAdvancesPickup = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldInitialAdvancesPickup->setObjectName("textBoxEmeraldInitialAdvancesPickup");
        textBoxEmeraldInitialAdvancesPickup->setText(QString::fromUtf8("1000"));

        gridLayout_2->addWidget(textBoxEmeraldInitialAdvancesPickup, 1, 1, 1, 1);

        textBoxEmeraldMaxAdvancesPickup = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldMaxAdvancesPickup->setObjectName("textBoxEmeraldMaxAdvancesPickup");
        textBoxEmeraldMaxAdvancesPickup->setText(QString::fromUtf8("5000"));

        gridLayout_2->addWidget(textBoxEmeraldMaxAdvancesPickup, 1, 2, 1, 1);

        labelEmeraldOffset = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldOffset->setObjectName("labelEmeraldOffset");

        gridLayout_2->addWidget(labelEmeraldOffset, 2, 0, 1, 1);

        textBoxEmeraldOffsetHeld = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldOffsetHeld->setObjectName("textBoxEmeraldOffsetHeld");

        gridLayout_2->addWidget(textBoxEmeraldOffsetHeld, 2, 1, 1, 1);

        textBoxEmeraldOffsetPickup = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldOffsetPickup->setObjectName("textBoxEmeraldOffsetPickup");

        gridLayout_2->addWidget(textBoxEmeraldOffsetPickup, 2, 2, 1, 1);

        labelEmeraldCalibration = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldCalibration->setObjectName("labelEmeraldCalibration");

        gridLayout_2->addWidget(labelEmeraldCalibration, 3, 0, 1, 1);

        textBoxEmeraldCalibration = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldCalibration->setObjectName("textBoxEmeraldCalibration");
        textBoxEmeraldCalibration->setText(QString::fromUtf8("18"));

        gridLayout_2->addWidget(textBoxEmeraldCalibration, 3, 1, 1, 1);

        labelEmeraldRedraws = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldRedraws->setObjectName("labelEmeraldRedraws");

        gridLayout_2->addWidget(labelEmeraldRedraws, 4, 0, 1, 1);

        textBoxEmeraldMinRedraws = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldMinRedraws->setObjectName("textBoxEmeraldMinRedraws");
        textBoxEmeraldMinRedraws->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(textBoxEmeraldMinRedraws, 4, 1, 1, 1);

        textBoxEmeraldMaxRedraws = new TextBox(groupBoxEmeraldRNGInfo);
        textBoxEmeraldMaxRedraws->setObjectName("textBoxEmeraldMaxRedraws");
        textBoxEmeraldMaxRedraws->setText(QString::fromUtf8("5"));

        gridLayout_2->addWidget(textBoxEmeraldMaxRedraws, 4, 2, 1, 1);

        labelEmeraldMethod = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldMethod->setObjectName("labelEmeraldMethod");

        gridLayout_2->addWidget(labelEmeraldMethod, 5, 0, 1, 1);

        comboBoxEmeraldMethod = new ComboBox(groupBoxEmeraldRNGInfo);
        comboBoxEmeraldMethod->addItem(QString());
        comboBoxEmeraldMethod->addItem(QString());
        comboBoxEmeraldMethod->addItem(QString());
        comboBoxEmeraldMethod->setObjectName("comboBoxEmeraldMethod");

        gridLayout_2->addWidget(comboBoxEmeraldMethod, 5, 1, 1, 2);

        labelEmeraldCompatibility = new QLabel(groupBoxEmeraldRNGInfo);
        labelEmeraldCompatibility->setObjectName("labelEmeraldCompatibility");

        gridLayout_2->addWidget(labelEmeraldCompatibility, 6, 0, 1, 1);

        comboBoxEmeraldCompatibility = new ComboBox(groupBoxEmeraldRNGInfo);
        comboBoxEmeraldCompatibility->addItem(QString());
        comboBoxEmeraldCompatibility->addItem(QString());
        comboBoxEmeraldCompatibility->addItem(QString());
        comboBoxEmeraldCompatibility->setObjectName("comboBoxEmeraldCompatibility");

        gridLayout_2->addWidget(comboBoxEmeraldCompatibility, 6, 1, 1, 2);

        pushButtonEmeraldGenerate = new QPushButton(groupBoxEmeraldRNGInfo);
        pushButtonEmeraldGenerate->setObjectName("pushButtonEmeraldGenerate");

        gridLayout_2->addWidget(pushButtonEmeraldGenerate, 7, 0, 1, 3);


        gridLayout_17->addWidget(groupBoxEmeraldRNGInfo, 0, 0, 1, 1);

        groupBoxEmeraldSettings = new QGroupBox(tabEmerald);
        groupBoxEmeraldSettings->setObjectName("groupBoxEmeraldSettings");
        gridLayout_5 = new QGridLayout(groupBoxEmeraldSettings);
        gridLayout_5->setObjectName("gridLayout_5");
        eggSettingsEmerald = new EggSettings(groupBoxEmeraldSettings);
        eggSettingsEmerald->setObjectName("eggSettingsEmerald");

        gridLayout_5->addWidget(eggSettingsEmerald, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBoxEmeraldSettings, 0, 1, 1, 1);

        groupBoxEmeraldFilters = new QGroupBox(tabEmerald);
        groupBoxEmeraldFilters->setObjectName("groupBoxEmeraldFilters");
        gridLayout_4 = new QGridLayout(groupBoxEmeraldFilters);
        gridLayout_4->setObjectName("gridLayout_4");
        filterEmerald = new Filter(groupBoxEmeraldFilters);
        filterEmerald->setObjectName("filterEmerald");

        gridLayout_4->addWidget(filterEmerald, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBoxEmeraldFilters, 0, 2, 1, 1);

        tableViewEmerald = new TableView(tabEmerald);
        tableViewEmerald->setObjectName("tableViewEmerald");

        gridLayout_17->addWidget(tableViewEmerald, 1, 0, 1, 3);

        tabEggSelection->addTab(tabEmerald, QString());
        tabRSFRLG = new QWidget();
        tabRSFRLG->setObjectName("tabRSFRLG");
        gridLayout_15 = new QGridLayout(tabRSFRLG);
        gridLayout_15->setObjectName("gridLayout_15");
        groupBoxRSFRLGRNGInfo = new QGroupBox(tabRSFRLG);
        groupBoxRSFRLGRNGInfo->setObjectName("groupBoxRSFRLGRNGInfo");
        gridLayout_6 = new QGridLayout(groupBoxRSFRLGRNGInfo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelRSFRLGSeed = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGSeed->setObjectName("labelRSFRLGSeed");

        gridLayout_6->addWidget(labelRSFRLGSeed, 0, 0, 1, 1);

        textBoxRSFRLGSeedHeld = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGSeedHeld->setObjectName("textBoxRSFRLGSeedHeld");
        textBoxRSFRLGSeedHeld->setText(QString::fromUtf8(""));

        gridLayout_6->addWidget(textBoxRSFRLGSeedHeld, 0, 1, 1, 1);

        textBoxRSFRLGSeedPickup = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGSeedPickup->setObjectName("textBoxRSFRLGSeedPickup");
        textBoxRSFRLGSeedPickup->setText(QString::fromUtf8(""));

        gridLayout_6->addWidget(textBoxRSFRLGSeedPickup, 0, 2, 1, 1);

        labelRSFRLGAdvanceHeld = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGAdvanceHeld->setObjectName("labelRSFRLGAdvanceHeld");

        gridLayout_6->addWidget(labelRSFRLGAdvanceHeld, 1, 0, 1, 1);

        textBoxRSFRLGInitialAdvancesHeld = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGInitialAdvancesHeld->setObjectName("textBoxRSFRLGInitialAdvancesHeld");
        textBoxRSFRLGInitialAdvancesHeld->setText(QString::fromUtf8("1000"));

        gridLayout_6->addWidget(textBoxRSFRLGInitialAdvancesHeld, 1, 1, 1, 1);

        textBoxRSFRLGMaxAdvancesHeld = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGMaxAdvancesHeld->setObjectName("textBoxRSFRLGMaxAdvancesHeld");
        textBoxRSFRLGMaxAdvancesHeld->setText(QString::fromUtf8("5000"));

        gridLayout_6->addWidget(textBoxRSFRLGMaxAdvancesHeld, 1, 2, 1, 1);

        labelRSFRLGPickupAdvance = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGPickupAdvance->setObjectName("labelRSFRLGPickupAdvance");

        gridLayout_6->addWidget(labelRSFRLGPickupAdvance, 2, 0, 1, 1);

        textBoxRSFRLGInitialAdvancesPickup = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGInitialAdvancesPickup->setObjectName("textBoxRSFRLGInitialAdvancesPickup");
        textBoxRSFRLGInitialAdvancesPickup->setText(QString::fromUtf8("1000"));

        gridLayout_6->addWidget(textBoxRSFRLGInitialAdvancesPickup, 2, 1, 1, 1);

        textBoxRSFRLGMaxAdvancesPickup = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGMaxAdvancesPickup->setObjectName("textBoxRSFRLGMaxAdvancesPickup");
        textBoxRSFRLGMaxAdvancesPickup->setText(QString::fromUtf8("5000"));

        gridLayout_6->addWidget(textBoxRSFRLGMaxAdvancesPickup, 2, 2, 1, 1);

        labelRSFRLGOffset = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGOffset->setObjectName("labelRSFRLGOffset");

        gridLayout_6->addWidget(labelRSFRLGOffset, 3, 0, 1, 1);

        textBoxRSFRLGOffsetHeld = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGOffsetHeld->setObjectName("textBoxRSFRLGOffsetHeld");

        gridLayout_6->addWidget(textBoxRSFRLGOffsetHeld, 3, 1, 1, 1);

        textBoxRSFRLGOffsetPickup = new TextBox(groupBoxRSFRLGRNGInfo);
        textBoxRSFRLGOffsetPickup->setObjectName("textBoxRSFRLGOffsetPickup");

        gridLayout_6->addWidget(textBoxRSFRLGOffsetPickup, 3, 2, 1, 1);

        labelRSFRLGMethod = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGMethod->setObjectName("labelRSFRLGMethod");

        gridLayout_6->addWidget(labelRSFRLGMethod, 4, 0, 1, 1);

        comboBoxRSFRLGMethod = new ComboBox(groupBoxRSFRLGRNGInfo);
        comboBoxRSFRLGMethod->addItem(QString());
        comboBoxRSFRLGMethod->addItem(QString());
        comboBoxRSFRLGMethod->addItem(QString());
        comboBoxRSFRLGMethod->addItem(QString());
        comboBoxRSFRLGMethod->setObjectName("comboBoxRSFRLGMethod");

        gridLayout_6->addWidget(comboBoxRSFRLGMethod, 4, 1, 1, 2);

        labelRSFRLGCompatibility = new QLabel(groupBoxRSFRLGRNGInfo);
        labelRSFRLGCompatibility->setObjectName("labelRSFRLGCompatibility");

        gridLayout_6->addWidget(labelRSFRLGCompatibility, 5, 0, 1, 1);

        comboBoxRSFRLGCompatibility = new ComboBox(groupBoxRSFRLGRNGInfo);
        comboBoxRSFRLGCompatibility->addItem(QString());
        comboBoxRSFRLGCompatibility->addItem(QString());
        comboBoxRSFRLGCompatibility->addItem(QString());
        comboBoxRSFRLGCompatibility->setObjectName("comboBoxRSFRLGCompatibility");

        gridLayout_6->addWidget(comboBoxRSFRLGCompatibility, 5, 1, 1, 2);

        pushButtonRSFRLGGenerate = new QPushButton(groupBoxRSFRLGRNGInfo);
        pushButtonRSFRLGGenerate->setObjectName("pushButtonRSFRLGGenerate");

        gridLayout_6->addWidget(pushButtonRSFRLGGenerate, 6, 0, 1, 3);


        gridLayout_15->addWidget(groupBoxRSFRLGRNGInfo, 0, 0, 1, 1);

        groupBoxRSFRLGSettings = new QGroupBox(tabRSFRLG);
        groupBoxRSFRLGSettings->setObjectName("groupBoxRSFRLGSettings");
        gridLayout_7 = new QGridLayout(groupBoxRSFRLGSettings);
        gridLayout_7->setObjectName("gridLayout_7");
        eggSettingsRSFRLG = new EggSettings(groupBoxRSFRLGSettings);
        eggSettingsRSFRLG->setObjectName("eggSettingsRSFRLG");

        gridLayout_7->addWidget(eggSettingsRSFRLG, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBoxRSFRLGSettings, 0, 1, 1, 1);

        groupBoxRSFRLGFilters = new QGroupBox(tabRSFRLG);
        groupBoxRSFRLGFilters->setObjectName("groupBoxRSFRLGFilters");
        gridLayout_3 = new QGridLayout(groupBoxRSFRLGFilters);
        gridLayout_3->setObjectName("gridLayout_3");
        filterRSFRLG = new Filter(groupBoxRSFRLGFilters);
        filterRSFRLG->setObjectName("filterRSFRLG");

        gridLayout_3->addWidget(filterRSFRLG, 0, 0, 3, 2);


        gridLayout_15->addWidget(groupBoxRSFRLGFilters, 0, 2, 1, 1);

        tableViewRSFRLG = new TableView(tabRSFRLG);
        tableViewRSFRLG->setObjectName("tableViewRSFRLG");

        gridLayout_15->addWidget(tableViewRSFRLG, 1, 0, 1, 3);

        tabEggSelection->addTab(tabRSFRLG, QString());

        gridLayout->addWidget(tabEggSelection, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabEggSelection);
        QWidget::setTabOrder(tabEggSelection, textBoxEmeraldInitialAdvancesHeld);
        QWidget::setTabOrder(textBoxEmeraldInitialAdvancesHeld, textBoxEmeraldMaxAdvancesHeld);
        QWidget::setTabOrder(textBoxEmeraldMaxAdvancesHeld, textBoxEmeraldInitialAdvancesPickup);
        QWidget::setTabOrder(textBoxEmeraldInitialAdvancesPickup, textBoxEmeraldMaxAdvancesPickup);
        QWidget::setTabOrder(textBoxEmeraldMaxAdvancesPickup, textBoxEmeraldOffsetHeld);
        QWidget::setTabOrder(textBoxEmeraldOffsetHeld, textBoxEmeraldOffsetPickup);
        QWidget::setTabOrder(textBoxEmeraldOffsetPickup, textBoxEmeraldCalibration);
        QWidget::setTabOrder(textBoxEmeraldCalibration, textBoxEmeraldMinRedraws);
        QWidget::setTabOrder(textBoxEmeraldMinRedraws, textBoxEmeraldMaxRedraws);
        QWidget::setTabOrder(textBoxEmeraldMaxRedraws, comboBoxEmeraldMethod);
        QWidget::setTabOrder(comboBoxEmeraldMethod, comboBoxEmeraldCompatibility);
        QWidget::setTabOrder(comboBoxEmeraldCompatibility, pushButtonEmeraldGenerate);
        QWidget::setTabOrder(pushButtonEmeraldGenerate, tableViewEmerald);
        QWidget::setTabOrder(tableViewEmerald, textBoxRSFRLGSeedHeld);
        QWidget::setTabOrder(textBoxRSFRLGSeedHeld, textBoxRSFRLGSeedPickup);
        QWidget::setTabOrder(textBoxRSFRLGSeedPickup, textBoxRSFRLGInitialAdvancesHeld);
        QWidget::setTabOrder(textBoxRSFRLGInitialAdvancesHeld, textBoxRSFRLGMaxAdvancesHeld);
        QWidget::setTabOrder(textBoxRSFRLGMaxAdvancesHeld, textBoxRSFRLGInitialAdvancesPickup);
        QWidget::setTabOrder(textBoxRSFRLGInitialAdvancesPickup, textBoxRSFRLGMaxAdvancesPickup);
        QWidget::setTabOrder(textBoxRSFRLGMaxAdvancesPickup, textBoxRSFRLGOffsetHeld);
        QWidget::setTabOrder(textBoxRSFRLGOffsetHeld, textBoxRSFRLGOffsetPickup);
        QWidget::setTabOrder(textBoxRSFRLGOffsetPickup, comboBoxRSFRLGMethod);
        QWidget::setTabOrder(comboBoxRSFRLGMethod, comboBoxRSFRLGCompatibility);
        QWidget::setTabOrder(comboBoxRSFRLGCompatibility, pushButtonRSFRLGGenerate);
        QWidget::setTabOrder(pushButtonRSFRLGGenerate, tableViewRSFRLG);

        retranslateUi(Eggs3);

        QMetaObject::connectSlotsByName(Eggs3);
    } // setupUi

    void retranslateUi(QWidget *Eggs3)
    {
        Eggs3->setWindowTitle(QCoreApplication::translate("Eggs3", "Gen 3 Eggs", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Eggs3", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Eggs3", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Eggs3", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Eggs3", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Eggs3", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Eggs3", "Game", nullptr));
        labelProfileGameValue->setText(QCoreApplication::translate("Eggs3", "Emerald", nullptr));
        groupBoxEmeraldRNGInfo->setTitle(QCoreApplication::translate("Eggs3", "RNG Info", nullptr));
        labelEmeraldAdvanceHeld->setText(QCoreApplication::translate("Eggs3", "Held Advances", nullptr));
        labelEmeraldPickupAdvance->setText(QCoreApplication::translate("Eggs3", "Pickup Advances", nullptr));
        labelEmeraldOffset->setText(QCoreApplication::translate("Eggs3", "Offset (Held / Pickup)", nullptr));
        labelEmeraldCalibration->setText(QCoreApplication::translate("Eggs3", "Calibration", nullptr));
        labelEmeraldRedraws->setText(QCoreApplication::translate("Eggs3", "Redraws", nullptr));
        labelEmeraldMethod->setText(QCoreApplication::translate("Eggs3", "Method", nullptr));
        comboBoxEmeraldMethod->setItemText(0, QCoreApplication::translate("Eggs3", "Normal", nullptr));
        comboBoxEmeraldMethod->setItemText(1, QCoreApplication::translate("Eggs3", "Split", nullptr));
        comboBoxEmeraldMethod->setItemText(2, QCoreApplication::translate("Eggs3", "Alternate", nullptr));

        labelEmeraldCompatibility->setText(QCoreApplication::translate("Eggs3", "Compatibility", nullptr));
        comboBoxEmeraldCompatibility->setItemText(0, QCoreApplication::translate("Eggs3", "The two don't seem to like each other", nullptr));
        comboBoxEmeraldCompatibility->setItemText(1, QCoreApplication::translate("Eggs3", "The two seem to get along", nullptr));
        comboBoxEmeraldCompatibility->setItemText(2, QCoreApplication::translate("Eggs3", "The two seem to get along very well", nullptr));

        pushButtonEmeraldGenerate->setText(QCoreApplication::translate("Eggs3", "Generate", nullptr));
        groupBoxEmeraldSettings->setTitle(QCoreApplication::translate("Eggs3", "Settings", nullptr));
        groupBoxEmeraldFilters->setTitle(QCoreApplication::translate("Eggs3", "Filters", nullptr));
        tabEggSelection->setTabText(tabEggSelection->indexOf(tabEmerald), QCoreApplication::translate("Eggs3", "Emerald", nullptr));
        groupBoxRSFRLGRNGInfo->setTitle(QCoreApplication::translate("Eggs3", "RNG Info", nullptr));
        labelRSFRLGSeed->setText(QCoreApplication::translate("Eggs3", "Seed (Held / Pickup)", nullptr));
        labelRSFRLGAdvanceHeld->setText(QCoreApplication::translate("Eggs3", "Held Advances", nullptr));
        labelRSFRLGPickupAdvance->setText(QCoreApplication::translate("Eggs3", "Pickup Advances", nullptr));
        labelRSFRLGOffset->setText(QCoreApplication::translate("Eggs3", "Offset (Held / Pickup)", nullptr));
        labelRSFRLGMethod->setText(QCoreApplication::translate("Eggs3", "Method", nullptr));
        comboBoxRSFRLGMethod->setItemText(0, QCoreApplication::translate("Eggs3", "Normal", nullptr));
        comboBoxRSFRLGMethod->setItemText(1, QCoreApplication::translate("Eggs3", "Split", nullptr));
        comboBoxRSFRLGMethod->setItemText(2, QCoreApplication::translate("Eggs3", "Alternate", nullptr));
        comboBoxRSFRLGMethod->setItemText(3, QCoreApplication::translate("Eggs3", "Mixed", nullptr));

        labelRSFRLGCompatibility->setText(QCoreApplication::translate("Eggs3", "Compatibility", nullptr));
        comboBoxRSFRLGCompatibility->setItemText(0, QCoreApplication::translate("Eggs3", "The two don't seem to like each other", nullptr));
        comboBoxRSFRLGCompatibility->setItemText(1, QCoreApplication::translate("Eggs3", "The two seem to get along", nullptr));
        comboBoxRSFRLGCompatibility->setItemText(2, QCoreApplication::translate("Eggs3", "The two seem to get along very well", nullptr));

        pushButtonRSFRLGGenerate->setText(QCoreApplication::translate("Eggs3", "Generate", nullptr));
        groupBoxRSFRLGSettings->setTitle(QCoreApplication::translate("Eggs3", "Settings", nullptr));
        groupBoxRSFRLGFilters->setTitle(QCoreApplication::translate("Eggs3", "Filters", nullptr));
        tabEggSelection->setTabText(tabEggSelection->indexOf(tabRSFRLG), QCoreApplication::translate("Eggs3", "RS/FRLG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eggs3: public Ui_Eggs3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGGS3_H
