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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TableView.hpp"

QT_BEGIN_NAMESPACE

class Ui_EncounterLookup
{
public:
    QGridLayout *gridLayout;
    ComboBox *comboBoxPokemon;
    ComboBox *comboBoxGame;
    QPushButton *pushButtonFind;
    TableView *tableView;
    QLabel *labelPokemon;
    QLabel *labelGame;
    QToolButton *closebutton;

    void setupUi(QWidget *EncounterLookup)
    {
        if (EncounterLookup->objectName().isEmpty())
            EncounterLookup->setObjectName("EncounterLookup");
        EncounterLookup->resize(400, 400);
        gridLayout = new QGridLayout(EncounterLookup);
        gridLayout->setObjectName("gridLayout");
        comboBoxPokemon = new ComboBox(EncounterLookup);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout->addWidget(comboBoxPokemon, 1, 1, 1, 1);

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

        gridLayout->addWidget(comboBoxGame, 2, 1, 1, 1);

        pushButtonFind = new QPushButton(EncounterLookup);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 3, 2, 1, 1);

        tableView = new TableView(EncounterLookup);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 4, 0, 1, 3);

        labelPokemon = new QLabel(EncounterLookup);
        labelPokemon->setObjectName("labelPokemon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPokemon->sizePolicy().hasHeightForWidth());
        labelPokemon->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelPokemon, 1, 0, 1, 1);

        labelGame = new QLabel(EncounterLookup);
        labelGame->setObjectName("labelGame");
        sizePolicy.setHeightForWidth(labelGame->sizePolicy().hasHeightForWidth());
        labelGame->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelGame, 2, 0, 1, 1);

        closebutton = new QToolButton(EncounterLookup);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(EncounterLookup);

        QMetaObject::connectSlotsByName(EncounterLookup);
    } // setupUi

    void retranslateUi(QWidget *EncounterLookup)
    {
        EncounterLookup->setWindowTitle(QCoreApplication::translate("EncounterLookup", "Encounter Lookup", nullptr));
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
        labelPokemon->setText(QCoreApplication::translate("EncounterLookup", "Pok\303\251mon", nullptr));
        labelGame->setText(QCoreApplication::translate("EncounterLookup", "Game", nullptr));
        closebutton->setText(QCoreApplication::translate("EncounterLookup", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncounterLookup: public Ui_EncounterLookup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCOUNTERLOOKUP_H
