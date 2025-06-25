/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionResearcher;
    QAction *actionPokeSpot;
    QAction *actionSeedToTime4;
    QAction *actionSIDfromChainedShiny;
    QAction *actionIVCalculator;
    QAction *actionSpindaPainter;
    QAction *actionEncounterLookup;
    QAction *actionGameCubeSeedFinder;
    QAction *actionProfileCalibrator;
    QAction *actionProfileManager3;
    QAction *actionProfileManager4;
    QAction *actionProfileManager5;
    QAction *actionSettings;
    QAction *actionAbout;
    QAction *actionDenMap;
    QAction *actionProfileManager8;
    QAction *actionPIDtoIVs;
    QAction *actionIVstoPID3;
    QAction *actionIVstoPID4;
    QAction *actionSeedToTime3;
    QAction *actionJirachiAdvancer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGen3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonEgg3;
    QPushButton *pushButtonGameCube;
    QPushButton *pushButtonIDs3;
    QPushButton *pushButtonStatic3;
    QPushButton *pushButtonWild3;
    QWidget *tabGen4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonEgg4;
    QPushButton *pushButtonEvent4;
    QPushButton *pushButtonIDs4;
    QPushButton *pushButtonStatic4;
    QPushButton *pushButtonWild4;
    QWidget *tabGen5;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonDreamRadar;
    QPushButton *pushButtonEgg5;
    QPushButton *pushButtonEvent5;
    QPushButton *pushButtonHiddenGrotto;
    QPushButton *pushButtonIDs5;
    QPushButton *pushButtonStatic5;
    QPushButton *pushButtonWild5;
    QWidget *tabGen8;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonEgg8;
    QPushButton *pushButtonEvent8;
    QPushButton *pushButtonIDs8;
    QPushButton *pushButtonRaid;
    QPushButton *pushButtonStatic8;
    QPushButton *pushButtonUnderground;
    QPushButton *pushButtonWild8;
    QMenuBar *menubar;
    QMenu *menuTools;
    QMenu *menuGen3Tools;
    QMenu *menuGen4Tools;
    QMenu *menuGen5Tools;
    QMenu *menuGen8Tools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(358, 293);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pokefinder.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionResearcher = new QAction(MainWindow);
        actionResearcher->setObjectName("actionResearcher");
        actionPokeSpot = new QAction(MainWindow);
        actionPokeSpot->setObjectName("actionPokeSpot");
        actionSeedToTime4 = new QAction(MainWindow);
        actionSeedToTime4->setObjectName("actionSeedToTime4");
        actionSIDfromChainedShiny = new QAction(MainWindow);
        actionSIDfromChainedShiny->setObjectName("actionSIDfromChainedShiny");
        actionIVCalculator = new QAction(MainWindow);
        actionIVCalculator->setObjectName("actionIVCalculator");
        actionSpindaPainter = new QAction(MainWindow);
        actionSpindaPainter->setObjectName("actionSpindaPainter");
        actionEncounterLookup = new QAction(MainWindow);
        actionEncounterLookup->setObjectName("actionEncounterLookup");
        actionGameCubeSeedFinder = new QAction(MainWindow);
        actionGameCubeSeedFinder->setObjectName("actionGameCubeSeedFinder");
        actionProfileCalibrator = new QAction(MainWindow);
        actionProfileCalibrator->setObjectName("actionProfileCalibrator");
        actionProfileManager3 = new QAction(MainWindow);
        actionProfileManager3->setObjectName("actionProfileManager3");
        actionProfileManager4 = new QAction(MainWindow);
        actionProfileManager4->setObjectName("actionProfileManager4");
        actionProfileManager5 = new QAction(MainWindow);
        actionProfileManager5->setObjectName("actionProfileManager5");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionDenMap = new QAction(MainWindow);
        actionDenMap->setObjectName("actionDenMap");
        actionProfileManager8 = new QAction(MainWindow);
        actionProfileManager8->setObjectName("actionProfileManager8");
        actionPIDtoIVs = new QAction(MainWindow);
        actionPIDtoIVs->setObjectName("actionPIDtoIVs");
        actionIVstoPID3 = new QAction(MainWindow);
        actionIVstoPID3->setObjectName("actionIVstoPID3");
        actionIVstoPID4 = new QAction(MainWindow);
        actionIVstoPID4->setObjectName("actionIVstoPID4");
        actionSeedToTime3 = new QAction(MainWindow);
        actionSeedToTime3->setObjectName("actionSeedToTime3");
        actionJirachiAdvancer = new QAction(MainWindow);
        actionJirachiAdvancer->setObjectName("actionJirachiAdvancer");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabGen3 = new QWidget();
        tabGen3->setObjectName("tabGen3");
        gridLayout_2 = new QGridLayout(tabGen3);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonEgg3 = new QPushButton(tabGen3);
        pushButtonEgg3->setObjectName("pushButtonEgg3");

        gridLayout_2->addWidget(pushButtonEgg3, 0, 0, 1, 1);

        pushButtonGameCube = new QPushButton(tabGen3);
        pushButtonGameCube->setObjectName("pushButtonGameCube");

        gridLayout_2->addWidget(pushButtonGameCube, 1, 0, 1, 1);

        pushButtonIDs3 = new QPushButton(tabGen3);
        pushButtonIDs3->setObjectName("pushButtonIDs3");

        gridLayout_2->addWidget(pushButtonIDs3, 2, 0, 1, 1);

        pushButtonStatic3 = new QPushButton(tabGen3);
        pushButtonStatic3->setObjectName("pushButtonStatic3");

        gridLayout_2->addWidget(pushButtonStatic3, 3, 0, 1, 1);

        pushButtonWild3 = new QPushButton(tabGen3);
        pushButtonWild3->setObjectName("pushButtonWild3");

        gridLayout_2->addWidget(pushButtonWild3, 4, 0, 1, 1);

        tabWidget->addTab(tabGen3, QString());
        tabGen4 = new QWidget();
        tabGen4->setObjectName("tabGen4");
        gridLayout_3 = new QGridLayout(tabGen4);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButtonEgg4 = new QPushButton(tabGen4);
        pushButtonEgg4->setObjectName("pushButtonEgg4");

        gridLayout_3->addWidget(pushButtonEgg4, 0, 0, 1, 1);

        pushButtonEvent4 = new QPushButton(tabGen4);
        pushButtonEvent4->setObjectName("pushButtonEvent4");

        gridLayout_3->addWidget(pushButtonEvent4, 1, 0, 1, 1);

        pushButtonIDs4 = new QPushButton(tabGen4);
        pushButtonIDs4->setObjectName("pushButtonIDs4");

        gridLayout_3->addWidget(pushButtonIDs4, 2, 0, 1, 1);

        pushButtonStatic4 = new QPushButton(tabGen4);
        pushButtonStatic4->setObjectName("pushButtonStatic4");

        gridLayout_3->addWidget(pushButtonStatic4, 3, 0, 1, 1);

        pushButtonWild4 = new QPushButton(tabGen4);
        pushButtonWild4->setObjectName("pushButtonWild4");

        gridLayout_3->addWidget(pushButtonWild4, 4, 0, 1, 1);

        tabWidget->addTab(tabGen4, QString());
        tabGen5 = new QWidget();
        tabGen5->setObjectName("tabGen5");
        gridLayout_4 = new QGridLayout(tabGen5);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButtonDreamRadar = new QPushButton(tabGen5);
        pushButtonDreamRadar->setObjectName("pushButtonDreamRadar");

        gridLayout_4->addWidget(pushButtonDreamRadar, 0, 0, 1, 1);

        pushButtonEgg5 = new QPushButton(tabGen5);
        pushButtonEgg5->setObjectName("pushButtonEgg5");

        gridLayout_4->addWidget(pushButtonEgg5, 1, 0, 1, 1);

        pushButtonEvent5 = new QPushButton(tabGen5);
        pushButtonEvent5->setObjectName("pushButtonEvent5");

        gridLayout_4->addWidget(pushButtonEvent5, 2, 0, 1, 1);

        pushButtonHiddenGrotto = new QPushButton(tabGen5);
        pushButtonHiddenGrotto->setObjectName("pushButtonHiddenGrotto");

        gridLayout_4->addWidget(pushButtonHiddenGrotto, 3, 0, 1, 1);

        pushButtonIDs5 = new QPushButton(tabGen5);
        pushButtonIDs5->setObjectName("pushButtonIDs5");

        gridLayout_4->addWidget(pushButtonIDs5, 4, 0, 1, 1);

        pushButtonStatic5 = new QPushButton(tabGen5);
        pushButtonStatic5->setObjectName("pushButtonStatic5");

        gridLayout_4->addWidget(pushButtonStatic5, 5, 0, 1, 1);

        pushButtonWild5 = new QPushButton(tabGen5);
        pushButtonWild5->setObjectName("pushButtonWild5");

        gridLayout_4->addWidget(pushButtonWild5, 6, 0, 1, 1);

        tabWidget->addTab(tabGen5, QString());
        tabGen8 = new QWidget();
        tabGen8->setObjectName("tabGen8");
        gridLayout_5 = new QGridLayout(tabGen8);
        gridLayout_5->setObjectName("gridLayout_5");
        pushButtonEgg8 = new QPushButton(tabGen8);
        pushButtonEgg8->setObjectName("pushButtonEgg8");

        gridLayout_5->addWidget(pushButtonEgg8, 0, 0, 1, 1);

        pushButtonEvent8 = new QPushButton(tabGen8);
        pushButtonEvent8->setObjectName("pushButtonEvent8");

        gridLayout_5->addWidget(pushButtonEvent8, 1, 0, 1, 1);

        pushButtonIDs8 = new QPushButton(tabGen8);
        pushButtonIDs8->setObjectName("pushButtonIDs8");

        gridLayout_5->addWidget(pushButtonIDs8, 2, 0, 1, 1);

        pushButtonRaid = new QPushButton(tabGen8);
        pushButtonRaid->setObjectName("pushButtonRaid");

        gridLayout_5->addWidget(pushButtonRaid, 3, 0, 1, 1);

        pushButtonStatic8 = new QPushButton(tabGen8);
        pushButtonStatic8->setObjectName("pushButtonStatic8");

        gridLayout_5->addWidget(pushButtonStatic8, 4, 0, 1, 1);

        pushButtonUnderground = new QPushButton(tabGen8);
        pushButtonUnderground->setObjectName("pushButtonUnderground");

        gridLayout_5->addWidget(pushButtonUnderground, 5, 0, 1, 1);

        pushButtonWild8 = new QPushButton(tabGen8);
        pushButtonWild8->setObjectName("pushButtonWild8");

        gridLayout_5->addWidget(pushButtonWild8, 6, 0, 1, 1);

        tabWidget->addTab(tabGen8, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 358, 21));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuGen3Tools = new QMenu(menubar);
        menuGen3Tools->setObjectName("menuGen3Tools");
        menuGen4Tools = new QMenu(menubar);
        menuGen4Tools->setObjectName("menuGen4Tools");
        menuGen5Tools = new QMenu(menubar);
        menuGen5Tools->setObjectName("menuGen5Tools");
        menuGen8Tools = new QMenu(menubar);
        menuGen8Tools->setObjectName("menuGen8Tools");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuGen3Tools->menuAction());
        menubar->addAction(menuGen4Tools->menuAction());
        menubar->addAction(menuGen5Tools->menuAction());
        menubar->addAction(menuGen8Tools->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuTools->addAction(actionAbout);
        menuTools->addAction(actionEncounterLookup);
        menuTools->addAction(actionIVCalculator);
        menuTools->addAction(actionResearcher);
        menuTools->addAction(actionSettings);
        menuGen3Tools->addAction(actionGameCubeSeedFinder);
        menuGen3Tools->addAction(actionIVstoPID3);
        menuGen3Tools->addAction(actionJirachiAdvancer);
        menuGen3Tools->addAction(actionPIDtoIVs);
        menuGen3Tools->addAction(actionPokeSpot);
        menuGen3Tools->addAction(actionProfileManager3);
        menuGen3Tools->addAction(actionSeedToTime3);
        menuGen3Tools->addAction(actionSpindaPainter);
        menuGen4Tools->addAction(actionIVstoPID4);
        menuGen4Tools->addAction(actionProfileManager4);
        menuGen4Tools->addAction(actionSeedToTime4);
        menuGen4Tools->addAction(actionSIDfromChainedShiny);
        menuGen5Tools->addAction(actionProfileCalibrator);
        menuGen5Tools->addAction(actionProfileManager5);
        menuGen8Tools->addAction(actionDenMap);
        menuGen8Tools->addAction(actionProfileManager8);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionResearcher->setText(QCoreApplication::translate("MainWindow", "Researcher", nullptr));
        actionPokeSpot->setText(QCoreApplication::translate("MainWindow", "Poke Spot", nullptr));
        actionSeedToTime4->setText(QCoreApplication::translate("MainWindow", "Seed to Time", nullptr));
        actionSIDfromChainedShiny->setText(QCoreApplication::translate("MainWindow", "SID from Chained Shiny", nullptr));
        actionIVCalculator->setText(QCoreApplication::translate("MainWindow", "IV Calculator", nullptr));
        actionSpindaPainter->setText(QCoreApplication::translate("MainWindow", "Spinda Painter", nullptr));
        actionEncounterLookup->setText(QCoreApplication::translate("MainWindow", "Encounter Lookup", nullptr));
        actionGameCubeSeedFinder->setText(QCoreApplication::translate("MainWindow", "GameCube Seed Finder", nullptr));
        actionProfileCalibrator->setText(QCoreApplication::translate("MainWindow", "Profile Calibrator", nullptr));
        actionProfileManager3->setText(QCoreApplication::translate("MainWindow", "Profile Manager", nullptr));
        actionProfileManager4->setText(QCoreApplication::translate("MainWindow", "Profile Manager", nullptr));
        actionProfileManager5->setText(QCoreApplication::translate("MainWindow", "Profile Manager", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionDenMap->setText(QCoreApplication::translate("MainWindow", "Den Map", nullptr));
        actionProfileManager8->setText(QCoreApplication::translate("MainWindow", "Profile Manager", nullptr));
        actionPIDtoIVs->setText(QCoreApplication::translate("MainWindow", "PID to IVs", nullptr));
        actionIVstoPID3->setText(QCoreApplication::translate("MainWindow", "IVs to PID", nullptr));
        actionIVstoPID4->setText(QCoreApplication::translate("MainWindow", "IVs to PID", nullptr));
        actionSeedToTime3->setText(QCoreApplication::translate("MainWindow", "Seed to Time", nullptr));
        actionJirachiAdvancer->setText(QCoreApplication::translate("MainWindow", "Jirachi Advancer", nullptr));
        pushButtonEgg3->setText(QCoreApplication::translate("MainWindow", "Egg", nullptr));
        pushButtonGameCube->setText(QCoreApplication::translate("MainWindow", "GameCube", nullptr));
        pushButtonIDs3->setText(QCoreApplication::translate("MainWindow", "IDs", nullptr));
        pushButtonStatic3->setText(QCoreApplication::translate("MainWindow", "Static", nullptr));
        pushButtonWild3->setText(QCoreApplication::translate("MainWindow", "Wild", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGen3), QCoreApplication::translate("MainWindow", "Gen 3", nullptr));
        pushButtonEgg4->setText(QCoreApplication::translate("MainWindow", "Egg", nullptr));
        pushButtonEvent4->setText(QCoreApplication::translate("MainWindow", "Event", nullptr));
        pushButtonIDs4->setText(QCoreApplication::translate("MainWindow", "IDs", nullptr));
        pushButtonStatic4->setText(QCoreApplication::translate("MainWindow", "Static", nullptr));
        pushButtonWild4->setText(QCoreApplication::translate("MainWindow", "Wild", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGen4), QCoreApplication::translate("MainWindow", "Gen 4", nullptr));
        pushButtonDreamRadar->setText(QCoreApplication::translate("MainWindow", "Dream Radar", nullptr));
        pushButtonEgg5->setText(QCoreApplication::translate("MainWindow", "Egg", nullptr));
        pushButtonEvent5->setText(QCoreApplication::translate("MainWindow", "Event", nullptr));
        pushButtonHiddenGrotto->setText(QCoreApplication::translate("MainWindow", "Hidden Grotto", nullptr));
        pushButtonIDs5->setText(QCoreApplication::translate("MainWindow", "IDs", nullptr));
        pushButtonStatic5->setText(QCoreApplication::translate("MainWindow", "Static", nullptr));
        pushButtonWild5->setText(QCoreApplication::translate("MainWindow", "Wild", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGen5), QCoreApplication::translate("MainWindow", "Gen 5", nullptr));
        pushButtonEgg8->setText(QCoreApplication::translate("MainWindow", "Egg", nullptr));
        pushButtonEvent8->setText(QCoreApplication::translate("MainWindow", "Event", nullptr));
        pushButtonIDs8->setText(QCoreApplication::translate("MainWindow", "IDs", nullptr));
        pushButtonRaid->setText(QCoreApplication::translate("MainWindow", "Raid", nullptr));
        pushButtonStatic8->setText(QCoreApplication::translate("MainWindow", "Static", nullptr));
        pushButtonUnderground->setText(QCoreApplication::translate("MainWindow", "Underground", nullptr));
        pushButtonWild8->setText(QCoreApplication::translate("MainWindow", "Wild", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGen8), QCoreApplication::translate("MainWindow", "Gen 8", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuGen3Tools->setTitle(QCoreApplication::translate("MainWindow", "Gen 3 Tools", nullptr));
        menuGen4Tools->setTitle(QCoreApplication::translate("MainWindow", "Gen 4 Tools", nullptr));
        menuGen5Tools->setTitle(QCoreApplication::translate("MainWindow", "Gen 5 Tools", nullptr));
        menuGen8Tools->setTitle(QCoreApplication::translate("MainWindow", "Gen 8 Tools", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
