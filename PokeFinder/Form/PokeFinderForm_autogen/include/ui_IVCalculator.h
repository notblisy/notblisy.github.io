/********************************************************************************
** Form generated from reading UI file 'IVCalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IVCALCULATOR_H
#define UI_IVCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IVCalculator
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxResults;
    QGridLayout *gridLayout_5;
    QLabel *labelHPIV;
    QLabel *labelHPIVValue;
    QLabel *labelAtkIV;
    QLabel *labelAtkIVValue;
    QLabel *labelDefIV;
    QLabel *labelDefIVValue;
    QLabel *labelSpAIV;
    QLabel *labelSpAIVValue;
    QLabel *labelSpDIV;
    QLabel *labelSpDIVValue;
    QLabel *labelSpeIV;
    QLabel *labelSpeIVValue;
    QLabel *labelNextLevel;
    QLabel *labelNextLevelValue;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout;
    QLabel *labelGame;
    QLabel *labelSpecies;
    QLabel *labelAltForm;
    ComboBox *comboBoxGame;
    ComboBox *comboBoxPokemon;
    QComboBox *comboBoxAltForm;
    QLabel *labelCharacteristic;
    QLabel *labelHiddenPower;
    QLabel *labelNature;
    QComboBox *comboBoxCharacteristic;
    QComboBox *comboBoxHiddenPower;
    QComboBox *comboBoxNature;
    QPushButton *pushButtonAddRow;
    QPushButton *pushButtonRemoveRow;
    QPushButton *pushButtonFindIVs;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayoutEntry;
    QLabel *labelLevel;
    QLabel *labelHP;
    QLabel *labelAtk;
    QLabel *labelDef;
    QLabel *labelSpA;
    QLabel *labelSpD;
    QLabel *labelSpe;
    QGroupBox *groupBoxInformation;
    QGridLayout *gridLayout_4;
    QLabel *labelBaseHP;
    QLabel *labelBaseHPValue;
    QLabel *labelBaseAtk;
    QLabel *labelBaseAtkValue;
    QLabel *labelBaseDef;
    QLabel *labelBaseDefValue;
    QLabel *labelBaseSpA;
    QLabel *labelBaseSpAValue;
    QLabel *labelBaseSpD;
    QLabel *labelBaseSpDValue;
    QLabel *labelBaseSpe;
    QLabel *labelBaseSpeValue;
    QToolButton *closebutton;

    void setupUi(QWidget *IVCalculator)
    {
        if (IVCalculator->objectName().isEmpty())
            IVCalculator->setObjectName("IVCalculator");
        IVCalculator->resize(630, 420);
        gridLayout_3 = new QGridLayout(IVCalculator);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBoxResults = new QGroupBox(IVCalculator);
        groupBoxResults->setObjectName("groupBoxResults");
        gridLayout_5 = new QGridLayout(groupBoxResults);
        gridLayout_5->setObjectName("gridLayout_5");
        labelHPIV = new QLabel(groupBoxResults);
        labelHPIV->setObjectName("labelHPIV");

        gridLayout_5->addWidget(labelHPIV, 0, 0, 1, 1);

        labelHPIVValue = new QLabel(groupBoxResults);
        labelHPIVValue->setObjectName("labelHPIVValue");

        gridLayout_5->addWidget(labelHPIVValue, 0, 1, 1, 1);

        labelAtkIV = new QLabel(groupBoxResults);
        labelAtkIV->setObjectName("labelAtkIV");

        gridLayout_5->addWidget(labelAtkIV, 1, 0, 1, 1);

        labelAtkIVValue = new QLabel(groupBoxResults);
        labelAtkIVValue->setObjectName("labelAtkIVValue");

        gridLayout_5->addWidget(labelAtkIVValue, 1, 1, 1, 1);

        labelDefIV = new QLabel(groupBoxResults);
        labelDefIV->setObjectName("labelDefIV");

        gridLayout_5->addWidget(labelDefIV, 2, 0, 1, 1);

        labelDefIVValue = new QLabel(groupBoxResults);
        labelDefIVValue->setObjectName("labelDefIVValue");

        gridLayout_5->addWidget(labelDefIVValue, 2, 1, 1, 1);

        labelSpAIV = new QLabel(groupBoxResults);
        labelSpAIV->setObjectName("labelSpAIV");

        gridLayout_5->addWidget(labelSpAIV, 3, 0, 1, 1);

        labelSpAIVValue = new QLabel(groupBoxResults);
        labelSpAIVValue->setObjectName("labelSpAIVValue");

        gridLayout_5->addWidget(labelSpAIVValue, 3, 1, 1, 1);

        labelSpDIV = new QLabel(groupBoxResults);
        labelSpDIV->setObjectName("labelSpDIV");

        gridLayout_5->addWidget(labelSpDIV, 4, 0, 1, 1);

        labelSpDIVValue = new QLabel(groupBoxResults);
        labelSpDIVValue->setObjectName("labelSpDIVValue");

        gridLayout_5->addWidget(labelSpDIVValue, 4, 1, 1, 1);

        labelSpeIV = new QLabel(groupBoxResults);
        labelSpeIV->setObjectName("labelSpeIV");

        gridLayout_5->addWidget(labelSpeIV, 5, 0, 1, 1);

        labelSpeIVValue = new QLabel(groupBoxResults);
        labelSpeIVValue->setObjectName("labelSpeIVValue");

        gridLayout_5->addWidget(labelSpeIVValue, 5, 1, 1, 1);

        labelNextLevel = new QLabel(groupBoxResults);
        labelNextLevel->setObjectName("labelNextLevel");

        gridLayout_5->addWidget(labelNextLevel, 6, 0, 1, 1);

        labelNextLevelValue = new QLabel(groupBoxResults);
        labelNextLevelValue->setObjectName("labelNextLevelValue");

        gridLayout_5->addWidget(labelNextLevelValue, 6, 1, 1, 1);


        gridLayout_3->addWidget(groupBoxResults, 2, 1, 1, 1);

        groupBoxSettings = new QGroupBox(IVCalculator);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout = new QGridLayout(groupBoxSettings);
        gridLayout->setObjectName("gridLayout");
        labelGame = new QLabel(groupBoxSettings);
        labelGame->setObjectName("labelGame");

        gridLayout->addWidget(labelGame, 0, 0, 1, 1);

        labelSpecies = new QLabel(groupBoxSettings);
        labelSpecies->setObjectName("labelSpecies");

        gridLayout->addWidget(labelSpecies, 0, 1, 1, 1);

        labelAltForm = new QLabel(groupBoxSettings);
        labelAltForm->setObjectName("labelAltForm");

        gridLayout->addWidget(labelAltForm, 0, 2, 1, 1);

        comboBoxGame = new ComboBox(groupBoxSettings);
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->setObjectName("comboBoxGame");

        gridLayout->addWidget(comboBoxGame, 1, 0, 1, 1);

        comboBoxPokemon = new ComboBox(groupBoxSettings);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout->addWidget(comboBoxPokemon, 1, 1, 1, 1);

        comboBoxAltForm = new QComboBox(groupBoxSettings);
        comboBoxAltForm->setObjectName("comboBoxAltForm");

        gridLayout->addWidget(comboBoxAltForm, 1, 2, 1, 1);

        labelCharacteristic = new QLabel(groupBoxSettings);
        labelCharacteristic->setObjectName("labelCharacteristic");

        gridLayout->addWidget(labelCharacteristic, 2, 0, 1, 1);

        labelHiddenPower = new QLabel(groupBoxSettings);
        labelHiddenPower->setObjectName("labelHiddenPower");

        gridLayout->addWidget(labelHiddenPower, 2, 1, 1, 1);

        labelNature = new QLabel(groupBoxSettings);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 2, 2, 1, 1);

        comboBoxCharacteristic = new QComboBox(groupBoxSettings);
        comboBoxCharacteristic->addItem(QString());
        comboBoxCharacteristic->setObjectName("comboBoxCharacteristic");

        gridLayout->addWidget(comboBoxCharacteristic, 3, 0, 1, 1);

        comboBoxHiddenPower = new QComboBox(groupBoxSettings);
        comboBoxHiddenPower->addItem(QString());
        comboBoxHiddenPower->setObjectName("comboBoxHiddenPower");

        gridLayout->addWidget(comboBoxHiddenPower, 3, 1, 1, 1);

        comboBoxNature = new QComboBox(groupBoxSettings);
        comboBoxNature->setObjectName("comboBoxNature");

        gridLayout->addWidget(comboBoxNature, 3, 2, 1, 1);

        pushButtonAddRow = new QPushButton(groupBoxSettings);
        pushButtonAddRow->setObjectName("pushButtonAddRow");

        gridLayout->addWidget(pushButtonAddRow, 4, 0, 1, 1);

        pushButtonRemoveRow = new QPushButton(groupBoxSettings);
        pushButtonRemoveRow->setObjectName("pushButtonRemoveRow");

        gridLayout->addWidget(pushButtonRemoveRow, 4, 1, 1, 1);

        pushButtonFindIVs = new QPushButton(groupBoxSettings);
        pushButtonFindIVs->setObjectName("pushButtonFindIVs");

        gridLayout->addWidget(pushButtonFindIVs, 4, 2, 1, 1);

        scrollArea = new QScrollArea(groupBoxSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 351, 206));
        gridLayoutEntry = new QGridLayout(scrollAreaWidgetContents);
        gridLayoutEntry->setObjectName("gridLayoutEntry");
        labelLevel = new QLabel(scrollAreaWidgetContents);
        labelLevel->setObjectName("labelLevel");

        gridLayoutEntry->addWidget(labelLevel, 0, 0, 1, 1);

        labelHP = new QLabel(scrollAreaWidgetContents);
        labelHP->setObjectName("labelHP");

        gridLayoutEntry->addWidget(labelHP, 0, 1, 1, 1);

        labelAtk = new QLabel(scrollAreaWidgetContents);
        labelAtk->setObjectName("labelAtk");

        gridLayoutEntry->addWidget(labelAtk, 0, 2, 1, 1);

        labelDef = new QLabel(scrollAreaWidgetContents);
        labelDef->setObjectName("labelDef");

        gridLayoutEntry->addWidget(labelDef, 0, 3, 1, 1);

        labelSpA = new QLabel(scrollAreaWidgetContents);
        labelSpA->setObjectName("labelSpA");

        gridLayoutEntry->addWidget(labelSpA, 0, 4, 1, 1);

        labelSpD = new QLabel(scrollAreaWidgetContents);
        labelSpD->setObjectName("labelSpD");

        gridLayoutEntry->addWidget(labelSpD, 0, 5, 1, 1);

        labelSpe = new QLabel(scrollAreaWidgetContents);
        labelSpe->setObjectName("labelSpe");

        gridLayoutEntry->addWidget(labelSpe, 0, 6, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 5, 0, 1, 3);


        gridLayout_3->addWidget(groupBoxSettings, 1, 0, 2, 1);

        groupBoxInformation = new QGroupBox(IVCalculator);
        groupBoxInformation->setObjectName("groupBoxInformation");
        gridLayout_4 = new QGridLayout(groupBoxInformation);
        gridLayout_4->setObjectName("gridLayout_4");
        labelBaseHP = new QLabel(groupBoxInformation);
        labelBaseHP->setObjectName("labelBaseHP");

        gridLayout_4->addWidget(labelBaseHP, 0, 0, 1, 1);

        labelBaseHPValue = new QLabel(groupBoxInformation);
        labelBaseHPValue->setObjectName("labelBaseHPValue");

        gridLayout_4->addWidget(labelBaseHPValue, 0, 1, 1, 1);

        labelBaseAtk = new QLabel(groupBoxInformation);
        labelBaseAtk->setObjectName("labelBaseAtk");

        gridLayout_4->addWidget(labelBaseAtk, 1, 0, 1, 1);

        labelBaseAtkValue = new QLabel(groupBoxInformation);
        labelBaseAtkValue->setObjectName("labelBaseAtkValue");

        gridLayout_4->addWidget(labelBaseAtkValue, 1, 1, 1, 1);

        labelBaseDef = new QLabel(groupBoxInformation);
        labelBaseDef->setObjectName("labelBaseDef");

        gridLayout_4->addWidget(labelBaseDef, 2, 0, 1, 1);

        labelBaseDefValue = new QLabel(groupBoxInformation);
        labelBaseDefValue->setObjectName("labelBaseDefValue");

        gridLayout_4->addWidget(labelBaseDefValue, 2, 1, 1, 1);

        labelBaseSpA = new QLabel(groupBoxInformation);
        labelBaseSpA->setObjectName("labelBaseSpA");

        gridLayout_4->addWidget(labelBaseSpA, 3, 0, 1, 1);

        labelBaseSpAValue = new QLabel(groupBoxInformation);
        labelBaseSpAValue->setObjectName("labelBaseSpAValue");

        gridLayout_4->addWidget(labelBaseSpAValue, 3, 1, 1, 1);

        labelBaseSpD = new QLabel(groupBoxInformation);
        labelBaseSpD->setObjectName("labelBaseSpD");

        gridLayout_4->addWidget(labelBaseSpD, 4, 0, 1, 1);

        labelBaseSpDValue = new QLabel(groupBoxInformation);
        labelBaseSpDValue->setObjectName("labelBaseSpDValue");

        gridLayout_4->addWidget(labelBaseSpDValue, 4, 1, 1, 1);

        labelBaseSpe = new QLabel(groupBoxInformation);
        labelBaseSpe->setObjectName("labelBaseSpe");

        gridLayout_4->addWidget(labelBaseSpe, 5, 0, 1, 1);

        labelBaseSpeValue = new QLabel(groupBoxInformation);
        labelBaseSpeValue->setObjectName("labelBaseSpeValue");

        gridLayout_4->addWidget(labelBaseSpeValue, 5, 1, 1, 1);


        gridLayout_3->addWidget(groupBoxInformation, 1, 1, 1, 1);

        closebutton = new QToolButton(IVCalculator);
        closebutton->setObjectName("closebutton");

        gridLayout_3->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(IVCalculator);

        QMetaObject::connectSlotsByName(IVCalculator);
    } // setupUi

    void retranslateUi(QWidget *IVCalculator)
    {
        IVCalculator->setWindowTitle(QCoreApplication::translate("IVCalculator", "IV Calculator", nullptr));
        groupBoxResults->setTitle(QCoreApplication::translate("IVCalculator", "Results", nullptr));
        labelHPIV->setText(QCoreApplication::translate("IVCalculator", "HP", nullptr));
        labelAtkIV->setText(QCoreApplication::translate("IVCalculator", "Atk", nullptr));
        labelDefIV->setText(QCoreApplication::translate("IVCalculator", "Def", nullptr));
        labelSpAIV->setText(QCoreApplication::translate("IVCalculator", "SpA", nullptr));
        labelSpDIV->setText(QCoreApplication::translate("IVCalculator", "SpD", nullptr));
        labelSpeIV->setText(QCoreApplication::translate("IVCalculator", "Spe", nullptr));
        labelNextLevel->setText(QCoreApplication::translate("IVCalculator", "Next level", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("IVCalculator", "Settings", nullptr));
        labelGame->setText(QCoreApplication::translate("IVCalculator", "Game", nullptr));
        labelSpecies->setText(QCoreApplication::translate("IVCalculator", "Pok\303\251mon", nullptr));
        labelAltForm->setText(QCoreApplication::translate("IVCalculator", "Altform", nullptr));
        comboBoxGame->setItemText(0, QCoreApplication::translate("IVCalculator", "Emerald/RS/FRLG", nullptr));
        comboBoxGame->setItemText(1, QCoreApplication::translate("IVCalculator", "Diamond/Pearl/Platinum", nullptr));
        comboBoxGame->setItemText(2, QCoreApplication::translate("IVCalculator", "Heartgold/Soulsilver", nullptr));
        comboBoxGame->setItemText(3, QCoreApplication::translate("IVCalculator", "Black/White/Black 2/White 2", nullptr));
        comboBoxGame->setItemText(4, QCoreApplication::translate("IVCalculator", "Sword/Shield", nullptr));
        comboBoxGame->setItemText(5, QCoreApplication::translate("IVCalculator", "Brilliant Diamond/Shining Pearl", nullptr));

        labelCharacteristic->setText(QCoreApplication::translate("IVCalculator", "Characteristic", nullptr));
        labelHiddenPower->setText(QCoreApplication::translate("IVCalculator", "Hidden Power", nullptr));
        labelNature->setText(QCoreApplication::translate("IVCalculator", "Nature", nullptr));
        comboBoxCharacteristic->setItemText(0, QCoreApplication::translate("IVCalculator", "None", nullptr));

        comboBoxHiddenPower->setItemText(0, QCoreApplication::translate("IVCalculator", "None", nullptr));

        pushButtonAddRow->setText(QCoreApplication::translate("IVCalculator", "Add row", nullptr));
        pushButtonRemoveRow->setText(QCoreApplication::translate("IVCalculator", "Remove row", nullptr));
        pushButtonFindIVs->setText(QCoreApplication::translate("IVCalculator", "Find IVs", nullptr));
        labelLevel->setText(QCoreApplication::translate("IVCalculator", "Level", nullptr));
        labelHP->setText(QCoreApplication::translate("IVCalculator", "HP", nullptr));
        labelAtk->setText(QCoreApplication::translate("IVCalculator", "Atk", nullptr));
        labelDef->setText(QCoreApplication::translate("IVCalculator", "Def", nullptr));
        labelSpA->setText(QCoreApplication::translate("IVCalculator", "SpA", nullptr));
        labelSpD->setText(QCoreApplication::translate("IVCalculator", "SpD", nullptr));
        labelSpe->setText(QCoreApplication::translate("IVCalculator", "Speed", nullptr));
        groupBoxInformation->setTitle(QCoreApplication::translate("IVCalculator", "Information", nullptr));
        labelBaseHP->setText(QCoreApplication::translate("IVCalculator", "Base HP", nullptr));
        labelBaseAtk->setText(QCoreApplication::translate("IVCalculator", "Base Atk", nullptr));
        labelBaseDef->setText(QCoreApplication::translate("IVCalculator", "Base Def", nullptr));
        labelBaseSpA->setText(QCoreApplication::translate("IVCalculator", "Base SpA", nullptr));
        labelBaseSpD->setText(QCoreApplication::translate("IVCalculator", "Base SpD", nullptr));
        labelBaseSpe->setText(QCoreApplication::translate("IVCalculator", "Base Spe", nullptr));
        closebutton->setText(QCoreApplication::translate("IVCalculator", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IVCalculator: public Ui_IVCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IVCALCULATOR_H
