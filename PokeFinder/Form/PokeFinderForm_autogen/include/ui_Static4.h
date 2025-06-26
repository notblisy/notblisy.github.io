/********************************************************************************
** Form generated from reading UI file 'Static4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIC4_H
#define UI_STATIC4_H

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
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Static4
{
public:
    QGridLayout *gridLayout_7;
    QTabWidget *tabRNGSelector;
    QWidget *tabStatic;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_6;
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
    QGridLayout *gridLayout_8;
    QLabel *labelGeneratorCategory;
    ComboBox *comboBoxGeneratorCategory;
    QLabel *labelGeneratorPokemon;
    ComboBox *comboBoxGeneratorPokemon;
    QFrame *line_2;
    QLabel *labelGeneratorLevel;
    QSpinBox *spinBoxGeneratorLevel;
    QLabel *labelGeneratorShiny;
    ComboBox *comboBoxGeneratorShiny;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSpreadSearcher;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherLead;
    ComboMenu *comboMenuSearcherLead;
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
    QGridLayout *gridLayout_11;
    QLabel *labelSearcherCategory;
    ComboBox *comboBoxSearcherCategory;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QFrame *line_3;
    QLabel *labelSearcherLevel;
    QSpinBox *spinBoxSearcherLevel;
    QLabel *labelSearcherShiny;
    ComboBox *comboBoxSearcherShiny;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
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
    QFrame *line;
    QLabel *labelProfileGame;
    QLabel *labelProfileGameValue;
    QToolButton *closebutton;

    void setupUi(QWidget *Static4)
    {
        if (Static4->objectName().isEmpty())
            Static4->setObjectName("Static4");
        Static4->resize(1200, 700);
        gridLayout_7 = new QGridLayout(Static4);
        gridLayout_7->setObjectName("gridLayout_7");
        tabRNGSelector = new QTabWidget(Static4);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabStatic = new QWidget();
        tabStatic->setObjectName("tabStatic");
        gridLayout_10 = new QGridLayout(tabStatic);
        gridLayout_10->setObjectName("gridLayout_10");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabStatic);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
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

        labelGeneratorInitialAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");

        gridLayout_6->addWidget(labelGeneratorInitialAdvances, 2, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxGeneratorInitialAdvances, 2, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");

        gridLayout_6->addWidget(labelGeneratorMaxAdvances, 3, 0, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_6->addWidget(textBoxGeneratorMaxAdvances, 3, 1, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_6->addWidget(labelGeneratorOffset, 4, 0, 1, 1);

        textBoxGeneratorOffset = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");

        gridLayout_6->addWidget(textBoxGeneratorOffset, 4, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 5, 0, 1, 2);


        gridLayout_10->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabStatic);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        gridLayout_8 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_8->setObjectName("gridLayout_8");
        labelGeneratorCategory = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorCategory->setObjectName("labelGeneratorCategory");

        gridLayout_8->addWidget(labelGeneratorCategory, 0, 0, 1, 1);

        comboBoxGeneratorCategory = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->setObjectName("comboBoxGeneratorCategory");

        gridLayout_8->addWidget(comboBoxGeneratorCategory, 0, 1, 1, 1);

        labelGeneratorPokemon = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorPokemon->setObjectName("labelGeneratorPokemon");

        gridLayout_8->addWidget(labelGeneratorPokemon, 1, 0, 1, 1);

        comboBoxGeneratorPokemon = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorPokemon->setObjectName("comboBoxGeneratorPokemon");

        gridLayout_8->addWidget(comboBoxGeneratorPokemon, 1, 1, 1, 1);

        line_2 = new QFrame(groupBoxGeneratorSettings);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_8->addWidget(line_2, 2, 0, 1, 2);

        labelGeneratorLevel = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLevel->setObjectName("labelGeneratorLevel");

        gridLayout_8->addWidget(labelGeneratorLevel, 3, 0, 1, 1);

        spinBoxGeneratorLevel = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorLevel->setObjectName("spinBoxGeneratorLevel");
        spinBoxGeneratorLevel->setEnabled(false);

        gridLayout_8->addWidget(spinBoxGeneratorLevel, 3, 1, 1, 1);

        labelGeneratorShiny = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorShiny->setObjectName("labelGeneratorShiny");

        gridLayout_8->addWidget(labelGeneratorShiny, 4, 0, 1, 1);

        comboBoxGeneratorShiny = new ComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorShiny->addItem(QString());
        comboBoxGeneratorShiny->addItem(QString());
        comboBoxGeneratorShiny->setObjectName("comboBoxGeneratorShiny");
        comboBoxGeneratorShiny->setEnabled(false);

        gridLayout_8->addWidget(comboBoxGeneratorShiny, 4, 1, 1, 1);


        gridLayout_10->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabStatic);
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


        gridLayout_10->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabStatic);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_10->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabStatic, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_9 = new QGridLayout(tabSpreadSearcher);
        gridLayout_9->setObjectName("gridLayout_9");
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

        labelSearcherMinDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinDelay->setObjectName("labelSearcherMinDelay");

        gridLayout_2->addWidget(labelSearcherMinDelay, 1, 0, 1, 1);

        textBoxSearcherMinDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinDelay->setObjectName("textBoxSearcherMinDelay");
        textBoxSearcherMinDelay->setText(QString::fromUtf8("600"));

        gridLayout_2->addWidget(textBoxSearcherMinDelay, 1, 1, 1, 1);

        labelSearcherMaxDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxDelay->setObjectName("labelSearcherMaxDelay");

        gridLayout_2->addWidget(labelSearcherMaxDelay, 1, 2, 1, 1);

        textBoxSearcherMaxDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxDelay->setObjectName("textBoxSearcherMaxDelay");
        textBoxSearcherMaxDelay->setText(QString::fromUtf8("2000"));

        gridLayout_2->addWidget(textBoxSearcherMaxDelay, 1, 3, 1, 1);

        labelSearcherMinAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinAdvance->setObjectName("labelSearcherMinAdvance");

        gridLayout_2->addWidget(labelSearcherMinAdvance, 2, 0, 1, 1);

        textBoxSearcherMinAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinAdvance->setObjectName("textBoxSearcherMinAdvance");
        textBoxSearcherMinAdvance->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(textBoxSearcherMinAdvance, 2, 1, 1, 1);

        labelSearcherMaxAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvance->setObjectName("labelSearcherMaxAdvance");

        gridLayout_2->addWidget(labelSearcherMaxAdvance, 2, 2, 1, 1);

        textBoxSearcherMaxAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvance->setObjectName("textBoxSearcherMaxAdvance");
        textBoxSearcherMaxAdvance->setText(QString::fromUtf8("1000"));

        gridLayout_2->addWidget(textBoxSearcherMaxAdvance, 2, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 4);


        gridLayout_9->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        gridLayout_11 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_11->setObjectName("gridLayout_11");
        labelSearcherCategory = new QLabel(groupBoxSearcherSettings);
        labelSearcherCategory->setObjectName("labelSearcherCategory");

        gridLayout_11->addWidget(labelSearcherCategory, 0, 0, 1, 1);

        comboBoxSearcherCategory = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->setObjectName("comboBoxSearcherCategory");

        gridLayout_11->addWidget(comboBoxSearcherCategory, 0, 1, 1, 1);

        labelSearcherPokemon = new QLabel(groupBoxSearcherSettings);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_11->addWidget(labelSearcherPokemon, 1, 0, 1, 1);

        comboBoxSearcherPokemon = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_11->addWidget(comboBoxSearcherPokemon, 1, 1, 1, 1);

        line_3 = new QFrame(groupBoxSearcherSettings);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_11->addWidget(line_3, 2, 0, 1, 2);

        labelSearcherLevel = new QLabel(groupBoxSearcherSettings);
        labelSearcherLevel->setObjectName("labelSearcherLevel");

        gridLayout_11->addWidget(labelSearcherLevel, 3, 0, 1, 1);

        spinBoxSearcherLevel = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherLevel->setObjectName("spinBoxSearcherLevel");
        spinBoxSearcherLevel->setEnabled(false);

        gridLayout_11->addWidget(spinBoxSearcherLevel, 3, 1, 1, 1);

        labelSearcherShiny = new QLabel(groupBoxSearcherSettings);
        labelSearcherShiny->setObjectName("labelSearcherShiny");

        gridLayout_11->addWidget(labelSearcherShiny, 4, 0, 1, 1);

        comboBoxSearcherShiny = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherShiny->addItem(QString());
        comboBoxSearcherShiny->addItem(QString());
        comboBoxSearcherShiny->setObjectName("comboBoxSearcherShiny");
        comboBoxSearcherShiny->setEnabled(false);

        gridLayout_11->addWidget(comboBoxSearcherShiny, 4, 1, 1, 1);


        gridLayout_9->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_4->setObjectName("gridLayout_4");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_4->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_9->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_9->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_9->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        gridLayout_7->addWidget(tabRNGSelector, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(Static4);
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

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_5->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_5->addWidget(labelProfileGameValue, 0, 6, 1, 1);


        gridLayout_7->addWidget(groupBoxProfile, 1, 0, 1, 1);

        closebutton = new QToolButton(Static4);
        closebutton->setObjectName("closebutton");

        gridLayout_7->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, comboMenuGeneratorLead);
        QWidget::setTabOrder(comboMenuGeneratorLead, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorCategory);
        QWidget::setTabOrder(comboBoxGeneratorCategory, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, spinBoxGeneratorLevel);
        QWidget::setTabOrder(spinBoxGeneratorLevel, comboBoxGeneratorShiny);
        QWidget::setTabOrder(comboBoxGeneratorShiny, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, comboMenuSearcherLead);
        QWidget::setTabOrder(comboMenuSearcherLead, textBoxSearcherMinDelay);
        QWidget::setTabOrder(textBoxSearcherMinDelay, textBoxSearcherMaxDelay);
        QWidget::setTabOrder(textBoxSearcherMaxDelay, textBoxSearcherMinAdvance);
        QWidget::setTabOrder(textBoxSearcherMinAdvance, textBoxSearcherMaxAdvance);
        QWidget::setTabOrder(textBoxSearcherMaxAdvance, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherCategory);
        QWidget::setTabOrder(comboBoxSearcherCategory, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, comboBoxSearcherShiny);
        QWidget::setTabOrder(comboBoxSearcherShiny, tableViewSearcher);

        retranslateUi(Static4);

        QMetaObject::connectSlotsByName(Static4);
    } // setupUi

    void retranslateUi(QWidget *Static4)
    {
        Static4->setWindowTitle(QCoreApplication::translate("Static4", "Gen 4 Static", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Static4", "RNG Info", nullptr));
        labelGeneratorLead->setText(QCoreApplication::translate("Static4", "Lead", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Static4", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Static4", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Static4", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Static4", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Static4", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Static4", "Settings", nullptr));
        labelGeneratorCategory->setText(QCoreApplication::translate("Static4", "Category", nullptr));
        comboBoxGeneratorCategory->setItemText(0, QCoreApplication::translate("Static4", "Starters", nullptr));
        comboBoxGeneratorCategory->setItemText(1, QCoreApplication::translate("Static4", "Fossils", nullptr));
        comboBoxGeneratorCategory->setItemText(2, QCoreApplication::translate("Static4", "Gifts", nullptr));
        comboBoxGeneratorCategory->setItemText(3, QCoreApplication::translate("Static4", "Game Corner", nullptr));
        comboBoxGeneratorCategory->setItemText(4, QCoreApplication::translate("Static4", "Stationary", nullptr));
        comboBoxGeneratorCategory->setItemText(5, QCoreApplication::translate("Static4", "Legends", nullptr));
        comboBoxGeneratorCategory->setItemText(6, QCoreApplication::translate("Static4", "Events", nullptr));
        comboBoxGeneratorCategory->setItemText(7, QCoreApplication::translate("Static4", "Roamers", nullptr));

        labelGeneratorPokemon->setText(QCoreApplication::translate("Static4", "Pokemon", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("Static4", "Level", nullptr));
        labelGeneratorShiny->setText(QCoreApplication::translate("Static4", "Shiny", nullptr));
        comboBoxGeneratorShiny->setItemText(0, QCoreApplication::translate("Static4", "Never", nullptr));
        comboBoxGeneratorShiny->setItemText(1, QCoreApplication::translate("Static4", "Random", nullptr));

        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Static4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabStatic), QCoreApplication::translate("Static4", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Static4", "RNG Info", nullptr));
        labelSearcherLead->setText(QCoreApplication::translate("Static4", "Lead", nullptr));
        labelSearcherMinDelay->setText(QCoreApplication::translate("Static4", "Min Delay", nullptr));
        labelSearcherMaxDelay->setText(QCoreApplication::translate("Static4", "Max Delay", nullptr));
        labelSearcherMinAdvance->setText(QCoreApplication::translate("Static4", "Min Advance", nullptr));
        labelSearcherMaxAdvance->setText(QCoreApplication::translate("Static4", "Max Advance", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Static4", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Static4", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Static4", "Settings", nullptr));
        labelSearcherCategory->setText(QCoreApplication::translate("Static4", "Category", nullptr));
        comboBoxSearcherCategory->setItemText(0, QCoreApplication::translate("Static4", "Starters", nullptr));
        comboBoxSearcherCategory->setItemText(1, QCoreApplication::translate("Static4", "Fossils", nullptr));
        comboBoxSearcherCategory->setItemText(2, QCoreApplication::translate("Static4", "Gifts", nullptr));
        comboBoxSearcherCategory->setItemText(3, QCoreApplication::translate("Static4", "Game Corner", nullptr));
        comboBoxSearcherCategory->setItemText(4, QCoreApplication::translate("Static4", "Stationary", nullptr));
        comboBoxSearcherCategory->setItemText(5, QCoreApplication::translate("Static4", "Legends", nullptr));
        comboBoxSearcherCategory->setItemText(6, QCoreApplication::translate("Static4", "Events", nullptr));
        comboBoxSearcherCategory->setItemText(7, QCoreApplication::translate("Static4", "Roamers", nullptr));

        labelSearcherPokemon->setText(QCoreApplication::translate("Static4", "Pokemon", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("Static4", "Level", nullptr));
        labelSearcherShiny->setText(QCoreApplication::translate("Static4", "Shiny", nullptr));
        comboBoxSearcherShiny->setItemText(0, QCoreApplication::translate("Static4", "Never", nullptr));
        comboBoxSearcherShiny->setItemText(1, QCoreApplication::translate("Static4", "Random", nullptr));

        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Static4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("Static4", "Searcher", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Static4", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Static4", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Static4", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Static4", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Static4", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Static4", "Game", nullptr));
        closebutton->setText(QCoreApplication::translate("Static4", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Static4: public Ui_Static4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIC4_H
