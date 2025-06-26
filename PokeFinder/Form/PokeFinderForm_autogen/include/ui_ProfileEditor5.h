/********************************************************************************
** Form generated from reading UI file 'ProfileEditor5.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEEDITOR5_H
#define UI_PROFILEEDITOR5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "Form/Controls/CheckList.hpp"
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileEditor5
{
public:
    QGridLayout *gridLayout;
    QLabel *labelSID;
    QLabel *labelMAC;
    TextBox *textBoxTimer0Min;
    ComboBox *comboBoxLanguage;
    QCheckBox *checkBoxSkipLR;
    QCheckBox *checkBoxSoftReset;
    TextBox *textBoxTID;
    CheckList *comboBoxKeypresses;
    QLabel *labelVFrame;
    QLabel *labelGxStat;
    TextBox *textBoxVFrame;
    TextBox *textBoxVCount;
    QLabel *labelLanguage;
    QLabel *labelVCount;
    TextBox *textBoxTimer0Max;
    QPushButton *pushButtonAccept;
    TextBox *textBoxSID;
    QLabel *labelDSType;
    QLabel *labelKeypresses;
    QLineEdit *lineEditProfile;
    ComboBox *comboBoxVersion;
    ComboBox *comboBoxDSType;
    QLabel *labelTID;
    QCheckBox *checkBoxShinyCharm;
    QCheckBox *checkBoxMemoryLink;
    TextBox *textBoxGxStat;
    QLabel *labelTimer0Min;
    TextBox *textBoxMAC;
    QPushButton *pushButtonCancel;
    QLabel *labelVersion;
    QLabel *labelTimer0Max;
    QLabel *labelProfile;
    QPushButton *pushButtonFindParameters;
    QPushButton *closebutton;

    void setupUi(QDialog *ProfileEditor5)
    {
        if (ProfileEditor5->objectName().isEmpty())
            ProfileEditor5->setObjectName("ProfileEditor5");
        ProfileEditor5->resize(788, 132);
        gridLayout = new QGridLayout(ProfileEditor5);
        gridLayout->setObjectName("gridLayout");
        labelSID = new QLabel(ProfileEditor5);
        labelSID->setObjectName("labelSID");

        gridLayout->addWidget(labelSID, 1, 6, 1, 1);

        labelMAC = new QLabel(ProfileEditor5);
        labelMAC->setObjectName("labelMAC");

        gridLayout->addWidget(labelMAC, 0, 2, 1, 1);

        textBoxTimer0Min = new TextBox(ProfileEditor5);
        textBoxTimer0Min->setObjectName("textBoxTimer0Min");

        gridLayout->addWidget(textBoxTimer0Min, 1, 5, 1, 1);

        comboBoxLanguage = new ComboBox(ProfileEditor5);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName("comboBoxLanguage");

        gridLayout->addWidget(comboBoxLanguage, 2, 1, 1, 1);

        checkBoxSkipLR = new QCheckBox(ProfileEditor5);
        checkBoxSkipLR->setObjectName("checkBoxSkipLR");

        gridLayout->addWidget(checkBoxSkipLR, 3, 5, 1, 1);

        checkBoxSoftReset = new QCheckBox(ProfileEditor5);
        checkBoxSoftReset->setObjectName("checkBoxSoftReset");

        gridLayout->addWidget(checkBoxSoftReset, 3, 4, 1, 1);

        textBoxTID = new TextBox(ProfileEditor5);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout->addWidget(textBoxTID, 0, 7, 1, 1);

        comboBoxKeypresses = new CheckList(ProfileEditor5);
        comboBoxKeypresses->addItem(QString());
        comboBoxKeypresses->addItem(QString::fromUtf8("1"));
        comboBoxKeypresses->addItem(QString::fromUtf8("2"));
        comboBoxKeypresses->addItem(QString::fromUtf8("3"));
        comboBoxKeypresses->addItem(QString::fromUtf8("4"));
        comboBoxKeypresses->addItem(QString::fromUtf8("5"));
        comboBoxKeypresses->addItem(QString::fromUtf8("6"));
        comboBoxKeypresses->addItem(QString::fromUtf8("7"));
        comboBoxKeypresses->addItem(QString::fromUtf8("8"));
        comboBoxKeypresses->setObjectName("comboBoxKeypresses");

        gridLayout->addWidget(comboBoxKeypresses, 1, 3, 1, 1);

        labelVFrame = new QLabel(ProfileEditor5);
        labelVFrame->setObjectName("labelVFrame");

        gridLayout->addWidget(labelVFrame, 0, 4, 1, 1);

        labelGxStat = new QLabel(ProfileEditor5);
        labelGxStat->setObjectName("labelGxStat");

        gridLayout->addWidget(labelGxStat, 3, 2, 1, 1);

        textBoxVFrame = new TextBox(ProfileEditor5);
        textBoxVFrame->setObjectName("textBoxVFrame");

        gridLayout->addWidget(textBoxVFrame, 0, 5, 1, 1);

        textBoxVCount = new TextBox(ProfileEditor5);
        textBoxVCount->setObjectName("textBoxVCount");

        gridLayout->addWidget(textBoxVCount, 2, 3, 1, 1);

        labelLanguage = new QLabel(ProfileEditor5);
        labelLanguage->setObjectName("labelLanguage");

        gridLayout->addWidget(labelLanguage, 2, 0, 1, 1);

        labelVCount = new QLabel(ProfileEditor5);
        labelVCount->setObjectName("labelVCount");

        gridLayout->addWidget(labelVCount, 2, 2, 1, 1);

        textBoxTimer0Max = new TextBox(ProfileEditor5);
        textBoxTimer0Max->setObjectName("textBoxTimer0Max");

        gridLayout->addWidget(textBoxTimer0Max, 2, 5, 1, 1);

        pushButtonAccept = new QPushButton(ProfileEditor5);
        pushButtonAccept->setObjectName("pushButtonAccept");

        gridLayout->addWidget(pushButtonAccept, 0, 8, 1, 1);

        textBoxSID = new TextBox(ProfileEditor5);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout->addWidget(textBoxSID, 1, 7, 1, 1);

        labelDSType = new QLabel(ProfileEditor5);
        labelDSType->setObjectName("labelDSType");

        gridLayout->addWidget(labelDSType, 3, 0, 1, 1);

        labelKeypresses = new QLabel(ProfileEditor5);
        labelKeypresses->setObjectName("labelKeypresses");

        gridLayout->addWidget(labelKeypresses, 1, 2, 1, 1);

        lineEditProfile = new QLineEdit(ProfileEditor5);
        lineEditProfile->setObjectName("lineEditProfile");

        gridLayout->addWidget(lineEditProfile, 0, 1, 1, 1);

        comboBoxVersion = new ComboBox(ProfileEditor5);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout->addWidget(comboBoxVersion, 1, 1, 1, 1);

        comboBoxDSType = new ComboBox(ProfileEditor5);
        comboBoxDSType->addItem(QString());
        comboBoxDSType->addItem(QString());
        comboBoxDSType->addItem(QString());
        comboBoxDSType->setObjectName("comboBoxDSType");

        gridLayout->addWidget(comboBoxDSType, 3, 1, 1, 1);

        labelTID = new QLabel(ProfileEditor5);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 0, 6, 1, 1);

        checkBoxShinyCharm = new QCheckBox(ProfileEditor5);
        checkBoxShinyCharm->setObjectName("checkBoxShinyCharm");

        gridLayout->addWidget(checkBoxShinyCharm, 3, 7, 1, 1);

        checkBoxMemoryLink = new QCheckBox(ProfileEditor5);
        checkBoxMemoryLink->setObjectName("checkBoxMemoryLink");

        gridLayout->addWidget(checkBoxMemoryLink, 3, 6, 1, 1);

        textBoxGxStat = new TextBox(ProfileEditor5);
        textBoxGxStat->setObjectName("textBoxGxStat");

        gridLayout->addWidget(textBoxGxStat, 3, 3, 1, 1);

        labelTimer0Min = new QLabel(ProfileEditor5);
        labelTimer0Min->setObjectName("labelTimer0Min");

        gridLayout->addWidget(labelTimer0Min, 1, 4, 1, 1);

        textBoxMAC = new TextBox(ProfileEditor5);
        textBoxMAC->setObjectName("textBoxMAC");

        gridLayout->addWidget(textBoxMAC, 0, 3, 1, 1);

        pushButtonCancel = new QPushButton(ProfileEditor5);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 1, 8, 1, 1);

        labelVersion = new QLabel(ProfileEditor5);
        labelVersion->setObjectName("labelVersion");

        gridLayout->addWidget(labelVersion, 1, 0, 1, 1);

        labelTimer0Max = new QLabel(ProfileEditor5);
        labelTimer0Max->setObjectName("labelTimer0Max");

        gridLayout->addWidget(labelTimer0Max, 2, 4, 1, 1);

        labelProfile = new QLabel(ProfileEditor5);
        labelProfile->setObjectName("labelProfile");

        gridLayout->addWidget(labelProfile, 0, 0, 1, 1);

        pushButtonFindParameters = new QPushButton(ProfileEditor5);
        pushButtonFindParameters->setObjectName("pushButtonFindParameters");

        gridLayout->addWidget(pushButtonFindParameters, 2, 8, 1, 1);

        closebutton = new QPushButton(ProfileEditor5);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 3, 8, 1, 1);


        retranslateUi(ProfileEditor5);

        QMetaObject::connectSlotsByName(ProfileEditor5);
    } // setupUi

    void retranslateUi(QDialog *ProfileEditor5)
    {
        ProfileEditor5->setWindowTitle(QCoreApplication::translate("ProfileEditor5", "Profile Editor Gen 5", nullptr));
        labelSID->setText(QCoreApplication::translate("ProfileEditor5", "SID", nullptr));
        labelMAC->setText(QCoreApplication::translate("ProfileEditor5", "MAC", nullptr));
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("ProfileEditor5", "ENG", nullptr));
        comboBoxLanguage->setItemText(1, QCoreApplication::translate("ProfileEditor5", "SPA", nullptr));
        comboBoxLanguage->setItemText(2, QCoreApplication::translate("ProfileEditor5", "FRE", nullptr));
        comboBoxLanguage->setItemText(3, QCoreApplication::translate("ProfileEditor5", "ITA", nullptr));
        comboBoxLanguage->setItemText(4, QCoreApplication::translate("ProfileEditor5", "DEU", nullptr));
        comboBoxLanguage->setItemText(5, QCoreApplication::translate("ProfileEditor5", "JPN", nullptr));
        comboBoxLanguage->setItemText(6, QCoreApplication::translate("ProfileEditor5", "KOR", nullptr));

        checkBoxSkipLR->setText(QCoreApplication::translate("ProfileEditor5", "Skip L/R", nullptr));
        checkBoxSoftReset->setText(QCoreApplication::translate("ProfileEditor5", "Soft Reset", nullptr));
        comboBoxKeypresses->setItemText(0, QCoreApplication::translate("ProfileEditor5", "None", nullptr));

        labelVFrame->setText(QCoreApplication::translate("ProfileEditor5", "VFrame", nullptr));
        labelGxStat->setText(QCoreApplication::translate("ProfileEditor5", "GxStat", nullptr));
        labelLanguage->setText(QCoreApplication::translate("ProfileEditor5", "Language", nullptr));
        labelVCount->setText(QCoreApplication::translate("ProfileEditor5", "VCount", nullptr));
        pushButtonAccept->setText(QCoreApplication::translate("ProfileEditor5", "Accept", nullptr));
        labelDSType->setText(QCoreApplication::translate("ProfileEditor5", "DS Type", nullptr));
        labelKeypresses->setText(QCoreApplication::translate("ProfileEditor5", "Keypresses", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileEditor5", "Black", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileEditor5", "White", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileEditor5", "Black 2", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileEditor5", "White 2", nullptr));

        comboBoxDSType->setItemText(0, QCoreApplication::translate("ProfileEditor5", "DS Original/Lite", nullptr));
        comboBoxDSType->setItemText(1, QCoreApplication::translate("ProfileEditor5", "DSi/DSi XL", nullptr));
        comboBoxDSType->setItemText(2, QCoreApplication::translate("ProfileEditor5", "3DS", nullptr));

        labelTID->setText(QCoreApplication::translate("ProfileEditor5", "TID", nullptr));
        checkBoxShinyCharm->setText(QCoreApplication::translate("ProfileEditor5", "Shiny Charm", nullptr));
        checkBoxMemoryLink->setText(QCoreApplication::translate("ProfileEditor5", "Memory Link", nullptr));
        labelTimer0Min->setText(QCoreApplication::translate("ProfileEditor5", "Timer0 Min", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ProfileEditor5", "Cancel", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileEditor5", "Version", nullptr));
        labelTimer0Max->setText(QCoreApplication::translate("ProfileEditor5", "Timer0 Max", nullptr));
        labelProfile->setText(QCoreApplication::translate("ProfileEditor5", "Profile Name", nullptr));
        pushButtonFindParameters->setText(QCoreApplication::translate("ProfileEditor5", "Find Parameters", nullptr));
        closebutton->setText(QCoreApplication::translate("ProfileEditor5", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileEditor5: public Ui_ProfileEditor5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEEDITOR5_H
