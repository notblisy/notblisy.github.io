/********************************************************************************
** Form generated from reading UI file 'GameCube.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECUBE_H
#define UI_GAMECUBE_H

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
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_GameCube
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
    QWidget *tabGenerator;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxGeneratorRNGInfo;
    QGridLayout *gridLayout_6;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorSeed;
    QLabel *labelGeneratorStartingAdvance;
    TextBox *textBoxGeneratorStartingAdvance;
    QLabel *labelGeneratorMaxAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QLabel *labelGeneratorOffset;
    TextBox *textBoxGeneratorOffset;
    QCheckBox *checkBoxGeneratorFirstShadowUnset;
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
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxSearcherFirstShadowUnset;
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

    void setupUi(QWidget *GameCube)
    {
        if (GameCube->objectName().isEmpty())
            GameCube->setObjectName("GameCube");
        GameCube->resize(1200, 700);
        gridLayout_7 = new QGridLayout(GameCube);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxProfile = new QGroupBox(GameCube);
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


        gridLayout_7->addWidget(groupBoxProfile, 0, 0, 1, 1);

        tabRNGSelector = new QTabWidget(GameCube);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabGenerator = new QWidget();
        tabGenerator->setObjectName("tabGenerator");
        gridLayout_9 = new QGridLayout(tabGenerator);
        gridLayout_9->setObjectName("gridLayout_9");
        groupBoxGeneratorRNGInfo = new QGroupBox(tabGenerator);
        groupBoxGeneratorRNGInfo->setObjectName("groupBoxGeneratorRNGInfo");
        gridLayout_6 = new QGridLayout(groupBoxGeneratorRNGInfo);
        gridLayout_6->setObjectName("gridLayout_6");
        labelGeneratorSeed = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");

        gridLayout_6->addWidget(labelGeneratorSeed, 0, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");

        gridLayout_6->addWidget(textBoxGeneratorSeed, 0, 1, 1, 1);

        labelGeneratorStartingAdvance = new QLabel(groupBoxGeneratorRNGInfo);
        labelGeneratorStartingAdvance->setObjectName("labelGeneratorStartingAdvance");

        gridLayout_6->addWidget(labelGeneratorStartingAdvance, 1, 0, 1, 1);

        textBoxGeneratorStartingAdvance = new TextBox(groupBoxGeneratorRNGInfo);
        textBoxGeneratorStartingAdvance->setObjectName("textBoxGeneratorStartingAdvance");
        textBoxGeneratorStartingAdvance->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxGeneratorStartingAdvance, 1, 1, 1, 1);

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

        checkBoxGeneratorFirstShadowUnset = new QCheckBox(groupBoxGeneratorRNGInfo);
        checkBoxGeneratorFirstShadowUnset->setObjectName("checkBoxGeneratorFirstShadowUnset");

        gridLayout_6->addWidget(checkBoxGeneratorFirstShadowUnset, 4, 0, 1, 2);

        pushButtonGenerate = new QPushButton(groupBoxGeneratorRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 5, 0, 1, 2);


        gridLayout_9->addWidget(groupBoxGeneratorRNGInfo, 0, 0, 1, 1);

        groupBoxGeneratorSettings = new QGroupBox(tabGenerator);
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


        gridLayout_9->addWidget(groupBoxGeneratorSettings, 0, 1, 1, 1);

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


        gridLayout_9->addWidget(groupBoxGeneratorFilters, 0, 2, 1, 1);

        tableViewGenerator = new TableView(tabGenerator);
        tableViewGenerator->setObjectName("tableViewGenerator");

        gridLayout_9->addWidget(tableViewGenerator, 1, 0, 1, 3);

        tabRNGSelector->addTab(tabGenerator, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_5 = new QGridLayout(tabSpreadSearcher);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        gridLayout_2 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_2->setObjectName("gridLayout_2");
        checkBoxSearcherFirstShadowUnset = new QCheckBox(groupBoxSearcherRNGInfo);
        checkBoxSearcherFirstShadowUnset->setObjectName("checkBoxSearcherFirstShadowUnset");

        gridLayout_2->addWidget(checkBoxSearcherFirstShadowUnset, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        gridLayout_10 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_10->setObjectName("gridLayout_10");
        labelSearcherCategory = new QLabel(groupBoxSearcherSettings);
        labelSearcherCategory->setObjectName("labelSearcherCategory");

        gridLayout_10->addWidget(labelSearcherCategory, 0, 0, 1, 1);

        comboBoxSearcherCategory = new ComboBox(groupBoxSearcherSettings);
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


        gridLayout_5->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        sizePolicy.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_3->setObjectName("gridLayout_3");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_3->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_5->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_5->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_5->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        gridLayout_7->addWidget(tabRNGSelector, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, tabRNGSelector);
        QWidget::setTabOrder(tabRNGSelector, textBoxGeneratorSeed);
        QWidget::setTabOrder(textBoxGeneratorSeed, textBoxGeneratorStartingAdvance);
        QWidget::setTabOrder(textBoxGeneratorStartingAdvance, textBoxGeneratorMaxAdvances);
        QWidget::setTabOrder(textBoxGeneratorMaxAdvances, textBoxGeneratorOffset);
        QWidget::setTabOrder(textBoxGeneratorOffset, checkBoxGeneratorFirstShadowUnset);
        QWidget::setTabOrder(checkBoxGeneratorFirstShadowUnset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxGeneratorCategory);
        QWidget::setTabOrder(comboBoxGeneratorCategory, comboBoxGeneratorPokemon);
        QWidget::setTabOrder(comboBoxGeneratorPokemon, spinBoxGeneratorLevel);
        QWidget::setTabOrder(spinBoxGeneratorLevel, tableViewGenerator);
        QWidget::setTabOrder(tableViewGenerator, checkBoxSearcherFirstShadowUnset);
        QWidget::setTabOrder(checkBoxSearcherFirstShadowUnset, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherCategory);
        QWidget::setTabOrder(comboBoxSearcherCategory, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, tableViewSearcher);

        retranslateUi(GameCube);

        QMetaObject::connectSlotsByName(GameCube);
    } // setupUi

    void retranslateUi(QWidget *GameCube)
    {
        GameCube->setWindowTitle(QCoreApplication::translate("GameCube", "GameCube RNG", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("GameCube", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("GameCube", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("GameCube", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("GameCube", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("GameCube", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("GameCube", "Game", nullptr));
        groupBoxGeneratorRNGInfo->setTitle(QCoreApplication::translate("GameCube", "RNG Info", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("GameCube", "Seed", nullptr));
        labelGeneratorStartingAdvance->setText(QCoreApplication::translate("GameCube", "Initial Advances", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("GameCube", "Max Advances", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("GameCube", "Offset", nullptr));
        checkBoxGeneratorFirstShadowUnset->setText(QCoreApplication::translate("GameCube", "First Shadow Unset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("GameCube", "Generate", nullptr));
        groupBoxGeneratorSettings->setTitle(QCoreApplication::translate("GameCube", "Settings", nullptr));
        labelGeneratorCategory->setText(QCoreApplication::translate("GameCube", "Category", nullptr));
        comboBoxGeneratorCategory->setItemText(0, QCoreApplication::translate("GameCube", "Non Shadow Locks", nullptr));
        comboBoxGeneratorCategory->setItemText(1, QCoreApplication::translate("GameCube", "Channel", nullptr));
        comboBoxGeneratorCategory->setItemText(2, QCoreApplication::translate("GameCube", "Shadow Locks", nullptr));

        labelGeneratorPokemon->setText(QCoreApplication::translate("GameCube", "Pokemon", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("GameCube", "Level", nullptr));
        groupBoxGeneratorFilters->setTitle(QCoreApplication::translate("GameCube", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabGenerator), QCoreApplication::translate("GameCube", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("GameCube", "RNG Info", nullptr));
        checkBoxSearcherFirstShadowUnset->setText(QCoreApplication::translate("GameCube", "First Shadow Unset", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("GameCube", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("GameCube", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("GameCube", "Settings", nullptr));
        labelSearcherCategory->setText(QCoreApplication::translate("GameCube", "Category", nullptr));
        comboBoxSearcherCategory->setItemText(0, QCoreApplication::translate("GameCube", "Non Shadow Locks", nullptr));
        comboBoxSearcherCategory->setItemText(1, QCoreApplication::translate("GameCube", "Channel", nullptr));
        comboBoxSearcherCategory->setItemText(2, QCoreApplication::translate("GameCube", "Shadow Locks", nullptr));

        labelSearcherPokemon->setText(QCoreApplication::translate("GameCube", "Pokemon", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("GameCube", "Level", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("GameCube", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("GameCube", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameCube: public Ui_GameCube {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECUBE_H
