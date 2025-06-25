/********************************************************************************
** Form generated from reading UI file 'GameCubeSeedFinder.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECUBESEEDFINDER_H
#define UI_GAMECUBESEEDFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_GameCubeSeedFinder
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGales;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBoxGalesSearch;
    QGridLayout *gridLayout_7;
    QLabel *labelGalesRound;
    QLabel *labelGalesResults;
    QPushButton *pushButtonGalesSearch;
    QPushButton *pushButtonGalesCancel;
    QPushButton *pushButtonGalesReset;
    QGroupBox *groupBoxGalesPokemon;
    QGridLayout *gridLayout_5;
    QLabel *labelGalesYourLead;
    QLabel *labelGalesTopLeft;
    QLabel *labelGalesTopRight;
    QComboBox *comboBoxGalesYourLead;
    TextBox *textBoxGalesTopLeft;
    TextBox *textBoxGalesTopRight;
    QLabel *labelGalesEnemyLead;
    QLabel *labelGalesBottomLeft;
    QLabel *labelGalesBottomRight;
    QComboBox *comboBoxGalesEnemyLead;
    TextBox *textBoxGalesBottomLeft;
    TextBox *textBoxGalesBottomRight;
    QProgressBar *progressBarGales;
    QWidget *tabColo;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxColoSearch;
    QGridLayout *gridLayout_3;
    QLabel *labelColoRound;
    QLabel *labelColoResults;
    QPushButton *pushButtonColoSearch;
    QPushButton *pushButtonColoCancel;
    QPushButton *pushButtonColoReset;
    QGroupBox *groupBoxColoTrainer;
    QGridLayout *gridLayout_4;
    QLabel *labelColoTrainer;
    QComboBox *comboBoxColoTrainer;
    QLabel *labelColoPartyLead;
    QComboBox *comboBoxColoPartyLead;
    QProgressBar *progressBarColo;
    QWidget *tabChannel;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBoxChannelSearch;
    QGridLayout *gridLayout_14;
    QLabel *labelChannelResult;
    QPushButton *pushButtonChannelSearch;
    QPushButton *pushButtonChannelCancel;
    QGroupBox *groupBoxChannelSettings;
    QGridLayout *gridLayout_8;
    QPushButton *pushButtonSNOC;
    QPushButton *pushButtonNSOC;
    QPushButton *pushButtonONSC;
    QPushButton *pushButtonNOSC;
    QPushButton *pushButtonSNCO;
    QPushButton *pushButtonNSCO;
    QPushButton *pushButtonCNSO;
    QPushButton *pushButtonNCSO;
    QPushButton *pushButtonONCS;
    QPushButton *pushButtonNOCS;
    QPushButton *pushButtonCNOS;
    QPushButton *pushButtonNCOS;
    QFrame *line;
    QPushButton *pushButtonChannelRemove;
    QPushButton *pushButtonChannelClear;
    QGroupBox *groupBoxInputs;
    QGridLayout *gridLayout_11;
    QListWidget *listWidgetInputs;
    QProgressBar *progressBarChannel;
    QButtonGroup *buttonGroupChannel;

    void setupUi(QWidget *GameCubeSeedFinder)
    {
        if (GameCubeSeedFinder->objectName().isEmpty())
            GameCubeSeedFinder->setObjectName("GameCubeSeedFinder");
        GameCubeSeedFinder->resize(640, 347);
        gridLayout = new QGridLayout(GameCubeSeedFinder);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(GameCubeSeedFinder);
        tabWidget->setObjectName("tabWidget");
        tabGales = new QWidget();
        tabGales->setObjectName("tabGales");
        gridLayout_6 = new QGridLayout(tabGales);
        gridLayout_6->setObjectName("gridLayout_6");
        groupBoxGalesSearch = new QGroupBox(tabGales);
        groupBoxGalesSearch->setObjectName("groupBoxGalesSearch");
        gridLayout_7 = new QGridLayout(groupBoxGalesSearch);
        gridLayout_7->setObjectName("gridLayout_7");
        labelGalesRound = new QLabel(groupBoxGalesSearch);
        labelGalesRound->setObjectName("labelGalesRound");

        gridLayout_7->addWidget(labelGalesRound, 0, 0, 1, 1);

        labelGalesResults = new QLabel(groupBoxGalesSearch);
        labelGalesResults->setObjectName("labelGalesResults");

        gridLayout_7->addWidget(labelGalesResults, 1, 0, 1, 1);

        pushButtonGalesSearch = new QPushButton(groupBoxGalesSearch);
        pushButtonGalesSearch->setObjectName("pushButtonGalesSearch");

        gridLayout_7->addWidget(pushButtonGalesSearch, 2, 0, 1, 1);

        pushButtonGalesCancel = new QPushButton(groupBoxGalesSearch);
        pushButtonGalesCancel->setObjectName("pushButtonGalesCancel");
        pushButtonGalesCancel->setEnabled(false);

        gridLayout_7->addWidget(pushButtonGalesCancel, 3, 0, 1, 1);

        pushButtonGalesReset = new QPushButton(groupBoxGalesSearch);
        pushButtonGalesReset->setObjectName("pushButtonGalesReset");

        gridLayout_7->addWidget(pushButtonGalesReset, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBoxGalesSearch, 0, 0, 1, 1);

        groupBoxGalesPokemon = new QGroupBox(tabGales);
        groupBoxGalesPokemon->setObjectName("groupBoxGalesPokemon");
        gridLayout_5 = new QGridLayout(groupBoxGalesPokemon);
        gridLayout_5->setObjectName("gridLayout_5");
        labelGalesYourLead = new QLabel(groupBoxGalesPokemon);
        labelGalesYourLead->setObjectName("labelGalesYourLead");

        gridLayout_5->addWidget(labelGalesYourLead, 0, 0, 1, 1);

        labelGalesTopLeft = new QLabel(groupBoxGalesPokemon);
        labelGalesTopLeft->setObjectName("labelGalesTopLeft");

        gridLayout_5->addWidget(labelGalesTopLeft, 0, 1, 1, 1);

        labelGalesTopRight = new QLabel(groupBoxGalesPokemon);
        labelGalesTopRight->setObjectName("labelGalesTopRight");

        gridLayout_5->addWidget(labelGalesTopRight, 0, 2, 1, 1);

        comboBoxGalesYourLead = new QComboBox(groupBoxGalesPokemon);
        comboBoxGalesYourLead->setObjectName("comboBoxGalesYourLead");

        gridLayout_5->addWidget(comboBoxGalesYourLead, 1, 0, 1, 1);

        textBoxGalesTopLeft = new TextBox(groupBoxGalesPokemon);
        textBoxGalesTopLeft->setObjectName("textBoxGalesTopLeft");

        gridLayout_5->addWidget(textBoxGalesTopLeft, 1, 1, 1, 1);

        textBoxGalesTopRight = new TextBox(groupBoxGalesPokemon);
        textBoxGalesTopRight->setObjectName("textBoxGalesTopRight");

        gridLayout_5->addWidget(textBoxGalesTopRight, 1, 2, 1, 1);

        labelGalesEnemyLead = new QLabel(groupBoxGalesPokemon);
        labelGalesEnemyLead->setObjectName("labelGalesEnemyLead");

        gridLayout_5->addWidget(labelGalesEnemyLead, 2, 0, 1, 1);

        labelGalesBottomLeft = new QLabel(groupBoxGalesPokemon);
        labelGalesBottomLeft->setObjectName("labelGalesBottomLeft");

        gridLayout_5->addWidget(labelGalesBottomLeft, 2, 1, 1, 1);

        labelGalesBottomRight = new QLabel(groupBoxGalesPokemon);
        labelGalesBottomRight->setObjectName("labelGalesBottomRight");

        gridLayout_5->addWidget(labelGalesBottomRight, 2, 2, 1, 1);

        comboBoxGalesEnemyLead = new QComboBox(groupBoxGalesPokemon);
        comboBoxGalesEnemyLead->setObjectName("comboBoxGalesEnemyLead");

        gridLayout_5->addWidget(comboBoxGalesEnemyLead, 3, 0, 1, 1);

        textBoxGalesBottomLeft = new TextBox(groupBoxGalesPokemon);
        textBoxGalesBottomLeft->setObjectName("textBoxGalesBottomLeft");

        gridLayout_5->addWidget(textBoxGalesBottomLeft, 3, 1, 1, 1);

        textBoxGalesBottomRight = new TextBox(groupBoxGalesPokemon);
        textBoxGalesBottomRight->setObjectName("textBoxGalesBottomRight");

        gridLayout_5->addWidget(textBoxGalesBottomRight, 3, 2, 1, 1);


        gridLayout_6->addWidget(groupBoxGalesPokemon, 0, 1, 1, 1);

        progressBarGales = new QProgressBar(tabGales);
        progressBarGales->setObjectName("progressBarGales");

        gridLayout_6->addWidget(progressBarGales, 1, 0, 1, 3);

        tabWidget->addTab(tabGales, QString());
        tabColo = new QWidget();
        tabColo->setObjectName("tabColo");
        gridLayout_2 = new QGridLayout(tabColo);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxColoSearch = new QGroupBox(tabColo);
        groupBoxColoSearch->setObjectName("groupBoxColoSearch");
        gridLayout_3 = new QGridLayout(groupBoxColoSearch);
        gridLayout_3->setObjectName("gridLayout_3");
        labelColoRound = new QLabel(groupBoxColoSearch);
        labelColoRound->setObjectName("labelColoRound");

        gridLayout_3->addWidget(labelColoRound, 0, 0, 1, 1);

        labelColoResults = new QLabel(groupBoxColoSearch);
        labelColoResults->setObjectName("labelColoResults");

        gridLayout_3->addWidget(labelColoResults, 1, 0, 1, 1);

        pushButtonColoSearch = new QPushButton(groupBoxColoSearch);
        pushButtonColoSearch->setObjectName("pushButtonColoSearch");

        gridLayout_3->addWidget(pushButtonColoSearch, 2, 0, 1, 1);

        pushButtonColoCancel = new QPushButton(groupBoxColoSearch);
        pushButtonColoCancel->setObjectName("pushButtonColoCancel");
        pushButtonColoCancel->setEnabled(false);

        gridLayout_3->addWidget(pushButtonColoCancel, 3, 0, 1, 1);

        pushButtonColoReset = new QPushButton(groupBoxColoSearch);
        pushButtonColoReset->setObjectName("pushButtonColoReset");

        gridLayout_3->addWidget(pushButtonColoReset, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxColoSearch, 0, 0, 1, 1);

        groupBoxColoTrainer = new QGroupBox(tabColo);
        groupBoxColoTrainer->setObjectName("groupBoxColoTrainer");
        gridLayout_4 = new QGridLayout(groupBoxColoTrainer);
        gridLayout_4->setObjectName("gridLayout_4");
        labelColoTrainer = new QLabel(groupBoxColoTrainer);
        labelColoTrainer->setObjectName("labelColoTrainer");

        gridLayout_4->addWidget(labelColoTrainer, 0, 0, 1, 1);

        comboBoxColoTrainer = new QComboBox(groupBoxColoTrainer);
        comboBoxColoTrainer->addItem(QString());
        comboBoxColoTrainer->addItem(QString());
        comboBoxColoTrainer->addItem(QString());
        comboBoxColoTrainer->setObjectName("comboBoxColoTrainer");

        gridLayout_4->addWidget(comboBoxColoTrainer, 0, 1, 1, 1);

        labelColoPartyLead = new QLabel(groupBoxColoTrainer);
        labelColoPartyLead->setObjectName("labelColoPartyLead");

        gridLayout_4->addWidget(labelColoPartyLead, 1, 0, 1, 1);

        comboBoxColoPartyLead = new QComboBox(groupBoxColoTrainer);
        comboBoxColoPartyLead->setObjectName("comboBoxColoPartyLead");

        gridLayout_4->addWidget(comboBoxColoPartyLead, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxColoTrainer, 0, 1, 1, 2);

        progressBarColo = new QProgressBar(tabColo);
        progressBarColo->setObjectName("progressBarColo");

        gridLayout_2->addWidget(progressBarColo, 1, 0, 1, 3);

        tabWidget->addTab(tabColo, QString());
        tabChannel = new QWidget();
        tabChannel->setObjectName("tabChannel");
        gridLayout_13 = new QGridLayout(tabChannel);
        gridLayout_13->setObjectName("gridLayout_13");
        groupBoxChannelSearch = new QGroupBox(tabChannel);
        groupBoxChannelSearch->setObjectName("groupBoxChannelSearch");
        gridLayout_14 = new QGridLayout(groupBoxChannelSearch);
        gridLayout_14->setObjectName("gridLayout_14");
        labelChannelResult = new QLabel(groupBoxChannelSearch);
        labelChannelResult->setObjectName("labelChannelResult");

        gridLayout_14->addWidget(labelChannelResult, 0, 0, 1, 1);

        pushButtonChannelSearch = new QPushButton(groupBoxChannelSearch);
        pushButtonChannelSearch->setObjectName("pushButtonChannelSearch");

        gridLayout_14->addWidget(pushButtonChannelSearch, 1, 0, 1, 1);

        pushButtonChannelCancel = new QPushButton(groupBoxChannelSearch);
        pushButtonChannelCancel->setObjectName("pushButtonChannelCancel");
        pushButtonChannelCancel->setEnabled(false);

        gridLayout_14->addWidget(pushButtonChannelCancel, 2, 0, 1, 1);


        gridLayout_13->addWidget(groupBoxChannelSearch, 0, 0, 1, 1);

        groupBoxChannelSettings = new QGroupBox(tabChannel);
        groupBoxChannelSettings->setObjectName("groupBoxChannelSettings");
        gridLayout_8 = new QGridLayout(groupBoxChannelSettings);
        gridLayout_8->setObjectName("gridLayout_8");
        pushButtonSNOC = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel = new QButtonGroup(GameCubeSeedFinder);
        buttonGroupChannel->setObjectName("buttonGroupChannel");
        buttonGroupChannel->addButton(pushButtonSNOC);
        pushButtonSNOC->setObjectName("pushButtonSNOC");

        gridLayout_8->addWidget(pushButtonSNOC, 0, 0, 1, 1);

        pushButtonNSOC = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNSOC);
        pushButtonNSOC->setObjectName("pushButtonNSOC");

        gridLayout_8->addWidget(pushButtonNSOC, 0, 1, 1, 1);

        pushButtonONSC = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonONSC);
        pushButtonONSC->setObjectName("pushButtonONSC");

        gridLayout_8->addWidget(pushButtonONSC, 1, 0, 1, 1);

        pushButtonNOSC = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNOSC);
        pushButtonNOSC->setObjectName("pushButtonNOSC");

        gridLayout_8->addWidget(pushButtonNOSC, 1, 1, 1, 1);

        pushButtonSNCO = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonSNCO);
        pushButtonSNCO->setObjectName("pushButtonSNCO");

        gridLayout_8->addWidget(pushButtonSNCO, 2, 0, 1, 1);

        pushButtonNSCO = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNSCO);
        pushButtonNSCO->setObjectName("pushButtonNSCO");

        gridLayout_8->addWidget(pushButtonNSCO, 2, 1, 1, 1);

        pushButtonCNSO = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonCNSO);
        pushButtonCNSO->setObjectName("pushButtonCNSO");

        gridLayout_8->addWidget(pushButtonCNSO, 3, 0, 1, 1);

        pushButtonNCSO = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNCSO);
        pushButtonNCSO->setObjectName("pushButtonNCSO");

        gridLayout_8->addWidget(pushButtonNCSO, 3, 1, 1, 1);

        pushButtonONCS = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonONCS);
        pushButtonONCS->setObjectName("pushButtonONCS");

        gridLayout_8->addWidget(pushButtonONCS, 4, 0, 1, 1);

        pushButtonNOCS = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNOCS);
        pushButtonNOCS->setObjectName("pushButtonNOCS");

        gridLayout_8->addWidget(pushButtonNOCS, 4, 1, 1, 1);

        pushButtonCNOS = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonCNOS);
        pushButtonCNOS->setObjectName("pushButtonCNOS");

        gridLayout_8->addWidget(pushButtonCNOS, 5, 0, 1, 1);

        pushButtonNCOS = new QPushButton(groupBoxChannelSettings);
        buttonGroupChannel->addButton(pushButtonNCOS);
        pushButtonNCOS->setObjectName("pushButtonNCOS");

        gridLayout_8->addWidget(pushButtonNCOS, 5, 1, 1, 1);

        line = new QFrame(groupBoxChannelSettings);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_8->addWidget(line, 6, 0, 1, 2);

        pushButtonChannelRemove = new QPushButton(groupBoxChannelSettings);
        pushButtonChannelRemove->setObjectName("pushButtonChannelRemove");

        gridLayout_8->addWidget(pushButtonChannelRemove, 7, 0, 1, 1);

        pushButtonChannelClear = new QPushButton(groupBoxChannelSettings);
        pushButtonChannelClear->setObjectName("pushButtonChannelClear");

        gridLayout_8->addWidget(pushButtonChannelClear, 7, 1, 1, 1);


        gridLayout_13->addWidget(groupBoxChannelSettings, 0, 1, 1, 1);

        groupBoxInputs = new QGroupBox(tabChannel);
        groupBoxInputs->setObjectName("groupBoxInputs");
        gridLayout_11 = new QGridLayout(groupBoxInputs);
        gridLayout_11->setObjectName("gridLayout_11");
        listWidgetInputs = new QListWidget(groupBoxInputs);
        listWidgetInputs->setObjectName("listWidgetInputs");

        gridLayout_11->addWidget(listWidgetInputs, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBoxInputs, 0, 2, 1, 1);

        progressBarChannel = new QProgressBar(tabChannel);
        progressBarChannel->setObjectName("progressBarChannel");

        gridLayout_13->addWidget(progressBarChannel, 1, 0, 1, 3);

        tabWidget->addTab(tabChannel, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(GameCubeSeedFinder);

        QMetaObject::connectSlotsByName(GameCubeSeedFinder);
    } // setupUi

    void retranslateUi(QWidget *GameCubeSeedFinder)
    {
        GameCubeSeedFinder->setWindowTitle(QCoreApplication::translate("GameCubeSeedFinder", "GameCube Seed Finder", nullptr));
        groupBoxGalesSearch->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        labelGalesRound->setText(QCoreApplication::translate("GameCubeSeedFinder", "Round #1", nullptr));
        labelGalesResults->setText(QCoreApplication::translate("GameCubeSeedFinder", "Possible Results:", nullptr));
        pushButtonGalesSearch->setText(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        pushButtonGalesCancel->setText(QCoreApplication::translate("GameCubeSeedFinder", "Cancel", nullptr));
        pushButtonGalesReset->setText(QCoreApplication::translate("GameCubeSeedFinder", "Reset", nullptr));
        groupBoxGalesPokemon->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Settings", nullptr));
        labelGalesYourLead->setText(QCoreApplication::translate("GameCubeSeedFinder", "Your lead", nullptr));
        labelGalesTopLeft->setText(QCoreApplication::translate("GameCubeSeedFinder", "Top Left HP", nullptr));
        labelGalesTopRight->setText(QCoreApplication::translate("GameCubeSeedFinder", "Top Right HP", nullptr));
        labelGalesEnemyLead->setText(QCoreApplication::translate("GameCubeSeedFinder", "Enemy Lead", nullptr));
        labelGalesBottomLeft->setText(QCoreApplication::translate("GameCubeSeedFinder", "Bottom Left HP", nullptr));
        labelGalesBottomRight->setText(QCoreApplication::translate("GameCubeSeedFinder", "Bottom Right HP", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGales), QCoreApplication::translate("GameCubeSeedFinder", "Gales", nullptr));
        groupBoxColoSearch->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        labelColoRound->setText(QCoreApplication::translate("GameCubeSeedFinder", "Round #1", nullptr));
        labelColoResults->setText(QCoreApplication::translate("GameCubeSeedFinder", "Possible Results:", nullptr));
        pushButtonColoSearch->setText(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        pushButtonColoCancel->setText(QCoreApplication::translate("GameCubeSeedFinder", "Cancel", nullptr));
        pushButtonColoReset->setText(QCoreApplication::translate("GameCubeSeedFinder", "Reset", nullptr));
        groupBoxColoTrainer->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Settings", nullptr));
        labelColoTrainer->setText(QCoreApplication::translate("GameCubeSeedFinder", "Trainer", nullptr));
        comboBoxColoTrainer->setItemText(0, QCoreApplication::translate("GameCubeSeedFinder", "Wes", nullptr));
        comboBoxColoTrainer->setItemText(1, QCoreApplication::translate("GameCubeSeedFinder", "Seth", nullptr));
        comboBoxColoTrainer->setItemText(2, QCoreApplication::translate("GameCubeSeedFinder", "Thomas", nullptr));

        labelColoPartyLead->setText(QCoreApplication::translate("GameCubeSeedFinder", "Party Lead", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabColo), QCoreApplication::translate("GameCubeSeedFinder", "Colo", nullptr));
        groupBoxChannelSearch->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        labelChannelResult->setText(QCoreApplication::translate("GameCubeSeedFinder", "Result:", nullptr));
        pushButtonChannelSearch->setText(QCoreApplication::translate("GameCubeSeedFinder", "Search", nullptr));
        pushButtonChannelCancel->setText(QCoreApplication::translate("GameCubeSeedFinder", "Cancel", nullptr));
        groupBoxChannelSettings->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Settings", nullptr));
        pushButtonSNOC->setText(QCoreApplication::translate("GameCubeSeedFinder", "S->N->O->C", nullptr));
        pushButtonNSOC->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->S->O->C", nullptr));
        pushButtonONSC->setText(QCoreApplication::translate("GameCubeSeedFinder", "O->N->S->C", nullptr));
        pushButtonNOSC->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->O->S->C", nullptr));
        pushButtonSNCO->setText(QCoreApplication::translate("GameCubeSeedFinder", "S->N->C->O", nullptr));
        pushButtonNSCO->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->S->C->O", nullptr));
        pushButtonCNSO->setText(QCoreApplication::translate("GameCubeSeedFinder", "C->N->S->O", nullptr));
        pushButtonNCSO->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->C->S->O", nullptr));
        pushButtonONCS->setText(QCoreApplication::translate("GameCubeSeedFinder", "O->N->C->S", nullptr));
        pushButtonNOCS->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->O->C->S", nullptr));
        pushButtonCNOS->setText(QCoreApplication::translate("GameCubeSeedFinder", "C->N->O->S", nullptr));
        pushButtonNCOS->setText(QCoreApplication::translate("GameCubeSeedFinder", "N->C->O->S", nullptr));
        pushButtonChannelRemove->setText(QCoreApplication::translate("GameCubeSeedFinder", "Remove", nullptr));
        pushButtonChannelClear->setText(QCoreApplication::translate("GameCubeSeedFinder", "Clear", nullptr));
        groupBoxInputs->setTitle(QCoreApplication::translate("GameCubeSeedFinder", "Inputs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabChannel), QCoreApplication::translate("GameCubeSeedFinder", "Channel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameCubeSeedFinder: public Ui_GameCubeSeedFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECUBESEEDFINDER_H
