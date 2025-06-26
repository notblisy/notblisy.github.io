/********************************************************************************
** Form generated from reading UI file 'Raids.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAIDS_H
#define UI_RAIDS_H

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
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Raids
{
public:
    QGridLayout *gridLayout_2;
    TableView *tableView;
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
    QGroupBox *groupBoxRaidsSettings;
    QGridLayout *gridLayout;
    QLabel *labelRarity;
    QComboBox *comboBoxRarity;
    QLabel *labelSpecies;
    QComboBox *comboBoxSpecies;
    QLabel *labelLevel;
    QSpinBox *spinBoxLevel;
    QFrame *line_2;
    QLabel *labelAbilityType;
    QComboBox *comboBoxAbilityType;
    QLabel *labelGenderType;
    QComboBox *comboBoxGenderType;
    QLabel *labelGenderRatio;
    QComboBox *comboBoxGenderRatio;
    QLabel *labelGigantamax;
    QLabel *labelGigantamaxValue;
    QLabel *labelIVCount;
    QSpinBox *spinBoxIVCount;
    QLabel *labelShinyType;
    QComboBox *comboBoxShinyType;
    QGroupBox *groupBoxRaidsFilters;
    QGridLayout *gridLayout_19;
    Filter *filter;
    QGroupBox *groupBoxRaidsRNGInfo;
    QGridLayout *gridLayout_3;
    QLabel *labelLocation;
    QComboBox *comboBoxLocation;
    QLabel *labelDen;
    ComboBox *comboBoxDen;
    QLabel *labelSeed;
    TextBox *textBoxSeed;
    QLabel *labelInitialAdvances;
    TextBox *textBoxInitialAdvances;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QLabel *labelOffset;
    TextBox *textBoxOffset;
    QPushButton *pushButtonGenerate;
    QToolButton *closebutton;

    void setupUi(QWidget *Raids)
    {
        if (Raids->objectName().isEmpty())
            Raids->setObjectName("Raids");
        Raids->resize(1078, 597);
        gridLayout_2 = new QGridLayout(Raids);
        gridLayout_2->setObjectName("gridLayout_2");
        tableView = new TableView(Raids);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 3, 0, 1, 3);

        groupBoxProfile = new QGroupBox(Raids);
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

        groupBoxRaidsSettings = new QGroupBox(Raids);
        groupBoxRaidsSettings->setObjectName("groupBoxRaidsSettings");
        gridLayout = new QGridLayout(groupBoxRaidsSettings);
        gridLayout->setObjectName("gridLayout");
        labelRarity = new QLabel(groupBoxRaidsSettings);
        labelRarity->setObjectName("labelRarity");

        gridLayout->addWidget(labelRarity, 0, 0, 1, 1);

        comboBoxRarity = new QComboBox(groupBoxRaidsSettings);
        comboBoxRarity->addItem(QString());
        comboBoxRarity->addItem(QString());
        comboBoxRarity->setObjectName("comboBoxRarity");

        gridLayout->addWidget(comboBoxRarity, 0, 1, 1, 1);

        labelSpecies = new QLabel(groupBoxRaidsSettings);
        labelSpecies->setObjectName("labelSpecies");

        gridLayout->addWidget(labelSpecies, 0, 2, 1, 1);

        comboBoxSpecies = new QComboBox(groupBoxRaidsSettings);
        comboBoxSpecies->setObjectName("comboBoxSpecies");

        gridLayout->addWidget(comboBoxSpecies, 0, 3, 1, 1);

        labelLevel = new QLabel(groupBoxRaidsSettings);
        labelLevel->setObjectName("labelLevel");

        gridLayout->addWidget(labelLevel, 1, 0, 1, 1);

        spinBoxLevel = new QSpinBox(groupBoxRaidsSettings);
        spinBoxLevel->setObjectName("spinBoxLevel");
        spinBoxLevel->setMinimum(1);
        spinBoxLevel->setMaximum(100);

        gridLayout->addWidget(spinBoxLevel, 1, 1, 1, 1);

        line_2 = new QFrame(groupBoxRaidsSettings);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 4);

        labelAbilityType = new QLabel(groupBoxRaidsSettings);
        labelAbilityType->setObjectName("labelAbilityType");

        gridLayout->addWidget(labelAbilityType, 3, 0, 1, 1);

        comboBoxAbilityType = new QComboBox(groupBoxRaidsSettings);
        comboBoxAbilityType->addItem(QString::fromUtf8("1"));
        comboBoxAbilityType->addItem(QString::fromUtf8("2"));
        comboBoxAbilityType->addItem(QString::fromUtf8("H"));
        comboBoxAbilityType->addItem(QString::fromUtf8("1/2"));
        comboBoxAbilityType->addItem(QString::fromUtf8("1/2/H"));
        comboBoxAbilityType->setObjectName("comboBoxAbilityType");
        comboBoxAbilityType->setEnabled(false);

        gridLayout->addWidget(comboBoxAbilityType, 3, 1, 1, 1);

        labelGenderType = new QLabel(groupBoxRaidsSettings);
        labelGenderType->setObjectName("labelGenderType");

        gridLayout->addWidget(labelGenderType, 4, 0, 1, 1);

        comboBoxGenderType = new QComboBox(groupBoxRaidsSettings);
        comboBoxGenderType->addItem(QString());
        comboBoxGenderType->addItem(QString::fromUtf8("\342\231\202"));
        comboBoxGenderType->addItem(QString::fromUtf8("\342\231\200"));
        comboBoxGenderType->addItem(QString());
        comboBoxGenderType->setObjectName("comboBoxGenderType");
        comboBoxGenderType->setEnabled(false);

        gridLayout->addWidget(comboBoxGenderType, 4, 1, 1, 1);

        labelGenderRatio = new QLabel(groupBoxRaidsSettings);
        labelGenderRatio->setObjectName("labelGenderRatio");

        gridLayout->addWidget(labelGenderRatio, 5, 0, 1, 1);

        comboBoxGenderRatio = new QComboBox(groupBoxRaidsSettings);
        comboBoxGenderRatio->addItem(QString());
        comboBoxGenderRatio->addItem(QString());
        comboBoxGenderRatio->addItem(QString());
        comboBoxGenderRatio->addItem(QString::fromUtf8("12.5% \342\231\200"));
        comboBoxGenderRatio->addItem(QString::fromUtf8("25% \342\231\200"));
        comboBoxGenderRatio->addItem(QString::fromUtf8("50% \342\231\200"));
        comboBoxGenderRatio->addItem(QString::fromUtf8("75% \342\231\200"));
        comboBoxGenderRatio->setObjectName("comboBoxGenderRatio");
        comboBoxGenderRatio->setEnabled(false);

        gridLayout->addWidget(comboBoxGenderRatio, 5, 1, 1, 1);

        labelGigantamax = new QLabel(groupBoxRaidsSettings);
        labelGigantamax->setObjectName("labelGigantamax");

        gridLayout->addWidget(labelGigantamax, 3, 2, 1, 1);

        labelGigantamaxValue = new QLabel(groupBoxRaidsSettings);
        labelGigantamaxValue->setObjectName("labelGigantamaxValue");

        gridLayout->addWidget(labelGigantamaxValue, 3, 3, 1, 1);

        labelIVCount = new QLabel(groupBoxRaidsSettings);
        labelIVCount->setObjectName("labelIVCount");

        gridLayout->addWidget(labelIVCount, 4, 2, 1, 1);

        spinBoxIVCount = new QSpinBox(groupBoxRaidsSettings);
        spinBoxIVCount->setObjectName("spinBoxIVCount");
        spinBoxIVCount->setEnabled(false);
        spinBoxIVCount->setMinimum(1);
        spinBoxIVCount->setMaximum(6);

        gridLayout->addWidget(spinBoxIVCount, 4, 3, 1, 1);

        labelShinyType = new QLabel(groupBoxRaidsSettings);
        labelShinyType->setObjectName("labelShinyType");

        gridLayout->addWidget(labelShinyType, 5, 2, 1, 1);

        comboBoxShinyType = new QComboBox(groupBoxRaidsSettings);
        comboBoxShinyType->addItem(QString());
        comboBoxShinyType->addItem(QString());
        comboBoxShinyType->addItem(QString());
        comboBoxShinyType->setObjectName("comboBoxShinyType");
        comboBoxShinyType->setEnabled(false);

        gridLayout->addWidget(comboBoxShinyType, 5, 3, 1, 1);


        gridLayout_2->addWidget(groupBoxRaidsSettings, 2, 1, 1, 1);

        groupBoxRaidsFilters = new QGroupBox(Raids);
        groupBoxRaidsFilters->setObjectName("groupBoxRaidsFilters");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxRaidsFilters->sizePolicy().hasHeightForWidth());
        groupBoxRaidsFilters->setSizePolicy(sizePolicy);
        gridLayout_19 = new QGridLayout(groupBoxRaidsFilters);
        gridLayout_19->setObjectName("gridLayout_19");
        filter = new Filter(groupBoxRaidsFilters);
        filter->setObjectName("filter");

        gridLayout_19->addWidget(filter, 0, 0, 2, 1);


        gridLayout_2->addWidget(groupBoxRaidsFilters, 2, 2, 1, 1);

        groupBoxRaidsRNGInfo = new QGroupBox(Raids);
        groupBoxRaidsRNGInfo->setObjectName("groupBoxRaidsRNGInfo");
        gridLayout_3 = new QGridLayout(groupBoxRaidsRNGInfo);
        gridLayout_3->setObjectName("gridLayout_3");
        labelLocation = new QLabel(groupBoxRaidsRNGInfo);
        labelLocation->setObjectName("labelLocation");

        gridLayout_3->addWidget(labelLocation, 0, 0, 1, 1);

        comboBoxLocation = new QComboBox(groupBoxRaidsRNGInfo);
        comboBoxLocation->addItem(QString());
        comboBoxLocation->addItem(QString());
        comboBoxLocation->addItem(QString());
        comboBoxLocation->addItem(QString());
        comboBoxLocation->setObjectName("comboBoxLocation");

        gridLayout_3->addWidget(comboBoxLocation, 0, 1, 1, 1);

        labelDen = new QLabel(groupBoxRaidsRNGInfo);
        labelDen->setObjectName("labelDen");

        gridLayout_3->addWidget(labelDen, 1, 0, 1, 1);

        comboBoxDen = new ComboBox(groupBoxRaidsRNGInfo);
        comboBoxDen->setObjectName("comboBoxDen");

        gridLayout_3->addWidget(comboBoxDen, 1, 1, 1, 1);

        labelSeed = new QLabel(groupBoxRaidsRNGInfo);
        labelSeed->setObjectName("labelSeed");

        gridLayout_3->addWidget(labelSeed, 2, 0, 1, 1);

        textBoxSeed = new TextBox(groupBoxRaidsRNGInfo);
        textBoxSeed->setObjectName("textBoxSeed");

        gridLayout_3->addWidget(textBoxSeed, 2, 1, 1, 1);

        labelInitialAdvances = new QLabel(groupBoxRaidsRNGInfo);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_3->addWidget(labelInitialAdvances, 3, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxRaidsRNGInfo);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(textBoxInitialAdvances, 3, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxRaidsRNGInfo);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_3->addWidget(labelMaxAdvances, 4, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxRaidsRNGInfo);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_3->addWidget(textBoxMaxAdvances, 4, 1, 1, 1);

        labelOffset = new QLabel(groupBoxRaidsRNGInfo);
        labelOffset->setObjectName("labelOffset");

        gridLayout_3->addWidget(labelOffset, 5, 0, 1, 1);

        textBoxOffset = new TextBox(groupBoxRaidsRNGInfo);
        textBoxOffset->setObjectName("textBoxOffset");

        gridLayout_3->addWidget(textBoxOffset, 5, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRaidsRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_3->addWidget(pushButtonGenerate, 6, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxRaidsRNGInfo, 2, 0, 1, 1);

        closebutton = new QToolButton(Raids);
        closebutton->setObjectName("closebutton");

        gridLayout_2->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, comboBoxLocation);
        QWidget::setTabOrder(comboBoxLocation, comboBoxDen);
        QWidget::setTabOrder(comboBoxDen, textBoxSeed);
        QWidget::setTabOrder(textBoxSeed, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, comboBoxRarity);
        QWidget::setTabOrder(comboBoxRarity, comboBoxSpecies);
        QWidget::setTabOrder(comboBoxSpecies, spinBoxLevel);
        QWidget::setTabOrder(spinBoxLevel, comboBoxAbilityType);
        QWidget::setTabOrder(comboBoxAbilityType, comboBoxGenderType);
        QWidget::setTabOrder(comboBoxGenderType, comboBoxGenderRatio);
        QWidget::setTabOrder(comboBoxGenderRatio, spinBoxIVCount);
        QWidget::setTabOrder(spinBoxIVCount, comboBoxShinyType);
        QWidget::setTabOrder(comboBoxShinyType, tableView);

        retranslateUi(Raids);

        QMetaObject::connectSlotsByName(Raids);
    } // setupUi

    void retranslateUi(QWidget *Raids)
    {
        Raids->setWindowTitle(QCoreApplication::translate("Raids", "Gen 8 Raids", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Raids", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Raids", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Raids", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Raids", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Raids", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Raids", "Game", nullptr));
        groupBoxRaidsSettings->setTitle(QCoreApplication::translate("Raids", "Settings", nullptr));
        labelRarity->setText(QCoreApplication::translate("Raids", "Rarity", nullptr));
        comboBoxRarity->setItemText(0, QCoreApplication::translate("Raids", "Normal", nullptr));
        comboBoxRarity->setItemText(1, QCoreApplication::translate("Raids", "Rare", nullptr));

        labelSpecies->setText(QCoreApplication::translate("Raids", "Species", nullptr));
        labelLevel->setText(QCoreApplication::translate("Raids", "Level", nullptr));
        labelAbilityType->setText(QCoreApplication::translate("Raids", "Ability", nullptr));

        labelGenderType->setText(QCoreApplication::translate("Raids", "Gender", nullptr));
        comboBoxGenderType->setItemText(0, QCoreApplication::translate("Raids", "Random", nullptr));
        comboBoxGenderType->setItemText(3, QCoreApplication::translate("Raids", "Genderless", nullptr));

        labelGenderRatio->setText(QCoreApplication::translate("Raids", "Gender Ratio", nullptr));
        comboBoxGenderRatio->setItemText(0, QCoreApplication::translate("Raids", "Genderless", nullptr));
        comboBoxGenderRatio->setItemText(1, QCoreApplication::translate("Raids", "Only \342\231\202", nullptr));
        comboBoxGenderRatio->setItemText(2, QCoreApplication::translate("Raids", "Only \342\231\200", nullptr));

        labelGigantamax->setText(QCoreApplication::translate("Raids", "Gigantamax", nullptr));
        labelGigantamaxValue->setText(QCoreApplication::translate("Raids", "No", nullptr));
        labelIVCount->setText(QCoreApplication::translate("Raids", "IV Count", nullptr));
        labelShinyType->setText(QCoreApplication::translate("Raids", "Shiny Type", nullptr));
        comboBoxShinyType->setItemText(0, QCoreApplication::translate("Raids", "Random", nullptr));
        comboBoxShinyType->setItemText(1, QCoreApplication::translate("Raids", "Force non-shiny", nullptr));
        comboBoxShinyType->setItemText(2, QCoreApplication::translate("Raids", "Force shiny", nullptr));

        groupBoxRaidsFilters->setTitle(QCoreApplication::translate("Raids", "Filters", nullptr));
        groupBoxRaidsRNGInfo->setTitle(QCoreApplication::translate("Raids", "RNG Info", nullptr));
        labelLocation->setText(QCoreApplication::translate("Raids", "Location", nullptr));
        comboBoxLocation->setItemText(0, QCoreApplication::translate("Raids", "Wild Area", nullptr));
        comboBoxLocation->setItemText(1, QCoreApplication::translate("Raids", "Isle of Armor", nullptr));
        comboBoxLocation->setItemText(2, QCoreApplication::translate("Raids", "Crown Tundra", nullptr));
        comboBoxLocation->setItemText(3, QCoreApplication::translate("Raids", "Event", nullptr));

        labelDen->setText(QCoreApplication::translate("Raids", "Den", nullptr));
        labelSeed->setText(QCoreApplication::translate("Raids", "Seed", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Raids", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Raids", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Raids", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Raids", "Generate", nullptr));
        closebutton->setText(QCoreApplication::translate("Raids", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Raids: public Ui_Raids {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAIDS_H
