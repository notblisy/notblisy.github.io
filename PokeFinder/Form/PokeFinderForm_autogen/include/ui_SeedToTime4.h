/********************************************************************************
** Form generated from reading UI file 'SeedToTime4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEDTOTIME4_H
#define UI_SEEDTOTIME4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_SeedToTime4
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabDPPt;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxDPPtSearch;
    QGridLayout *gridLayout_2;
    QLabel *labelDPPtYear;
    QLabel *labelDPPtSecond;
    QLabel *labelDPPtSeed;
    TextBox *textBoxDPPtSeed;
    TextBox *textBoxDPPtYear;
    QCheckBox *checkBoxDPPtSecond;
    TextBox *textBoxDPPtSecond;
    QLabel *labelDPPtCoinFlips;
    QPushButton *pushButtonDPPtGenerate;
    TableView *tableViewDPPtSearch;
    QGroupBox *groupBoxDPPtCalibration;
    QGridLayout *gridLayout_3;
    QLabel *labelDPPtDelayCalibration;
    QLabel *labelDPPtSecondCalibration;
    QLabel *labelDPPtDelay;
    TextBox *textBoxDPPtDelayCalibration;
    QLabel *labelDPPtSecondOffset;
    TextBox *textBoxDPPtSecondCalibration;
    QPushButton *pushButtonDPPtSearchFlips;
    QPushButton *pushButtonDPPtCalibrate;
    TableView *tableViewDPPtCalibrate;
    QWidget *tabHGSS;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxHGSSSearch;
    QGridLayout *gridLayout_5;
    QLabel *labelHGSSYear;
    QLabel *labelHGSSSecond;
    QLabel *labelHGSSSeed;
    TextBox *textBoxHGSSSeed;
    TextBox *textBoxHGSSYear;
    QCheckBox *checkBoxHGSSSecond;
    TextBox *textBoxHGSSSecond;
    QPushButton *pushButtonHGSSMap;
    QCheckBox *checkBoxHGSSRaikou;
    TextBox *textBoxHGSSRaikou;
    QCheckBox *checkBoxHGSSEntei;
    TextBox *textBoxHGSSEntei;
    QCheckBox *checkBoxHGSSLati;
    TextBox *textBoxHGSSLati;
    QLabel *labelHGSSElmCalls;
    QPushButton *pushButtonHGSSGenerate;
    QLabel *labelHGSSRoamers;
    TableView *tableViewHGSSSearch;
    QGroupBox *groupBoxHGSSCalibration;
    QGridLayout *gridLayout_6;
    QLabel *labelHGSSDelayCalibration;
    QLabel *labelHGSSSecondCalibration;
    QLabel *labelHGSSDelay;
    TextBox *textBoxHGSSDelayCalibration;
    QLabel *labelHGSSSecondOffset;
    TextBox *textBoxHGSSSecondCalibration;
    QPushButton *pushButtonHGSSSearchCalls;
    QPushButton *pushButtonHGSSCalibrate;
    TableView *tableViewHGSSCalibrate;

    void setupUi(QWidget *SeedToTime4)
    {
        if (SeedToTime4->objectName().isEmpty())
            SeedToTime4->setObjectName("SeedToTime4");
        SeedToTime4->resize(800, 600);
        gridLayout = new QGridLayout(SeedToTime4);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(SeedToTime4);
        tabWidget->setObjectName("tabWidget");
        tabDPPt = new QWidget();
        tabDPPt->setObjectName("tabDPPt");
        gridLayout_4 = new QGridLayout(tabDPPt);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBoxDPPtSearch = new QGroupBox(tabDPPt);
        groupBoxDPPtSearch->setObjectName("groupBoxDPPtSearch");
        gridLayout_2 = new QGridLayout(groupBoxDPPtSearch);
        gridLayout_2->setObjectName("gridLayout_2");
        labelDPPtYear = new QLabel(groupBoxDPPtSearch);
        labelDPPtYear->setObjectName("labelDPPtYear");

        gridLayout_2->addWidget(labelDPPtYear, 0, 2, 1, 1);

        labelDPPtSecond = new QLabel(groupBoxDPPtSearch);
        labelDPPtSecond->setObjectName("labelDPPtSecond");

        gridLayout_2->addWidget(labelDPPtSecond, 0, 4, 1, 1);

        labelDPPtSeed = new QLabel(groupBoxDPPtSearch);
        labelDPPtSeed->setObjectName("labelDPPtSeed");

        gridLayout_2->addWidget(labelDPPtSeed, 1, 0, 1, 1);

        textBoxDPPtSeed = new TextBox(groupBoxDPPtSearch);
        textBoxDPPtSeed->setObjectName("textBoxDPPtSeed");

        gridLayout_2->addWidget(textBoxDPPtSeed, 1, 1, 1, 1);

        textBoxDPPtYear = new TextBox(groupBoxDPPtSearch);
        textBoxDPPtYear->setObjectName("textBoxDPPtYear");
        textBoxDPPtYear->setText(QString::fromUtf8("2000"));

        gridLayout_2->addWidget(textBoxDPPtYear, 1, 2, 1, 1);

        checkBoxDPPtSecond = new QCheckBox(groupBoxDPPtSearch);
        checkBoxDPPtSecond->setObjectName("checkBoxDPPtSecond");
        checkBoxDPPtSecond->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(checkBoxDPPtSecond, 1, 3, 1, 1);

        textBoxDPPtSecond = new TextBox(groupBoxDPPtSearch);
        textBoxDPPtSecond->setObjectName("textBoxDPPtSecond");
        textBoxDPPtSecond->setEnabled(false);

        gridLayout_2->addWidget(textBoxDPPtSecond, 1, 4, 1, 1);

        labelDPPtCoinFlips = new QLabel(groupBoxDPPtSearch);
        labelDPPtCoinFlips->setObjectName("labelDPPtCoinFlips");

        gridLayout_2->addWidget(labelDPPtCoinFlips, 2, 0, 1, 3);

        pushButtonDPPtGenerate = new QPushButton(groupBoxDPPtSearch);
        pushButtonDPPtGenerate->setObjectName("pushButtonDPPtGenerate");

        gridLayout_2->addWidget(pushButtonDPPtGenerate, 2, 6, 1, 1);

        tableViewDPPtSearch = new TableView(groupBoxDPPtSearch);
        tableViewDPPtSearch->setObjectName("tableViewDPPtSearch");

        gridLayout_2->addWidget(tableViewDPPtSearch, 3, 0, 1, 7);


        gridLayout_4->addWidget(groupBoxDPPtSearch, 0, 0, 1, 1);

        groupBoxDPPtCalibration = new QGroupBox(tabDPPt);
        groupBoxDPPtCalibration->setObjectName("groupBoxDPPtCalibration");
        gridLayout_3 = new QGridLayout(groupBoxDPPtCalibration);
        gridLayout_3->setObjectName("gridLayout_3");
        labelDPPtDelayCalibration = new QLabel(groupBoxDPPtCalibration);
        labelDPPtDelayCalibration->setObjectName("labelDPPtDelayCalibration");
        labelDPPtDelayCalibration->setText(QString::fromUtf8("-/+"));
        labelDPPtDelayCalibration->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelDPPtDelayCalibration, 0, 1, 1, 1);

        labelDPPtSecondCalibration = new QLabel(groupBoxDPPtCalibration);
        labelDPPtSecondCalibration->setObjectName("labelDPPtSecondCalibration");
        labelDPPtSecondCalibration->setText(QString::fromUtf8("-/+"));
        labelDPPtSecondCalibration->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelDPPtSecondCalibration, 0, 3, 1, 1);

        labelDPPtDelay = new QLabel(groupBoxDPPtCalibration);
        labelDPPtDelay->setObjectName("labelDPPtDelay");

        gridLayout_3->addWidget(labelDPPtDelay, 1, 0, 1, 1);

        textBoxDPPtDelayCalibration = new TextBox(groupBoxDPPtCalibration);
        textBoxDPPtDelayCalibration->setObjectName("textBoxDPPtDelayCalibration");
        textBoxDPPtDelayCalibration->setText(QString::fromUtf8("10"));

        gridLayout_3->addWidget(textBoxDPPtDelayCalibration, 1, 1, 1, 1);

        labelDPPtSecondOffset = new QLabel(groupBoxDPPtCalibration);
        labelDPPtSecondOffset->setObjectName("labelDPPtSecondOffset");

        gridLayout_3->addWidget(labelDPPtSecondOffset, 1, 2, 1, 1);

        textBoxDPPtSecondCalibration = new TextBox(groupBoxDPPtCalibration);
        textBoxDPPtSecondCalibration->setObjectName("textBoxDPPtSecondCalibration");
        textBoxDPPtSecondCalibration->setText(QString::fromUtf8("1"));

        gridLayout_3->addWidget(textBoxDPPtSecondCalibration, 1, 3, 1, 1);

        pushButtonDPPtSearchFlips = new QPushButton(groupBoxDPPtCalibration);
        pushButtonDPPtSearchFlips->setObjectName("pushButtonDPPtSearchFlips");

        gridLayout_3->addWidget(pushButtonDPPtSearchFlips, 1, 4, 1, 1);

        pushButtonDPPtCalibrate = new QPushButton(groupBoxDPPtCalibration);
        pushButtonDPPtCalibrate->setObjectName("pushButtonDPPtCalibrate");

        gridLayout_3->addWidget(pushButtonDPPtCalibrate, 1, 5, 1, 1);

        tableViewDPPtCalibrate = new TableView(groupBoxDPPtCalibration);
        tableViewDPPtCalibrate->setObjectName("tableViewDPPtCalibrate");

        gridLayout_3->addWidget(tableViewDPPtCalibrate, 2, 0, 1, 6);


        gridLayout_4->addWidget(groupBoxDPPtCalibration, 1, 0, 1, 1);

        tabWidget->addTab(tabDPPt, QString());
        tabHGSS = new QWidget();
        tabHGSS->setObjectName("tabHGSS");
        gridLayout_7 = new QGridLayout(tabHGSS);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBoxHGSSSearch = new QGroupBox(tabHGSS);
        groupBoxHGSSSearch->setObjectName("groupBoxHGSSSearch");
        gridLayout_5 = new QGridLayout(groupBoxHGSSSearch);
        gridLayout_5->setObjectName("gridLayout_5");
        labelHGSSYear = new QLabel(groupBoxHGSSSearch);
        labelHGSSYear->setObjectName("labelHGSSYear");

        gridLayout_5->addWidget(labelHGSSYear, 0, 2, 1, 1);

        labelHGSSSecond = new QLabel(groupBoxHGSSSearch);
        labelHGSSSecond->setObjectName("labelHGSSSecond");

        gridLayout_5->addWidget(labelHGSSSecond, 0, 4, 1, 1);

        labelHGSSSeed = new QLabel(groupBoxHGSSSearch);
        labelHGSSSeed->setObjectName("labelHGSSSeed");

        gridLayout_5->addWidget(labelHGSSSeed, 1, 0, 1, 1);

        textBoxHGSSSeed = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSSeed->setObjectName("textBoxHGSSSeed");

        gridLayout_5->addWidget(textBoxHGSSSeed, 1, 1, 1, 1);

        textBoxHGSSYear = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSYear->setObjectName("textBoxHGSSYear");
        textBoxHGSSYear->setText(QString::fromUtf8("2000"));

        gridLayout_5->addWidget(textBoxHGSSYear, 1, 2, 1, 1);

        checkBoxHGSSSecond = new QCheckBox(groupBoxHGSSSearch);
        checkBoxHGSSSecond->setObjectName("checkBoxHGSSSecond");
        checkBoxHGSSSecond->setText(QString::fromUtf8(""));

        gridLayout_5->addWidget(checkBoxHGSSSecond, 1, 3, 1, 1);

        textBoxHGSSSecond = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSSecond->setObjectName("textBoxHGSSSecond");
        textBoxHGSSSecond->setEnabled(false);

        gridLayout_5->addWidget(textBoxHGSSSecond, 1, 4, 1, 1);

        pushButtonHGSSMap = new QPushButton(groupBoxHGSSSearch);
        pushButtonHGSSMap->setObjectName("pushButtonHGSSMap");

        gridLayout_5->addWidget(pushButtonHGSSMap, 1, 5, 1, 1);

        checkBoxHGSSRaikou = new QCheckBox(groupBoxHGSSSearch);
        checkBoxHGSSRaikou->setObjectName("checkBoxHGSSRaikou");

        gridLayout_5->addWidget(checkBoxHGSSRaikou, 1, 6, 1, 1);

        textBoxHGSSRaikou = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSRaikou->setObjectName("textBoxHGSSRaikou");
        textBoxHGSSRaikou->setEnabled(false);
        textBoxHGSSRaikou->setMaxLength(2);

        gridLayout_5->addWidget(textBoxHGSSRaikou, 1, 7, 1, 1);

        checkBoxHGSSEntei = new QCheckBox(groupBoxHGSSSearch);
        checkBoxHGSSEntei->setObjectName("checkBoxHGSSEntei");

        gridLayout_5->addWidget(checkBoxHGSSEntei, 1, 8, 1, 1);

        textBoxHGSSEntei = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSEntei->setObjectName("textBoxHGSSEntei");
        textBoxHGSSEntei->setEnabled(false);
        textBoxHGSSEntei->setMaxLength(2);

        gridLayout_5->addWidget(textBoxHGSSEntei, 1, 9, 1, 1);

        checkBoxHGSSLati = new QCheckBox(groupBoxHGSSSearch);
        checkBoxHGSSLati->setObjectName("checkBoxHGSSLati");

        gridLayout_5->addWidget(checkBoxHGSSLati, 1, 10, 1, 1);

        textBoxHGSSLati = new TextBox(groupBoxHGSSSearch);
        textBoxHGSSLati->setObjectName("textBoxHGSSLati");
        textBoxHGSSLati->setEnabled(false);
        textBoxHGSSLati->setMaxLength(2);

        gridLayout_5->addWidget(textBoxHGSSLati, 1, 11, 1, 1);

        labelHGSSElmCalls = new QLabel(groupBoxHGSSSearch);
        labelHGSSElmCalls->setObjectName("labelHGSSElmCalls");

        gridLayout_5->addWidget(labelHGSSElmCalls, 2, 0, 1, 2);

        pushButtonHGSSGenerate = new QPushButton(groupBoxHGSSSearch);
        pushButtonHGSSGenerate->setObjectName("pushButtonHGSSGenerate");

        gridLayout_5->addWidget(pushButtonHGSSGenerate, 2, 11, 1, 1);

        labelHGSSRoamers = new QLabel(groupBoxHGSSSearch);
        labelHGSSRoamers->setObjectName("labelHGSSRoamers");

        gridLayout_5->addWidget(labelHGSSRoamers, 3, 0, 1, 2);

        tableViewHGSSSearch = new TableView(groupBoxHGSSSearch);
        tableViewHGSSSearch->setObjectName("tableViewHGSSSearch");

        gridLayout_5->addWidget(tableViewHGSSSearch, 4, 0, 1, 12);


        gridLayout_7->addWidget(groupBoxHGSSSearch, 0, 0, 1, 1);

        groupBoxHGSSCalibration = new QGroupBox(tabHGSS);
        groupBoxHGSSCalibration->setObjectName("groupBoxHGSSCalibration");
        gridLayout_6 = new QGridLayout(groupBoxHGSSCalibration);
        gridLayout_6->setObjectName("gridLayout_6");
        labelHGSSDelayCalibration = new QLabel(groupBoxHGSSCalibration);
        labelHGSSDelayCalibration->setObjectName("labelHGSSDelayCalibration");
        labelHGSSDelayCalibration->setText(QString::fromUtf8("-/+"));
        labelHGSSDelayCalibration->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelHGSSDelayCalibration, 0, 1, 1, 1);

        labelHGSSSecondCalibration = new QLabel(groupBoxHGSSCalibration);
        labelHGSSSecondCalibration->setObjectName("labelHGSSSecondCalibration");
        labelHGSSSecondCalibration->setText(QString::fromUtf8("-/+"));
        labelHGSSSecondCalibration->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelHGSSSecondCalibration, 0, 3, 1, 1);

        labelHGSSDelay = new QLabel(groupBoxHGSSCalibration);
        labelHGSSDelay->setObjectName("labelHGSSDelay");

        gridLayout_6->addWidget(labelHGSSDelay, 1, 0, 1, 1);

        textBoxHGSSDelayCalibration = new TextBox(groupBoxHGSSCalibration);
        textBoxHGSSDelayCalibration->setObjectName("textBoxHGSSDelayCalibration");
        textBoxHGSSDelayCalibration->setText(QString::fromUtf8("10"));

        gridLayout_6->addWidget(textBoxHGSSDelayCalibration, 1, 1, 1, 1);

        labelHGSSSecondOffset = new QLabel(groupBoxHGSSCalibration);
        labelHGSSSecondOffset->setObjectName("labelHGSSSecondOffset");

        gridLayout_6->addWidget(labelHGSSSecondOffset, 1, 2, 1, 1);

        textBoxHGSSSecondCalibration = new TextBox(groupBoxHGSSCalibration);
        textBoxHGSSSecondCalibration->setObjectName("textBoxHGSSSecondCalibration");
        textBoxHGSSSecondCalibration->setText(QString::fromUtf8("1"));

        gridLayout_6->addWidget(textBoxHGSSSecondCalibration, 1, 3, 1, 1);

        pushButtonHGSSSearchCalls = new QPushButton(groupBoxHGSSCalibration);
        pushButtonHGSSSearchCalls->setObjectName("pushButtonHGSSSearchCalls");

        gridLayout_6->addWidget(pushButtonHGSSSearchCalls, 1, 4, 1, 1);

        pushButtonHGSSCalibrate = new QPushButton(groupBoxHGSSCalibration);
        pushButtonHGSSCalibrate->setObjectName("pushButtonHGSSCalibrate");

        gridLayout_6->addWidget(pushButtonHGSSCalibrate, 1, 5, 1, 1);

        tableViewHGSSCalibrate = new TableView(groupBoxHGSSCalibration);
        tableViewHGSSCalibrate->setObjectName("tableViewHGSSCalibrate");

        gridLayout_6->addWidget(tableViewHGSSCalibrate, 2, 0, 1, 6);


        gridLayout_7->addWidget(groupBoxHGSSCalibration, 1, 0, 1, 1);

        tabWidget->addTab(tabHGSS, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(SeedToTime4);

        QMetaObject::connectSlotsByName(SeedToTime4);
    } // setupUi

    void retranslateUi(QWidget *SeedToTime4)
    {
        SeedToTime4->setWindowTitle(QCoreApplication::translate("SeedToTime4", "Gen 4 Seed to Time", nullptr));
        groupBoxDPPtSearch->setTitle(QCoreApplication::translate("SeedToTime4", "Search", nullptr));
        labelDPPtYear->setText(QCoreApplication::translate("SeedToTime4", "Year", nullptr));
        labelDPPtSecond->setText(QCoreApplication::translate("SeedToTime4", "Second", nullptr));
        labelDPPtSeed->setText(QCoreApplication::translate("SeedToTime4", "Seed", nullptr));
        labelDPPtCoinFlips->setText(QCoreApplication::translate("SeedToTime4", "Coin Flips:", nullptr));
        pushButtonDPPtGenerate->setText(QCoreApplication::translate("SeedToTime4", "Generate", nullptr));
        groupBoxDPPtCalibration->setTitle(QCoreApplication::translate("SeedToTime4", "Calibration", nullptr));
        labelDPPtDelay->setText(QCoreApplication::translate("SeedToTime4", "Delay", nullptr));
        labelDPPtSecondOffset->setText(QCoreApplication::translate("SeedToTime4", "Second", nullptr));
        pushButtonDPPtSearchFlips->setText(QCoreApplication::translate("SeedToTime4", "Search Flips", nullptr));
        pushButtonDPPtCalibrate->setText(QCoreApplication::translate("SeedToTime4", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDPPt), QCoreApplication::translate("SeedToTime4", "DPPt", nullptr));
        groupBoxHGSSSearch->setTitle(QCoreApplication::translate("SeedToTime4", "Search", nullptr));
        labelHGSSYear->setText(QCoreApplication::translate("SeedToTime4", "Year", nullptr));
        labelHGSSSecond->setText(QCoreApplication::translate("SeedToTime4", "Second", nullptr));
        labelHGSSSeed->setText(QCoreApplication::translate("SeedToTime4", "Seed", nullptr));
        pushButtonHGSSMap->setText(QCoreApplication::translate("SeedToTime4", "Map", nullptr));
        checkBoxHGSSRaikou->setText(QCoreApplication::translate("SeedToTime4", "R", nullptr));
        checkBoxHGSSEntei->setText(QCoreApplication::translate("SeedToTime4", "E", nullptr));
        checkBoxHGSSLati->setText(QCoreApplication::translate("SeedToTime4", "L", nullptr));
        labelHGSSElmCalls->setText(QCoreApplication::translate("SeedToTime4", "Elm Calls:", nullptr));
        pushButtonHGSSGenerate->setText(QCoreApplication::translate("SeedToTime4", "Generate", nullptr));
        labelHGSSRoamers->setText(QCoreApplication::translate("SeedToTime4", "Roamers:", nullptr));
        groupBoxHGSSCalibration->setTitle(QCoreApplication::translate("SeedToTime4", "Calibration", nullptr));
        labelHGSSDelay->setText(QCoreApplication::translate("SeedToTime4", "Delay", nullptr));
        labelHGSSSecondOffset->setText(QCoreApplication::translate("SeedToTime4", "Second", nullptr));
        pushButtonHGSSSearchCalls->setText(QCoreApplication::translate("SeedToTime4", "Search Calls", nullptr));
        pushButtonHGSSCalibrate->setText(QCoreApplication::translate("SeedToTime4", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHGSS), QCoreApplication::translate("SeedToTime4", "HGSS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeedToTime4: public Ui_SeedToTime4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEDTOTIME4_H
