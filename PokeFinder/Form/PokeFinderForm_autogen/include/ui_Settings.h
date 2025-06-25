/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QLabel *labelLanguage;
    QComboBox *comboBoxLanguage;
    QLabel *labelProfiles;
    QLineEdit *lineEditProfiles;
    QPushButton *pushButtonProfile;
    QLabel *labelStyle;
    QComboBox *comboBoxStyle;
    QLabel *labelTableHeaderSize;
    QComboBox *comboBoxTableHeaderSize;
    QLabel *labelThreads;
    QComboBox *comboBoxThreads;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(344, 162);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName("gridLayout");
        labelLanguage = new QLabel(Settings);
        labelLanguage->setObjectName("labelLanguage");

        gridLayout->addWidget(labelLanguage, 0, 0, 1, 1);

        comboBoxLanguage = new QComboBox(Settings);
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->addItem(QString());
        comboBoxLanguage->setObjectName("comboBoxLanguage");

        gridLayout->addWidget(comboBoxLanguage, 0, 1, 1, 1);

        labelProfiles = new QLabel(Settings);
        labelProfiles->setObjectName("labelProfiles");

        gridLayout->addWidget(labelProfiles, 1, 0, 1, 1);

        lineEditProfiles = new QLineEdit(Settings);
        lineEditProfiles->setObjectName("lineEditProfiles");
        lineEditProfiles->setReadOnly(true);

        gridLayout->addWidget(lineEditProfiles, 1, 1, 1, 1);

        pushButtonProfile = new QPushButton(Settings);
        pushButtonProfile->setObjectName("pushButtonProfile");

        gridLayout->addWidget(pushButtonProfile, 1, 2, 1, 1);

        labelStyle = new QLabel(Settings);
        labelStyle->setObjectName("labelStyle");

        gridLayout->addWidget(labelStyle, 2, 0, 1, 1);

        comboBoxStyle = new QComboBox(Settings);
        comboBoxStyle->addItem(QString());
        comboBoxStyle->addItem(QString());
        comboBoxStyle->addItem(QString());
        comboBoxStyle->setObjectName("comboBoxStyle");

        gridLayout->addWidget(comboBoxStyle, 2, 1, 1, 1);

        labelTableHeaderSize = new QLabel(Settings);
        labelTableHeaderSize->setObjectName("labelTableHeaderSize");

        gridLayout->addWidget(labelTableHeaderSize, 3, 0, 1, 1);

        comboBoxTableHeaderSize = new QComboBox(Settings);
        comboBoxTableHeaderSize->addItem(QString());
        comboBoxTableHeaderSize->addItem(QString());
        comboBoxTableHeaderSize->setObjectName("comboBoxTableHeaderSize");

        gridLayout->addWidget(comboBoxTableHeaderSize, 3, 1, 1, 1);

        labelThreads = new QLabel(Settings);
        labelThreads->setObjectName("labelThreads");

        gridLayout->addWidget(labelThreads, 4, 0, 1, 1);

        comboBoxThreads = new QComboBox(Settings);
        comboBoxThreads->setObjectName("comboBoxThreads");

        gridLayout->addWidget(comboBoxThreads, 4, 1, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Settings", nullptr));
        labelLanguage->setText(QCoreApplication::translate("Settings", "Language", nullptr));
        comboBoxLanguage->setItemText(0, QCoreApplication::translate("Settings", "Chinese", nullptr));
        comboBoxLanguage->setItemText(1, QCoreApplication::translate("Settings", "English", nullptr));
        comboBoxLanguage->setItemText(2, QCoreApplication::translate("Settings", "French", nullptr));
        comboBoxLanguage->setItemText(3, QCoreApplication::translate("Settings", "German", nullptr));
        comboBoxLanguage->setItemText(4, QCoreApplication::translate("Settings", "Italian", nullptr));
        comboBoxLanguage->setItemText(5, QCoreApplication::translate("Settings", "Japanese", nullptr));
        comboBoxLanguage->setItemText(6, QCoreApplication::translate("Settings", "Korean", nullptr));
        comboBoxLanguage->setItemText(7, QCoreApplication::translate("Settings", "Spanish", nullptr));

        labelProfiles->setText(QCoreApplication::translate("Settings", "Profiles Path", nullptr));
        pushButtonProfile->setText(QCoreApplication::translate("Settings", "Change", nullptr));
        labelStyle->setText(QCoreApplication::translate("Settings", "Style", nullptr));
        comboBoxStyle->setItemText(0, QCoreApplication::translate("Settings", "Auto", nullptr));
        comboBoxStyle->setItemText(1, QCoreApplication::translate("Settings", "Dark", nullptr));
        comboBoxStyle->setItemText(2, QCoreApplication::translate("Settings", "Light", nullptr));

        labelTableHeaderSize->setText(QCoreApplication::translate("Settings", "Table Header Size", nullptr));
        comboBoxTableHeaderSize->setItemText(0, QCoreApplication::translate("Settings", "Stretch to fit contents", nullptr));
        comboBoxTableHeaderSize->setItemText(1, QCoreApplication::translate("Settings", "Stretch to fit width", nullptr));

        labelThreads->setText(QCoreApplication::translate("Settings", "Threads", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
