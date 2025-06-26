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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_IVToPID
{
public:
    QGridLayout *gridLayout;
    QLabel *labelSpe;
    QLabel *labelAtk;
    QPushButton *pushButtonFind;
    QLabel *labelTID;
    QSpinBox *spinBoxSpD;
    QLabel *labelNature;
    TextBox *textBoxTID;
    QSpinBox *spinBoxDef;
    QSpinBox *spinBoxHP;
    QComboBox *comboBoxNature;
    QLabel *labelSpA;
    QLabel *labelHP;
    QLabel *labelDef;
    QSpinBox *spinBoxAtk;
    QSpinBox *spinBoxSpe;
    QLabel *labelSpD;
    QSpinBox *spinBoxSpA;
    TableView *tableView;
    QToolButton *closebutton;

    void setupUi(QWidget *IVToPID)
    {
        if (IVToPID->objectName().isEmpty())
            IVToPID->setObjectName("IVToPID");
        IVToPID->resize(700, 450);
        gridLayout = new QGridLayout(IVToPID);
        gridLayout->setObjectName("gridLayout");
        labelSpe = new QLabel(IVToPID);
        labelSpe->setObjectName("labelSpe");

        gridLayout->addWidget(labelSpe, 1, 5, 1, 1);

        labelAtk = new QLabel(IVToPID);
        labelAtk->setObjectName("labelAtk");

        gridLayout->addWidget(labelAtk, 1, 1, 1, 1);

        pushButtonFind = new QPushButton(IVToPID);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 4, 2, 1, 1);

        labelTID = new QLabel(IVToPID);
        labelTID->setObjectName("labelTID");

        gridLayout->addWidget(labelTID, 3, 1, 1, 1);

        spinBoxSpD = new QSpinBox(IVToPID);
        spinBoxSpD->setObjectName("spinBoxSpD");
        spinBoxSpD->setMaximum(31);

        gridLayout->addWidget(spinBoxSpD, 2, 4, 1, 1);

        labelNature = new QLabel(IVToPID);
        labelNature->setObjectName("labelNature");

        gridLayout->addWidget(labelNature, 3, 0, 1, 1);

        textBoxTID = new TextBox(IVToPID);
        textBoxTID->setObjectName("textBoxTID");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBoxTID->sizePolicy().hasHeightForWidth());
        textBoxTID->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBoxTID, 4, 1, 1, 1);

        spinBoxDef = new QSpinBox(IVToPID);
        spinBoxDef->setObjectName("spinBoxDef");
        spinBoxDef->setMaximum(31);

        gridLayout->addWidget(spinBoxDef, 2, 2, 1, 1);

        spinBoxHP = new QSpinBox(IVToPID);
        spinBoxHP->setObjectName("spinBoxHP");
        spinBoxHP->setMaximum(31);

        gridLayout->addWidget(spinBoxHP, 2, 0, 1, 1);

        comboBoxNature = new QComboBox(IVToPID);
        comboBoxNature->setObjectName("comboBoxNature");

        gridLayout->addWidget(comboBoxNature, 4, 0, 1, 1);

        labelSpA = new QLabel(IVToPID);
        labelSpA->setObjectName("labelSpA");

        gridLayout->addWidget(labelSpA, 1, 3, 1, 1);

        labelHP = new QLabel(IVToPID);
        labelHP->setObjectName("labelHP");

        gridLayout->addWidget(labelHP, 1, 0, 1, 1);

        labelDef = new QLabel(IVToPID);
        labelDef->setObjectName("labelDef");

        gridLayout->addWidget(labelDef, 1, 2, 1, 1);

        spinBoxAtk = new QSpinBox(IVToPID);
        spinBoxAtk->setObjectName("spinBoxAtk");
        spinBoxAtk->setMaximum(31);

        gridLayout->addWidget(spinBoxAtk, 2, 1, 1, 1);

        spinBoxSpe = new QSpinBox(IVToPID);
        spinBoxSpe->setObjectName("spinBoxSpe");
        spinBoxSpe->setMaximum(31);

        gridLayout->addWidget(spinBoxSpe, 2, 5, 1, 1);

        labelSpD = new QLabel(IVToPID);
        labelSpD->setObjectName("labelSpD");

        gridLayout->addWidget(labelSpD, 1, 4, 1, 1);

        spinBoxSpA = new QSpinBox(IVToPID);
        spinBoxSpA->setObjectName("spinBoxSpA");
        spinBoxSpA->setMaximum(31);

        gridLayout->addWidget(spinBoxSpA, 2, 3, 1, 1);

        tableView = new TableView(IVToPID);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 5, 0, 1, 6);

        closebutton = new QToolButton(IVToPID);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(IVToPID);

        QMetaObject::connectSlotsByName(IVToPID);
    } // setupUi

    void retranslateUi(QWidget *IVToPID)
    {
        IVToPID->setWindowTitle(QCoreApplication::translate("IVToPID", "IVs to PID", nullptr));
        labelSpe->setText(QCoreApplication::translate("IVToPID", "Spe", nullptr));
        labelAtk->setText(QCoreApplication::translate("IVToPID", "Atk", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("IVToPID", "Find", nullptr));
        labelTID->setText(QCoreApplication::translate("IVToPID", "TID", nullptr));
        labelNature->setText(QCoreApplication::translate("IVToPID", "Nature", nullptr));
        labelSpA->setText(QCoreApplication::translate("IVToPID", "SpA", nullptr));
        labelHP->setText(QCoreApplication::translate("IVToPID", "HP", nullptr));
        labelDef->setText(QCoreApplication::translate("IVToPID", "Def", nullptr));
        labelSpD->setText(QCoreApplication::translate("IVToPID", "SpD", nullptr));
        closebutton->setText(QCoreApplication::translate("IVToPID", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IVToPID: public Ui_IVToPID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IVTOPID_H
