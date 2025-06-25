/********************************************************************************
** Form generated from reading UI file 'Eggs8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGGS8_H
#define UI_EGGS8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/EggSettings.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Eggs8
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_4;
    QLabel *labelProfile;
    QComboBox *comboBoxProfiles;
    QPushButton *pushButtonProfileManager;
    QLabel *labelProfileTID;
    QLabel *labelProfileTIDValue;
    QLabel *labelProfileSID;
    QLabel *labelProfileSIDValue;
    QFrame *line_4;
    QLabel *labelProfileGame;
    QLabel *labelProfileGameValue;
    QLabel *labelProfileShinyCharm;
    QLabel *labelProfileShinyCharmValue;
    QFrame *line_5;
    QLabel *labelProfileOvalCharm;
    QLabel *labelProfileOvalCharmValue;
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout_3;
    QLabel *labelSeed0;
    TextBox *textBoxSeed0;
    QLabel *labelSeed1;
    TextBox *textBoxSeed1;
    QLabel *labelCompatibility;
    ComboBox *comboBoxCompatibility;
    QLabel *labelInitialAdvances;
    TextBox *textBoxInitialAdvances;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QLabel *labelOffset;
    TextBox *textBoxOffset;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_11;
    EggSettings *eggSettings;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout;
    Filter *filter;
    TableView *tableView;

    void setupUi(QWidget *Eggs8)
    {
        if (Eggs8->objectName().isEmpty())
            Eggs8->setObjectName("Eggs8");
        Eggs8->resize(1200, 700);
        gridLayout_2 = new QGridLayout(Eggs8);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxProfile = new QGroupBox(Eggs8);
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

        line_4 = new QFrame(groupBoxProfile);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_4, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_4->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_4->addWidget(labelProfileGameValue, 0, 6, 1, 1);

        labelProfileShinyCharm = new QLabel(groupBoxProfile);
        labelProfileShinyCharm->setObjectName("labelProfileShinyCharm");

        gridLayout_4->addWidget(labelProfileShinyCharm, 1, 5, 1, 1);

        labelProfileShinyCharmValue = new QLabel(groupBoxProfile);
        labelProfileShinyCharmValue->setObjectName("labelProfileShinyCharmValue");

        gridLayout_4->addWidget(labelProfileShinyCharmValue, 1, 6, 1, 1);

        line_5 = new QFrame(groupBoxProfile);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_5, 0, 7, 2, 1);

        labelProfileOvalCharm = new QLabel(groupBoxProfile);
        labelProfileOvalCharm->setObjectName("labelProfileOvalCharm");

        gridLayout_4->addWidget(labelProfileOvalCharm, 0, 8, 1, 1);

        labelProfileOvalCharmValue = new QLabel(groupBoxProfile);
        labelProfileOvalCharmValue->setObjectName("labelProfileOvalCharmValue");

        gridLayout_4->addWidget(labelProfileOvalCharmValue, 0, 9, 1, 1);


        gridLayout_2->addWidget(groupBoxProfile, 0, 0, 1, 3);

        groupBoxRNGInfo = new QGroupBox(Eggs8);
        groupBoxRNGInfo->setObjectName("groupBoxRNGInfo");
        gridLayout_3 = new QGridLayout(groupBoxRNGInfo);
        gridLayout_3->setObjectName("gridLayout_3");
        labelSeed0 = new QLabel(groupBoxRNGInfo);
        labelSeed0->setObjectName("labelSeed0");

        gridLayout_3->addWidget(labelSeed0, 0, 0, 1, 1);

        textBoxSeed0 = new TextBox(groupBoxRNGInfo);
        textBoxSeed0->setObjectName("textBoxSeed0");

        gridLayout_3->addWidget(textBoxSeed0, 0, 1, 1, 1);

        labelSeed1 = new QLabel(groupBoxRNGInfo);
        labelSeed1->setObjectName("labelSeed1");

        gridLayout_3->addWidget(labelSeed1, 1, 0, 1, 1);

        textBoxSeed1 = new TextBox(groupBoxRNGInfo);
        textBoxSeed1->setObjectName("textBoxSeed1");

        gridLayout_3->addWidget(textBoxSeed1, 1, 1, 1, 1);

        labelCompatibility = new QLabel(groupBoxRNGInfo);
        labelCompatibility->setObjectName("labelCompatibility");

        gridLayout_3->addWidget(labelCompatibility, 2, 0, 1, 1);

        comboBoxCompatibility = new ComboBox(groupBoxRNGInfo);
        comboBoxCompatibility->addItem(QString());
        comboBoxCompatibility->addItem(QString());
        comboBoxCompatibility->addItem(QString());
        comboBoxCompatibility->setObjectName("comboBoxCompatibility");

        gridLayout_3->addWidget(comboBoxCompatibility, 2, 1, 1, 1);

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


        gridLayout_2->addWidget(groupBoxRNGInfo, 1, 0, 1, 1);

        groupBoxSettings = new QGroupBox(Eggs8);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_11 = new QGridLayout(groupBoxSettings);
        gridLayout_11->setObjectName("gridLayout_11");
        eggSettings = new EggSettings(groupBoxSettings);
        eggSettings->setObjectName("eggSettings");

        gridLayout_11->addWidget(eggSettings, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxSettings, 1, 1, 1, 1);

        groupBoxFilters = new QGroupBox(Eggs8);
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


        gridLayout_2->addWidget(groupBoxFilters, 1, 2, 1, 1);

        tableView = new TableView(Eggs8);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 2, 0, 1, 3);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, comboBoxCompatibility);
        QWidget::setTabOrder(comboBoxCompatibility, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, tableView);

        retranslateUi(Eggs8);

        QMetaObject::connectSlotsByName(Eggs8);
    } // setupUi

    void retranslateUi(QWidget *Eggs8)
    {
        Eggs8->setWindowTitle(QCoreApplication::translate("Eggs8", "Gen 8 Eggs", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Eggs8", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Eggs8", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Eggs8", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Eggs8", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Eggs8", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Eggs8", "Game", nullptr));
        labelProfileShinyCharm->setText(QCoreApplication::translate("Eggs8", "Shiny Charm", nullptr));
        labelProfileOvalCharm->setText(QCoreApplication::translate("Eggs8", "Oval Charm", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("Eggs8", "RNG Info", nullptr));
        labelSeed0->setText(QCoreApplication::translate("Eggs8", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("Eggs8", "Seed 1", nullptr));
        labelCompatibility->setText(QCoreApplication::translate("Eggs8", "Compatibility", nullptr));
        comboBoxCompatibility->setItemText(0, QCoreApplication::translate("Eggs8", "The two don't seem to like each other", nullptr));
        comboBoxCompatibility->setItemText(1, QCoreApplication::translate("Eggs8", "The two seem to get along", nullptr));
        comboBoxCompatibility->setItemText(2, QCoreApplication::translate("Eggs8", "The two seem to get along very well", nullptr));

        labelInitialAdvances->setText(QCoreApplication::translate("Eggs8", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Eggs8", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Eggs8", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Eggs8", "Generate", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("Eggs8", "Settings", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("Eggs8", "Filters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eggs8: public Ui_Eggs8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGGS8_H
