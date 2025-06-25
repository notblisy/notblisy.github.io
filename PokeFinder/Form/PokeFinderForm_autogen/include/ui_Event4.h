/********************************************************************************
** Form generated from reading UI file 'Event4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT4_H
#define UI_EVENT4_H

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
#include <QtWidgets/QWidget>
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Event4
{
public:
    QGridLayout *gridLayout_5;
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
    QTabWidget *tabRNGSelector;
    QWidget *tabGenerator;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_7;
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
    QComboBox *comboBoxGeneratorSpecies;
    QLabel *labelGeneratorLevel;
    QSpinBox *spinBoxGeneratorLevel;
    QLabel *labelGeneratorNature;
    QComboBox *comboBoxGeneratorNature;
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSearcher;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
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
    QGridLayout *gridLayout_9;
    QLabel *labelSearcherSpecies;
    QComboBox *comboBoxSearcherSpecies;
    QLabel *labelSearcherLevel;
    QSpinBox *spinBoxSearcherLevel;
    QLabel *labelSearcherNature;
    QComboBox *comboBoxSearcherNature;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_4;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;

    void setupUi(QWidget *Event4)
    {
        if (Event4->objectName().isEmpty())
            Event4->setObjectName("Event4");
        Event4->resize(1200, 700);
        gridLayout_5 = new QGridLayout(Event4);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxProfile = new QGroupBox(Event4);
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


        gridLayout_5->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Event4);
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
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_7->addWidget(textBoxGeneratorMaxAdvances, 2, 1, 1, 1);

        labelGeneratorOffset = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");

        gridLayout_7->addWidget(labelGeneratorOffset, 3, 0, 1, 1);

        textBoxGeneratorOffset = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");

        gridLayout_7->addWidget(textBoxGeneratorOffset, 3, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_7->addWidget(pushButtonGenerate, 4, 0, 1, 2);


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

        comboBoxGeneratorSpecies = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorSpecies->setObjectName("comboBoxGeneratorSpecies");

        gridLayout_8->addWidget(comboBoxGeneratorSpecies, 0, 1, 1, 1);

        labelGeneratorLevel = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorLevel->setObjectName("labelGeneratorLevel");

        gridLayout_8->addWidget(labelGeneratorLevel, 1, 0, 1, 1);

        spinBoxGeneratorLevel = new QSpinBox(groupBoxGeneratorSettings);
        spinBoxGeneratorLevel->setObjectName("spinBoxGeneratorLevel");
        spinBoxGeneratorLevel->setMinimum(1);
        spinBoxGeneratorLevel->setMaximum(100);

        gridLayout_8->addWidget(spinBoxGeneratorLevel, 1, 1, 1, 1);

        labelGeneratorNature = new QLabel(groupBoxGeneratorSettings);
        labelGeneratorNature->setObjectName("labelGeneratorNature");

        gridLayout_8->addWidget(labelGeneratorNature, 2, 0, 1, 1);

        comboBoxGeneratorNature = new QComboBox(groupBoxGeneratorSettings);
        comboBoxGeneratorNature->setObjectName("comboBoxGeneratorNature");

        gridLayout_8->addWidget(comboBoxGeneratorNature, 2, 1, 1, 1);


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
        labelSearcherMinDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinDelay->setObjectName("labelSearcherMinDelay");

        gridLayout_2->addWidget(labelSearcherMinDelay, 0, 0, 1, 1);

        textBoxSearcherMinDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinDelay->setObjectName("textBoxSearcherMinDelay");
        textBoxSearcherMinDelay->setText(QString::fromUtf8("600"));

        gridLayout_2->addWidget(textBoxSearcherMinDelay, 0, 1, 1, 1);

        labelSearcherMaxDelay = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxDelay->setObjectName("labelSearcherMaxDelay");

        gridLayout_2->addWidget(labelSearcherMaxDelay, 0, 2, 1, 1);

        textBoxSearcherMaxDelay = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxDelay->setObjectName("textBoxSearcherMaxDelay");
        textBoxSearcherMaxDelay->setText(QString::fromUtf8("2000"));

        gridLayout_2->addWidget(textBoxSearcherMaxDelay, 0, 3, 1, 1);

        labelSearcherMinAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMinAdvance->setObjectName("labelSearcherMinAdvance");

        gridLayout_2->addWidget(labelSearcherMinAdvance, 1, 0, 1, 1);

        textBoxSearcherMinAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMinAdvance->setObjectName("textBoxSearcherMinAdvance");
        textBoxSearcherMinAdvance->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(textBoxSearcherMinAdvance, 1, 1, 1, 1);

        labelSearcherMaxAdvance = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMaxAdvance->setObjectName("labelSearcherMaxAdvance");

        gridLayout_2->addWidget(labelSearcherMaxAdvance, 1, 2, 1, 1);

        textBoxSearcherMaxAdvance = new TextBox(groupBoxSearcherRNGInfo);
        textBoxSearcherMaxAdvance->setObjectName("textBoxSearcherMaxAdvance");
        textBoxSearcherMaxAdvance->setText(QString::fromUtf8("1000"));

        gridLayout_2->addWidget(textBoxSearcherMaxAdvance, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 4);


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

        comboBoxSearcherSpecies = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherSpecies->setObjectName("comboBoxSearcherSpecies");

        gridLayout_9->addWidget(comboBoxSearcherSpecies, 0, 1, 1, 1);

        labelSearcherLevel = new QLabel(groupBoxSearcherSettings);
        labelSearcherLevel->setObjectName("labelSearcherLevel");

        gridLayout_9->addWidget(labelSearcherLevel, 1, 0, 1, 1);

        spinBoxSearcherLevel = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherLevel->setObjectName("spinBoxSearcherLevel");
        spinBoxSearcherLevel->setMinimum(1);
        spinBoxSearcherLevel->setMaximum(100);

        gridLayout_9->addWidget(spinBoxSearcherLevel, 1, 1, 1, 1);

        labelSearcherNature = new QLabel(groupBoxSearcherSettings);
        labelSearcherNature->setObjectName("labelSearcherNature");

        gridLayout_9->addWidget(labelSearcherNature, 2, 0, 1, 1);

        comboBoxSearcherNature = new QComboBox(groupBoxSearcherSettings);
        comboBoxSearcherNature->setObjectName("comboBoxSearcherNature");

        gridLayout_9->addWidget(comboBoxSearcherNature, 2, 1, 1, 1);


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

        gridLayout_5->addWidget(tabRNGSelector, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorSpecies);
        QWidget::setTabOrder(comboBoxGeneratorSpecies, spinBoxGeneratorLevel);
        QWidget::setTabOrder(spinBoxGeneratorLevel, comboBoxGeneratorNature);
        QWidget::setTabOrder(comboBoxGeneratorNature, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, textBoxSearcherMinDelay);
        QWidget::setTabOrder(textBoxSearcherMinDelay, textBoxSearcherMaxDelay);
        QWidget::setTabOrder(textBoxSearcherMaxDelay, textBoxSearcherMinAdvance);
        QWidget::setTabOrder(textBoxSearcherMinAdvance, textBoxSearcherMaxAdvance);
        QWidget::setTabOrder(textBoxSearcherMaxAdvance, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherSpecies);
        QWidget::setTabOrder(comboBoxSearcherSpecies, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, comboBoxSearcherNature);
        QWidget::setTabOrder(comboBoxSearcherNature, tableViewSearcher);

        retranslateUi(Event4);

        QMetaObject::connectSlotsByName(Event4);
    } // setupUi

    void retranslateUi(QWidget *Event4)
    {
        Event4->setWindowTitle(QCoreApplication::translate("Event4", "Wondercard IVs", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Event4", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Event4", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Event4", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Event4", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Event4", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Event4", "Game", nullptr));
        labelProfileGameValue->setText(QCoreApplication::translate("Event4", "Diamond", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Event4", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Event4", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Event4", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Event4", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Event4", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Event4", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Event4", "Settings", nullptr));
        labelGeneratorSpecies->setText(QCoreApplication::translate("Event4", "Species", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("Event4", "Level", nullptr));
        labelGeneratorNature->setText(QCoreApplication::translate("Event4", "Nature", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Event4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("Event4", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Event4", "RNG Info", nullptr));
        labelSearcherMinDelay->setText(QCoreApplication::translate("Event4", "Min Delay", nullptr));
        labelSearcherMaxDelay->setText(QCoreApplication::translate("Event4", "Max Delay", nullptr));
        labelSearcherMinAdvance->setText(QCoreApplication::translate("Event4", "Min Advance", nullptr));
        labelSearcherMaxAdvance->setText(QCoreApplication::translate("Event4", "Max Advance", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("Event4", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Event4", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Event4", "Settings", nullptr));
        labelSearcherSpecies->setText(QCoreApplication::translate("Event4", "Species", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("Event4", "Level", nullptr));
        labelSearcherNature->setText(QCoreApplication::translate("Event4", "Nature", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Event4", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSearcher), QCoreApplication::translate("Event4", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Event4: public Ui_Event4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT4_H
