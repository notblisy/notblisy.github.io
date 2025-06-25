/********************************************************************************
** Form generated from reading UI file 'ProfileEditor4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEEDITOR4_H
#define UI_PROFILEEDITOR4_H

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

class Ui_ProfileEditor4
{
public:
    QGridLayout *gridLayout;
    QLabel *labelProfile;
    QLineEdit *lineEditProfile;
    QLabel *labelVersion;
    ComboBox *comboBoxVersion;
    QLabel *labelTID;
    TextBox *textBoxTID;
    QLabel *labelSID;
    TextBox *textBoxSID;
    QCheckBox *checkBoxNationalDex;
    QLabel *labelUnownPuzzles;
    CheckList *checkListUnownPuzzles;
    QLabel *labelUnownDiscovered;
    CheckList *checkListUnownDiscovered;
    QPushButton *pushButtonOkay;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ProfileEditor4)
    {
        if (ProfileEditor4->objectName().isEmpty())
            ProfileEditor4->setObjectName("ProfileEditor4");
        ProfileEditor4->resize(578, 102);
        gridLayout = new QGridLayout(ProfileEditor4);
        gridLayout->setObjectName("gridLayout");
        labelProfile = new QLabel(ProfileEditor4);
        labelProfile->setObjectName("labelProfile");

        gridLayout->addWidget(labelProfile, 0, 0, 1, 1);

        lineEditProfile = new QLineEdit(ProfileEditor4);
        lineEditProfile->setObjectName("lineEditProfile");

        gridLayout->addWidget(lineEditProfile, 0, 1, 1, 1);

        labelVersion = new QLabel(ProfileEditor4);
        labelVersion->setObjectName("labelVersion");

        gridLayout->addWidget(labelVersion, 1, 0, 1, 1);

        comboBoxVersion = new ComboBox(ProfileEditor4);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout->addWidget(comboBoxVersion, 1, 1, 1, 1);

        labelTID = new QLabel(ProfileEditor4);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 0, 2, 1, 1);

        textBoxTID = new TextBox(ProfileEditor4);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout->addWidget(textBoxTID, 0, 3, 1, 1);

        labelSID = new QLabel(ProfileEditor4);
        labelSID->setObjectName("labelSID");

        gridLayout->addWidget(labelSID, 1, 2, 1, 1);

        textBoxSID = new TextBox(ProfileEditor4);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout->addWidget(textBoxSID, 1, 3, 1, 1);

        checkBoxNationalDex = new QCheckBox(ProfileEditor4);
        checkBoxNationalDex->setObjectName("checkBoxNationalDex");

        gridLayout->addWidget(checkBoxNationalDex, 2, 3, 1, 1);

        labelUnownPuzzles = new QLabel(ProfileEditor4);
        labelUnownPuzzles->setObjectName("labelUnownPuzzles");

        gridLayout->addWidget(labelUnownPuzzles, 0, 4, 1, 1);

        checkListUnownPuzzles = new CheckList(ProfileEditor4);
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->setObjectName("checkListUnownPuzzles");

        gridLayout->addWidget(checkListUnownPuzzles, 0, 5, 1, 1);

        labelUnownDiscovered = new QLabel(ProfileEditor4);
        labelUnownDiscovered->setObjectName("labelUnownDiscovered");

        gridLayout->addWidget(labelUnownDiscovered, 1, 4, 1, 1);

        checkListUnownDiscovered = new CheckList(ProfileEditor4);
        checkListUnownDiscovered->setObjectName("checkListUnownDiscovered");

        gridLayout->addWidget(checkListUnownDiscovered, 1, 5, 1, 1);

        pushButtonOkay = new QPushButton(ProfileEditor4);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 0, 6, 1, 1);

        pushButtonCancel = new QPushButton(ProfileEditor4);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 1, 6, 1, 1);


        retranslateUi(ProfileEditor4);

        QMetaObject::connectSlotsByName(ProfileEditor4);
    } // setupUi

    void retranslateUi(QDialog *ProfileEditor4)
    {
        ProfileEditor4->setWindowTitle(QCoreApplication::translate("ProfileEditor4", "Profile Editor Gen 4", nullptr));
        labelProfile->setText(QCoreApplication::translate("ProfileEditor4", "Profile Name", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileEditor4", "Version", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileEditor4", "Diamond", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileEditor4", "Pearl", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileEditor4", "Platinum", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileEditor4", "Heart Gold", nullptr));
        comboBoxVersion->setItemText(4, QCoreApplication::translate("ProfileEditor4", "Soul Silver", nullptr));

        labelTID->setText(QCoreApplication::translate("ProfileEditor4", "TID", nullptr));
        labelSID->setText(QCoreApplication::translate("ProfileEditor4", "SID", nullptr));
        checkBoxNationalDex->setText(QCoreApplication::translate("ProfileEditor4", "National Dex", nullptr));
        labelUnownPuzzles->setText(QCoreApplication::translate("ProfileEditor4", "Unown Puzzles", nullptr));
        checkListUnownPuzzles->setItemText(0, QCoreApplication::translate("ProfileEditor4", "A-J", nullptr));
        checkListUnownPuzzles->setItemText(1, QCoreApplication::translate("ProfileEditor4", "R-V", nullptr));
        checkListUnownPuzzles->setItemText(2, QCoreApplication::translate("ProfileEditor4", "K-Q", nullptr));
        checkListUnownPuzzles->setItemText(3, QCoreApplication::translate("ProfileEditor4", "W-Z", nullptr));

        labelUnownDiscovered->setText(QCoreApplication::translate("ProfileEditor4", "Unown Discovered", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("ProfileEditor4", "Okay", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ProfileEditor4", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileEditor4: public Ui_ProfileEditor4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEEDITOR4_H
