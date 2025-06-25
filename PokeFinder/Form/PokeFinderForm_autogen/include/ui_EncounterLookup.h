/********************************************************************************
** Form generated from reading UI file 'EncounterLookup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCOUNTERLOOKUP_H
#define UI_ENCOUNTERLOOKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_EncounterLookup
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPokemon;
    ComboBox *comboBoxPokemon;
    QLabel *labelGame;
    ComboBox *comboBoxGame;
    QPushButton *pushButtonFind;
    TableView *tableView;

    void setupUi(QWidget *EncounterLookup)
    {
        if (EncounterLookup->objectName().isEmpty())
            EncounterLookup->setObjectName("EncounterLookup");
        EncounterLookup->resize(400, 400);
        gridLayout = new QGridLayout(EncounterLookup);
        gridLayout->setObjectName("gridLayout");
        labelPokemon = new QLabel(EncounterLookup);
        labelPokemon->setObjectName("labelPokemon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPokemon->sizePolicy().hasHeightForWidth());
        labelPokemon->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelPokemon, 0, 0, 1, 1);

        comboBoxPokemon = new ComboBox(EncounterLookup);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout->addWidget(comboBoxPokemon, 0, 1, 1, 1);

        labelGame = new QLabel(EncounterLookup);
        labelGame->setObjectName("labelGame");
        sizePolicy.setHeightForWidth(labelGame->sizePolicy().hasHeightForWidth());
        labelGame->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelGame, 1, 0, 1, 1);

        comboBoxGame = new ComboBox(EncounterLookup);
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->addItem(QString());
        comboBoxGame->setObjectName("comboBoxGame");

        gridLayout->addWidget(comboBoxGame, 1, 1, 1, 1);

        pushButtonFind = new QPushButton(EncounterLookup);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 2, 2, 1, 1);

        tableView = new TableView(EncounterLookup);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 3, 0, 1, 3);


        retranslateUi(EncounterLookup);

        QMetaObject::connectSlotsByName(EncounterLookup);
    } // setupUi

    void retranslateUi(QWidget *EncounterLookup)
    {
        EncounterLookup->setWindowTitle(QCoreApplication::translate("EncounterLookup", "Encounter Lookup", nullptr));
        labelPokemon->setText(QCoreApplication::translate("EncounterLookup", "Pok\303\251mon", nullptr));
        labelGame->setText(QCoreApplication::translate("EncounterLookup", "Game", nullptr));
        comboBoxGame->setItemText(0, QCoreApplication::translate("EncounterLookup", "Ruby", nullptr));
        comboBoxGame->setItemText(1, QCoreApplication::translate("EncounterLookup", "Sapphire", nullptr));
        comboBoxGame->setItemText(2, QCoreApplication::translate("EncounterLookup", "Fire Red", nullptr));
        comboBoxGame->setItemText(3, QCoreApplication::translate("EncounterLookup", "Leaf Green", nullptr));
        comboBoxGame->setItemText(4, QCoreApplication::translate("EncounterLookup", "Emerald", nullptr));
        comboBoxGame->setItemText(5, QCoreApplication::translate("EncounterLookup", "Diamond", nullptr));
        comboBoxGame->setItemText(6, QCoreApplication::translate("EncounterLookup", "Pearl", nullptr));
        comboBoxGame->setItemText(7, QCoreApplication::translate("EncounterLookup", "Platinum", nullptr));
        comboBoxGame->setItemText(8, QCoreApplication::translate("EncounterLookup", "Heart Gold", nullptr));
        comboBoxGame->setItemText(9, QCoreApplication::translate("EncounterLookup", "Soul Silver", nullptr));
        comboBoxGame->setItemText(10, QCoreApplication::translate("EncounterLookup", "Black", nullptr));
        comboBoxGame->setItemText(11, QCoreApplication::translate("EncounterLookup", "White", nullptr));
        comboBoxGame->setItemText(12, QCoreApplication::translate("EncounterLookup", "Black 2", nullptr));
        comboBoxGame->setItemText(13, QCoreApplication::translate("EncounterLookup", "White 2", nullptr));
        comboBoxGame->setItemText(14, QCoreApplication::translate("EncounterLookup", "Brilliant Diamond", nullptr));
        comboBoxGame->setItemText(15, QCoreApplication::translate("EncounterLookup", "Shining Pearl", nullptr));

        pushButtonFind->setText(QCoreApplication::translate("EncounterLookup", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncounterLookup: public Ui_EncounterLookup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCOUNTERLOOKUP_H
