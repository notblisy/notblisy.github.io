/********************************************************************************
** Form generated from reading UI file 'Wild8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WILD8_H
#define UI_WILD8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Wild8
{
public:
    QGridLayout *gridLayout_5;
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
    TableView *tableView;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_2;
    QLabel *labelEncounter;
    ComboBox *comboBoxEncounter;
    QLabel *labelLocation;
    ComboBox *comboBoxLocation;
    QLabel *labelTime;
    QComboBox *comboBoxTime;
    QLabel *labelPokemon;
    ComboBox *comboBoxPokemon;
    QCheckBox *checkBoxRadar;
    QCheckBox *checkBoxSwarm;
    QCheckBox *checkBoxReplacement;
    ComboBox *comboBoxReplacement0;
    ComboBox *comboBoxReplacement1;
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
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout;
    Filter *filter;
    QToolButton *closebutton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Wild8)
    {
        if (Wild8->objectName().isEmpty())
            Wild8->setObjectName("Wild8");
        Wild8->resize(1200, 700);
        gridLayout_5 = new QGridLayout(Wild8);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBoxRNGInfo = new QGroupBox(Wild8);
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


        gridLayout_5->addWidget(groupBoxRNGInfo, 2, 0, 1, 1);

        tableView = new TableView(Wild8);
        tableView->setObjectName("tableView");

        gridLayout_5->addWidget(tableView, 3, 0, 1, 3);

        groupBoxSettings = new QGroupBox(Wild8);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_2 = new QGridLayout(groupBoxSettings);
        gridLayout_2->setObjectName("gridLayout_2");
        labelEncounter = new QLabel(groupBoxSettings);
        labelEncounter->setObjectName("labelEncounter");

        gridLayout_2->addWidget(labelEncounter, 0, 0, 1, 1);

        comboBoxEncounter = new ComboBox(groupBoxSettings);
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->addItem(QString());
        comboBoxEncounter->setObjectName("comboBoxEncounter");

        gridLayout_2->addWidget(comboBoxEncounter, 0, 1, 1, 2);

        labelLocation = new QLabel(groupBoxSettings);
        labelLocation->setObjectName("labelLocation");

        gridLayout_2->addWidget(labelLocation, 1, 0, 1, 1);

        comboBoxLocation = new ComboBox(groupBoxSettings);
        comboBoxLocation->setObjectName("comboBoxLocation");

        gridLayout_2->addWidget(comboBoxLocation, 1, 1, 1, 2);

        labelTime = new QLabel(groupBoxSettings);
        labelTime->setObjectName("labelTime");

        gridLayout_2->addWidget(labelTime, 2, 0, 1, 1);

        comboBoxTime = new QComboBox(groupBoxSettings);
        comboBoxTime->addItem(QString());
        comboBoxTime->addItem(QString());
        comboBoxTime->addItem(QString());
        comboBoxTime->setObjectName("comboBoxTime");

        gridLayout_2->addWidget(comboBoxTime, 2, 1, 1, 2);

        labelPokemon = new QLabel(groupBoxSettings);
        labelPokemon->setObjectName("labelPokemon");

        gridLayout_2->addWidget(labelPokemon, 3, 0, 1, 1);

        comboBoxPokemon = new ComboBox(groupBoxSettings);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout_2->addWidget(comboBoxPokemon, 3, 1, 1, 2);

        checkBoxRadar = new QCheckBox(groupBoxSettings);
        buttonGroup = new QButtonGroup(Wild8);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->setExclusive(false);
        buttonGroup->addButton(checkBoxRadar);
        checkBoxRadar->setObjectName("checkBoxRadar");

        gridLayout_2->addWidget(checkBoxRadar, 4, 0, 1, 1);

        checkBoxSwarm = new QCheckBox(groupBoxSettings);
        buttonGroup->addButton(checkBoxSwarm);
        checkBoxSwarm->setObjectName("checkBoxSwarm");

        gridLayout_2->addWidget(checkBoxSwarm, 5, 0, 1, 1);

        checkBoxReplacement = new QCheckBox(groupBoxSettings);
        buttonGroup->addButton(checkBoxReplacement);
        checkBoxReplacement->setObjectName("checkBoxReplacement");

        gridLayout_2->addWidget(checkBoxReplacement, 6, 0, 1, 1);

        comboBoxReplacement0 = new ComboBox(groupBoxSettings);
        comboBoxReplacement0->setObjectName("comboBoxReplacement0");

        gridLayout_2->addWidget(comboBoxReplacement0, 6, 1, 1, 1);

        comboBoxReplacement1 = new ComboBox(groupBoxSettings);
        comboBoxReplacement1->setObjectName("comboBoxReplacement1");

        gridLayout_2->addWidget(comboBoxReplacement1, 6, 2, 1, 1);


        gridLayout_5->addWidget(groupBoxSettings, 2, 1, 1, 1);

        groupBoxProfile = new QGroupBox(Wild8);
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


        gridLayout_5->addWidget(groupBoxProfile, 1, 0, 1, 3);

        groupBoxFilters = new QGroupBox(Wild8);
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


        gridLayout_5->addWidget(groupBoxFilters, 2, 2, 1, 1);

        closebutton = new QToolButton(Wild8);
        closebutton->setObjectName("closebutton");

        gridLayout_5->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, comboMenuLead);
        QWidget::setTabOrder(comboMenuLead, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxEncounter);
        QWidget::setTabOrder(comboBoxEncounter, comboBoxLocation);
        QWidget::setTabOrder(comboBoxLocation, comboBoxTime);
        QWidget::setTabOrder(comboBoxTime, comboBoxPokemon);
        QWidget::setTabOrder(comboBoxPokemon, checkBoxRadar);
        QWidget::setTabOrder(checkBoxRadar, checkBoxSwarm);
        QWidget::setTabOrder(checkBoxSwarm, checkBoxReplacement);
        QWidget::setTabOrder(checkBoxReplacement, comboBoxReplacement0);
        QWidget::setTabOrder(comboBoxReplacement0, comboBoxReplacement1);
        QWidget::setTabOrder(comboBoxReplacement1, tableView);

        retranslateUi(Wild8);

        QMetaObject::connectSlotsByName(Wild8);
    } // setupUi

    void retranslateUi(QWidget *Wild8)
    {
        Wild8->setWindowTitle(QCoreApplication::translate("Wild8", "Wild Gen 8", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("Wild8", "RNG Info", nullptr));
        labelLead->setText(QCoreApplication::translate("Wild8", "Lead", nullptr));
        labelSeed0->setText(QCoreApplication::translate("Wild8", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("Wild8", "Seed 1", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Wild8", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Wild8", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Wild8", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Wild8", "Generate", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("Wild8", "Settings", nullptr));
        labelEncounter->setText(QCoreApplication::translate("Wild8", "Encounter", nullptr));
        comboBoxEncounter->setItemText(0, QCoreApplication::translate("Wild8", "Grass", nullptr));
        comboBoxEncounter->setItemText(1, QCoreApplication::translate("Wild8", "Rock Smash", nullptr));
        comboBoxEncounter->setItemText(2, QCoreApplication::translate("Wild8", "Surfing", nullptr));
        comboBoxEncounter->setItemText(3, QCoreApplication::translate("Wild8", "Old Rod", nullptr));
        comboBoxEncounter->setItemText(4, QCoreApplication::translate("Wild8", "Good Rod", nullptr));
        comboBoxEncounter->setItemText(5, QCoreApplication::translate("Wild8", "Super Rod", nullptr));

        labelLocation->setText(QCoreApplication::translate("Wild8", "Location", nullptr));
        labelTime->setText(QCoreApplication::translate("Wild8", "Time", nullptr));
        comboBoxTime->setItemText(0, QCoreApplication::translate("Wild8", "Morning", nullptr));
        comboBoxTime->setItemText(1, QCoreApplication::translate("Wild8", "Day", nullptr));
        comboBoxTime->setItemText(2, QCoreApplication::translate("Wild8", "Night", nullptr));

        labelPokemon->setText(QCoreApplication::translate("Wild8", "Pok\303\251mon", nullptr));
        checkBoxRadar->setText(QCoreApplication::translate("Wild8", "Radar", nullptr));
        checkBoxSwarm->setText(QCoreApplication::translate("Wild8", "Swarm", nullptr));
        checkBoxReplacement->setText(QCoreApplication::translate("Wild8", "Replacement", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Wild8", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Wild8", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Wild8", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Wild8", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Wild8", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Wild8", "Game", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("Wild8", "Filters", nullptr));
        closebutton->setText(QCoreApplication::translate("Wild8", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wild8: public Ui_Wild8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WILD8_H
