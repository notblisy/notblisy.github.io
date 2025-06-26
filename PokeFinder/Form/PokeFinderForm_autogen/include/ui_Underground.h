/********************************************************************************
** Form generated from reading UI file 'Underground.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNDERGROUND_H
#define UI_UNDERGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
#include "Form/Controls/CheckList.hpp"
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/ComboMenu.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Underground
{
public:
    QGridLayout *gridLayout_45;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_42;
    QLabel *labelStoryFlag;
    QComboBox *comboBoxStoryFlag;
    QLabel *labelLevelFlag;
    QComboBox *comboBoxLevelFlag;
    QLabel *labelLocation;
    ComboBox *comboBoxLocation;
    QLabel *labelPokemon;
    CheckList *checkListPokemon;
    QCheckBox *checkBoxDiglett;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout_43;
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
    QGridLayout *gridLayout_44;
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
    QGridLayout *gridLayout_41;
    Filter *filter;
    TableView *tableView;
    QToolButton *closebutton;

    void setupUi(QWidget *Underground)
    {
        if (Underground->objectName().isEmpty())
            Underground->setObjectName("Underground");
        Underground->resize(1200, 700);
        gridLayout_45 = new QGridLayout(Underground);
        gridLayout_45->setObjectName("gridLayout_45");
        groupBoxSettings = new QGroupBox(Underground);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_42 = new QGridLayout(groupBoxSettings);
        gridLayout_42->setObjectName("gridLayout_42");
        labelStoryFlag = new QLabel(groupBoxSettings);
        labelStoryFlag->setObjectName("labelStoryFlag");

        gridLayout_42->addWidget(labelStoryFlag, 0, 0, 1, 1);

        comboBoxStoryFlag = new QComboBox(groupBoxSettings);
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->addItem(QString());
        comboBoxStoryFlag->setObjectName("comboBoxStoryFlag");

        gridLayout_42->addWidget(comboBoxStoryFlag, 0, 1, 1, 1);

        labelLevelFlag = new QLabel(groupBoxSettings);
        labelLevelFlag->setObjectName("labelLevelFlag");

        gridLayout_42->addWidget(labelLevelFlag, 1, 0, 1, 1);

        comboBoxLevelFlag = new QComboBox(groupBoxSettings);
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->addItem(QString());
        comboBoxLevelFlag->setObjectName("comboBoxLevelFlag");

        gridLayout_42->addWidget(comboBoxLevelFlag, 1, 1, 1, 1);

        labelLocation = new QLabel(groupBoxSettings);
        labelLocation->setObjectName("labelLocation");

        gridLayout_42->addWidget(labelLocation, 2, 0, 1, 1);

        comboBoxLocation = new ComboBox(groupBoxSettings);
        comboBoxLocation->setObjectName("comboBoxLocation");

        gridLayout_42->addWidget(comboBoxLocation, 2, 1, 1, 1);

        labelPokemon = new QLabel(groupBoxSettings);
        labelPokemon->setObjectName("labelPokemon");

        gridLayout_42->addWidget(labelPokemon, 3, 0, 1, 1);

        checkListPokemon = new CheckList(groupBoxSettings);
        checkListPokemon->setObjectName("checkListPokemon");

        gridLayout_42->addWidget(checkListPokemon, 3, 1, 1, 1);

        checkBoxDiglett = new QCheckBox(groupBoxSettings);
        checkBoxDiglett->setObjectName("checkBoxDiglett");

        gridLayout_42->addWidget(checkBoxDiglett, 4, 0, 1, 2);


        gridLayout_45->addWidget(groupBoxSettings, 2, 1, 1, 1);

        groupBoxRNGInfo = new QGroupBox(Underground);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout_43 = new QGridLayout(groupBoxRNGInfo);
        gridLayout_43->setObjectName("gridLayout_43");
        labelLead = new QLabel(groupBoxRNGInfo);
        labelLead->setObjectName("labelLead");

        gridLayout_43->addWidget(labelLead, 0, 0, 1, 1);

        comboMenuLead = new ComboMenu(groupBoxRNGInfo);
        comboMenuLead->setObjectName("comboMenuLead");

        gridLayout_43->addWidget(comboMenuLead, 0, 1, 1, 1);

        labelSeed0 = new QLabel(groupBoxRNGInfo);
        labelSeed0->setObjectName("labelSeed0");

        gridLayout_43->addWidget(labelSeed0, 1, 0, 1, 1);

        textBoxSeed0 = new TextBox(groupBoxRNGInfo);
        textBoxSeed0->setObjectName("textBoxSeed0");

        gridLayout_43->addWidget(textBoxSeed0, 1, 1, 1, 1);

        labelSeed1 = new QLabel(groupBoxRNGInfo);
        labelSeed1->setObjectName("labelSeed1");

        gridLayout_43->addWidget(labelSeed1, 2, 0, 1, 1);

        textBoxSeed1 = new TextBox(groupBoxRNGInfo);
        textBoxSeed1->setObjectName("textBoxSeed1");

        gridLayout_43->addWidget(textBoxSeed1, 2, 1, 1, 1);

        labelInitialAdvances = new QLabel(groupBoxRNGInfo);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_43->addWidget(labelInitialAdvances, 3, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_43->addWidget(textBoxInitialAdvances, 3, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxRNGInfo);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_43->addWidget(labelMaxAdvances, 4, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_43->addWidget(textBoxMaxAdvances, 4, 1, 1, 1);

        labelOffset = new QLabel(groupBoxRNGInfo);
        labelOffset->setObjectName("labelOffset");

        gridLayout_43->addWidget(labelOffset, 5, 0, 1, 1);

        textBoxOffset = new TextBox(groupBoxRNGInfo);
        textBoxOffset->setObjectName("textBoxOffset");

        gridLayout_43->addWidget(textBoxOffset, 5, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_43->addWidget(pushButtonGenerate, 6, 0, 1, 2);


        gridLayout_45->addWidget(groupBoxRNGInfo, 2, 0, 1, 1);

        groupBoxProfile = new QGroupBox(Underground);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_44 = new QGridLayout(groupBoxProfile);
        gridLayout_44->setObjectName("gridLayout_44");
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_44->addWidget(labelProfile, 0, 0, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_44->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_44->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_44->addWidget(labelProfileTID, 0, 2, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");
        labelProfileTIDValue->setText(QString::fromUtf8("12345"));

        gridLayout_44->addWidget(labelProfileTIDValue, 0, 3, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_44->addWidget(labelProfileSID, 1, 2, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");
        labelProfileSIDValue->setText(QString::fromUtf8("54321"));

        gridLayout_44->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_44->addWidget(line, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_44->addWidget(labelProfileGame, 0, 6, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_44->addWidget(labelProfileGameValue, 0, 7, 1, 1);


        gridLayout_45->addWidget(groupBoxProfile, 1, 0, 1, 3);

        groupBoxFilters = new QGroupBox(Underground);
        groupBoxFilters->setObjectName("groupBoxFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxFilters->sizePolicy().hasHeightForWidth());
        groupBoxFilters->setSizePolicy(sizePolicy);
        gridLayout_41 = new QGridLayout(groupBoxFilters);
        gridLayout_41->setObjectName("gridLayout_41");
        filter = new Filter(groupBoxFilters);
        filter->setObjectName("filter");

        gridLayout_41->addWidget(filter, 0, 0, 2, 1);


        gridLayout_45->addWidget(groupBoxFilters, 2, 2, 1, 1);

        tableView = new TableView(Underground);
        tableView->setObjectName("tableView");

        gridLayout_45->addWidget(tableView, 3, 0, 1, 3);

        closebutton = new QToolButton(Underground);
        closebutton->setObjectName("closebutton");

        gridLayout_45->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, comboMenuLead);
        QWidget::setTabOrder(comboMenuLead, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxStoryFlag);
        QWidget::setTabOrder(comboBoxStoryFlag, comboBoxLevelFlag);
        QWidget::setTabOrder(comboBoxLevelFlag, comboBoxLocation);
        QWidget::setTabOrder(comboBoxLocation, checkListPokemon);
        QWidget::setTabOrder(checkListPokemon, checkBoxDiglett);
        QWidget::setTabOrder(checkBoxDiglett, tableView);

        retranslateUi(Underground);

        QMetaObject::connectSlotsByName(Underground);
    } // setupUi

    void retranslateUi(QWidget *Underground)
    {
        Underground->setWindowTitle(QCoreApplication::translate("Underground", "Underground", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("Underground", "Settings", nullptr));
        labelStoryFlag->setText(QCoreApplication::translate("Underground", "Story Flag", nullptr));
        comboBoxStoryFlag->setItemText(0, QCoreApplication::translate("Underground", "Underground Unlocked", nullptr));
        comboBoxStoryFlag->setItemText(1, QCoreApplication::translate("Underground", "Strength Obtained", nullptr));
        comboBoxStoryFlag->setItemText(2, QCoreApplication::translate("Underground", "Defog Obtained", nullptr));
        comboBoxStoryFlag->setItemText(3, QCoreApplication::translate("Underground", "7 Badges", nullptr));
        comboBoxStoryFlag->setItemText(4, QCoreApplication::translate("Underground", "Waterfall Obtained", nullptr));
        comboBoxStoryFlag->setItemText(5, QCoreApplication::translate("Underground", "National Dex", nullptr));

        labelLevelFlag->setText(QCoreApplication::translate("Underground", "Level Flag", nullptr));
        comboBoxLevelFlag->setItemText(0, QCoreApplication::translate("Underground", "0/1 Badges", nullptr));
        comboBoxLevelFlag->setItemText(1, QCoreApplication::translate("Underground", "2 Badges", nullptr));
        comboBoxLevelFlag->setItemText(2, QCoreApplication::translate("Underground", "3 Badges", nullptr));
        comboBoxLevelFlag->setItemText(3, QCoreApplication::translate("Underground", "4 Badges", nullptr));
        comboBoxLevelFlag->setItemText(4, QCoreApplication::translate("Underground", "5 Badges", nullptr));
        comboBoxLevelFlag->setItemText(5, QCoreApplication::translate("Underground", "6 Badges", nullptr));
        comboBoxLevelFlag->setItemText(6, QCoreApplication::translate("Underground", "7 Badges", nullptr));
        comboBoxLevelFlag->setItemText(7, QCoreApplication::translate("Underground", "8 Badges", nullptr));
        comboBoxLevelFlag->setItemText(8, QCoreApplication::translate("Underground", "National Dex", nullptr));

        labelLocation->setText(QCoreApplication::translate("Underground", "Location", nullptr));
        labelPokemon->setText(QCoreApplication::translate("Underground", "Pok\303\251mon", nullptr));
        checkBoxDiglett->setText(QCoreApplication::translate("Underground", "Diglett Bonus", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("Underground", "RNG Info", nullptr));
        labelLead->setText(QCoreApplication::translate("Underground", "Lead", nullptr));
        labelSeed0->setText(QCoreApplication::translate("Underground", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("Underground", "Seed 1", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Underground", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Underground", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Underground", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Underground", "Generate", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Underground", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Underground", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Underground", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Underground", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Underground", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Underground", "Game", nullptr));
        labelProfileGameValue->setText(QCoreApplication::translate("Underground", "Brilliant Diamond", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("Underground", "Filters", nullptr));
        closebutton->setText(QCoreApplication::translate("Underground", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Underground: public Ui_Underground {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDERGROUND_H
