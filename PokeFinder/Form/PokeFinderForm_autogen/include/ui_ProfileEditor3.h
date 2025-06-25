/********************************************************************************
** Form generated from reading UI file 'ProfileEditor3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEEDITOR3_H
#define UI_PROFILEEDITOR3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_ProfileEditor3
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
    QCheckBox *checkBoxDeadBattery;
    QPushButton *pushButtonOkay;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ProfileEditor3)
    {
        if (ProfileEditor3->objectName().isEmpty())
            ProfileEditor3->setObjectName("ProfileEditor3");
        ProfileEditor3->resize(388, 100);
        gridLayout = new QGridLayout(ProfileEditor3);
        gridLayout->setObjectName("gridLayout");
        labelProfile = new QLabel(ProfileEditor3);
        labelProfile->setObjectName("labelProfile");

        gridLayout->addWidget(labelProfile, 0, 0, 1, 1);

        lineEditProfile = new QLineEdit(ProfileEditor3);
        lineEditProfile->setObjectName("lineEditProfile");

        gridLayout->addWidget(lineEditProfile, 0, 1, 1, 1);

        labelVersion = new QLabel(ProfileEditor3);
        labelVersion->setObjectName("labelVersion");

        gridLayout->addWidget(labelVersion, 1, 0, 1, 1);

        comboBoxVersion = new ComboBox(ProfileEditor3);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout->addWidget(comboBoxVersion, 1, 1, 1, 1);

        labelTID = new QLabel(ProfileEditor3);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 0, 2, 1, 1);

        textBoxTID = new TextBox(ProfileEditor3);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout->addWidget(textBoxTID, 0, 3, 1, 1);

        labelSID = new QLabel(ProfileEditor3);
        labelSID->setObjectName("labelSID");

        gridLayout->addWidget(labelSID, 1, 2, 1, 1);

        textBoxSID = new TextBox(ProfileEditor3);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout->addWidget(textBoxSID, 1, 3, 1, 1);

        checkBoxDeadBattery = new QCheckBox(ProfileEditor3);
        checkBoxDeadBattery->setObjectName("checkBoxDeadBattery");

        gridLayout->addWidget(checkBoxDeadBattery, 2, 3, 1, 1);

        pushButtonOkay = new QPushButton(ProfileEditor3);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 0, 4, 1, 1);

        pushButtonCancel = new QPushButton(ProfileEditor3);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 1, 4, 1, 1);


        retranslateUi(ProfileEditor3);

        QMetaObject::connectSlotsByName(ProfileEditor3);
    } // setupUi

    void retranslateUi(QDialog *ProfileEditor3)
    {
        ProfileEditor3->setWindowTitle(QCoreApplication::translate("ProfileEditor3", "Profile Editor Gen 3", nullptr));
        labelProfile->setText(QCoreApplication::translate("ProfileEditor3", "Profile Name", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileEditor3", "Version", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileEditor3", "Ruby", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileEditor3", "Sapphire", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileEditor3", "Fire Red", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileEditor3", "Leaf Green", nullptr));
        comboBoxVersion->setItemText(4, QCoreApplication::translate("ProfileEditor3", "Emerald", nullptr));
        comboBoxVersion->setItemText(5, QCoreApplication::translate("ProfileEditor3", "XD", nullptr));
        comboBoxVersion->setItemText(6, QCoreApplication::translate("ProfileEditor3", "Colosseum", nullptr));

        labelTID->setText(QCoreApplication::translate("ProfileEditor3", "TID", nullptr));
        labelSID->setText(QCoreApplication::translate("ProfileEditor3", "SID", nullptr));
        checkBoxDeadBattery->setText(QCoreApplication::translate("ProfileEditor3", "Dead Battery", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("ProfileEditor3", "Okay", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ProfileEditor3", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileEditor3: public Ui_ProfileEditor3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEEDITOR3_H
