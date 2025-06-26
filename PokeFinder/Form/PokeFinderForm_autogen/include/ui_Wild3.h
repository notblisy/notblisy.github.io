/********************************************************************************
** Form generated from reading UI file 'Wild3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WILD3_H
#define UI_WILD3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Wild3
{
public:
    QGridLayout *gridLayout_7;
    QTabWidget *tabRNGSelector;
    QWidget *tabGenerator;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_3;
    QLabel *labelGeneratorMethod;
    ComboBox *comboBoxGeneratorMethod;
    QLabel *labelGeneratorLead;
    ComboMenu *comboMenuGeneratorLead;
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
    QGridLayout *gridLayout_9;
    QLabel *labelGeneratorEncounter;
    ComboBox *comboBoxGeneratorEncounter;
    QLabel *labelGeneratorLocation;
    ComboBox *comboBoxGeneratorLocation;
    QLabel *labelGeneratorPokemon;
    ComboBox *comboBoxGeneratorPokemon;
    QCheckBox *checkBoxGeneratorFeebasTile;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSpreadSearcher;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelSearcherMethod;
    ComboBox *comboBoxSearcherMethod;
    QLabel *labelSearcherLead;
    ComboMenu *comboMenuSearcherLead;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_10;
    QLabel *labelSearcherEncounter;
    ComboBox *comboBoxSearcherEncounter;
    QLabel *labelSearcherLocation;
    ComboBox *comboBoxSearcherLocation;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QCheckBox *checkBoxSearcherFeebasTile;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_2;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_4;
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
    QToolButton *closebutton;

    void setupUi(QWidget *Wild3)
    {
        if (Wild3->objectName().isEmpty())
            Wild3->setObjectName("Wild3");
        Wild3->resize(1200, 750);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../pokefinder.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Wild3->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(Wild3);
        gridLayout_7->setObjectName("gridLayout_7");
        tabRNGSelector = new QTabWidget(Wild3);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_5 = new QGridLayout(tabGenerator);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        gridLayout_3 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_3->setObjectName("gridLayout_3");
        labelGeneratorMethod = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMethod->setObjectName("labelGeneratorMethod");

        gridLayout_3->addWidget(labelGeneratorMethod, 0, 0, 1, 1);

        comboBoxGeneratorMethod = new ComboBox(groupBoxGeneratorRNGInfo);
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->setObjectName("comboBoxGeneratorMethod");

        gridLayout_3->addWidget(comboBoxGeneratorMethod, 0, 1, 1, 1);

        labelGeneratorLead = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorLead->setObjectName("labelGeneratorLead");

        gridLayout_3->addWidget(labelGeneratorLead, 1, 0, 1, 1);

        comboMenuGeneratorLead = new ComboMenu(groupBoxGeneratorRNGInfo);
        comboMenuGeneratorLead->setObjectName("comboMenuGeneratorLead");

        gridLayout_3->addWidget(comboMenuGeneratorLead, 1, 1, 1, 1);

        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_3->addWidget(labelGeneratorSeed, 2, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_3->addWidget(textBoxGeneratorSeed, 2, 1, 1, 1);

        labelGeneratorInitialAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");

        gridLayout_3->addWidget(labelGeneratorInitialAdvances, 3, 0, 1, 1);

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


        gridLayout_5->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        gridLayout_9 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_9->setObjectName("gridLayout_9");
        labelGeneratorEncounter = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorEncounter->setObjectName("labelGeneratorEncounter");

        gridLayout_9->addWidget(labelGeneratorEncounter, 0, 0, 1, 1);

        comboBoxGeneratorEncounter = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->addItem(QString());
        comboBoxGeneratorEncounter->setObjectName("comboBoxGeneratorEncounter");

        gridLayout_9->addWidget(comboBoxGeneratorEncounter, 0, 1, 1, 1);

        labelGeneratorLocation = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLocation->setObjectName("labelGeneratorLocation");

        gridLayout_9->addWidget(labelGeneratorLocation, 1, 0, 1, 1);

        comboBoxGeneratorLocation = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorLocation->setObjectName("comboBoxGeneratorLocation");

        gridLayout_9->addWidget(comboBoxGeneratorLocation, 1, 1, 1, 1);

        labelGeneratorPokemon = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPokemon->setObjectName("labelGeneratorPokemon");

        gridLayout_9->addWidget(labelGeneratorPokemon, 2, 0, 1, 1);

        comboBoxGeneratorPokemon = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorPokemon->setObjectName("comboBoxGeneratorPokemon");

        gridLayout_9->addWidget(comboBoxGeneratorPokemon, 2, 1, 1, 1);

        checkBoxGeneratorFeebasTile = new QCheckBox(groupBoxGeneratorSettings);
        checkBoxGeneratorFeebasTile->setObjectName("checkBoxGeneratorFeebasTile");

        gridLayout_9->addWidget(checkBoxGeneratorFeebasTile, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

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


        gridLayout_5->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_5->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabGenerator, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_8 = new QGridLayout(tabSpreadSearcher);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        gridLayout_6 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelSearcherMethod = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMethod->setObjectName("labelSearcherMethod");

        gridLayout_6->addWidget(labelSearcherMethod, 0, 0, 1, 1);

        comboBoxSearcherMethod = new ComboBox(groupBoxSearcherRNGInfo);
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->setObjectName("comboBoxSearcherMethod");

        gridLayout_6->addWidget(comboBoxSearcherMethod, 0, 1, 1, 1);

        labelSearcherLead = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherLead->setObjectName("labelSearcherLead");

        gridLayout_6->addWidget(labelSearcherLead, 1, 0, 1, 1);

        comboMenuSearcherLead = new ComboMenu(groupBoxSearcherRNGInfo);
        comboMenuSearcherLead->setObjectName("comboMenuSearcherLead");

        gridLayout_6->addWidget(comboMenuSearcherLead, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_6->addLayout(horizontalLayout, 2, 0, 1, 2);


        gridLayout_8->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabSpreadSearcher);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_10 = new QGridLayout(groupBox_2);
        gridLayout_10->setObjectName("gridLayout_10");
        labelSearcherEncounter = new QLabel(groupBox_2);
        labelSearcherEncounter->setObjectName("labelSearcherEncounter");

        gridLayout_10->addWidget(labelSearcherEncounter, 0, 0, 1, 1);

        comboBoxSearcherEncounter = new ComboBox(groupBox_2);
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->addItem(QString());
        comboBoxSearcherEncounter->setObjectName("comboBoxSearcherEncounter");

        gridLayout_10->addWidget(comboBoxSearcherEncounter, 0, 1, 1, 1);

        labelSearcherLocation = new QLabel(groupBox_2);
        labelSearcherLocation->setObjectName("labelSearcherLocation");

        gridLayout_10->addWidget(labelSearcherLocation, 1, 0, 1, 1);

        comboBoxSearcherLocation = new ComboBox(groupBox_2);
        comboBoxSearcherLocation->setObjectName("comboBoxSearcherLocation");

        gridLayout_10->addWidget(comboBoxSearcherLocation, 1, 1, 1, 1);

        labelSearcherPokemon = new QLabel(groupBox_2);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_10->addWidget(labelSearcherPokemon, 2, 0, 1, 1);

        comboBoxSearcherPokemon = new ComboBox(groupBox_2);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_10->addWidget(comboBoxSearcherPokemon, 2, 1, 1, 1);

        checkBoxSearcherFeebasTile = new QCheckBox(groupBox_2);
        checkBoxSearcherFeebasTile->setObjectName("checkBoxSearcherFeebasTile");

        gridLayout_10->addWidget(checkBoxSearcherFeebasTile, 3, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_2->setObjectName("gridLayout_2");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_2->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_8->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_8->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_8->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        gridLayout_7->addWidget(tabRNGSelector, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(Wild3);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_4 = new QGridLayout(groupBoxProfile);
        gridLayout_4->setObjectName("gridLayout_4");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_4->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_4->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_4->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_4->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");

        gridLayout_4->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_4->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");

        gridLayout_4->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_4->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_4->addWidget(labelProfileGameValue, 0, 6, 1, 1);


        gridLayout_7->addWidget(groupBoxProfile, 1, 0, 1, 1);

        closebutton = new QToolButton(Wild3);
        closebutton->setObjectName("closebutton");

        gridLayout_7->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, comboBoxGeneratorMethod);
        QWidget::setTabOrder(comboBoxGeneratorMethod, comboMenuGeneratorLead);
        QWidget::setTabOrder(comboMenuGeneratorLead, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorEncounter);
        QWidget::setTabOrder(comboBoxGeneratorEncounter, comboBoxGeneratorLocation);
        QWidget::setTabOrder(comboBoxGeneratorLocation, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, checkBoxGeneratorFeebasTile);
        QWidget::setTabOrder(checkBoxGeneratorFeebasTile, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, comboBoxSearcherMethod);
        QWidget::setTabOrder(comboBoxSearcherMethod, comboMenuSearcherLead);
        QWidget::setTabOrder(comboMenuSearcherLead, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherEncounter);
        QWidget::setTabOrder(comboBoxSearcherEncounter, comboBoxSearcherLocation);
        QWidget::setTabOrder(comboBoxSearcherLocation, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, checkBoxSearcherFeebasTile);
        QWidget::setTabOrder(checkBoxSearcherFeebasTile, tableViewSearcher);

        retranslateUi(Wild3);

        QMetaObject::connectSlotsByName(Wild3);
    } // setupUi

    void retranslateUi(QWidget *Wild3)
    {
        Wild3->setWindowTitle(QCoreApplication::translate("Wild3", "Gen 3 Wild", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Wild3", "RNG Info", nullptr));
        labelGeneratorMethod->setText(QCoreApplication::translate("Wild3", "Method", nullptr));
        comboBoxGeneratorMethod->setItemText(0, QCoreApplication::translate("Wild3", "Wild 1", nullptr));
        comboBoxGeneratorMethod->setItemText(1, QCoreApplication::translate("Wild3", "Wild 2", nullptr));
        comboBoxGeneratorMethod->setItemText(2, QCoreApplication::translate("Wild3", "Wild 4", nullptr));

        labelGeneratorLead->setText(QCoreApplication::translate("Wild3", "Lead", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Wild3", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Wild3", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Wild3", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Wild3", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Wild3", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Wild3", "Settings", nullptr));
        labelGeneratorEncounter->setText(QCoreApplication::translate("Wild3", "Encounter", nullptr));
        comboBoxGeneratorEncounter->setItemText(0, QCoreApplication::translate("Wild3", "Grass", nullptr));
        comboBoxGeneratorEncounter->setItemText(1, QCoreApplication::translate("Wild3", "Rock Smash", nullptr));
        comboBoxGeneratorEncounter->setItemText(2, QCoreApplication::translate("Wild3", "Surfing", nullptr));
        comboBoxGeneratorEncounter->setItemText(3, QCoreApplication::translate("Wild3", "Old Rod", nullptr));
        comboBoxGeneratorEncounter->setItemText(4, QCoreApplication::translate("Wild3", "Good Rod", nullptr));
        comboBoxGeneratorEncounter->setItemText(5, QCoreApplication::translate("Wild3", "Super Rod", nullptr));

        labelGeneratorLocation->setText(QCoreApplication::translate("Wild3", "Location", nullptr));
        labelGeneratorPokemon->setText(QCoreApplication::translate("Wild3", "Pok\303\251mon", nullptr));
        checkBoxGeneratorFeebasTile->setText(QCoreApplication::translate("Wild3", "Feebas Tile", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Wild3", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Wild3", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Wild3", "RNG Info", nullptr));
        labelSearcherMethod->setText(QCoreApplication::translate("Wild3", "Method", nullptr));
        comboBoxSearcherMethod->setItemText(0, QCoreApplication::translate("Wild3", "Wild 1", nullptr));
        comboBoxSearcherMethod->setItemText(1, QCoreApplication::translate("Wild3", "Wild 2", nullptr));
        comboBoxSearcherMethod->setItemText(2, QCoreApplication::translate("Wild3", "Wild 4", nullptr));

        labelSearcherLead->setText(QCoreApplication::translate("Wild3", "Lead", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Wild3", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Wild3", "Cancel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Wild3", "Settings", nullptr));
        labelSearcherEncounter->setText(QCoreApplication::translate("Wild3", "Encounter", nullptr));
        comboBoxSearcherEncounter->setItemText(0, QCoreApplication::translate("Wild3", "Grass", nullptr));
        comboBoxSearcherEncounter->setItemText(1, QCoreApplication::translate("Wild3", "Rock Smash", nullptr));
        comboBoxSearcherEncounter->setItemText(2, QCoreApplication::translate("Wild3", "Surfing", nullptr));
        comboBoxSearcherEncounter->setItemText(3, QCoreApplication::translate("Wild3", "Old Rod", nullptr));
        comboBoxSearcherEncounter->setItemText(4, QCoreApplication::translate("Wild3", "Good Rod", nullptr));
        comboBoxSearcherEncounter->setItemText(5, QCoreApplication::translate("Wild3", "Super Rod", nullptr));

        labelSearcherLocation->setText(QCoreApplication::translate("Wild3", "Location", nullptr));
        labelSearcherPokemon->setText(QCoreApplication::translate("Wild3", "Pok\303\251mon", nullptr));
        checkBoxSearcherFeebasTile->setText(QCoreApplication::translate("Wild3", "Feebas Tile", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Wild3", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("Wild3", "Searcher", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Wild3", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Wild3", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Wild3", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Wild3", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Wild3", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Wild3", "Game", nullptr));
        closebutton->setText(QCoreApplication::translate("Wild3", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wild3: public Ui_Wild3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WILD3_H
