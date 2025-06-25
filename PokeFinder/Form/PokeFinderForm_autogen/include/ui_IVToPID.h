/********************************************************************************
** Form generated from reading UI file 'IVToPID.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IVTOPID_H
#define UI_IVTOPID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IVToPID
{
public:
    QGridLayout *gridLayout;
    QLabel *labelHP;
    QLabel *labelAtk;
    QLabel *labelDef;
    QLabel *labelSpA;
    QLabel *labelSpD;
    QLabel *labelSpe;
    QSpinBox *spinBoxHP;
    QSpinBox *spinBoxAtk;
    QSpinBox *spinBoxDef;
    QSpinBox *spinBoxSpA;
    QSpinBox *spinBoxSpD;
    QSpinBox *spinBoxSpe;
    QLabel *labelNature;
    QLabel *labelTID;
    QComboBox *comboBoxNature;
    TextBox *textBoxTID;
    QPushButton *pushButtonFind;
    TableView *tableView;

    void setupUi(QWidget *IVToPID)
    {
        if (IVToPID->objectName().isEmpty())
            IVToPID->setObjectName("IVToPID");
        IVToPID->resize(700, 450);
        gridLayout = new QGridLayout(IVToPID);
        gridLayout->setObjectName("gridLayout");
        labelHP = new QLabel(IVToPID);
        labelHP->setObjectName("labelHP");

        gridLayout->addWidget(labelHP, 0, 0, 1, 1);

        labelAtk = new QLabel(IVToPID);
        labelAtk->setObjectName("labelAtk");

        gridLayout->addWidget(labelAtk, 0, 1, 1, 1);

        labelDef = new QLabel(IVToPID);
        labelDef->setObjectName("labelDef");

        gridLayout->addWidget(labelDef, 0, 2, 1, 1);

        labelSpA = new QLabel(IVToPID);
        labelSpA->setObjectName("labelSpA");

        gridLayout->addWidget(labelSpA, 0, 3, 1, 1);

        labelSpD = new QLabel(IVToPID);
        labelSpD->setObjectName("labelSpD");

        gridLayout->addWidget(labelSpD, 0, 4, 1, 1);

        labelSpe = new QLabel(IVToPID);
        labelSpe->setObjectName("labelSpe");

        gridLayout->addWidget(labelSpe, 0, 5, 1, 1);

        spinBoxHP = new QSpinBox(IVToPID);
        spinBoxHP->setObjectName("spinBoxHP");
        spinBoxHP->setMaximum(31);

        gridLayout->addWidget(spinBoxHP, 1, 0, 1, 1);

        spinBoxAtk = new QSpinBox(IVToPID);
        spinBoxAtk->setObjectName("spinBoxAtk");
        spinBoxAtk->setMaximum(31);

        gridLayout->addWidget(spinBoxAtk, 1, 1, 1, 1);

        spinBoxDef = new QSpinBox(IVToPID);
        spinBoxDef->setObjectName("spinBoxDef");
        spinBoxDef->setMaximum(31);

        gridLayout->addWidget(spinBoxDef, 1, 2, 1, 1);

        spinBoxSpA = new QSpinBox(IVToPID);
        spinBoxSpA->setObjectName("spinBoxSpA");
        spinBoxSpA->setMaximum(31);

        gridLayout->addWidget(spinBoxSpA, 1, 3, 1, 1);

        spinBoxSpD = new QSpinBox(IVToPID);
        spinBoxSpD->setObjectName("spinBoxSpD");
        spinBoxSpD->setMaximum(31);

        gridLayout->addWidget(spinBoxSpD, 1, 4, 1, 1);

        spinBoxSpe = new QSpinBox(IVToPID);
        spinBoxSpe->setObjectName("spinBoxSpe");
        spinBoxSpe->setMaximum(31);

        gridLayout->addWidget(spinBoxSpe, 1, 5, 1, 1);

        labelNature = new QLabel(IVToPID);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 2, 0, 1, 1);

        labelTID = new QLabel(IVToPID);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 2, 1, 1, 1);

        comboBoxNature = new QComboBox(IVToPID);
        comboBoxNature->setObjectName("comboBoxNature");

        gridLayout->addWidget(comboBoxNature, 3, 0, 1, 1);

        textBoxTID = new TextBox(IVToPID);
        textBoxTID->setObjectName("textBoxTID");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBoxTID->sizePolicy().hasHeightForWidth());
        textBoxTID->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBoxTID, 3, 1, 1, 1);

        pushButtonFind = new QPushButton(IVToPID);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 3, 2, 1, 1);

        tableView = new TableView(IVToPID);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 4, 0, 1, 6);


        retranslateUi(IVToPID);

        QMetaObject::connectSlotsByName(IVToPID);
    } // setupUi

    void retranslateUi(QWidget *IVToPID)
    {
        IVToPID->setWindowTitle(QCoreApplication::translate("IVToPID", "IVs to PID", nullptr));
        labelHP->setText(QCoreApplication::translate("IVToPID", "HP", nullptr));
        labelAtk->setText(QCoreApplication::translate("IVToPID", "Atk", nullptr));
        labelDef->setText(QCoreApplication::translate("IVToPID", "Def", nullptr));
        labelSpA->setText(QCoreApplication::translate("IVToPID", "SpA", nullptr));
        labelSpD->setText(QCoreApplication::translate("IVToPID", "SpD", nullptr));
        labelSpe->setText(QCoreApplication::translate("IVToPID", "Spe", nullptr));
        labelNature->setText(QCoreApplication::translate("IVToPID", "Nature", nullptr));
        labelTID->setText(QCoreApplication::translate("IVToPID", "TID", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("IVToPID", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IVToPID: public Ui_IVToPID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IVTOPID_H
