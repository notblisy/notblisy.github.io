/********************************************************************************
** Form generated from reading UI file 'Filter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_H
#define UI_FILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "Form/Controls/CheckList.hpp"
#include "Form/Controls/ComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Filter
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *labelHP;
    QSpinBox *spinBoxHPMin;
    QSpinBox *spinBoxHPMax;
    QLabel *labelAtk;
    QSpinBox *spinBoxAtkMin;
    QSpinBox *spinBoxAtkMax;
    QLabel *labelDef;
    QSpinBox *spinBoxDefMin;
    QSpinBox *spinBoxDefMax;
    QLabel *labelSpA;
    QSpinBox *spinBoxSpAMin;
    QSpinBox *spinBoxSpAMax;
    QLabel *labelSpD;
    QSpinBox *spinBoxSpDMin;
    QSpinBox *spinBoxSpDMax;
    QLabel *labelSpe;
    QSpinBox *spinBoxSpeMin;
    QSpinBox *spinBoxSpeMax;
    QCheckBox *checkBoxShowStats;
    QPushButton *pushButtonIVCalculator;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *labelAbility;
    ComboBox *comboBoxAbility;
    QLabel *labelEncounterSlot;
    CheckList *checkListEncounterSlot;
    QLabel *labelGender;
    ComboBox *comboBoxGender;
    QLabel *labelHiddenPower;
    CheckList *checkListHiddenPower;
    QLabel *labelNature;
    CheckList *checkListNature;
    QLabel *labelShiny;
    ComboBox *comboBoxShiny;
    QCheckBox *checkBoxDisableFilters;

    void setupUi(QWidget *Filter)
    {
        if (Filter->objectName().isEmpty())
            Filter->setObjectName("Filter");
        Filter->resize(433, 258);
        horizontalLayout = new QHBoxLayout(Filter);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelHP = new QLabel(Filter);
        labelHP->setObjectName("labelHP");

        gridLayout_2->addWidget(labelHP, 0, 0, 1, 1);

        spinBoxHPMin = new QSpinBox(Filter);
        spinBoxHPMin->setObjectName("spinBoxHPMin");
        spinBoxHPMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxHPMin, 0, 1, 1, 1);

        spinBoxHPMax = new QSpinBox(Filter);
        spinBoxHPMax->setObjectName("spinBoxHPMax");
        spinBoxHPMax->setMaximum(31);
        spinBoxHPMax->setValue(31);

        gridLayout_2->addWidget(spinBoxHPMax, 0, 2, 1, 1);

        labelAtk = new QLabel(Filter);
        labelAtk->setObjectName("labelAtk");

        gridLayout_2->addWidget(labelAtk, 1, 0, 1, 1);

        spinBoxAtkMin = new QSpinBox(Filter);
        spinBoxAtkMin->setObjectName("spinBoxAtkMin");
        spinBoxAtkMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxAtkMin, 1, 1, 1, 1);

        spinBoxAtkMax = new QSpinBox(Filter);
        spinBoxAtkMax->setObjectName("spinBoxAtkMax");
        spinBoxAtkMax->setMaximum(31);
        spinBoxAtkMax->setValue(31);

        gridLayout_2->addWidget(spinBoxAtkMax, 1, 2, 1, 1);

        labelDef = new QLabel(Filter);
        labelDef->setObjectName("labelDef");

        gridLayout_2->addWidget(labelDef, 2, 0, 1, 1);

        spinBoxDefMin = new QSpinBox(Filter);
        spinBoxDefMin->setObjectName("spinBoxDefMin");
        spinBoxDefMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxDefMin, 2, 1, 1, 1);

        spinBoxDefMax = new QSpinBox(Filter);
        spinBoxDefMax->setObjectName("spinBoxDefMax");
        spinBoxDefMax->setMaximum(31);
        spinBoxDefMax->setValue(31);

        gridLayout_2->addWidget(spinBoxDefMax, 2, 2, 1, 1);

        labelSpA = new QLabel(Filter);
        labelSpA->setObjectName("labelSpA");

        gridLayout_2->addWidget(labelSpA, 3, 0, 1, 1);

        spinBoxSpAMin = new QSpinBox(Filter);
        spinBoxSpAMin->setObjectName("spinBoxSpAMin");
        spinBoxSpAMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxSpAMin, 3, 1, 1, 1);

        spinBoxSpAMax = new QSpinBox(Filter);
        spinBoxSpAMax->setObjectName("spinBoxSpAMax");
        spinBoxSpAMax->setMaximum(31);
        spinBoxSpAMax->setValue(31);

        gridLayout_2->addWidget(spinBoxSpAMax, 3, 2, 1, 1);

        labelSpD = new QLabel(Filter);
        labelSpD->setObjectName("labelSpD");

        gridLayout_2->addWidget(labelSpD, 4, 0, 1, 1);

        spinBoxSpDMin = new QSpinBox(Filter);
        spinBoxSpDMin->setObjectName("spinBoxSpDMin");
        spinBoxSpDMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxSpDMin, 4, 1, 1, 1);

        spinBoxSpDMax = new QSpinBox(Filter);
        spinBoxSpDMax->setObjectName("spinBoxSpDMax");
        spinBoxSpDMax->setMaximum(31);
        spinBoxSpDMax->setValue(31);

        gridLayout_2->addWidget(spinBoxSpDMax, 4, 2, 1, 1);

        labelSpe = new QLabel(Filter);
        labelSpe->setObjectName("labelSpe");

        gridLayout_2->addWidget(labelSpe, 5, 0, 1, 1);

        spinBoxSpeMin = new QSpinBox(Filter);
        spinBoxSpeMin->setObjectName("spinBoxSpeMin");
        spinBoxSpeMin->setMaximum(31);

        gridLayout_2->addWidget(spinBoxSpeMin, 5, 1, 1, 1);

        spinBoxSpeMax = new QSpinBox(Filter);
        spinBoxSpeMax->setObjectName("spinBoxSpeMax");
        spinBoxSpeMax->setMaximum(31);
        spinBoxSpeMax->setValue(31);

        gridLayout_2->addWidget(spinBoxSpeMax, 5, 2, 1, 1);

        checkBoxShowStats = new QCheckBox(Filter);
        checkBoxShowStats->setObjectName("checkBoxShowStats");

        gridLayout_2->addWidget(checkBoxShowStats, 6, 0, 1, 3);

        pushButtonIVCalculator = new QPushButton(Filter);
        pushButtonIVCalculator->setObjectName("pushButtonIVCalculator");

        gridLayout_2->addWidget(pushButtonIVCalculator, 7, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_2);

        line = new QFrame(Filter);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        labelAbility = new QLabel(Filter);
        labelAbility->setObjectName("labelAbility");

        gridLayout->addWidget(labelAbility, 0, 0, 1, 1);

        comboBoxAbility = new ComboBox(Filter);
        comboBoxAbility->addItem(QString());
        comboBoxAbility->addItem(QString::fromUtf8("0"));
        comboBoxAbility->addItem(QString::fromUtf8("1"));
        comboBoxAbility->setObjectName("comboBoxAbility");

        gridLayout->addWidget(comboBoxAbility, 0, 1, 1, 1);

        labelEncounterSlot = new QLabel(Filter);
        labelEncounterSlot->setObjectName("labelEncounterSlot");

        gridLayout->addWidget(labelEncounterSlot, 1, 0, 1, 1);

        checkListEncounterSlot = new CheckList(Filter);
        checkListEncounterSlot->setObjectName("checkListEncounterSlot");

        gridLayout->addWidget(checkListEncounterSlot, 1, 1, 1, 1);

        labelGender = new QLabel(Filter);
        labelGender->setObjectName("labelGender");

        gridLayout->addWidget(labelGender, 2, 0, 1, 1);

        comboBoxGender = new ComboBox(Filter);
        comboBoxGender->addItem(QString());
        comboBoxGender->addItem(QString::fromUtf8("\342\231\202"));
        comboBoxGender->addItem(QString::fromUtf8("\342\231\200"));
        comboBoxGender->setObjectName("comboBoxGender");

        gridLayout->addWidget(comboBoxGender, 2, 1, 1, 1);

        labelHiddenPower = new QLabel(Filter);
        labelHiddenPower->setObjectName("labelHiddenPower");

        gridLayout->addWidget(labelHiddenPower, 3, 0, 1, 1);

        checkListHiddenPower = new CheckList(Filter);
        checkListHiddenPower->setObjectName("checkListHiddenPower");

        gridLayout->addWidget(checkListHiddenPower, 3, 1, 1, 1);

        labelNature = new QLabel(Filter);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 4, 0, 1, 1);

        checkListNature = new CheckList(Filter);
        checkListNature->setObjectName("checkListNature");

        gridLayout->addWidget(checkListNature, 4, 1, 1, 1);

        labelShiny = new QLabel(Filter);
        labelShiny->setObjectName("labelShiny");

        gridLayout->addWidget(labelShiny, 5, 0, 1, 1);

        comboBoxShiny = new ComboBox(Filter);
        comboBoxShiny->addItem(QString());
        comboBoxShiny->addItem(QString());
        comboBoxShiny->addItem(QString());
        comboBoxShiny->addItem(QString());
        comboBoxShiny->setObjectName("comboBoxShiny");

        gridLayout->addWidget(comboBoxShiny, 5, 1, 1, 1);

        checkBoxDisableFilters = new QCheckBox(Filter);
        checkBoxDisableFilters->setObjectName("checkBoxDisableFilters");

        gridLayout->addWidget(checkBoxDisableFilters, 6, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(Filter);

        QMetaObject::connectSlotsByName(Filter);
    } // setupUi

    void retranslateUi(QWidget *Filter)
    {
        labelHP->setText(QCoreApplication::translate("Filter", "HP", nullptr));
        labelAtk->setText(QCoreApplication::translate("Filter", "Atk", nullptr));
        labelDef->setText(QCoreApplication::translate("Filter", "Def", nullptr));
        labelSpA->setText(QCoreApplication::translate("Filter", "SpA", nullptr));
        labelSpD->setText(QCoreApplication::translate("Filter", "SpD", nullptr));
        labelSpe->setText(QCoreApplication::translate("Filter", "Spe", nullptr));
        checkBoxShowStats->setText(QCoreApplication::translate("Filter", "Show Stats", nullptr));
        pushButtonIVCalculator->setText(QCoreApplication::translate("Filter", "IV Calculator", nullptr));
        labelAbility->setText(QCoreApplication::translate("Filter", "Ability", nullptr));
        comboBoxAbility->setItemText(0, QCoreApplication::translate("Filter", "Any", nullptr));

        labelEncounterSlot->setText(QCoreApplication::translate("Filter", "Encounter Slot", nullptr));
        labelGender->setText(QCoreApplication::translate("Filter", "Gender", nullptr));
        comboBoxGender->setItemText(0, QCoreApplication::translate("Filter", "Any", nullptr));

        labelHiddenPower->setText(QCoreApplication::translate("Filter", "Hidden Power", nullptr));
        labelNature->setText(QCoreApplication::translate("Filter", "Nature", nullptr));
        labelShiny->setText(QCoreApplication::translate("Filter", "Shiny", nullptr));
        comboBoxShiny->setItemText(0, QCoreApplication::translate("Filter", "Any", nullptr));
        comboBoxShiny->setItemText(1, QCoreApplication::translate("Filter", "Star", nullptr));
        comboBoxShiny->setItemText(2, QCoreApplication::translate("Filter", "Square", nullptr));
        comboBoxShiny->setItemText(3, QCoreApplication::translate("Filter", "Star/Square", nullptr));

        checkBoxDisableFilters->setText(QCoreApplication::translate("Filter", "Disable Filters", nullptr));
        (void)Filter;
    } // retranslateUi

};

namespace Ui {
    class Filter: public Ui_Filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_H
