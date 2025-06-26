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
#include <QtWidgets/QToolButton>
#include "Form/Controls/CheckList.hpp"
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileEditor4
{
public:
    QGridLayout *gridLayout;
    QLabel *labelSID;
    QPushButton *pushButtonOkay;
    CheckList *checkListUnownDiscovered;
    QCheckBox *checkBoxNationalDex;
    QLabel *labelVersion;
    QLineEdit *lineEditProfile;
    TextBox *textBoxTID;
    QLabel *labelProfile;
    QLabel *labelUnownDiscovered;
    TextBox *textBoxSID;
    QLabel *labelUnownPuzzles;
    QLabel *labelTID;
    ComboBox *comboBoxVersion;
    CheckList *checkListUnownPuzzles;
    QPushButton *pushButtonCancel;
    QToolButton *closebutton;

    void setupUi(QDialog *ProfileEditor4)
    {
        if (ProfileEditor4->objectName().isEmpty())
            ProfileEditor4->setObjectName("ProfileEditor4");
        ProfileEditor4->resize(578, 102);
        gridLayout = new QGridLayout(ProfileEditor4);
        gridLayout->setObjectName("gridLayout");
        labelSID = new QLabel(ProfileEditor4);
        labelSID->setObjectName("labelSID");

        gridLayout->addWidget(labelSID, 2, 2, 1, 1);

        pushButtonOkay = new QPushButton(ProfileEditor4);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 1, 6, 1, 1);

        checkListUnownDiscovered = new CheckList(ProfileEditor4);
        checkListUnownDiscovered->setObjectName("checkListUnownDiscovered");

        gridLayout->addWidget(checkListUnownDiscovered, 2, 5, 1, 1);

        checkBoxNationalDex = new QCheckBox(ProfileEditor4);
        checkBoxNationalDex->setObjectName("checkBoxNationalDex");

        gridLayout->addWidget(checkBoxNationalDex, 3, 3, 1, 1);

        labelVersion = new QLabel(ProfileEditor4);
        labelVersion->setObjectName("labelVersion");

        gridLayout->addWidget(labelVersion, 2, 0, 1, 1);

        lineEditProfile = new QLineEdit(ProfileEditor4);
        lineEditProfile->setObjectName("lineEditProfile");

        gridLayout->addWidget(lineEditProfile, 1, 1, 1, 1);

        textBoxTID = new TextBox(ProfileEditor4);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout->addWidget(textBoxTID, 1, 3, 1, 1);

        labelProfile = new QLabel(ProfileEditor4);
        labelProfile->setObjectName("labelProfile");

        gridLayout->addWidget(labelProfile, 1, 0, 1, 1);

        labelUnownDiscovered = new QLabel(ProfileEditor4);
        labelUnownDiscovered->setObjectName("labelUnownDiscovered");

        gridLayout->addWidget(labelUnownDiscovered, 2, 4, 1, 1);

        textBoxSID = new TextBox(ProfileEditor4);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout->addWidget(textBoxSID, 2, 3, 1, 1);

        labelUnownPuzzles = new QLabel(ProfileEditor4);
        labelUnownPuzzles->setObjectName("labelUnownPuzzles");

        gridLayout->addWidget(labelUnownPuzzles, 1, 4, 1, 1);

        labelTID = new QLabel(ProfileEditor4);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 1, 2, 1, 1);

        comboBoxVersion = new ComboBox(ProfileEditor4);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout->addWidget(comboBoxVersion, 2, 1, 1, 1);

        checkListUnownPuzzles = new CheckList(ProfileEditor4);
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->addItem(QString());
        checkListUnownPuzzles->setObjectName("checkListUnownPuzzles");

        gridLayout->addWidget(checkListUnownPuzzles, 1, 5, 1, 1);

        pushButtonCancel = new QPushButton(ProfileEditor4);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 2, 6, 1, 1);

        closebutton = new QToolButton(ProfileEditor4);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(ProfileEditor4);

        QMetaObject::connectSlotsByName(ProfileEditor4);
    } // setupUi

    void retranslateUi(QDialog *ProfileEditor4)
    {
        ProfileEditor4->setWindowTitle(QCoreApplication::translate("ProfileEditor4", "Profile Editor Gen 4", nullptr));
        labelSID->setText(QCoreApplication::translate("ProfileEditor4", "SID", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("ProfileEditor4", "Okay", nullptr));
        checkBoxNationalDex->setText(QCoreApplication::translate("ProfileEditor4", "National Dex", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileEditor4", "Version", nullptr));
        labelProfile->setText(QCoreApplication::translate("ProfileEditor4", "Profile Name", nullptr));
        labelUnownDiscovered->setText(QCoreApplication::translate("ProfileEditor4", "Unown Discovered", nullptr));
        labelUnownPuzzles->setText(QCoreApplication::translate("ProfileEditor4", "Unown Puzzles", nullptr));
        labelTID->setText(QCoreApplication::translate("ProfileEditor4", "TID", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileEditor4", "Diamond", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileEditor4", "Pearl", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileEditor4", "Platinum", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileEditor4", "Heart Gold", nullptr));
        comboBoxVersion->setItemText(4, QCoreApplication::translate("ProfileEditor4", "Soul Silver", nullptr));

        checkListUnownPuzzles->setItemText(0, QCoreApplication::translate("ProfileEditor4", "A-J", nullptr));
        checkListUnownPuzzles->setItemText(1, QCoreApplication::translate("ProfileEditor4", "R-V", nullptr));
        checkListUnownPuzzles->setItemText(2, QCoreApplication::translate("ProfileEditor4", "K-Q", nullptr));
        checkListUnownPuzzles->setItemText(3, QCoreApplication::translate("ProfileEditor4", "W-Z", nullptr));

        pushButtonCancel->setText(QCoreApplication::translate("ProfileEditor4", "Cancel", nullptr));
        closebutton->setText(QCoreApplication::translate("ProfileEditor4", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileEditor4: public Ui_ProfileEditor4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEEDITOR4_H
