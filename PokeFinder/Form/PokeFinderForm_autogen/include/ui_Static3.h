/********************************************************************************
** Form generated from reading UI file 'Static3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIC3_H
#define UI_STATIC3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Static3
{
public:
    QGridLayout *gridLayout_7;
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
    QTabWidget *tabRNGSelector;
    QWidget *tabStatic;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelGeneratorMethod;
    ComboBox *comboBoxGeneratorMethod;
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
    QGroupBox *groupBoxGeneratorFilters;
    QGridLayout *gridLayout;
    Filter *filterGenerator;
    TableView *tableViewGenerator;
    QWidget *tabSpreadSearcher;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherMethod;
    ComboBox *comboBoxSearcherMethod;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxSearcherSettings;
    QGridLayout *gridLayout_10;
    QLabel *labelSearcherCategory;
    ComboBox *comboBoxSearcherCategory;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QFrame *line_3;
    QLabel *labelSearcherLevel;
    QSpinBox *spinBoxSearcherLevel;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_3;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;

    void setupUi(QWidget *Static3)
    {
        if (Static3->objectName().isEmpty())
            Static3->setObjectName("Static3");
        Static3->resize(1200, 700);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pokefinder.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Static3->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(Static3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxProfile = new QGroupBox(Static3);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_4 = new QGridLayout(groupBoxProfile);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
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


        gridLayout_7->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabRNGSelector = new QTabWidget(Static3);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabStatic = new QWidget();
        tabStatic->setObjectName("tabStatic");
        gridLayout_5 = new QGridLayout(tabStatic);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabStatic);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        gridLayout_6 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        labelGeneratorMethod = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorMethod->setObjectName("labelGeneratorMethod");

        gridLayout_6->addWidget(labelGeneratorMethod, 0, 0, 1, 1);

        comboBoxGeneratorMethod = new ComboBox(groupBoxGeneratorRNGInfo);
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->setObjectName("comboBoxGeneratorMethod");

        gridLayout_6->addWidget(comboBoxGeneratorMethod, 0, 1, 1, 1);

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


        gridLayout_5->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabStatic);
        groupBoxGeneratorSettings->setObjectName("groupBoxGeneratorSettings");
        gridLayout_8 = new QGridLayout(groupBoxGeneratorSettings);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
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


        gridLayout_5->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

        groupBoxGeneratorFilters = new QGroupBox(tabStatic);
        groupBoxGeneratorFilters->setObjectName("groupBoxGeneratorFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxGeneratorFilters->sizePolicy().hasHeightForWidth());
        groupBoxGeneratorFilters->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBoxGeneratorFilters);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        filterGenerator = new Filter(groupBoxGeneratorFilters);
        filterGenerator->setObjectName("filterGenerator");

        gridLayout->addWidget(filterGenerator, 0, 0, 2, 1);


        gridLayout_5->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabStatic);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_5->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabStatic, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_9 = new QGridLayout(tabSpreadSearcher);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        gridLayout_2 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSearcherMethod = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMethod->setObjectName("labelSearcherMethod");

        gridLayout_2->addWidget(labelSearcherMethod, 0, 0, 1, 1);

        comboBoxSearcherMethod = new ComboBox(groupBoxSearcherRNGInfo);
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->setObjectName("comboBoxSearcherMethod");

        gridLayout_2->addWidget(comboBoxSearcherMethod, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);


        gridLayout_9->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        gridLayout_10 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName("gridLayout_10");
        labelSearcherCategory = new QLabel(groupBoxSearcherSettings);
        labelSearcherCategory->setObjectName("labelSearcherCategory");

        gridLayout_10->addWidget(labelSearcherCategory, 0, 0, 1, 1);

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

        gridLayout_10->addWidget(comboBoxSearcherCategory, 0, 1, 1, 2);

        labelSearcherPokemon = new QLabel(groupBoxSearcherSettings);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_10->addWidget(labelSearcherPokemon, 1, 0, 1, 1);

        comboBoxSearcherPokemon = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_10->addWidget(comboBoxSearcherPokemon, 1, 1, 1, 2);

        line_3 = new QFrame(groupBoxSearcherSettings);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_10->addWidget(line_3, 2, 0, 1, 3);

        labelSearcherLevel = new QLabel(groupBoxSearcherSettings);
        labelSearcherLevel->setObjectName("labelSearcherLevel");

        gridLayout_10->addWidget(labelSearcherLevel, 3, 0, 1, 1);

        spinBoxSearcherLevel = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherLevel->setObjectName("spinBoxSearcherLevel");
        spinBoxSearcherLevel->setEnabled(false);

        gridLayout_10->addWidget(spinBoxSearcherLevel, 3, 1, 1, 2);


        gridLayout_9->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_3->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_9->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_9->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_9->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        gridLayout_7->addWidget(tabRNGSelector, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, comboBoxGeneratorMethod);
        QWidget::setTabOrder(comboBoxGeneratorMethod, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorInitialAdvances);
        QWidget::setTabOrder(textBoxGeneratorInitialAdvances, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorCategory);
        QWidget::setTabOrder(comboBoxGeneratorCategory, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, spinBoxGeneratorLevel);
        QWidget::setTabOrder(spinBoxGeneratorLevel, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, comboBoxSearcherMethod);
        QWidget::setTabOrder(comboBoxSearcherMethod, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherCategory);
        QWidget::setTabOrder(comboBoxSearcherCategory, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, tableViewSearcher);

        retranslateUi(Static3);

        QMetaObject::connectSlotsByName(Static3);
    } // setupUi

    void retranslateUi(QWidget *Static3)
    {
        Static3->setWindowTitle(QCoreApplication::translate("Static3", "Gen 3 Static", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Static3", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Static3", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Static3", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Static3", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Static3", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Static3", "Game", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("Static3", "RNG Info", nullptr));
        labelGeneratorMethod->setText(QCoreApplication::translate("Static3", "Method", nullptr));
        comboBoxGeneratorMethod->setItemText(0, QCoreApplication::translate("Static3", "Method 1", nullptr));
        comboBoxGeneratorMethod->setItemText(1, QCoreApplication::translate("Static3", "Method 4", nullptr));

        labelGeneratorSeed->setText(QCoreApplication::translate("Static3", "Seed", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Static3", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Static3", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Static3", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Static3", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("Static3", "Settings", nullptr));
        labelGeneratorCategory->setText(QCoreApplication::translate("Static3", "Category", nullptr));
        comboBoxGeneratorCategory->setItemText(0, QCoreApplication::translate("Static3", "Starters", nullptr));
        comboBoxGeneratorCategory->setItemText(1, QCoreApplication::translate("Static3", "Fossils", nullptr));
        comboBoxGeneratorCategory->setItemText(2, QCoreApplication::translate("Static3", "Gifts", nullptr));
        comboBoxGeneratorCategory->setItemText(3, QCoreApplication::translate("Static3", "Game Corner", nullptr));
        comboBoxGeneratorCategory->setItemText(4, QCoreApplication::translate("Static3", "Stationary", nullptr));
        comboBoxGeneratorCategory->setItemText(5, QCoreApplication::translate("Static3", "Legends", nullptr));
        comboBoxGeneratorCategory->setItemText(6, QCoreApplication::translate("Static3", "Events", nullptr));
        comboBoxGeneratorCategory->setItemText(7, QCoreApplication::translate("Static3", "Roamers", nullptr));

        labelGeneratorPokemon->setText(QCoreApplication::translate("Static3", "Pokemon", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("Static3", "Level", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("Static3", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabStatic), QCoreApplication::translate("Static3", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Static3", "RNG Info", nullptr));
        labelSearcherMethod->setText(QCoreApplication::translate("Static3", "Method", nullptr));
        comboBoxSearcherMethod->setItemText(0, QCoreApplication::translate("Static3", "Method 1", nullptr));
        comboBoxSearcherMethod->setItemText(1, QCoreApplication::translate("Static3", "Method 4", nullptr));

        pushButtonSearch->setText(QCoreApplication::translate("Static3", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Static3", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Static3", "Settings", nullptr));
        labelSearcherCategory->setText(QCoreApplication::translate("Static3", "Category", nullptr));
        comboBoxSearcherCategory->setItemText(0, QCoreApplication::translate("Static3", "Starters", nullptr));
        comboBoxSearcherCategory->setItemText(1, QCoreApplication::translate("Static3", "Fossils", nullptr));
        comboBoxSearcherCategory->setItemText(2, QCoreApplication::translate("Static3", "Gifts", nullptr));
        comboBoxSearcherCategory->setItemText(3, QCoreApplication::translate("Static3", "Game Corner", nullptr));
        comboBoxSearcherCategory->setItemText(4, QCoreApplication::translate("Static3", "Stationary", nullptr));
        comboBoxSearcherCategory->setItemText(5, QCoreApplication::translate("Static3", "Legends", nullptr));
        comboBoxSearcherCategory->setItemText(6, QCoreApplication::translate("Static3", "Events", nullptr));
        comboBoxSearcherCategory->setItemText(7, QCoreApplication::translate("Static3", "Roamers", nullptr));

        labelSearcherPokemon->setText(QCoreApplication::translate("Static3", "Pokemon", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("Static3", "Level", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Static3", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("Static3", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Static3: public Ui_Static3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIC3_H
