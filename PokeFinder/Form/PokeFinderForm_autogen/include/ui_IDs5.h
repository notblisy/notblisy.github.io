/********************************************************************************
** Form generated from reading UI file 'IDs5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDS5_H
#define UI_IDS5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/DateEdit.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IDs5
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxSearchBy;
    QGridLayout *gridLayout_2;
    TextBox *textBoxPID;
    TextBox *textBoxSID;
    QCheckBox *checkBoxPID;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QLabel *labelMaxFrame;
    QCheckBox *checkBoxXOR;
    DateEdit *dateEditStart;
    DateEdit *dateEditEnd;
    QCheckBox *checkBoxTID;
    TextBox *textBoxTID;
    TextBox *textBoxMaxAdvances;
    QLabel *labelDateTime;
    QCheckBox *checkBoxSID;
    QProgressBar *progressBar;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_5;
    QLabel *labelProfileGxStat;
    QLabel *labelProfileGame;
    QFrame *line_2;
    QLabel *labelProfileVCountValue;
    QFrame *line;
    QLabel *labelProfileKeypresses;
    QLabel *labelProfileTimer0Value;
    QLabel *labelProfileGxStatValue;
    QLabel *labelProfileGameValue;
    QLabel *labelProfileKeypressesValue;
    QLabel *labelProfileDSTypeValue;
    QLabel *labelProfileVFrame;
    QPushButton *pushButtonProfileManager;
    QFrame *line_3;
    QLabel *labelProfileTimer0;
    QComboBox *comboBoxProfiles;
    QLabel *labelProfileVCount;
    QLabel *labelProfileVFrameValue;
    QLabel *labelProfileMACAddress;
    QLabel *labelProfile;
    QLabel *labelProfileDSType;
    QLabel *labelProfileMACAddressValue;
    QGroupBox *groupBoxSeedFinder;
    QGridLayout *gridLayout_4;
    QLabel *labelTID;
    TextBox *textBoxSeedFinderTID;
    QLabel *labelDate;
    DateEdit *dateEdit;
    QLabel *labelHour;
    QSpinBox *spinBoxHour;
    QLabel *labelMinute;
    QSpinBox *spinBoxMinute;
    QLabel *labelSecondRange;
    QSpinBox *spinBoxMinSecond;
    QSpinBox *spinBoxMaxSecond;
    QLabel *labelAdvanceRange;
    TextBox *textBoxSeedFinderMaxAdvances;
    QPushButton *pushButtonFind;
    TableView *tableView;
    QToolButton *closebutton;

    void setupUi(QWidget *IDs5)
    {
        if (IDs5->objectName().isEmpty())
            IDs5->setObjectName("IDs5");
        IDs5->resize(767, 490);
        gridLayout = new QGridLayout(IDs5);
        gridLayout->setObjectName("gridLayout");
        groupBoxSearchBy = new QGroupBox(IDs5);
        groupBoxSearchBy->setObjectName("groupBoxSearchBy");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxSearchBy->sizePolicy().hasHeightForWidth());
        groupBoxSearchBy->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxSearchBy);
        gridLayout_2->setObjectName("gridLayout_2");
        textBoxPID = new TextBox(groupBoxSearchBy);
        textBoxPID->setObjectName("textBoxPID");

        gridLayout_2->addWidget(textBoxPID, 0, 1, 1, 1);

        textBoxSID = new TextBox(groupBoxSearchBy);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout_2->addWidget(textBoxSID, 2, 1, 1, 1);

        checkBoxPID = new QCheckBox(groupBoxSearchBy);
        checkBoxPID->setObjectName("checkBoxPID");

        gridLayout_2->addWidget(checkBoxPID, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearchBy);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearchBy);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 3);

        labelMaxFrame = new QLabel(groupBoxSearchBy);
        labelMaxFrame->setObjectName("labelMaxFrame");

        gridLayout_2->addWidget(labelMaxFrame, 4, 0, 1, 1);

        checkBoxXOR = new QCheckBox(groupBoxSearchBy);
        checkBoxXOR->setObjectName("checkBoxXOR");
        checkBoxXOR->setEnabled(false);

        gridLayout_2->addWidget(checkBoxXOR, 0, 2, 1, 1);

        dateEditStart = new DateEdit(groupBoxSearchBy);
        dateEditStart->setObjectName("dateEditStart");

        gridLayout_2->addWidget(dateEditStart, 3, 1, 1, 1);

        dateEditEnd = new DateEdit(groupBoxSearchBy);
        dateEditEnd->setObjectName("dateEditEnd");

        gridLayout_2->addWidget(dateEditEnd, 3, 2, 1, 1);

        checkBoxTID = new QCheckBox(groupBoxSearchBy);
        checkBoxTID->setObjectName("checkBoxTID");

        gridLayout_2->addWidget(checkBoxTID, 1, 0, 1, 1);

        textBoxTID = new TextBox(groupBoxSearchBy);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout_2->addWidget(textBoxTID, 1, 1, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxSearchBy);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_2->addWidget(textBoxMaxAdvances, 4, 1, 1, 1);

        labelDateTime = new QLabel(groupBoxSearchBy);
        labelDateTime->setObjectName("labelDateTime");

        gridLayout_2->addWidget(labelDateTime, 3, 0, 1, 1);

        checkBoxSID = new QCheckBox(groupBoxSearchBy);
        checkBoxSID->setObjectName("checkBoxSID");

        gridLayout_2->addWidget(checkBoxSID, 2, 0, 1, 1);


        gridLayout->addWidget(groupBoxSearchBy, 4, 1, 1, 1);

        progressBar = new QProgressBar(IDs5);
        progressBar->setObjectName("progressBar");

        gridLayout->addWidget(progressBar, 5, 1, 1, 2);

        groupBoxProfile = new QGroupBox(IDs5);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_5 = new QGridLayout(groupBoxProfile);
        gridLayout_5->setObjectName("gridLayout_5");
        labelProfileGxStat = new QLabel(groupBoxProfile);
        labelProfileGxStat->setObjectName("labelProfileGxStat");

        gridLayout_5->addWidget(labelProfileGxStat, 2, 8, 1, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_5->addWidget(labelProfileGame, 3, 11, 1, 1);

        line_2 = new QFrame(groupBoxProfile);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_2, 2, 7, 2, 1);

        labelProfileVCountValue = new QLabel(groupBoxProfile);
        labelProfileVCountValue->setObjectName("labelProfileVCountValue");

        gridLayout_5->addWidget(labelProfileVCountValue, 2, 6, 1, 1);

        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line, 2, 10, 2, 1);

        labelProfileKeypresses = new QLabel(groupBoxProfile);
        labelProfileKeypresses->setObjectName("labelProfileKeypresses");

        gridLayout_5->addWidget(labelProfileKeypresses, 2, 11, 1, 1);

        labelProfileTimer0Value = new QLabel(groupBoxProfile);
        labelProfileTimer0Value->setObjectName("labelProfileTimer0Value");

        gridLayout_5->addWidget(labelProfileTimer0Value, 3, 6, 1, 1);

        labelProfileGxStatValue = new QLabel(groupBoxProfile);
        labelProfileGxStatValue->setObjectName("labelProfileGxStatValue");

        gridLayout_5->addWidget(labelProfileGxStatValue, 2, 9, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_5->addWidget(labelProfileGameValue, 3, 12, 1, 1);

        labelProfileKeypressesValue = new QLabel(groupBoxProfile);
        labelProfileKeypressesValue->setObjectName("labelProfileKeypressesValue");

        gridLayout_5->addWidget(labelProfileKeypressesValue, 2, 12, 1, 1);

        labelProfileDSTypeValue = new QLabel(groupBoxProfile);
        labelProfileDSTypeValue->setObjectName("labelProfileDSTypeValue");

        gridLayout_5->addWidget(labelProfileDSTypeValue, 3, 3, 1, 1);

        labelProfileVFrame = new QLabel(groupBoxProfile);
        labelProfileVFrame->setObjectName("labelProfileVFrame");

        gridLayout_5->addWidget(labelProfileVFrame, 3, 8, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_5->addWidget(pushButtonProfileManager, 3, 1, 1, 1);

        line_3 = new QFrame(groupBoxProfile);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_3, 2, 4, 2, 1);

        labelProfileTimer0 = new QLabel(groupBoxProfile);
        labelProfileTimer0->setObjectName("labelProfileTimer0");

        gridLayout_5->addWidget(labelProfileTimer0, 3, 5, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_5->addWidget(comboBoxProfiles, 2, 1, 1, 1);

        labelProfileVCount = new QLabel(groupBoxProfile);
        labelProfileVCount->setObjectName("labelProfileVCount");

        gridLayout_5->addWidget(labelProfileVCount, 2, 5, 1, 1);

        labelProfileVFrameValue = new QLabel(groupBoxProfile);
        labelProfileVFrameValue->setObjectName("labelProfileVFrameValue");

        gridLayout_5->addWidget(labelProfileVFrameValue, 3, 9, 1, 1);

        labelProfileMACAddress = new QLabel(groupBoxProfile);
        labelProfileMACAddress->setObjectName("labelProfileMACAddress");

        gridLayout_5->addWidget(labelProfileMACAddress, 2, 2, 1, 1);

        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_5->addWidget(labelProfile, 2, 0, 1, 1);

        labelProfileDSType = new QLabel(groupBoxProfile);
        labelProfileDSType->setObjectName("labelProfileDSType");

        gridLayout_5->addWidget(labelProfileDSType, 3, 2, 1, 1);

        labelProfileMACAddressValue = new QLabel(groupBoxProfile);
        labelProfileMACAddressValue->setObjectName("labelProfileMACAddressValue");

        gridLayout_5->addWidget(labelProfileMACAddressValue, 2, 3, 1, 1);


        gridLayout->addWidget(groupBoxProfile, 1, 1, 1, 2);

        groupBoxSeedFinder = new QGroupBox(IDs5);
        groupBoxSeedFinder->setObjectName("groupBoxSeedFinder");
        sizePolicy.setHeightForWidth(groupBoxSeedFinder->sizePolicy().hasHeightForWidth());
        groupBoxSeedFinder->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBoxSeedFinder);
        gridLayout_4->setObjectName("gridLayout_4");
        labelTID = new QLabel(groupBoxSeedFinder);
        labelTID->setObjectName("labelTID");

        gridLayout_4->addWidget(labelTID, 0, 0, 1, 1);

        textBoxSeedFinderTID = new TextBox(groupBoxSeedFinder);
        textBoxSeedFinderTID->setObjectName("textBoxSeedFinderTID");

        gridLayout_4->addWidget(textBoxSeedFinderTID, 0, 1, 1, 2);

        labelDate = new QLabel(groupBoxSeedFinder);
        labelDate->setObjectName("labelDate");

        gridLayout_4->addWidget(labelDate, 1, 0, 1, 1);

        dateEdit = new DateEdit(groupBoxSeedFinder);
        dateEdit->setObjectName("dateEdit");

        gridLayout_4->addWidget(dateEdit, 1, 1, 1, 2);

        labelHour = new QLabel(groupBoxSeedFinder);
        labelHour->setObjectName("labelHour");

        gridLayout_4->addWidget(labelHour, 2, 0, 1, 1);

        spinBoxHour = new QSpinBox(groupBoxSeedFinder);
        spinBoxHour->setObjectName("spinBoxHour");
        spinBoxHour->setMaximum(23);

        gridLayout_4->addWidget(spinBoxHour, 2, 1, 1, 2);

        labelMinute = new QLabel(groupBoxSeedFinder);
        labelMinute->setObjectName("labelMinute");

        gridLayout_4->addWidget(labelMinute, 3, 0, 1, 1);

        spinBoxMinute = new QSpinBox(groupBoxSeedFinder);
        spinBoxMinute->setObjectName("spinBoxMinute");
        spinBoxMinute->setMaximum(59);

        gridLayout_4->addWidget(spinBoxMinute, 3, 1, 1, 2);

        labelSecondRange = new QLabel(groupBoxSeedFinder);
        labelSecondRange->setObjectName("labelSecondRange");

        gridLayout_4->addWidget(labelSecondRange, 4, 0, 1, 1);

        spinBoxMinSecond = new QSpinBox(groupBoxSeedFinder);
        spinBoxMinSecond->setObjectName("spinBoxMinSecond");
        spinBoxMinSecond->setMaximum(59);

        gridLayout_4->addWidget(spinBoxMinSecond, 4, 1, 1, 1);

        spinBoxMaxSecond = new QSpinBox(groupBoxSeedFinder);
        spinBoxMaxSecond->setObjectName("spinBoxMaxSecond");
        spinBoxMaxSecond->setMaximum(59);

        gridLayout_4->addWidget(spinBoxMaxSecond, 4, 2, 1, 1);

        labelAdvanceRange = new QLabel(groupBoxSeedFinder);
        labelAdvanceRange->setObjectName("labelAdvanceRange");

        gridLayout_4->addWidget(labelAdvanceRange, 5, 0, 1, 1);

        textBoxSeedFinderMaxAdvances = new TextBox(groupBoxSeedFinder);
        textBoxSeedFinderMaxAdvances->setObjectName("textBoxSeedFinderMaxAdvances");
        textBoxSeedFinderMaxAdvances->setText(QString::fromUtf8("100"));

        gridLayout_4->addWidget(textBoxSeedFinderMaxAdvances, 5, 1, 1, 2);

        pushButtonFind = new QPushButton(groupBoxSeedFinder);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout_4->addWidget(pushButtonFind, 6, 0, 1, 3);


        gridLayout->addWidget(groupBoxSeedFinder, 4, 2, 1, 1);

        tableView = new TableView(IDs5);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 6, 1, 1, 2);

        closebutton = new QToolButton(IDs5);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 1, 1, 1);

        QWidget::setTabOrder(comboBoxProfiles, pushButtonProfileManager);
        QWidget::setTabOrder(pushButtonProfileManager, checkBoxPID);
        QWidget::setTabOrder(checkBoxPID, textBoxPID);
        QWidget::setTabOrder(textBoxPID, checkBoxXOR);
        QWidget::setTabOrder(checkBoxXOR, checkBoxTID);
        QWidget::setTabOrder(checkBoxTID, textBoxTID);
        QWidget::setTabOrder(textBoxTID, checkBoxSID);
        QWidget::setTabOrder(checkBoxSID, textBoxSID);
        QWidget::setTabOrder(textBoxSID, dateEditStart);
        QWidget::setTabOrder(dateEditStart, dateEditEnd);
        QWidget::setTabOrder(dateEditEnd, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, textBoxSeedFinderTID);
        QWidget::setTabOrder(textBoxSeedFinderTID, dateEdit);
        QWidget::setTabOrder(dateEdit, spinBoxHour);
        QWidget::setTabOrder(spinBoxHour, spinBoxMinute);
        QWidget::setTabOrder(spinBoxMinute, spinBoxMinSecond);
        QWidget::setTabOrder(spinBoxMinSecond, spinBoxMaxSecond);
        QWidget::setTabOrder(spinBoxMaxSecond, textBoxSeedFinderMaxAdvances);
        QWidget::setTabOrder(textBoxSeedFinderMaxAdvances, pushButtonFind);
        QWidget::setTabOrder(pushButtonFind, tableView);

        retranslateUi(IDs5);

        QMetaObject::connectSlotsByName(IDs5);
    } // setupUi

    void retranslateUi(QWidget *IDs5)
    {
        IDs5->setWindowTitle(QCoreApplication::translate("IDs5", "Gen 5 TID/SID", nullptr));
        groupBoxSearchBy->setTitle(QCoreApplication::translate("IDs5", "Search By", nullptr));
        checkBoxPID->setText(QCoreApplication::translate("IDs5", "PID", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("IDs5", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("IDs5", "Cancel", nullptr));
        labelMaxFrame->setText(QCoreApplication::translate("IDs5", "Max Advances", nullptr));
        checkBoxXOR->setText(QCoreApplication::translate("IDs5", "Static/Wild", nullptr));
        checkBoxTID->setText(QCoreApplication::translate("IDs5", "TID", nullptr));
        labelDateTime->setText(QCoreApplication::translate("IDs5", "Start/End Date", nullptr));
        checkBoxSID->setText(QCoreApplication::translate("IDs5", "SID", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("IDs5", "Profile", nullptr));
        labelProfileGxStat->setText(QCoreApplication::translate("IDs5", "GxStat", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("IDs5", "Game", nullptr));
        labelProfileKeypresses->setText(QCoreApplication::translate("IDs5", "Keypresses", nullptr));
        labelProfileVFrame->setText(QCoreApplication::translate("IDs5", "VFrame", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("IDs5", "Manager", nullptr));
        labelProfileTimer0->setText(QCoreApplication::translate("IDs5", "Timer0", nullptr));
        labelProfileVCount->setText(QCoreApplication::translate("IDs5", "VCount", nullptr));
        labelProfileMACAddress->setText(QCoreApplication::translate("IDs5", "MAC Address", nullptr));
        labelProfile->setText(QCoreApplication::translate("IDs5", "Profile", nullptr));
        labelProfileDSType->setText(QCoreApplication::translate("IDs5", "DS Type", nullptr));
        groupBoxSeedFinder->setTitle(QCoreApplication::translate("IDs5", "Seed Finder", nullptr));
        labelTID->setText(QCoreApplication::translate("IDs5", "TID", nullptr));
        labelDate->setText(QCoreApplication::translate("IDs5", "Date", nullptr));
        labelHour->setText(QCoreApplication::translate("IDs5", "Hour", nullptr));
        labelMinute->setText(QCoreApplication::translate("IDs5", "Minute", nullptr));
        labelSecondRange->setText(QCoreApplication::translate("IDs5", "Second Range", nullptr));
        labelAdvanceRange->setText(QCoreApplication::translate("IDs5", "Max Advances", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("IDs5", "Find", nullptr));
        closebutton->setText(QCoreApplication::translate("IDs5", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IDs5: public Ui_IDs5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDS5_H
