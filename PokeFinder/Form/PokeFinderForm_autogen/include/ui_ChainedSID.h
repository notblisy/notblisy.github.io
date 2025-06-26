/********************************************************************************
** Form generated from reading UI file 'ChainedSID.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAINEDSID_H
#define UI_CHAINEDSID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_ChainedSID
{
public:
    QGridLayout *gridLayout;
    QLabel *labelAtk;
    QLabel *labelSpe;
    ComboBox *comboBoxGender;
    QLabel *labelAbility;
    QSpinBox *spinBoxSpD;
    QSpinBox *spinBoxDef;
    QLabel *labelSpD;
    TableView *tableView;
    QSpinBox *spinBoxAtk;
    QLabel *labelTID;
    QLabel *labelSpA;
    ComboBox *comboBoxNature;
    QPushButton *pushButtonClear;
    ComboBox *comboBoxAbility;
    TextBox *textBoxTID;
    QLabel *labelPokemon;
    ComboBox *comboBoxPokemon;
    QLabel *labelPossibleResults;
    QSpinBox *spinBoxSpA;
    QLabel *labelNature;
    QLabel *labelDef;
    QLabel *labelHP;
    QPushButton *pushButtonCalculate;
    QSpinBox *spinBoxHP;
    QSpinBox *spinBoxSpe;
    QLabel *labelGender;
    QToolButton *closebutton;

    void setupUi(QWidget *ChainedSID)
    {
        if (ChainedSID->objectName().isEmpty())
            ChainedSID->setObjectName("ChainedSID");
        ChainedSID->resize(509, 380);
        gridLayout = new QGridLayout(ChainedSID);
        gridLayout->setObjectName("gridLayout");
        labelAtk = new QLabel(ChainedSID);
        labelAtk->setObjectName("labelAtk");

        gridLayout->addWidget(labelAtk, 2, 2, 1, 1);

        labelSpe = new QLabel(ChainedSID);
        labelSpe->setObjectName("labelSpe");

        gridLayout->addWidget(labelSpe, 6, 2, 1, 1);

        comboBoxGender = new ComboBox(ChainedSID);
        comboBoxGender->setObjectName("comboBoxGender");

        gridLayout->addWidget(comboBoxGender, 3, 1, 1, 1);

        labelAbility = new QLabel(ChainedSID);
        labelAbility->setObjectName("labelAbility");

        gridLayout->addWidget(labelAbility, 2, 0, 1, 1);

        spinBoxSpD = new QSpinBox(ChainedSID);
        spinBoxSpD->setObjectName("spinBoxSpD");

        gridLayout->addWidget(spinBoxSpD, 5, 3, 1, 1);

        spinBoxDef = new QSpinBox(ChainedSID);
        spinBoxDef->setObjectName("spinBoxDef");

        gridLayout->addWidget(spinBoxDef, 3, 3, 1, 1);

        labelSpD = new QLabel(ChainedSID);
        labelSpD->setObjectName("labelSpD");

        gridLayout->addWidget(labelSpD, 5, 2, 1, 1);

        tableView = new TableView(ChainedSID);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 8, 0, 1, 4);

        spinBoxAtk = new QSpinBox(ChainedSID);
        spinBoxAtk->setObjectName("spinBoxAtk");

        gridLayout->addWidget(spinBoxAtk, 2, 3, 1, 1);

        labelTID = new QLabel(ChainedSID);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 5, 0, 1, 1);

        labelSpA = new QLabel(ChainedSID);
        labelSpA->setObjectName("labelSpA");

        gridLayout->addWidget(labelSpA, 4, 2, 1, 1);

        comboBoxNature = new ComboBox(ChainedSID);
        comboBoxNature->setObjectName("comboBoxNature");

        gridLayout->addWidget(comboBoxNature, 4, 1, 1, 1);

        pushButtonClear = new QPushButton(ChainedSID);
        pushButtonClear->setObjectName("pushButtonClear");

        gridLayout->addWidget(pushButtonClear, 7, 3, 1, 1);

        comboBoxAbility = new ComboBox(ChainedSID);
        comboBoxAbility->setObjectName("comboBoxAbility");

        gridLayout->addWidget(comboBoxAbility, 2, 1, 1, 1);

        textBoxTID = new TextBox(ChainedSID);
        textBoxTID->setObjectName("textBoxTID");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBoxTID->sizePolicy().hasHeightForWidth());
        textBoxTID->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBoxTID, 5, 1, 1, 1);

        labelPokemon = new QLabel(ChainedSID);
        labelPokemon->setObjectName("labelPokemon");

        gridLayout->addWidget(labelPokemon, 1, 0, 1, 1);

        comboBoxPokemon = new ComboBox(ChainedSID);
        comboBoxPokemon->setObjectName("comboBoxPokemon");

        gridLayout->addWidget(comboBoxPokemon, 1, 1, 1, 1);

        labelPossibleResults = new QLabel(ChainedSID);
        labelPossibleResults->setObjectName("labelPossibleResults");

        gridLayout->addWidget(labelPossibleResults, 6, 0, 1, 1);

        spinBoxSpA = new QSpinBox(ChainedSID);
        spinBoxSpA->setObjectName("spinBoxSpA");

        gridLayout->addWidget(spinBoxSpA, 4, 3, 1, 1);

        labelNature = new QLabel(ChainedSID);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 4, 0, 1, 1);

        labelDef = new QLabel(ChainedSID);
        labelDef->setObjectName("labelDef");

        gridLayout->addWidget(labelDef, 3, 2, 1, 1);

        labelHP = new QLabel(ChainedSID);
        labelHP->setObjectName("labelHP");

        gridLayout->addWidget(labelHP, 1, 2, 1, 1);

        pushButtonCalculate = new QPushButton(ChainedSID);
        pushButtonCalculate->setObjectName("pushButtonCalculate");

        gridLayout->addWidget(pushButtonCalculate, 7, 2, 1, 1);

        spinBoxHP = new QSpinBox(ChainedSID);
        spinBoxHP->setObjectName("spinBoxHP");

        gridLayout->addWidget(spinBoxHP, 1, 3, 1, 1);

        spinBoxSpe = new QSpinBox(ChainedSID);
        spinBoxSpe->setObjectName("spinBoxSpe");

        gridLayout->addWidget(spinBoxSpe, 6, 3, 1, 1);

        labelGender = new QLabel(ChainedSID);
        labelGender->setObjectName("labelGender");

        gridLayout->addWidget(labelGender, 3, 0, 1, 1);

        closebutton = new QToolButton(ChainedSID);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(ChainedSID);

        QMetaObject::connectSlotsByName(ChainedSID);
    } // setupUi

    void retranslateUi(QWidget *ChainedSID)
    {
        ChainedSID->setWindowTitle(QCoreApplication::translate("ChainedSID", "Chained Shiny to SID", nullptr));
        labelAtk->setText(QCoreApplication::translate("ChainedSID", "Atk", nullptr));
        labelSpe->setText(QCoreApplication::translate("ChainedSID", "Spe", nullptr));
        labelAbility->setText(QCoreApplication::translate("ChainedSID", "Ability", nullptr));
        labelSpD->setText(QCoreApplication::translate("ChainedSID", "SpD", nullptr));
        labelTID->setText(QCoreApplication::translate("ChainedSID", "TID", nullptr));
        labelSpA->setText(QCoreApplication::translate("ChainedSID", "SpA", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("ChainedSID", "Clear", nullptr));
        labelPokemon->setText(QCoreApplication::translate("ChainedSID", "Pokemon", nullptr));
        labelPossibleResults->setText(QCoreApplication::translate("ChainedSID", "Possible Results:", nullptr));
        labelNature->setText(QCoreApplication::translate("ChainedSID", "Nature", nullptr));
        labelDef->setText(QCoreApplication::translate("ChainedSID", "Def", nullptr));
        labelHP->setText(QCoreApplication::translate("ChainedSID", "HP", nullptr));
        pushButtonCalculate->setText(QCoreApplication::translate("ChainedSID", "Calculate", nullptr));
        labelGender->setText(QCoreApplication::translate("ChainedSID", "Gender", nullptr));
        closebutton->setText(QCoreApplication::translate("ChainedSID", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChainedSID: public Ui_ChainedSID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAINEDSID_H
