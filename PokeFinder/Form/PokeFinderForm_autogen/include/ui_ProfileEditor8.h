/********************************************************************************
** Form generated from reading UI file 'ProfileEditor8.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEEDITOR8_H
#define UI_PROFILEEDITOR8_H

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

class Ui_ProfileEditor8
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
    QCheckBox *checkBoxShinyCharm;
    QCheckBox *checkBoxOvalCharm;
    QPushButton *pushButtonOkay;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ProfileEditor8)
    {
        if (ProfileEditor8->objectName().isEmpty())
            ProfileEditor8->setObjectName("ProfileEditor8");
        ProfileEditor8->resize(523, 100);
        gridLayout = new QGridLayout(ProfileEditor8);
        gridLayout->setObjectName("gridLayout");
        labelProfile = new QLabel(ProfileEditor8);
        labelProfile->setObjectName("labelProfile");

        gridLayout->addWidget(labelProfile, 0, 0, 1, 1);

        lineEditProfile = new QLineEdit(ProfileEditor8);
        lineEditProfile->setObjectName("lineEditProfile");

        gridLayout->addWidget(lineEditProfile, 0, 1, 1, 1);

        labelVersion = new QLabel(ProfileEditor8);
        labelVersion->setObjectName("labelVersion");

        gridLayout->addWidget(labelVersion, 1, 0, 1, 1);

        comboBoxVersion = new ComboBox(ProfileEditor8);
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->addItem(QString());
        comboBoxVersion->setObjectName("comboBoxVersion");

        gridLayout->addWidget(comboBoxVersion, 1, 1, 1, 1);

        labelTID = new QLabel(ProfileEditor8);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 0, 2, 1, 1);

        textBoxTID = new TextBox(ProfileEditor8);
        textBoxTID->setObjectName("textBoxTID");

        gridLayout->addWidget(textBoxTID, 0, 3, 1, 1);

        labelSID = new QLabel(ProfileEditor8);
        labelSID->setObjectName("labelSID");

        gridLayout->addWidget(labelSID, 1, 2, 1, 1);

        textBoxSID = new TextBox(ProfileEditor8);
        textBoxSID->setObjectName("textBoxSID");

        gridLayout->addWidget(textBoxSID, 1, 3, 1, 1);

        checkBoxNationalDex = new QCheckBox(ProfileEditor8);
        checkBoxNationalDex->setObjectName("checkBoxNationalDex");

        gridLayout->addWidget(checkBoxNationalDex, 0, 4, 1, 1);

        checkBoxShinyCharm = new QCheckBox(ProfileEditor8);
        checkBoxShinyCharm->setObjectName("checkBoxShinyCharm");

        gridLayout->addWidget(checkBoxShinyCharm, 1, 4, 1, 1);

        checkBoxOvalCharm = new QCheckBox(ProfileEditor8);
        checkBoxOvalCharm->setObjectName("checkBoxOvalCharm");

        gridLayout->addWidget(checkBoxOvalCharm, 2, 4, 1, 1);

        pushButtonOkay = new QPushButton(ProfileEditor8);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 0, 5, 1, 1);

        pushButtonCancel = new QPushButton(ProfileEditor8);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 1, 5, 1, 1);


        retranslateUi(ProfileEditor8);

        QMetaObject::connectSlotsByName(ProfileEditor8);
    } // setupUi

    void retranslateUi(QDialog *ProfileEditor8)
    {
        ProfileEditor8->setWindowTitle(QCoreApplication::translate("ProfileEditor8", "Profile Editor Gen 8", nullptr));
        labelProfile->setText(QCoreApplication::translate("ProfileEditor8", "Profile Name", nullptr));
        labelVersion->setText(QCoreApplication::translate("ProfileEditor8", "Version", nullptr));
        comboBoxVersion->setItemText(0, QCoreApplication::translate("ProfileEditor8", "Sword", nullptr));
        comboBoxVersion->setItemText(1, QCoreApplication::translate("ProfileEditor8", "Shield", nullptr));
        comboBoxVersion->setItemText(2, QCoreApplication::translate("ProfileEditor8", "Brilliant Diamond", nullptr));
        comboBoxVersion->setItemText(3, QCoreApplication::translate("ProfileEditor8", "Shining Pearl", nullptr));

        labelTID->setText(QCoreApplication::translate("ProfileEditor8", "TID", nullptr));
        labelSID->setText(QCoreApplication::translate("ProfileEditor8", "SID", nullptr));
        checkBoxNationalDex->setText(QCoreApplication::translate("ProfileEditor8", "National Dex", nullptr));
        checkBoxShinyCharm->setText(QCoreApplication::translate("ProfileEditor8", "Shiny Charm", nullptr));
        checkBoxOvalCharm->setText(QCoreApplication::translate("ProfileEditor8", "Oval Charm", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("ProfileEditor8", "Okay", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ProfileEditor8", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileEditor8: public Ui_ProfileEditor8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEEDITOR8_H
