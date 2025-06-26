/********************************************************************************
** Form generated from reading UI file 'Static8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIC8_H
#define UI_STATIC8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Static8
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout_3;
    QLabel *labelLead;
    ComboMenu *comboMenuLead;
    QLabel *labelSeed0;
    TextBox *textBoxSeed0;
    QLabel *labelSeed1;
    TextBox *textBoxSeed1;
    QLabel *labelInitialAdvances;
    TextBox *textBoxInitialAdvances;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QLabel *labelOffset;
    TextBox *textBoxOffset;
    QPushButton *pushButtonGenerate;
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
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_5;
    QLabel *labelCategory;
    QComboBox *comboBoxCategory;
    QLabel *labelPokemon;
    ComboBox *comboBoxPokemon;
    QFrame *line_2;
    QLabel *labelLevel;
    QSpinBox *spinBoxLevel;
    QLabel *label_4;
    ComboBox *comboBoxAbility;
    QLabel *labelShiny;
    ComboBox *comboBoxShiny;
    QLabel *labelIVCount;
    QSpinBox *spinBoxIVCount;
    TableView *tableView;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout;
    Filter *filter;
    QToolButton *closebutton;

    void setupUi(QWidget *Static8)
    {
        if (Static8->objectName().isEmpty())
            Static8->setObjectName("Static8");
        Static8->resize(1200, 700);
        gridLayout_2 = new QGridLayout(Static8);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxRNGInfo = new QGroupBox(Static8);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout_3 = new QGridLayout(groupBoxRNGInfo);
        gridLayout_3->setObjectName("gridLayout_3");
        labelLead = new QLabel(groupBoxRNGInfo);
        labelLead->setObjectName("labelLead");

        gridLayout_3->addWidget(labelLead, 0, 0, 1, 1);

        comboMenuLead = new ComboMenu(groupBoxRNGInfo);
        comboMenuLead->setObjectName("comboMenuLead");

        gridLayout_3->addWidget(comboMenuLead, 0, 1, 1, 1);

        labelSeed0 = new QLabel(groupBoxRNGInfo);
        labelSeed0->setObjectName("labelSeed0");

        gridLayout_3->addWidget(labelSeed0, 1, 0, 1, 1);

        textBoxSeed0 = new TextBox(groupBoxRNGInfo);
        textBoxSeed0->setObjectName("textBoxSeed0");

        gridLayout_3->addWidget(textBoxSeed0, 1, 1, 1, 1);

        labelSeed1 = new QLabel(groupBoxRNGInfo);
        labelSeed1->setObjectName("labelSeed1");

        gridLayout_3->addWidget(labelSeed1, 2, 0, 1, 1);

        textBoxSeed1 = new TextBox(groupBoxRNGInfo);
        textBoxSeed1->setObjectName("textBoxSeed1");

        gridLayout_3->addWidget(textBoxSeed1, 2, 1, 1, 1);

        labelInitialAdvances = new QLabel(groupBoxRNGInfo);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_3->addWidget(labelInitialAdvances, 3, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(textBoxInitialAdvances, 3, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxRNGInfo);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_3->addWidget(labelMaxAdvances, 4, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_3->addWidget(textBoxMaxAdvances, 4, 1, 1, 1);

        labelOffset = new QLabel(groupBoxRNGInfo);
        labelOffset->setObjectName("labelOffset");

        gridLayout_3->addWidget(labelOffset, 5, 0, 1, 1);

        textBoxOffset = new TextBox(groupBoxRNGInfo);
        textBoxOffset->setObjectName("textBoxOffset");

        gridLayout_3->addWidget(textBoxOffset, 5, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_3->addWidget(pushButtonGenerate, 6, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxRNGInfo, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(Static8);
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

        gridLayout_4->addWidget(labelProfileGame, 0, 6, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_4->addWidget(labelProfileGameValue, 0, 7, 1, 1);


        gridLayout_2->addWidget(groupBoxProfile, 1, 0, 1, 3);

        groupBoxSettings = new QGroupBox(Static8);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_5 = new QGridLayout(groupBoxSettings);
        gridLayout_5->setObjectName("gridLayout_5");
        labelCategory = new QLabel(groupBoxSettings);
        labelCategory->setObjectName("labelCategory");

        gridLayout_5->addWidget(labelCategory, 0, 0, 1, 1);

        comboBoxCategory = new QComboBox(groupBoxSettings);
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->addItem(QString());
        comboBoxCategory->setObjectName("comboBoxCategory");

        gridLayout_5->addWidget(comboBoxCategory, 0, 1, 1, 1);

        labelPokemon = new QLabel(groupBoxSettings);
        labelPokemon->setObjectName("labelPokemon");

        gridLayout_5->addWidget(labelPokemon, 1, 0, 1, 1);

        comboBoxPokemon = new ComboBox(groupBoxSettings);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout_5->addWidget(comboBoxPokemon, 1, 1, 1, 1);

        line_2 = new QFrame(groupBoxSettings);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_2, 2, 0, 1, 2);

        labelLevel = new QLabel(groupBoxSettings);
        labelLevel->setObjectName("labelLevel");

        gridLayout_5->addWidget(labelLevel, 3, 0, 1, 1);

        spinBoxLevel = new QSpinBox(groupBoxSettings);
        spinBoxLevel->setObjectName("spinBoxLevel");
        spinBoxLevel->setEnabled(false);

        gridLayout_5->addWidget(spinBoxLevel, 3, 1, 1, 1);

        label_4 = new QLabel(groupBoxSettings);
        label_4->setObjectName("label_4");

        gridLayout_5->addWidget(label_4, 4, 0, 1, 1);

        comboBoxAbility = new ComboBox(groupBoxSettings);
        comboBoxAbility->addItem(QString::fromUtf8("0"));
        comboBoxAbility->addItem(QString::fromUtf8("1"));
        comboBoxAbility->addItem(QString::fromUtf8("H"));
        comboBoxAbility->addItem(QString::fromUtf8("0/1"));
        comboBoxAbility->setObjectName("comboBoxAbility");
        comboBoxAbility->setEnabled(false);

        gridLayout_5->addWidget(comboBoxAbility, 4, 1, 1, 1);

        labelShiny = new QLabel(groupBoxSettings);
        labelShiny->setObjectName("labelShiny");

        gridLayout_5->addWidget(labelShiny, 5, 0, 1, 1);

        comboBoxShiny = new ComboBox(groupBoxSettings);
        comboBoxShiny->addItem(QString());
        comboBoxShiny->addItem(QString());
        comboBoxShiny->setObjectName("comboBoxShiny");
        comboBoxShiny->setEnabled(false);

        gridLayout_5->addWidget(comboBoxShiny, 5, 1, 1, 1);

        labelIVCount = new QLabel(groupBoxSettings);
        labelIVCount->setObjectName("labelIVCount");

        gridLayout_5->addWidget(labelIVCount, 6, 0, 1, 1);

        spinBoxIVCount = new QSpinBox(groupBoxSettings);
        spinBoxIVCount->setObjectName("spinBoxIVCount");
        spinBoxIVCount->setEnabled(false);

        gridLayout_5->addWidget(spinBoxIVCount, 6, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxSettings, 2, 1, 1, 1);

        tableView = new TableView(Static8);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 3, 0, 1, 3);

        groupBoxFilters = new QGroupBox(Static8);
        groupBoxFilters->setObjectName("groupBoxFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxFilters->sizePolicy().hasHeightForWidth());
        groupBoxFilters->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBoxFilters);
        gridLayout->setObjectName("gridLayout");
        filter = new Filter(groupBoxFilters);
        filter->setObjectName("filter");

        gridLayout->addWidget(filter, 0, 0, 2, 1);


        gridLayout_2->addWidget(groupBoxFilters, 2, 2, 1, 1);

        closebutton = new QToolButton(Static8);
        closebutton->setObjectName("closebutton");

        gridLayout_2->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, comboMenuLead);
        QWidget::setTabOrder(comboMenuLead, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxCategory);
        QWidget::setTabOrder(comboBoxCategory, comboBoxPokemon);
        QWidget::setTabOrder(comboBoxPokemon, spinBoxLevel);
        QWidget::setTabOrder(spinBoxLevel, comboBoxAbility);
        QWidget::setTabOrder(comboBoxAbility, comboBoxShiny);
        QWidget::setTabOrder(comboBoxShiny, spinBoxIVCount);
        QWidget::setTabOrder(spinBoxIVCount, tableView);

        retranslateUi(Static8);

        QMetaObject::connectSlotsByName(Static8);
    } // setupUi

    void retranslateUi(QWidget *Static8)
    {
        Static8->setWindowTitle(QCoreApplication::translate("Static8", "Static Gen 8", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("Static8", "RNG Info", nullptr));
        labelLead->setText(QCoreApplication::translate("Static8", "Lead", nullptr));
        labelSeed0->setText(QCoreApplication::translate("Static8", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("Static8", "Seed 1", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Static8", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Static8", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Static8", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Static8", "Generate", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Static8", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Static8", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Static8", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Static8", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Static8", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Static8", "Game", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("Static8", "Settings", nullptr));
        labelCategory->setText(QCoreApplication::translate("Static8", "Category", nullptr));
        comboBoxCategory->setItemText(0, QCoreApplication::translate("Static8", "Starters", nullptr));
        comboBoxCategory->setItemText(1, QCoreApplication::translate("Static8", "Gifts", nullptr));
        comboBoxCategory->setItemText(2, QCoreApplication::translate("Static8", "Fossils", nullptr));
        comboBoxCategory->setItemText(3, QCoreApplication::translate("Static8", "Stationary", nullptr));
        comboBoxCategory->setItemText(4, QCoreApplication::translate("Static8", "Roamers", nullptr));
        comboBoxCategory->setItemText(5, QCoreApplication::translate("Static8", "Legends", nullptr));
        comboBoxCategory->setItemText(6, QCoreApplication::translate("Static8", "Ramanas Park (Pure Space)", nullptr));
        comboBoxCategory->setItemText(7, QCoreApplication::translate("Static8", "Ramanas Park (Strange Space)", nullptr));
        comboBoxCategory->setItemText(8, QCoreApplication::translate("Static8", "Mythics", nullptr));

        labelPokemon->setText(QCoreApplication::translate("Static8", "Pokemon", nullptr));
        labelLevel->setText(QCoreApplication::translate("Static8", "Level", nullptr));
        label_4->setText(QCoreApplication::translate("Static8", "Ability", nullptr));

        labelShiny->setText(QCoreApplication::translate("Static8", "Shiny", nullptr));
        comboBoxShiny->setItemText(0, QCoreApplication::translate("Static8", "Never", nullptr));
        comboBoxShiny->setItemText(1, QCoreApplication::translate("Static8", "Random", nullptr));

        labelIVCount->setText(QCoreApplication::translate("Static8", "IV Count", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("Static8", "Filters", nullptr));
        closebutton->setText(QCoreApplication::translate("Static8", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Static8: public Ui_Static8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIC8_H
