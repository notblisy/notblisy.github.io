/********************************************************************************
** Form generated from reading UI file 'Event8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT8_H
#define UI_EVENT8_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Event8
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_5;
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
    QGroupBox *groupBoxRNGInfo;
    QGridLayout *gridLayout_3;
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
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_17;
    QPushButton *pushButtonImport;
    QLabel *labelSpecies;
    ComboBox *comboBoxSpecies;
    QLabel *labelRandomIVs;
    QSpinBox *spinBoxRandomIVs;
    QLabel *labelLevel;
    QSpinBox *spinBoxLevel;
    QLabel *labelPIDType;
    ComboBox *comboBoxPIDType;
    QLabel *labelAbility;
    QComboBox *comboBoxAbility;
    QCheckBox *checkBoxNature;
    QComboBox *comboBoxNature;
    QLabel *labelGender;
    QComboBox *comboBoxGender;
    QLabel *labelTID;
    TextBox *textBoxTID;
    QLabel *labelSID;
    TextBox *textBoxSID;
    QLabel *labelEC;
    TextBox *textBoxEC;
    QLabel *labelPID;
    TextBox *textBoxPID;
    QCheckBox *checkBoxEgg;
    QGroupBox *groupBoxFilters;
    QGridLayout *gridLayout;
    Filter *filter;
    TableView *tableView;

    void setupUi(QWidget *Event8)
    {
        if (Event8->objectName().isEmpty())
            Event8->setObjectName("Event8");
        Event8->resize(1200, 700);
        gridLayout_2 = new QGridLayout(Event8);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxProfile = new QGroupBox(Event8);
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

        line_4 = new QFrame(groupBoxProfile);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_4, 0, 4, 2, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_5->addWidget(labelProfileGame, 0, 5, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_5->addWidget(labelProfileGameValue, 0, 6, 1, 1);


        gridLayout_2->addWidget(groupBoxProfile, 0, 0, 1, 3);

        groupBoxRNGInfo = new QGroupBox(Event8);
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

        labelInitialAdvances = new QLabel(groupBoxRNGInfo);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_3->addWidget(labelInitialAdvances, 2, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxRNGInfo);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_3->addWidget(textBoxInitialAdvances, 2, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxRNGInfo);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_3->addWidget(labelMaxAdvances, 3, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxRNGInfo);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout_3->addWidget(textBoxMaxAdvances, 3, 1, 1, 1);

        labelOffset = new QLabel(groupBoxRNGInfo);
        labelOffset->setObjectName("labelOffset");

        gridLayout_3->addWidget(labelOffset, 4, 0, 1, 1);

        textBoxOffset = new TextBox(groupBoxRNGInfo);
        textBoxOffset->setObjectName("textBoxOffset");

        gridLayout_3->addWidget(textBoxOffset, 4, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxRNGInfo);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_3->addWidget(pushButtonGenerate, 5, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxRNGInfo, 1, 0, 1, 1);

        groupBoxSettings = new QGroupBox(Event8);
        groupBoxSettings->setObjectName("groupBoxSettings");
        gridLayout_17 = new QGridLayout(groupBoxSettings);
        gridLayout_17->setObjectName("gridLayout_17");
        pushButtonImport = new QPushButton(groupBoxSettings);
        pushButtonImport->setObjectName("pushButtonImport");

        gridLayout_17->addWidget(pushButtonImport, 0, 0, 1, 1);

        labelSpecies = new QLabel(groupBoxSettings);
        labelSpecies->setObjectName("labelSpecies");

        gridLayout_17->addWidget(labelSpecies, 1, 0, 1, 1);

        comboBoxSpecies = new ComboBox(groupBoxSettings);
        comboBoxSpecies->setObjectName("comboBoxSpecies");

        gridLayout_17->addWidget(comboBoxSpecies, 1, 1, 1, 1);

        labelRandomIVs = new QLabel(groupBoxSettings);
        labelRandomIVs->setObjectName("labelRandomIVs");

        gridLayout_17->addWidget(labelRandomIVs, 2, 0, 1, 1);

        spinBoxRandomIVs = new QSpinBox(groupBoxSettings);
        spinBoxRandomIVs->setObjectName("spinBoxRandomIVs");
        spinBoxRandomIVs->setMaximum(3);

        gridLayout_17->addWidget(spinBoxRandomIVs, 2, 1, 1, 1);

        labelLevel = new QLabel(groupBoxSettings);
        labelLevel->setObjectName("labelLevel");

        gridLayout_17->addWidget(labelLevel, 3, 0, 1, 1);

        spinBoxLevel = new QSpinBox(groupBoxSettings);
        spinBoxLevel->setObjectName("spinBoxLevel");
        spinBoxLevel->setMinimum(1);
        spinBoxLevel->setMaximum(100);

        gridLayout_17->addWidget(spinBoxLevel, 3, 1, 1, 1);

        labelPIDType = new QLabel(groupBoxSettings);
        labelPIDType->setObjectName("labelPIDType");

        gridLayout_17->addWidget(labelPIDType, 4, 0, 1, 1);

        comboBoxPIDType = new ComboBox(groupBoxSettings);
        comboBoxPIDType->addItem(QString());
        comboBoxPIDType->addItem(QString());
        comboBoxPIDType->addItem(QString());
        comboBoxPIDType->addItem(QString());
        comboBoxPIDType->addItem(QString());
        comboBoxPIDType->setObjectName("comboBoxPIDType");

        gridLayout_17->addWidget(comboBoxPIDType, 4, 1, 1, 1);

        labelAbility = new QLabel(groupBoxSettings);
        labelAbility->setObjectName("labelAbility");

        gridLayout_17->addWidget(labelAbility, 5, 0, 1, 1);

        comboBoxAbility = new QComboBox(groupBoxSettings);
        comboBoxAbility->addItem(QString::fromUtf8("0"));
        comboBoxAbility->addItem(QString::fromUtf8("1"));
        comboBoxAbility->addItem(QString::fromUtf8("H"));
        comboBoxAbility->addItem(QString::fromUtf8("1/2"));
        comboBoxAbility->addItem(QString::fromUtf8("1/2/H"));
        comboBoxAbility->setObjectName("comboBoxAbility");

        gridLayout_17->addWidget(comboBoxAbility, 5, 1, 1, 1);

        checkBoxNature = new QCheckBox(groupBoxSettings);
        checkBoxNature->setObjectName("checkBoxNature");

        gridLayout_17->addWidget(checkBoxNature, 6, 0, 1, 1);

        comboBoxNature = new QComboBox(groupBoxSettings);
        comboBoxNature->setObjectName("comboBoxNature");

        gridLayout_17->addWidget(comboBoxNature, 6, 1, 1, 1);

        labelGender = new QLabel(groupBoxSettings);
        labelGender->setObjectName("labelGender");

        gridLayout_17->addWidget(labelGender, 1, 2, 1, 1);

        comboBoxGender = new QComboBox(groupBoxSettings);
        comboBoxGender->addItem(QString::fromUtf8("\342\231\202"));
        comboBoxGender->addItem(QString::fromUtf8("\342\231\200"));
        comboBoxGender->addItem(QString::fromUtf8("-"));
        comboBoxGender->setObjectName("comboBoxGender");

        gridLayout_17->addWidget(comboBoxGender, 1, 3, 1, 1);

        labelTID = new QLabel(groupBoxSettings);
        labelTID->setObjectName("labelTID");

        gridLayout_17->addWidget(labelTID, 2, 2, 1, 1);

        textBoxTID = new TextBox(groupBoxSettings);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout_17->addWidget(textBoxTID, 2, 3, 1, 1);

        labelSID = new QLabel(groupBoxSettings);
        labelSID->setObjectName("labelSID");

        gridLayout_17->addWidget(labelSID, 3, 2, 1, 1);

        textBoxSID = new TextBox(groupBoxSettings);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout_17->addWidget(textBoxSID, 3, 3, 1, 1);

        labelEC = new QLabel(groupBoxSettings);
        labelEC->setObjectName("labelEC");

        gridLayout_17->addWidget(labelEC, 4, 2, 1, 1);

        textBoxEC = new TextBox(groupBoxSettings);
        textBoxEC->setObjectName("textBoxEC");

        gridLayout_17->addWidget(textBoxEC, 4, 3, 1, 1);

        labelPID = new QLabel(groupBoxSettings);
        labelPID->setObjectName("labelPID");

        gridLayout_17->addWidget(labelPID, 5, 2, 1, 1);

        textBoxPID = new TextBox(groupBoxSettings);
        textBoxPID->setObjectName("textBoxPID");

        gridLayout_17->addWidget(textBoxPID, 5, 3, 1, 1);

        checkBoxEgg = new QCheckBox(groupBoxSettings);
        checkBoxEgg->setObjectName("checkBoxEgg");

        gridLayout_17->addWidget(checkBoxEgg, 6, 3, 1, 1);


        gridLayout_2->addWidget(groupBoxSettings, 1, 1, 1, 1);

        groupBoxFilters = new QGroupBox(Event8);
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

        tableView = new TableView(Event8);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 2, 0, 1, 3);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, textBoxSeed0);
        QWidget::setTabOrder(textBoxSeed0, textBoxSeed1);
        QWidget::setTabOrder(textBoxSeed1, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, textBoxOffset);
        QWidget::setTabOrder(textBoxOffset, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, pushButtonImport);
        QWidget::setTabOrder(pushButtonImport, comboBoxSpecies);
        QWidget::setTabOrder(comboBoxSpecies, spinBoxRandomIVs);
        QWidget::setTabOrder(spinBoxRandomIVs, spinBoxLevel);
        QWidget::setTabOrder(spinBoxLevel, comboBoxPIDType);
        QWidget::setTabOrder(comboBoxPIDType, comboBoxAbility);
        QWidget::setTabOrder(comboBoxAbility, checkBoxNature);
        QWidget::setTabOrder(checkBoxNature, comboBoxNature);
        QWidget::setTabOrder(comboBoxNature, comboBoxGender);
        QWidget::setTabOrder(comboBoxGender, textBoxTID);
        QWidget::setTabOrder(textBoxTID, textBoxSID);
        QWidget::setTabOrder(textBoxSID, textBoxEC);
        QWidget::setTabOrder(textBoxEC, textBoxPID);
        QWidget::setTabOrder(textBoxPID, checkBoxEgg);
        QWidget::setTabOrder(checkBoxEgg, tableView);

        retranslateUi(Event8);

        QMetaObject::connectSlotsByName(Event8);
    } // setupUi

    void retranslateUi(QWidget *Event8)
    {
        Event8->setWindowTitle(QCoreApplication::translate("Event8", "Gen 8 Event", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Event8", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Event8", "Profile", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Event8", "Manager", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Event8", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Event8", "SID", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Event8", "Game", nullptr));
        groupBoxRNGInfo->setTitle(QCoreApplication::translate("Event8", "RNG Info", nullptr));
        labelSeed0->setText(QCoreApplication::translate("Event8", "Seed 0", nullptr));
        labelSeed1->setText(QCoreApplication::translate("Event8", "Seed 1", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Event8", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Event8", "Max Advances", nullptr));
        labelOffset->setText(QCoreApplication::translate("Event8", "Offset", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Event8", "Generate", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("Event8", "Settings", nullptr));
        pushButtonImport->setText(QCoreApplication::translate("Event8", "Import", nullptr));
        labelSpecies->setText(QCoreApplication::translate("Event8", "Species", nullptr));
        labelRandomIVs->setText(QCoreApplication::translate("Event8", "IV Count", nullptr));
        labelLevel->setText(QCoreApplication::translate("Event8", "Level", nullptr));
        labelPIDType->setText(QCoreApplication::translate("Event8", "PID Type", nullptr));
        comboBoxPIDType->setItemText(0, QCoreApplication::translate("Event8", "Nonshiny", nullptr));
        comboBoxPIDType->setItemText(1, QCoreApplication::translate("Event8", "Random", nullptr));
        comboBoxPIDType->setItemText(2, QCoreApplication::translate("Event8", "Star", nullptr));
        comboBoxPIDType->setItemText(3, QCoreApplication::translate("Event8", "Square", nullptr));
        comboBoxPIDType->setItemText(4, QCoreApplication::translate("Event8", "Static", nullptr));

        labelAbility->setText(QCoreApplication::translate("Event8", "Ability", nullptr));

        checkBoxNature->setText(QCoreApplication::translate("Event8", "Nature Locked", nullptr));
        labelGender->setText(QCoreApplication::translate("Event8", "Gender", nullptr));

        labelTID->setText(QCoreApplication::translate("Event8", "TID", nullptr));
        labelSID->setText(QCoreApplication::translate("Event8", "SID", nullptr));
        labelEC->setText(QCoreApplication::translate("Event8", "EC", nullptr));
        labelPID->setText(QCoreApplication::translate("Event8", "PID", nullptr));
        checkBoxEgg->setText(QCoreApplication::translate("Event8", "Egg", nullptr));
        groupBoxFilters->setTitle(QCoreApplication::translate("Event8", "Filters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Event8: public Ui_Event8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT8_H
