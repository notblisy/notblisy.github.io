/********************************************************************************
** Form generated from reading UI file 'EggSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGGSETTINGS_H
#define UI_EGGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_EggSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *labelParentAIVs;
    QLabel *labelParentBIVs;
    QLabel *labelHP;
    QSpinBox *spinBoxParentAHP;
    QSpinBox *spinBoxParentBHP;
    QLabel *labelAtk;
    QSpinBox *spinBoxParentAAtk;
    QSpinBox *spinBoxParentBAtk;
    QLabel *labelDef;
    QSpinBox *spinBoxParentADef;
    QSpinBox *spinBoxParentBDef;
    QLabel *labelSpA;
    QSpinBox *spinBoxParentASpA;
    QSpinBox *spinBoxParentBSpA;
    QLabel *labelSpD;
    QSpinBox *spinBoxParentASpD;
    QSpinBox *spinBoxParentBSpD;
    QLabel *labelSpe;
    QSpinBox *spinBoxParentASpe;
    QSpinBox *spinBoxParentBSpe;
    QFrame *line;
    QLabel *labelParentA;
    QLabel *labelParentB;
    QLabel *labelAbility;
    QComboBox *comboBoxParentAAbility;
    QComboBox *comboBoxParentBAbility;
    QLabel *labelGender;
    QComboBox *comboBoxParentAGender;
    QComboBox *comboBoxParentBGender;
    QLabel *labelItem;
    ComboBox *comboBoxParentAItem;
    ComboBox *comboBoxParentBItem;
    QLabel *labelNature;
    QComboBox *comboBoxParentANature;
    QComboBox *comboBoxParentBNature;
    QLabel *labelEggSpecie;
    ComboBox *comboBoxEggSpecie;
    QCheckBox *checkBoxMasuda;
    QCheckBox *checkBoxShowInheritance;

    void setupUi(QWidget *EggSettings)
    {
        if (EggSettings->objectName().isEmpty())
            EggSettings->setObjectName("EggSettings");
        EggSettings->resize(373, 222);
        gridLayout = new QGridLayout(EggSettings);
        gridLayout->setObjectName("gridLayout");
        labelParentAIVs = new QLabel(EggSettings);
        labelParentAIVs->setObjectName("labelParentAIVs");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelParentAIVs->sizePolicy().hasHeightForWidth());
        labelParentAIVs->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelParentAIVs, 0, 1, 1, 1);

        labelParentBIVs = new QLabel(EggSettings);
        labelParentBIVs->setObjectName("labelParentBIVs");
        sizePolicy.setHeightForWidth(labelParentBIVs->sizePolicy().hasHeightForWidth());
        labelParentBIVs->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelParentBIVs, 0, 2, 1, 1);

        labelHP = new QLabel(EggSettings);
        labelHP->setObjectName("labelHP");

        gridLayout->addWidget(labelHP, 1, 0, 1, 1);

        spinBoxParentAHP = new QSpinBox(EggSettings);
        spinBoxParentAHP->setObjectName("spinBoxParentAHP");
        spinBoxParentAHP->setMaximum(31);
        spinBoxParentAHP->setValue(31);

        gridLayout->addWidget(spinBoxParentAHP, 1, 1, 1, 1);

        spinBoxParentBHP = new QSpinBox(EggSettings);
        spinBoxParentBHP->setObjectName("spinBoxParentBHP");
        spinBoxParentBHP->setMaximum(31);
        spinBoxParentBHP->setValue(31);

        gridLayout->addWidget(spinBoxParentBHP, 1, 2, 1, 1);

        labelAtk = new QLabel(EggSettings);
        labelAtk->setObjectName("labelAtk");

        gridLayout->addWidget(labelAtk, 2, 0, 1, 1);

        spinBoxParentAAtk = new QSpinBox(EggSettings);
        spinBoxParentAAtk->setObjectName("spinBoxParentAAtk");
        spinBoxParentAAtk->setMaximum(31);
        spinBoxParentAAtk->setValue(31);

        gridLayout->addWidget(spinBoxParentAAtk, 2, 1, 1, 1);

        spinBoxParentBAtk = new QSpinBox(EggSettings);
        spinBoxParentBAtk->setObjectName("spinBoxParentBAtk");
        spinBoxParentBAtk->setMaximum(31);
        spinBoxParentBAtk->setValue(31);

        gridLayout->addWidget(spinBoxParentBAtk, 2, 2, 1, 1);

        labelDef = new QLabel(EggSettings);
        labelDef->setObjectName("labelDef");

        gridLayout->addWidget(labelDef, 3, 0, 1, 1);

        spinBoxParentADef = new QSpinBox(EggSettings);
        spinBoxParentADef->setObjectName("spinBoxParentADef");
        spinBoxParentADef->setMaximum(31);
        spinBoxParentADef->setValue(31);

        gridLayout->addWidget(spinBoxParentADef, 3, 1, 1, 1);

        spinBoxParentBDef = new QSpinBox(EggSettings);
        spinBoxParentBDef->setObjectName("spinBoxParentBDef");
        spinBoxParentBDef->setMaximum(31);
        spinBoxParentBDef->setValue(31);

        gridLayout->addWidget(spinBoxParentBDef, 3, 2, 1, 1);

        labelSpA = new QLabel(EggSettings);
        labelSpA->setObjectName("labelSpA");

        gridLayout->addWidget(labelSpA, 4, 0, 1, 1);

        spinBoxParentASpA = new QSpinBox(EggSettings);
        spinBoxParentASpA->setObjectName("spinBoxParentASpA");
        spinBoxParentASpA->setMaximum(31);
        spinBoxParentASpA->setValue(31);

        gridLayout->addWidget(spinBoxParentASpA, 4, 1, 1, 1);

        spinBoxParentBSpA = new QSpinBox(EggSettings);
        spinBoxParentBSpA->setObjectName("spinBoxParentBSpA");
        spinBoxParentBSpA->setMaximum(31);
        spinBoxParentBSpA->setValue(31);

        gridLayout->addWidget(spinBoxParentBSpA, 4, 2, 1, 1);

        labelSpD = new QLabel(EggSettings);
        labelSpD->setObjectName("labelSpD");

        gridLayout->addWidget(labelSpD, 5, 0, 1, 1);

        spinBoxParentASpD = new QSpinBox(EggSettings);
        spinBoxParentASpD->setObjectName("spinBoxParentASpD");
        spinBoxParentASpD->setMaximum(31);
        spinBoxParentASpD->setValue(31);

        gridLayout->addWidget(spinBoxParentASpD, 5, 1, 1, 1);

        spinBoxParentBSpD = new QSpinBox(EggSettings);
        spinBoxParentBSpD->setObjectName("spinBoxParentBSpD");
        spinBoxParentBSpD->setMaximum(31);
        spinBoxParentBSpD->setValue(31);

        gridLayout->addWidget(spinBoxParentBSpD, 5, 2, 1, 1);

        labelSpe = new QLabel(EggSettings);
        labelSpe->setObjectName("labelSpe");

        gridLayout->addWidget(labelSpe, 6, 0, 1, 1);

        spinBoxParentASpe = new QSpinBox(EggSettings);
        spinBoxParentASpe->setObjectName("spinBoxParentASpe");
        spinBoxParentASpe->setMaximum(31);
        spinBoxParentASpe->setValue(31);

        gridLayout->addWidget(spinBoxParentASpe, 6, 1, 1, 1);

        spinBoxParentBSpe = new QSpinBox(EggSettings);
        spinBoxParentBSpe->setObjectName("spinBoxParentBSpe");
        spinBoxParentBSpe->setMaximum(31);
        spinBoxParentBSpe->setValue(31);

        gridLayout->addWidget(spinBoxParentBSpe, 6, 2, 1, 1);

        line = new QFrame(EggSettings);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 3, 7, 1);

        labelParentA = new QLabel(EggSettings);
        labelParentA->setObjectName("labelParentA");
        sizePolicy.setHeightForWidth(labelParentA->sizePolicy().hasHeightForWidth());
        labelParentA->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelParentA, 0, 5, 1, 1);

        labelParentB = new QLabel(EggSettings);
        labelParentB->setObjectName("labelParentB");
        sizePolicy.setHeightForWidth(labelParentB->sizePolicy().hasHeightForWidth());
        labelParentB->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelParentB, 0, 6, 1, 1);

        labelAbility = new QLabel(EggSettings);
        labelAbility->setObjectName("labelAbility");

        gridLayout->addWidget(labelAbility, 1, 4, 1, 1);

        comboBoxParentAAbility = new QComboBox(EggSettings);
        comboBoxParentAAbility->setObjectName("comboBoxParentAAbility");

        gridLayout->addWidget(comboBoxParentAAbility, 1, 5, 1, 1);

        comboBoxParentBAbility = new QComboBox(EggSettings);
        comboBoxParentBAbility->setObjectName("comboBoxParentBAbility");

        gridLayout->addWidget(comboBoxParentBAbility, 1, 6, 1, 1);

        labelGender = new QLabel(EggSettings);
        labelGender->setObjectName("labelGender");

        gridLayout->addWidget(labelGender, 2, 4, 1, 1);

        comboBoxParentAGender = new QComboBox(EggSettings);
        comboBoxParentAGender->setObjectName("comboBoxParentAGender");

        gridLayout->addWidget(comboBoxParentAGender, 2, 5, 1, 1);

        comboBoxParentBGender = new QComboBox(EggSettings);
        comboBoxParentBGender->setObjectName("comboBoxParentBGender");

        gridLayout->addWidget(comboBoxParentBGender, 2, 6, 1, 1);

        labelItem = new QLabel(EggSettings);
        labelItem->setObjectName("labelItem");

        gridLayout->addWidget(labelItem, 3, 4, 1, 1);

        comboBoxParentAItem = new ComboBox(EggSettings);
        comboBoxParentAItem->setObjectName("comboBoxParentAItem");

        gridLayout->addWidget(comboBoxParentAItem, 3, 5, 1, 1);

        comboBoxParentBItem = new ComboBox(EggSettings);
        comboBoxParentBItem->setObjectName("comboBoxParentBItem");

        gridLayout->addWidget(comboBoxParentBItem, 3, 6, 1, 1);

        labelNature = new QLabel(EggSettings);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 4, 4, 1, 1);

        comboBoxParentANature = new QComboBox(EggSettings);
        comboBoxParentANature->setObjectName("comboBoxParentANature");

        gridLayout->addWidget(comboBoxParentANature, 4, 5, 1, 1);

        comboBoxParentBNature = new QComboBox(EggSettings);
        comboBoxParentBNature->setObjectName("comboBoxParentBNature");

        gridLayout->addWidget(comboBoxParentBNature, 4, 6, 1, 1);

        labelEggSpecie = new QLabel(EggSettings);
        labelEggSpecie->setObjectName("labelEggSpecie");

        gridLayout->addWidget(labelEggSpecie, 5, 4, 1, 1);

        comboBoxEggSpecie = new ComboBox(EggSettings);
        comboBoxEggSpecie->setObjectName("comboBoxEggSpecie");

        gridLayout->addWidget(comboBoxEggSpecie, 5, 5, 1, 1);

        checkBoxMasuda = new QCheckBox(EggSettings);
        checkBoxMasuda->setObjectName("checkBoxMasuda");

        gridLayout->addWidget(checkBoxMasuda, 6, 4, 1, 1);

        checkBoxShowInheritance = new QCheckBox(EggSettings);
        checkBoxShowInheritance->setObjectName("checkBoxShowInheritance");

        gridLayout->addWidget(checkBoxShowInheritance, 6, 5, 1, 2);

        QWidget::setTabOrder(spinBoxParentAHP, spinBoxParentAAtk);
        QWidget::setTabOrder(spinBoxParentAAtk, spinBoxParentADef);
        QWidget::setTabOrder(spinBoxParentADef, spinBoxParentASpA);
        QWidget::setTabOrder(spinBoxParentASpA, spinBoxParentASpD);
        QWidget::setTabOrder(spinBoxParentASpD, spinBoxParentASpe);
        QWidget::setTabOrder(spinBoxParentASpe, spinBoxParentBHP);
        QWidget::setTabOrder(spinBoxParentBHP, spinBoxParentBAtk);
        QWidget::setTabOrder(spinBoxParentBAtk, spinBoxParentBDef);
        QWidget::setTabOrder(spinBoxParentBDef, spinBoxParentBSpA);
        QWidget::setTabOrder(spinBoxParentBSpA, spinBoxParentBSpD);
        QWidget::setTabOrder(spinBoxParentBSpD, spinBoxParentBSpe);
        QWidget::setTabOrder(spinBoxParentBSpe, comboBoxParentAAbility);
        QWidget::setTabOrder(comboBoxParentAAbility, comboBoxParentAGender);
        QWidget::setTabOrder(comboBoxParentAGender, comboBoxParentAItem);
        QWidget::setTabOrder(comboBoxParentAItem, comboBoxParentANature);
        QWidget::setTabOrder(comboBoxParentANature, comboBoxEggSpecie);
        QWidget::setTabOrder(comboBoxEggSpecie, comboBoxParentBAbility);
        QWidget::setTabOrder(comboBoxParentBAbility, comboBoxParentBGender);
        QWidget::setTabOrder(comboBoxParentBGender, comboBoxParentBItem);
        QWidget::setTabOrder(comboBoxParentBItem, comboBoxParentBNature);
        QWidget::setTabOrder(comboBoxParentBNature, checkBoxMasuda);
        QWidget::setTabOrder(checkBoxMasuda, checkBoxShowInheritance);

        retranslateUi(EggSettings);

        QMetaObject::connectSlotsByName(EggSettings);
    } // setupUi

    void retranslateUi(QWidget *EggSettings)
    {
        labelParentAIVs->setText(QCoreApplication::translate("EggSettings", "Parent A", nullptr));
        labelParentBIVs->setText(QCoreApplication::translate("EggSettings", "Parent B", nullptr));
        labelHP->setText(QCoreApplication::translate("EggSettings", "HP", nullptr));
        labelAtk->setText(QCoreApplication::translate("EggSettings", "Atk", nullptr));
        labelDef->setText(QCoreApplication::translate("EggSettings", "Def", nullptr));
        labelSpA->setText(QCoreApplication::translate("EggSettings", "SpA", nullptr));
        labelSpD->setText(QCoreApplication::translate("EggSettings", "SpD", nullptr));
        labelSpe->setText(QCoreApplication::translate("EggSettings", "Spe", nullptr));
        labelParentA->setText(QCoreApplication::translate("EggSettings", "Parent A", nullptr));
        labelParentB->setText(QCoreApplication::translate("EggSettings", "Parent B", nullptr));
        labelAbility->setText(QCoreApplication::translate("EggSettings", "Ability", nullptr));
        labelGender->setText(QCoreApplication::translate("EggSettings", "Gender", nullptr));
        labelItem->setText(QCoreApplication::translate("EggSettings", "Item", nullptr));
        labelNature->setText(QCoreApplication::translate("EggSettings", "Nature", nullptr));
        labelEggSpecie->setText(QCoreApplication::translate("EggSettings", "Egg Specie", nullptr));
        checkBoxMasuda->setText(QCoreApplication::translate("EggSettings", "Masuda", nullptr));
        checkBoxShowInheritance->setText(QCoreApplication::translate("EggSettings", "Show Inheritance", nullptr));
        (void)EggSettings;
    } // retranslateUi

};

namespace Ui {
    class EggSettings: public Ui_EggSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGGSETTINGS_H
