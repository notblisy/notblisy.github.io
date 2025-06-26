/********************************************************************************
** Form generated from reading UI file 'ProfileCalibrator5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILECALIBRATOR5_H
#define UI_PROFILECALIBRATOR5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/DateTimeEdit.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileCalibrator5
{
public:
    QGridLayout *gridLayout;
    TableView *tableView;
    QProgressBar *progressBar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidgetType;
    QWidget *tabIVs;
    QGridLayout *gridLayout_2;
    QLabel *labelMinIVs;
    QSpinBox *spinBoxMinHP;
    QSpinBox *spinBoxMinAtk;
    QSpinBox *spinBoxMinDef;
    QSpinBox *spinBoxMinSpA;
    QSpinBox *spinBoxMinSpD;
    QSpinBox *spinBoxMinSpe;
    QLabel *labelMaxIVs;
    QSpinBox *spinBoxMaxHP;
    QSpinBox *spinBoxMaxAtk;
    QSpinBox *spinBoxMaxDef;
    QSpinBox *spinBoxMaxSpA;
    QSpinBox *spinBoxMaxSpD;
    QSpinBox *spinBoxMaxSpe;
    QPushButton *pushButtonIVCalculator;
    QWidget *tabNeedles;
    QGridLayout *gridLayout_6;
    QListWidget *listWidgetNeedles;
    QRadioButton *radioButtonUnovaLink;
    QRadioButton *radioButtonSaving;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonClear;
    QGridLayout *gridLayout_8;
    QPushButton *pushButtonUpLeft;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonUpRight;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QPushButton *pushButtonDownLeft;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonDownRight;
    QWidget *tabSeed;
    QGridLayout *gridLayout_11;
    QLabel *labelSeed;
    TextBox *textBoxSeed;
    QLabel *labelDate;
    DateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *labelMin;
    QLabel *labelMax;
    QLabel *labelSeconds;
    QSpinBox *spinBoxMinSeconds;
    QSpinBox *spinBoxMaxSeconds;
    QLabel *labelVCount;
    TextBox *textBoxMinVCount;
    TextBox *textBoxMaxVCount;
    QLabel *labelTimer0;
    TextBox *textBoxMinTimer0;
    TextBox *textBoxMaxTimer0;
    QLabel *labelGxStat;
    TextBox *textBoxMinGxStat;
    TextBox *textBoxMaxGxStat;
    QLabel *labelVFrame;
    TextBox *textBoxMinVFrame;
    TextBox *textBoxMaxVFrame;
    QCheckBox *checkBoxSoftReset;
    QCheckBox *checkBoxMemoryLink;
    QLabel *labelVersion;
    ComboBox *comboBoxVersion;
    QLabel *labelLanguage;
    ComboBox *comboBoxLanguage;
    QLabel *labelDSType;
    ComboBox *comboBoxDSType;
    QLabel *labelMACAddress;
    TextBox *textBoxMACAddress;
    QLabel *labelKeypresses;
    ComboBox *comboBoxKeypress1;
    ComboBox *comboBoxKeypress2;
    ComboBox *comboBoxKeypress3;
    QToolButton *closebutton;
    QButtonGroup *buttonGroupNeedleType;
    QButtonGroup *buttonGroupNeedles;

    void setupUi(QWidget *ProfileCalibrator5)
    {
        if (ProfileCalibrator5->objectName().isEmpty())
            ProfileCalibrator5->setObjectName("ProfileCalibrator5");
        ProfileCalibrator5->resize(793, 481);
        gridLayout = new QGridLayout(ProfileCalibrator5);
        gridLayout->setObjectName("gridLayout");
        tableView = new TableView(ProfileCalibrator5);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 3, 0, 1, 2);

        progressBar = new QProgressBar(ProfileCalibrator5);
        progressBar->setObjectName("progressBar");

        gridLayout->addWidget(progressBar, 2, 0, 1, 2);

        groupBox = new QGroupBox(ProfileCalibrator5);
        groupBox->setObjectName("groupBox");
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        tabWidgetType = new QTabWidget(groupBox);
        tabWidgetType->setObjectName("tabWidgetType");
        tabIVs = new QWidget();
        tabIVs->setObjectName("tabIVs");
        gridLayout_2 = new QGridLayout(tabIVs);
        gridLayout_2->setObjectName("gridLayout_2");
        labelMinIVs = new QLabel(tabIVs);
        labelMinIVs->setObjectName("labelMinIVs");

        gridLayout_2->addWidget(labelMinIVs, 0, 0, 1, 1);

        spinBoxMinHP = new QSpinBox(tabIVs);
        spinBoxMinHP->setObjectName("spinBoxMinHP");

        gridLayout_2->addWidget(spinBoxMinHP, 0, 1, 1, 1);

        spinBoxMinAtk = new QSpinBox(tabIVs);
        spinBoxMinAtk->setObjectName("spinBoxMinAtk");

        gridLayout_2->addWidget(spinBoxMinAtk, 0, 2, 1, 1);

        spinBoxMinDef = new QSpinBox(tabIVs);
        spinBoxMinDef->setObjectName("spinBoxMinDef");

        gridLayout_2->addWidget(spinBoxMinDef, 0, 3, 1, 1);

        spinBoxMinSpA = new QSpinBox(tabIVs);
        spinBoxMinSpA->setObjectName("spinBoxMinSpA");

        gridLayout_2->addWidget(spinBoxMinSpA, 0, 4, 1, 1);

        spinBoxMinSpD = new QSpinBox(tabIVs);
        spinBoxMinSpD->setObjectName("spinBoxMinSpD");

        gridLayout_2->addWidget(spinBoxMinSpD, 0, 5, 1, 1);

        spinBoxMinSpe = new QSpinBox(tabIVs);
        spinBoxMinSpe->setObjectName("spinBoxMinSpe");

        gridLayout_2->addWidget(spinBoxMinSpe, 0, 6, 1, 1);

        labelMaxIVs = new QLabel(tabIVs);
        labelMaxIVs->setObjectName("labelMaxIVs");

        gridLayout_2->addWidget(labelMaxIVs, 1, 0, 1, 1);

        spinBoxMaxHP = new QSpinBox(tabIVs);
        spinBoxMaxHP->setObjectName("spinBoxMaxHP");

        gridLayout_2->addWidget(spinBoxMaxHP, 1, 1, 1, 1);

        spinBoxMaxAtk = new QSpinBox(tabIVs);
        spinBoxMaxAtk->setObjectName("spinBoxMaxAtk");

        gridLayout_2->addWidget(spinBoxMaxAtk, 1, 2, 1, 1);

        spinBoxMaxDef = new QSpinBox(tabIVs);
        spinBoxMaxDef->setObjectName("spinBoxMaxDef");

        gridLayout_2->addWidget(spinBoxMaxDef, 1, 3, 1, 1);

        spinBoxMaxSpA = new QSpinBox(tabIVs);
        spinBoxMaxSpA->setObjectName("spinBoxMaxSpA");

        gridLayout_2->addWidget(spinBoxMaxSpA, 1, 4, 1, 1);

        spinBoxMaxSpD = new QSpinBox(tabIVs);
        spinBoxMaxSpD->setObjectName("spinBoxMaxSpD");

        gridLayout_2->addWidget(spinBoxMaxSpD, 1, 5, 1, 1);

        spinBoxMaxSpe = new QSpinBox(tabIVs);
        spinBoxMaxSpe->setObjectName("spinBoxMaxSpe");

        gridLayout_2->addWidget(spinBoxMaxSpe, 1, 6, 1, 1);

        pushButtonIVCalculator = new QPushButton(tabIVs);
        pushButtonIVCalculator->setObjectName("pushButtonIVCalculator");

        gridLayout_2->addWidget(pushButtonIVCalculator, 2, 0, 1, 7);

        tabWidgetType->addTab(tabIVs, QString());
        tabNeedles = new QWidget();
        tabNeedles->setObjectName("tabNeedles");
        gridLayout_6 = new QGridLayout(tabNeedles);
        gridLayout_6->setObjectName("gridLayout_6");
        listWidgetNeedles = new QListWidget(tabNeedles);
        listWidgetNeedles->setObjectName("listWidgetNeedles");

        gridLayout_6->addWidget(listWidgetNeedles, 1, 0, 2, 1);

        radioButtonUnovaLink = new QRadioButton(tabNeedles);
        buttonGroupNeedleType = new QButtonGroup(ProfileCalibrator5);
        buttonGroupNeedleType->setObjectName("buttonGroupNeedleType");
        buttonGroupNeedleType->addButton(radioButtonUnovaLink);
        radioButtonUnovaLink->setObjectName("radioButtonUnovaLink");
        radioButtonUnovaLink->setChecked(true);

        gridLayout_6->addWidget(radioButtonUnovaLink, 1, 1, 1, 1);

        radioButtonSaving = new QRadioButton(tabNeedles);
        buttonGroupNeedleType->addButton(radioButtonSaving);
        radioButtonSaving->setObjectName("radioButtonSaving");

        gridLayout_6->addWidget(radioButtonSaving, 1, 2, 1, 1);

        pushButtonDelete = new QPushButton(tabNeedles);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout_6->addWidget(pushButtonDelete, 2, 1, 1, 1);

        pushButtonClear = new QPushButton(tabNeedles);
        pushButtonClear->setObjectName("pushButtonClear");

        gridLayout_6->addWidget(pushButtonClear, 2, 2, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        pushButtonUpLeft = new QPushButton(tabNeedles);
        buttonGroupNeedles = new QButtonGroup(ProfileCalibrator5);
        buttonGroupNeedles->setObjectName("buttonGroupNeedles");
        buttonGroupNeedles->setExclusive(false);
        buttonGroupNeedles->addButton(pushButtonUpLeft);
        pushButtonUpLeft->setObjectName("pushButtonUpLeft");
        pushButtonUpLeft->setText(QString::fromUtf8("\342\206\226"));

        gridLayout_8->addWidget(pushButtonUpLeft, 0, 0, 1, 1);

        pushButtonUp = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonUp);
        pushButtonUp->setObjectName("pushButtonUp");
        pushButtonUp->setText(QString::fromUtf8("\342\206\221"));

        gridLayout_8->addWidget(pushButtonUp, 0, 1, 1, 1);

        pushButtonUpRight = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonUpRight);
        pushButtonUpRight->setObjectName("pushButtonUpRight");
        pushButtonUpRight->setText(QString::fromUtf8("\342\206\227"));

        gridLayout_8->addWidget(pushButtonUpRight, 0, 2, 1, 1);

        pushButtonLeft = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonLeft);
        pushButtonLeft->setObjectName("pushButtonLeft");
        pushButtonLeft->setText(QString::fromUtf8("\342\206\220"));

        gridLayout_8->addWidget(pushButtonLeft, 1, 0, 1, 1);

        pushButtonRight = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonRight);
        pushButtonRight->setObjectName("pushButtonRight");
        pushButtonRight->setText(QString::fromUtf8("\342\206\222"));

        gridLayout_8->addWidget(pushButtonRight, 1, 2, 1, 1);

        pushButtonDownLeft = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonDownLeft);
        pushButtonDownLeft->setObjectName("pushButtonDownLeft");
        pushButtonDownLeft->setText(QString::fromUtf8("\342\206\231"));

        gridLayout_8->addWidget(pushButtonDownLeft, 2, 0, 1, 1);

        pushButtonDown = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonDown);
        pushButtonDown->setObjectName("pushButtonDown");
        pushButtonDown->setText(QString::fromUtf8("\342\206\223"));

        gridLayout_8->addWidget(pushButtonDown, 2, 1, 1, 1);

        pushButtonDownRight = new QPushButton(tabNeedles);
        buttonGroupNeedles->addButton(pushButtonDownRight);
        pushButtonDownRight->setObjectName("pushButtonDownRight");
        pushButtonDownRight->setText(QString::fromUtf8("\342\206\230"));

        gridLayout_8->addWidget(pushButtonDownRight, 2, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_8, 0, 0, 1, 3);

        tabWidgetType->addTab(tabNeedles, QString());
        tabSeed = new QWidget();
        tabSeed->setObjectName("tabSeed");
        gridLayout_11 = new QGridLayout(tabSeed);
        gridLayout_11->setObjectName("gridLayout_11");
        labelSeed = new QLabel(tabSeed);
        labelSeed->setObjectName("labelSeed");

        gridLayout_11->addWidget(labelSeed, 0, 0, 1, 1);

        textBoxSeed = new TextBox(tabSeed);
        textBoxSeed->setObjectName("textBoxSeed");

        gridLayout_11->addWidget(textBoxSeed, 0, 1, 1, 1);

        tabWidgetType->addTab(tabSeed, QString());

        gridLayout_5->addWidget(tabWidgetType, 0, 0, 1, 2);

        labelDate = new QLabel(groupBox);
        labelDate->setObjectName("labelDate");

        gridLayout_5->addWidget(labelDate, 1, 0, 1, 1);

        dateTimeEdit = new DateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout_5->addWidget(dateTimeEdit, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBox);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBox);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(ProfileCalibrator5);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        labelMin = new QLabel(groupBox_2);
        labelMin->setObjectName("labelMin");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelMin->sizePolicy().hasHeightForWidth());
        labelMin->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(labelMin, 0, 1, 1, 1);

        labelMax = new QLabel(groupBox_2);
        labelMax->setObjectName("labelMax");
        sizePolicy.setHeightForWidth(labelMax->sizePolicy().hasHeightForWidth());
        labelMax->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(labelMax, 0, 2, 1, 1);

        labelSeconds = new QLabel(groupBox_2);
        labelSeconds->setObjectName("labelSeconds");

        gridLayout_3->addWidget(labelSeconds, 1, 0, 1, 1);

        spinBoxMinSeconds = new QSpinBox(groupBox_2);
        spinBoxMinSeconds->setObjectName("spinBoxMinSeconds");
        spinBoxMinSeconds->setMaximum(59);

        gridLayout_3->addWidget(spinBoxMinSeconds, 1, 1, 1, 1);

        spinBoxMaxSeconds = new QSpinBox(groupBox_2);
        spinBoxMaxSeconds->setObjectName("spinBoxMaxSeconds");
        spinBoxMaxSeconds->setMaximum(59);

        gridLayout_3->addWidget(spinBoxMaxSeconds, 1, 2, 1, 1);

        labelVCount = new QLabel(groupBox_2);
        labelVCount->setObjectName("labelVCount");

        gridLayout_3->addWidget(labelVCount, 2, 0, 1, 1);

        textBoxMinVCount = new TextBox(groupBox_2);
        textBoxMinVCount->setObjectName("textBoxMinVCount");

        gridLayout_3->addWidget(textBoxMinVCount, 2, 1, 1, 1);

        textBoxMaxVCount = new TextBox(groupBox_2);
        textBoxMaxVCount->setObjectName("textBoxMaxVCount");

        gridLayout_3->addWidget(textBoxMaxVCount, 2, 2, 1, 1);

        labelTimer0 = new QLabel(groupBox_2);
        labelTimer0->setObjectName("labelTimer0");

        gridLayout_3->addWidget(labelTimer0, 3, 0, 1, 1);

        textBoxMinTimer0 = new TextBox(groupBox_2);
        textBoxMinTimer0->setObjectName("textBoxMinTimer0");

        gridLayout_3->addWidget(textBoxMinTimer0, 3, 1, 1, 1);

        textBoxMaxTimer0 = new TextBox(groupBox_2);
        textBoxMaxTimer0->setObjectName("textBoxMaxTimer0");

        gridLayout_3->addWidget(textBoxMaxTimer0, 3, 2, 1, 1);

        labelGxStat = new QLabel(groupBox_2);
        labelGxStat->setObjectName("labelGxStat");

        gridLayout_3->addWidget(labelGxStat, 4, 0, 1, 1);

        textBoxMinGxStat = new TextBox(groupBox_2);
        textBoxMinGxStat->setObjectName("textBoxMinGxStat");

        gridLayout_3->addWidget(textBoxMinGxStat, 4, 1, 1, 1);

        textBoxMaxGxStat = new TextBox(groupBox_2);
        textBoxMaxGxStat->setObjectName("textBoxMaxGxStat");

        gridLayout_3->addWidget(textBoxMaxGxStat, 4, 2, 1, 1);

        labelVFrame = new QLabel(groupBox_2);
        labelVFrame->setObjectName("labelVFrame");

        gridLayout_3->addWidget(labelVFrame, 5, 0, 1, 1);

        textBoxMinVFrame = new TextBox(groupBox_2);
        textBoxMinVFrame->setObjectName("textBoxMinVFrame");

        gridLayout_3->addWidget(textBoxMinVFrame, 5, 1, 1, 1);

        textBoxMaxVFrame = new TextBox(groupBox_2);
        textBoxMaxVFrame->setObjectName("textBoxMaxVFrame");

        gridLayout_3->addWidget(textBoxMaxVFrame, 5, 2, 1, 1);

        checkBoxSoftReset = new QCheckBox(groupBox_2);
        checkBoxSoftReset->setObjectName("checkBoxSoftReset");

        gridLayout_3->addWidget(checkBoxSoftReset, 6, 1, 1, 1);

        checkBoxMemoryLink = new QCheckBox(groupBox_2);
        checkBoxMemoryLink->setObjectName("checkBoxMemoryLink");

        gridLayout_3->addWidget(checkBoxMemoryLink, 6, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 12, 1);

        labelVersion = new QLabel(groupBox_2);
        labelVersion->setObjectName("labelVersion");

        gridLayout_4->addWidget(labelVersion, 0, 1, 1, 1);

        comboBoxVersion = new ComboBox(groupBox_2);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout_4->addWidget(comboBoxVersion, 1, 1, 1, 1);

        labelLanguage = new QLabel(groupBox_2);
        labelLanguage->setObjectName("labelLanguage");

        gridLayout_4->addWidget(labelLanguage, 2, 1, 1, 1);

        comboBoxLanguage = new ComboBox(groupBox_2);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName("comboBoxLanguage");

        gridLayout_4->addWidget(comboBoxLanguage, 3, 1, 1, 1);

        labelDSType = new QLabel(groupBox_2);
        labelDSType->setObjectName("labelDSType");

        gridLayout_4->addWidget(labelDSType, 4, 1, 1, 1);

        comboBoxDSType = new ComboBox(groupBox_2);
        comboBoxDSType->addItem(QString());
        comboBoxDSType->addItem(QString());
        comboBoxDSType->addItem(QString());
        comboBoxDSType->setObjectName("comboBoxDSType");

        gridLayout_4->addWidget(comboBoxDSType, 5, 1, 1, 1);

        labelMACAddress = new QLabel(groupBox_2);
        labelMACAddress->setObjectName("labelMACAddress");

        gridLayout_4->addWidget(labelMACAddress, 6, 1, 1, 1);

        textBoxMACAddress = new TextBox(groupBox_2);
        textBoxMACAddress->setObjectName("textBoxMACAddress");

        gridLayout_4->addWidget(textBoxMACAddress, 7, 1, 1, 1);

        labelKeypresses = new QLabel(groupBox_2);
        labelKeypresses->setObjectName("labelKeypresses");

        gridLayout_4->addWidget(labelKeypresses, 8, 1, 1, 1);

        comboBoxKeypress1 = new ComboBox(groupBox_2);
        comboBoxKeypress1->setObjectName("comboBoxKeypress1");

        gridLayout_4->addWidget(comboBoxKeypress1, 9, 1, 1, 1);

        comboBoxKeypress2 = new ComboBox(groupBox_2);
        comboBoxKeypress2->setObjectName("comboBoxKeypress2");

        gridLayout_4->addWidget(comboBoxKeypress2, 10, 1, 1, 1);

        comboBoxKeypress3 = new ComboBox(groupBox_2);
        comboBoxKeypress3->setObjectName("comboBoxKeypress3");

        gridLayout_4->addWidget(comboBoxKeypress3, 11, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        closebutton = new QToolButton(ProfileCalibrator5);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidgetType, spinBoxMinHP);
        QWidget::setTabOrder(spinBoxMinHP, spinBoxMinAtk);
        QWidget::setTabOrder(spinBoxMinAtk, spinBoxMinDef);
        QWidget::setTabOrder(spinBoxMinDef, spinBoxMinSpA);
        QWidget::setTabOrder(spinBoxMinSpA, spinBoxMinSpD);
        QWidget::setTabOrder(spinBoxMinSpD, spinBoxMinSpe);
        QWidget::setTabOrder(spinBoxMinSpe, spinBoxMaxHP);
        QWidget::setTabOrder(spinBoxMaxHP, spinBoxMaxAtk);
        QWidget::setTabOrder(spinBoxMaxAtk, spinBoxMaxDef);
        QWidget::setTabOrder(spinBoxMaxDef, spinBoxMaxSpA);
        QWidget::setTabOrder(spinBoxMaxSpA, spinBoxMaxSpD);
        QWidget::setTabOrder(spinBoxMaxSpD, spinBoxMaxSpe);
        QWidget::setTabOrder(spinBoxMaxSpe, pushButtonIVCalculator);
        QWidget::setTabOrder(pushButtonIVCalculator, pushButtonUpLeft);
        QWidget::setTabOrder(pushButtonUpLeft, pushButtonUp);
        QWidget::setTabOrder(pushButtonUp, pushButtonUpRight);
        QWidget::setTabOrder(pushButtonUpRight, pushButtonLeft);
        QWidget::setTabOrder(pushButtonLeft, pushButtonRight);
        QWidget::setTabOrder(pushButtonRight, pushButtonDownLeft);
        QWidget::setTabOrder(pushButtonDownLeft, pushButtonDown);
        QWidget::setTabOrder(pushButtonDown, pushButtonDownRight);
        QWidget::setTabOrder(pushButtonDownRight, listWidgetNeedles);
        QWidget::setTabOrder(listWidgetNeedles, radioButtonUnovaLink);
        QWidget::setTabOrder(radioButtonUnovaLink, radioButtonSaving);
        QWidget::setTabOrder(radioButtonSaving, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, pushButtonClear);
        QWidget::setTabOrder(pushButtonClear, textBoxSeed);
        QWidget::setTabOrder(textBoxSeed, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, spinBoxMinSeconds);
        QWidget::setTabOrder(spinBoxMinSeconds, spinBoxMaxSeconds);
        QWidget::setTabOrder(spinBoxMaxSeconds, textBoxMinVCount);
        QWidget::setTabOrder(textBoxMinVCount, textBoxMaxVCount);
        QWidget::setTabOrder(textBoxMaxVCount, textBoxMinTimer0);
        QWidget::setTabOrder(textBoxMinTimer0, textBoxMaxTimer0);
        QWidget::setTabOrder(textBoxMaxTimer0, textBoxMinGxStat);
        QWidget::setTabOrder(textBoxMinGxStat, textBoxMaxGxStat);
        QWidget::setTabOrder(textBoxMaxGxStat, textBoxMinVFrame);
        QWidget::setTabOrder(textBoxMinVFrame, textBoxMaxVFrame);
        QWidget::setTabOrder(textBoxMaxVFrame, checkBoxSoftReset);
        QWidget::setTabOrder(checkBoxSoftReset, checkBoxMemoryLink);
        QWidget::setTabOrder(checkBoxMemoryLink, comboBoxVersion);
        QWidget::setTabOrder(comboBoxVersion, comboBoxLanguage);
        QWidget::setTabOrder(comboBoxLanguage, comboBoxDSType);
        QWidget::setTabOrder(comboBoxDSType, textBoxMACAddress);
        QWidget::setTabOrder(textBoxMACAddress, comboBoxKeypress1);
        QWidget::setTabOrder(comboBoxKeypress1, comboBoxKeypress2);
        QWidget::setTabOrder(comboBoxKeypress2, comboBoxKeypress3);
        QWidget::setTabOrder(comboBoxKeypress3, tableView);

        retranslateUi(ProfileCalibrator5);

        QMetaObject::connectSlotsByName(ProfileCalibrator5);
    } // setupUi

    void retranslateUi(QWidget *ProfileCalibrator5)
    {
        ProfileCalibrator5->setWindowTitle(QCoreApplication::translate("ProfileCalibrator5", "Profile Calibrator", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProfileCalibrator5", "Settings", nullptr));
        labelMinIVs->setText(QCoreApplication::translate("ProfileCalibrator5", "Min IVs", nullptr));
        labelMaxIVs->setText(QCoreApplication::translate("ProfileCalibrator5", "Max IVs", nullptr));
        pushButtonIVCalculator->setText(QCoreApplication::translate("ProfileCalibrator5", "IV Calculator", nullptr));
        tabWidgetType->setTabText(tabWidgetType->indexOf(tabIVs), QCoreApplication::translate("ProfileCalibrator5", "IV Search", nullptr));
        radioButtonUnovaLink->setText(QCoreApplication::translate("ProfileCalibrator5", "Unova Link", nullptr));
        radioButtonSaving->setText(QCoreApplication::translate("ProfileCalibrator5", "Saving", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ProfileCalibrator5", "Delete", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("ProfileCalibrator5", "Clear", nullptr));
        tabWidgetType->setTabText(tabWidgetType->indexOf(tabNeedles), QCoreApplication::translate("ProfileCalibrator5", "Needle Search", nullptr));
        labelSeed->setText(QCoreApplication::translate("ProfileCalibrator5", "Seed", nullptr));
        tabWidgetType->setTabText(tabWidgetType->indexOf(tabSeed), QCoreApplication::translate("ProfileCalibrator5", "Seed Search", nullptr));
        labelDate->setText(QCoreApplication::translate("ProfileCalibrator5", "Date", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("ProfileCalibrator5", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ProfileCalibrator5", "Cancel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ProfileCalibrator5", "Variables", nullptr));
        labelMin->setText(QCoreApplication::translate("ProfileCalibrator5", "Min", nullptr));
        labelMax->setText(QCoreApplication::translate("ProfileCalibrator5", "Max", nullptr));
        labelSeconds->setText(QCoreApplication::translate("ProfileCalibrator5", "Seconds", nullptr));
        labelVCount->setText(QCoreApplication::translate("ProfileCalibrator5", "VCount", nullptr));
        labelTimer0->setText(QCoreApplication::translate("ProfileCalibrator5", "Timer0", nullptr));
        labelGxStat->setText(QCoreApplication::translate("ProfileCalibrator5", "GxStat", nullptr));
        labelVFrame->setText(QCoreApplication::translate("ProfileCalibrator5", "VFrame", nullptr));
        checkBoxSoftReset->setText(QCoreApplication::translate("ProfileCalibrator5", "Soft Reset", nullptr));
        checkBoxMemoryLink->setText(QCoreApplication::translate("ProfileCalibrator5", "Memory Link", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileCalibrator5", "Version", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileCalibrator5", "Black", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileCalibrator5", "White", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileCalibrator5", "Black 2", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileCalibrator5", "White 2", nullptr));

        labelLanguage->setText(QCoreApplication::translate("ProfileCalibrator5", "Language", nullptr));
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("ProfileCalibrator5", "ENG", nullptr));
        comboBoxLanguage->setItemText(1, QCoreApplication::translate("ProfileCalibrator5", "SPA", nullptr));
        comboBoxLanguage->setItemText(2, QCoreApplication::translate("ProfileCalibrator5", "FRE", nullptr));
        comboBoxLanguage->setItemText(3, QCoreApplication::translate("ProfileCalibrator5", "ITA", nullptr));
        comboBoxLanguage->setItemText(4, QCoreApplication::translate("ProfileCalibrator5", "DEU", nullptr));
        comboBoxLanguage->setItemText(5, QCoreApplication::translate("ProfileCalibrator5", "JPN", nullptr));
        comboBoxLanguage->setItemText(6, QCoreApplication::translate("ProfileCalibrator5", "KOR", nullptr));

        labelDSType->setText(QCoreApplication::translate("ProfileCalibrator5", "DS Type", nullptr));
        comboBoxDSType->setItemText(0, QCoreApplication::translate("ProfileCalibrator5", "DS Original/Lite", nullptr));
        comboBoxDSType->setItemText(1, QCoreApplication::translate("ProfileCalibrator5", "DSi/DSi XL", nullptr));
        comboBoxDSType->setItemText(2, QCoreApplication::translate("ProfileCalibrator5", "3DS", nullptr));

        labelMACAddress->setText(QCoreApplication::translate("ProfileCalibrator5", "MAC Address", nullptr));
        labelKeypresses->setText(QCoreApplication::translate("ProfileCalibrator5", "Keypresses", nullptr));
        closebutton->setText(QCoreApplication::translate("ProfileCalibrator5", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileCalibrator5: public Ui_ProfileCalibrator5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILECALIBRATOR5_H
