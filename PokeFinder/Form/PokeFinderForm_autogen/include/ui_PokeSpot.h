/********************************************************************************
** Form generated from reading UI file 'PokeSpot.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POKESPOT_H
#define UI_POKESPOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_PokeSpot
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_3;
    QLabel *labelLocation;
    ComboBox *comboBoxLocation;
    QLabel *labelPokemon;
    ComboBox *comboBoxPokemon;
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
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout;
    QLabel *labelSeed;
    TextBox *textBoxFoodSeed;
    TextBox *textBoxEncounterSeed;
    QLabel *labelGenerateAdvances;
    TextBox *textBoxFoodInitialAdvances;
    TextBox *textBoxFoodMaxAdvances;
    QLabel *labelEncounterAdvances;
    TextBox *textBoxEncounterInitialAdvances;
    TextBox *textBoxEncounterMaxAdvances;
    QLabel *labelOffset;
    TextBox *textBoxFoodOffset;
    TextBox *textBoxEncounterOffset;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout_4;
    Filter *filter;
    TableView *tableView;
    QToolButton *closebutton;

    void setupUi(QWidget *PokeSpot)
    {
        if (PokeSpot->objectName().isEmpty())
            PokeSpot->setObjectName("PokeSpot");
        PokeSpot->resize(700, 600);
        gridLayout_2 = new QGridLayout(PokeSpot);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxSettings = new QGroupBox(PokeSpot);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_3 = new QGridLayout(groupBoxSettings);
        gridLayout_3->setObjectName("gridLayout_3");
        labelLocation = new QLabel(groupBoxSettings);
        labelLocation->setObjectName("labelLocation");

        gridLayout_3->addWidget(labelLocation, 0, 0, 1, 1);

        comboBoxLocation = new ComboBox(groupBoxSettings);
        comboBoxLocation->setObjectName("comboBoxLocation");

        gridLayout_3->addWidget(comboBoxLocation, 0, 1, 1, 1);

        labelPokemon = new QLabel(groupBoxSettings);
        labelPokemon->setObjectName("labelPokemon");

        gridLayout_3->addWidget(labelPokemon, 1, 0, 1, 1);

        comboBoxPokemon = new ComboBox(groupBoxSettings);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout_3->addWidget(comboBoxPokemon, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxSettings, 2, 1, 1, 1);

        groupBoxProfile = new QGroupBox(PokeSpot);
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


        gridLayout_2->addWidget(groupBoxProfile, 1, 0, 1, 3);

        groupBoxRNGInfo = new QGroupBox(PokeSpot);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout = new QGridLayout(groupBoxRNGInfo);
        gridLayout->setObjectName("gridLayout");
        labelSeed = new QLabel(groupBoxRNGInfo);
        labelSeed->setObjectName("labelSeed");

        gridLayout->addWidget(labelSeed, 0, 0, 1, 1);

        textBoxFoodSeed = new TextBox(groupBoxRNGInfo);
        textBoxFoodSeed->setObjectName("textBoxFoodSeed");
        textBoxFoodSeed->setMaxLength(8);

        gridLayout->addWidget(textBoxFoodSeed, 0, 1, 1, 1);

        textBoxEncounterSeed = new TextBox(groupBoxRNGInfo);
        textBoxEncounterSeed->setObjectName("textBoxEncounterSeed");

        gridLayout->addWidget(textBoxEncounterSeed, 0, 2, 1, 1);

        labelGenerateAdvances = new QLabel(groupBoxRNGInfo);
        labelGenerateAdvances->setObjectName("labelGenerateAdvances");

        gridLayout->addWidget(labelGenerateAdvances, 1, 0, 1, 1);

        textBoxFoodInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxFoodInitialAdvances->setObjectName("textBoxFoodInitialAdvances");
        textBoxFoodInitialAdvances->setText(QString::fromUtf8("0"));
        textBoxFoodInitialAdvances->setMaxLength(10);

        gridLayout->addWidget(textBoxFoodInitialAdvances, 1, 1, 1, 1);

        textBoxFoodMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxFoodMaxAdvances->setObjectName("textBoxFoodMaxAdvances");
        textBoxFoodMaxAdvances->setText(QString::fromUtf8("10000"));

        gridLayout->addWidget(textBoxFoodMaxAdvances, 1, 2, 1, 1);

        labelEncounterAdvances = new QLabel(groupBoxRNGInfo);
        labelEncounterAdvances->setObjectName("labelEncounterAdvances");

        gridLayout->addWidget(labelEncounterAdvances, 2, 0, 1, 1);

        textBoxEncounterInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxEncounterInitialAdvances->setObjectName("textBoxEncounterInitialAdvances");
        textBoxEncounterInitialAdvances->setText(QString::fromUtf8("0"));
        textBoxEncounterInitialAdvances->setMaxLength(10);

        gridLayout->addWidget(textBoxEncounterInitialAdvances, 2, 1, 1, 1);

        textBoxEncounterMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxEncounterMaxAdvances->setObjectName("textBoxEncounterMaxAdvances");
        textBoxEncounterMaxAdvances->setText(QString::fromUtf8("10000"));

        gridLayout->addWidget(textBoxEncounterMaxAdvances, 2, 2, 1, 1);

        labelOffset = new QLabel(groupBoxRNGInfo);
        labelOffset->setObjectName("labelOffset");

        gridLayout->addWidget(labelOffset, 3, 0, 1, 1);

        textBoxFoodOffset = new TextBox(groupBoxRNGInfo);
        textBoxFoodOffset->setObjectName("textBoxFoodOffset");

        gridLayout->addWidget(textBoxFoodOffset, 3, 1, 1, 1);

        textBoxEncounterOffset = new TextBox(groupBoxRNGInfo);
        textBoxEncounterOffset->setObjectName("textBoxEncounterOffset");

        gridLayout->addWidget(textBoxEncounterOffset, 3, 2, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout->addWidget(pushButtonGenerate, 4, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxRNGInfo, 2, 0, 1, 1);

        groupBoxFilters = new QGroupBox(PokeSpot);
        groupBoxFilters->setObjectName("groupBoxFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxFilters->sizePolicy().hasHeightForWidth());
        groupBoxFilters->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxFilters);
        gridLayout_4->setObjectName("gridLayout_4");
        filter = new Filter(groupBoxFilters);
        filter->setObjectName("filter");

        gridLayout_4->addWidget(filter, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxFilters, 2, 2, 1, 1);

        tableView = new TableView(PokeSpot);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 3, 0, 1, 3);

        closebutton = new QToolButton(PokeSpot);
        closebutton->setObjectName("closebutton");

        gridLayout_2->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, textBoxFoodSeed);
        QWidget::setTabOrder(textBoxFoodSeed, textBoxEncounterSeed);
        QWidget::setTabOrder(textBoxEncounterSeed, textBoxFoodInitialAdvances);
        QWidget::setTabOrder(textBoxFoodInitialAdvances, textBoxFoodMaxAdvances);
        QWidget::setTabOrder(textBoxFoodMaxAdvances, textBoxEncounterInitialAdvances);
        QWidget::setTabOrder(textBoxEncounterInitialAdvances, textBoxEncounterMaxAdvances);
        QWidget::setTabOrder(textBoxEncounterMaxAdvances, textBoxFoodOffset);
        QWidget::setTabOrder(textBoxFoodOffset, textBoxEncounterOffset);
        QWidget::setTabOrder(textBoxEncounterOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxLocation);
        QWidget::setTabOrder(comboBoxLocation, comboBoxPokemon);
        QWidget::setTabOrder(comboBoxPokemon, tableView);

        retranslateUi(PokeSpot);

        QMetaObject::connectSlotsByName(PokeSpot);
    } // setupUi

    void retranslateUi(QWidget *PokeSpot)
    {
        PokeSpot->setWindowTitle(QCoreApplication::translate("PokeSpot", "PokeSpot", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("PokeSpot", "Settings", nullptr));
        labelLocation->setText(QCoreApplication::translate("PokeSpot", "Location", nullptr));
        labelPokemon->setText(QCoreApplication::translate("PokeSpot", "Pok\303\251mon", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("PokeSpot", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("PokeSpot", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("PokeSpot", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("PokeSpot", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("PokeSpot", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("PokeSpot", "Game", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("PokeSpot", "RNG Info", nullptr));
        labelSeed->setText(QCoreApplication::translate("PokeSpot", "Seed (Food / Encounter)", nullptr));
        labelGenerateAdvances->setText(QCoreApplication::translate("PokeSpot", "Food Advances", nullptr));
        labelEncounterAdvances->setText(QCoreApplication::translate("PokeSpot", "Encounter Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("PokeSpot", "Offset (Food / Encounter)", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("PokeSpot", "Generate", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("PokeSpot", "Filters", nullptr));
        closebutton->setText(QCoreApplication::translate("PokeSpot", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PokeSpot: public Ui_PokeSpot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKESPOT_H
