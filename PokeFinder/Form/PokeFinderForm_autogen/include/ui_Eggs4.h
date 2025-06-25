/********************************************************************************
** Form generated from reading UI file 'Eggs4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGGS4_H
#define UI_EGGS4_H

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
#include "Form/Controls/EggSettings.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Eggs4
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_6;
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
    QWidget *tabGenerator;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_9;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeedHeld;
    TextBox *textBoxGeneratorSeedPickup;
    QLabel *labelGeneratorHeldAdvance;
    TextBox *textBoxGeneratorInitialAdvancesHeld;
    TextBox *textBoxGeneratorMaxAdvancesHeld;
    QLabel *labelGeneratorPickupAdvance;
    TextBox *textBoxGeneratorInitialAdvancesPickup;
    TextBox *textBoxGeneratorMaxAdvancesPickup;
    QLabel *labelGeneratorOffset;
    TextBox *textBoxGeneratorOffsetHeld;
    TextBox *textBoxGeneratorOffsetPickup;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxGeneratorSettings;
    QGridLayout *gridLayout_5;
    EggSettings *eggSettingsGenerator;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout_2;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSearcher;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_7;
    QLabel *labelSearcherSearcherHeldAdvances;
    TextBox *textBoxSearcherInitialAdvancesHeld;
    TextBox *textBoxSearcherMaxAdvancesHeld;
    QLabel *labelSearcherPickupAdvances;
    TextBox *textBoxSearcherInitialAdvancesPickup;
    TextBox *textBoxSearcherMaxAdvancesPickup;
    QLabel *labelSearcherDelay;
    TextBox *textBoxSearcherMinDelay;
    TextBox *textBoxSearcherMaxDelay;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    EggSettings *eggSettingsSearcher;
    QGroupBox *groupBoxGeneratorFilters_2;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;

    void setupUi(QWidget *Eggs4)
    {
        if (Eggs4->objectName().isEmpty())
            Eggs4->setObjectName("Eggs4");
        Eggs4->resize(1200, 700);
        gridLayout_3 = new QGridLayout(Eggs4);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBoxProfile = new QGroupBox(Eggs4);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_6 = new QGridLayout(groupBoxProfile);
        gridLayout_6->setObjectName("gridLayout_6");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_6->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_6->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_6->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_6->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");
        labelProfileTIDValue->setText(QString::fromUtf8("12345"));

        gridLayout_6->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_6->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");
        labelProfileSIDValue->setText(QString::fromUtf8("54321"));

        gridLayout_6->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_6->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_6->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_6->addWidget(labelProfileGameValue, 0, 6, 1, 1);


        gridLayout_3->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabEggSelection = new QTabWidget(Eggs4);
        tabEggSelection->setObjectName("tabEggSelection");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_8 = new QGridLayout(tabGenerator);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGeneratorRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_9 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_9->setObjectName("gridLayout_9");
        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_9->addWidget(labelGeneratorSeed, 0, 0, 1, 1);

        textBoxGeneratorSeedHeld = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeedHeld->setObjectName("textBoxGeneratorSeedHeld");
        textBoxGeneratorSeedHeld->setText(QString::fromUtf8(""));

        gridLayout_9->addWidget(textBoxGeneratorSeedHeld, 0, 1, 1, 1);

        textBoxGeneratorSeedPickup = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeedPickup->setObjectName("textBoxGeneratorSeedPickup");
        textBoxGeneratorSeedPickup->setText(QString::fromUtf8(""));

        gridLayout_9->addWidget(textBoxGeneratorSeedPickup, 0, 2, 1, 1);

        labelGeneratorHeldAdvance = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorHeldAdvance->setObjectName("labelGeneratorHeldAdvance");

        gridLayout_9->addWidget(labelGeneratorHeldAdvance, 1, 0, 1, 1);

        textBoxGeneratorInitialAdvancesHeld = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvancesHeld->setObjectName("textBoxGeneratorInitialAdvancesHeld");
        textBoxGeneratorInitialAdvancesHeld->setText(QString::fromUtf8("0"));

        gridLayout_9->addWidget(textBoxGeneratorInitialAdvancesHeld, 1, 1, 1, 1);

        textBoxGeneratorMaxAdvancesHeld = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvancesHeld->setObjectName("textBoxGeneratorMaxAdvancesHeld");
        textBoxGeneratorMaxAdvancesHeld->setText(QString::fromUtf8("30"));

        gridLayout_9->addWidget(textBoxGeneratorMaxAdvancesHeld, 1, 2, 1, 1);

        labelGeneratorPickupAdvance = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorPickupAdvance->setObjectName("labelGeneratorPickupAdvance");

        gridLayout_9->addWidget(labelGeneratorPickupAdvance, 2, 0, 1, 1);

        textBoxGeneratorInitialAdvancesPickup = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvancesPickup->setObjectName("textBoxGeneratorInitialAdvancesPickup");
        textBoxGeneratorInitialAdvancesPickup->setText(QString::fromUtf8("0"));

        gridLayout_9->addWidget(textBoxGeneratorInitialAdvancesPickup, 2, 1, 1, 1);

        textBoxGeneratorMaxAdvancesPickup = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvancesPickup->setObjectName("textBoxGeneratorMaxAdvancesPickup");
        textBoxGeneratorMaxAdvancesPickup->setText(QString::fromUtf8("100000"));

        gridLayout_9->addWidget(textBoxGeneratorMaxAdvancesPickup, 2, 2, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_9->addWidget(labelGeneratorOffset, 3, 0, 1, 1);

        textBoxGeneratorOffsetHeld = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffsetHeld->setObjectName("textBoxGeneratorOffsetHeld");

        gridLayout_9->addWidget(textBoxGeneratorOffsetHeld, 3, 1, 1, 1);

        textBoxGeneratorOffsetPickup = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffsetPickup->setObjectName("textBoxGeneratorOffsetPickup");

        gridLayout_9->addWidget(textBoxGeneratorOffsetPickup, 3, 2, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_9->addWidget(pushButtonGenerate, 4, 0, 1, 3);


        gridLayout_8->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxGeneratorSettings->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorSettings->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_5->setObjectName("gridLayout_5");
        eggSettingsGenerator = new EggSettings(groupBoxGeneratorSettings);
        eggSettingsGenerator->setObjectName("eggSettingsGenerator");

        gridLayout_5->addWidget(eggSettingsGenerator, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabGenerator);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        sizePolicy1.setHeightForWidth(groupBoxGeneratorFilters->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBoxGeneratorFilters);
        gridLayout_2->setObjectName("gridLayout_2");
        filterGenerator = new Filter(groupBoxGeneratorFilters);
        filterGenerator->setObjectName("filterGenerator");

        gridLayout_2->addWidget(filterGenerator, 0, 0, 3, 2);


        gridLayout_8->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_8->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabEggSelection->addTab(tabGenerator, QString());
        tabSearcher = new QWidget();
        tabSearcher->setObjectName("tabSearcher");
        gridLayout_10 = new QGridLayout(tabSearcher);
        gridLayout_10->setObjectName("gridLayout_10");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        sizePolicy.setHeightForWidth(groupBoxSearcherRNGInfo->sizePolicy().hasHeightForWidth());
        groupBoxSearcherRNGInfo->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_7->setObjectName("gridLayout_7");
        labelSearcherSearcherHeldAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherSearcherHeldAdvances->setObjectName("labelSearcherSearcherHeldAdvances");

        gridLayout_7->addWidget(labelSearcherSearcherHeldAdvances, 0, 0, 1, 1);

        textBoxSearcherInitialAdvancesHeld = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialAdvancesHeld->setObjectName("textBoxSearcherInitialAdvancesHeld");
        textBoxSearcherInitialAdvancesHeld->setText(QString::fromUtf8("0"));
        textBoxSearcherInitialAdvancesHeld->setMaxLength(10);

        gridLayout_7->addWidget(textBoxSearcherInitialAdvancesHeld, 0, 1, 1, 1);

        textBoxSearcherMaxAdvancesHeld = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvancesHeld->setObjectName("textBoxSearcherMaxAdvancesHeld");
        textBoxSearcherMaxAdvancesHeld->setText(QString::fromUtf8("30"));
        textBoxSearcherMaxAdvancesHeld->setMaxLength(10);

        gridLayout_7->addWidget(textBoxSearcherMaxAdvancesHeld, 0, 2, 1, 1);

        labelSearcherPickupAdvances = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherPickupAdvances->setObjectName("labelSearcherPickupAdvances");

        gridLayout_7->addWidget(labelSearcherPickupAdvances, 1, 0, 1, 1);

        textBoxSearcherInitialAdvancesPickup = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherInitialAdvancesPickup->setObjectName("textBoxSearcherInitialAdvancesPickup");
        textBoxSearcherInitialAdvancesPickup->setText(QString::fromUtf8("0"));

        gridLayout_7->addWidget(textBoxSearcherInitialAdvancesPickup, 1, 1, 1, 1);

        textBoxSearcherMaxAdvancesPickup = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvancesPickup->setObjectName("textBoxSearcherMaxAdvancesPickup");
        textBoxSearcherMaxAdvancesPickup->setText(QString::fromUtf8("100000"));

        gridLayout_7->addWidget(textBoxSearcherMaxAdvancesPickup, 1, 2, 1, 1);

        labelSearcherDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherDelay->setObjectName("labelSearcherDelay");

        gridLayout_7->addWidget(labelSearcherDelay, 2, 0, 1, 1);

        textBoxSearcherMinDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinDelay->setObjectName("textBoxSearcherMinDelay");
        textBoxSearcherMinDelay->setText(QString::fromUtf8("600"));

        gridLayout_7->addWidget(textBoxSearcherMinDelay, 2, 1, 1, 1);

        textBoxSearcherMaxDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxDelay->setObjectName("textBoxSearcherMaxDelay");
        textBoxSearcherMaxDelay->setText(QString::fromUtf8("2000"));
        textBoxSearcherMaxDelay->setMaxLength(10);

        gridLayout_7->addWidget(textBoxSearcherMaxDelay, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_7->addLayout(horizontalLayout, 3, 0, 1, 3);


        gridLayout_10->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBox = new QGroupBox(tabSearcher);
        groupBox->setObjectName("groupBox");
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        eggSettingsSearcher = new EggSettings(groupBox);
        eggSettingsSearcher->setObjectName("eggSettingsSearcher");

        gridLayout->addWidget(eggSettingsSearcher, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox, 0, 1, 1, 1);

        groupBoxGeneratorFilters_2 = new QGroupBox(tabSearcher);
        groupBoxGeneratorFilters_2->setObjectName("groupBoxGeneratorFilters_2");
        sizePolicy1.setHeightForWidth(groupBoxGeneratorFilters_2->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters_2->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBoxGeneratorFilters_2);
        gridLayout_4->setObjectName("gridLayout_4");
        filterSearcher = new Filter(groupBoxGeneratorFilters_2);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_4->addWidget(filterSearcher, 0, 0, 3, 2);


        gridLayout_10->addWidget(groupBoxGeneratorFilters_2, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_10->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_10->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabEggSelection->addTab(tabSearcher, QString());

        gridLayout_3->addWidget(tabEggSelection, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabEggSelection);
        QWidget::setTabOrder(tabEggSelection, textBoxGeneratorSeedHeld);
        QWidget::setTabOrder(textBoxGeneratorSeedHeld, textBoxGeneratorSeedPickup);
        QWidget::setTabOrder(textBoxGeneratorSeedPickup, textBoxGeneratorInitialAdvancesHeld);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvancesHeld, textBoxGeneratorMaxAdvancesHeld);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvancesHeld, textBoxGeneratorInitialAdvancesPickup);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvancesPickup, textBoxGeneratorMaxAdvancesPickup);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvancesPickup, textBoxGeneratorOffsetHeld);
        QWidget::setTabOrder(textBoxGeneratorOffsetHeld, textBoxGeneratorOffsetPickup);
        QWidget::setTabOrder(textBoxGeneratorOffsetPickup, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, textBoxSearcherInitialAdvancesHeld);
        QWidget::setTabOrder(textBoxSearcherInitialAdvancesHeld, textBoxSearcherMaxAdvancesHeld);
        QWidget::setTabOrder(textBoxSearcherMaxAdvancesHeld, textBoxSearcherInitialAdvancesPickup);
        QWidget::setTabOrder(textBoxSearcherInitialAdvancesPickup, textBoxSearcherMaxAdvancesPickup);
        QWidget::setTabOrder(textBoxSearcherMaxAdvancesPickup, textBoxSearcherMinDelay);
        QWidget::setTabOrder(textBoxSearcherMinDelay, textBoxSearcherMaxDelay);
        QWidget::setTabOrder(textBoxSearcherMaxDelay, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, tableViewSearcher);

        retranslateUi(Eggs4);

        QMetaObject::connectSlotsByName(Eggs4);
    } // setupUi

    void retranslateUi(QWidget *Eggs4)
    {
        Eggs4->setWindowTitle(QCoreApplication::translate("Eggs4", "Gen 4 Eggs", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Eggs4", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Eggs4", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Eggs4", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Eggs4", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Eggs4", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Eggs4", "Game", nullptr));
        labelProfileGameValue->setText(QCoreApplication::translate("Eggs4", "Diamond", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Eggs4", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Eggs4", "Seed (Held / Pickup)", nullptr));
        labelGeneratorHeldAdvance->setText(QCoreApplication::translate("Eggs4", "Held Advances", nullptr));
        labelGeneratorPickupAdvance->setText(QCoreApplication::translate("Eggs4", "Pickup Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Eggs4", "Offset (Held / Pickup)", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Eggs4", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Eggs4", "Settings", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Eggs4", "Filters", nullptr));
        tabEggSelection->setTabText(tabEggSelection->indexOf(tabGenerator), QCoreApplication::translate("Eggs4", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Eggs4", "RNG Info", nullptr));
        labelSearcherSearcherHeldAdvances->setText(QCoreApplication::translate("Eggs4", "Held Advances", nullptr));
        labelSearcherPickupAdvances->setText(QCoreApplication::translate("Eggs4", "Pickup Advances", nullptr));
        labelSearcherDelay->setText(QCoreApplication::translate("Eggs4", "Delay", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Eggs4", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Eggs4", "Cancel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Eggs4", "Settings", nullptr));
        groupBoxGeneratorFilters_2->setTitle(QCoreApplication::translate("Eggs4", "Filters", nullptr));
        tabEggSelection->setTabText(tabEggSelection->indexOf(tabSearcher), QCoreApplication::translate("Eggs4", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eggs4: public Ui_Eggs4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGGS4_H
