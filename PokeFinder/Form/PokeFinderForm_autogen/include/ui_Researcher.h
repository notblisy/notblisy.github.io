/********************************************************************************
** Form generated from reading UI file 'Researcher.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESEARCHER_H
#define UI_RESEARCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Researcher
{
public:
    QGridLayout *gridLayout_7;
    QTabWidget *rngSelection;
    QWidget *tab32Bit;
    QGridLayout *gridLayout;
    QComboBox *comboBoxRNG32Bit;
    QLabel *label32BitSeed;
    TextBox *textBox32BitSeed;
    QWidget *tab64Bit;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxRNG64Bit;
    QLabel *label64BitSeed;
    TextBox *textBox64BitSeed;
    QWidget *tabTiny;
    QGridLayout *gridLayout_3;
    QLabel *labelTinyMTSeed0;
    TextBox *textBoxTinyMTSeed0;
    QLabel *labelTinyMTSeed1;
    TextBox *textBoxTinyMTSeed1;
    QLabel *labelTinyMTSeed2;
    TextBox *textBoxTinyMTSeed2;
    QLabel *labelTinyMTSeed3;
    TextBox *textBoxTinyMTSeed3;
    QWidget *tabXorshift;
    QGridLayout *gridLayout_8;
    QLabel *labelXorshiftSeed0;
    TextBox *textBoxXorshiftSeed0;
    QLabel *labelXorshiftSeed1;
    TextBox *textBoxXorshiftSeed1;
    QGroupBox *groupBoxParameters;
    QGridLayout *gridLayout_6;
    QLabel *labelInitialAdvances;
    TextBox *textBoxInitialAdvances;
    QLabel *labelMaxAdvances;
    TextBox *textBoxMaxAdvances;
    QPushButton *pushButtonGenerate;
    QGroupBox *groupBoxSearch;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBoxSearch;
    TextBox *textBoxSearch;
    ComboBox *comboBoxSearch;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonNext;
    QGroupBox *groupBoxCustoms;
    QGridLayout *gridLayout_5;
    QLabel *labelCustom1;
    ComboBox *comboBoxLValue1;
    QComboBox *comboBoxOperator1;
    TextBox *textBoxRValue1;
    QCheckBox *checkBoxHex1;
    QLabel *labelCustom2;
    ComboBox *comboBoxLValue2;
    QComboBox *comboBoxOperator2;
    TextBox *textBoxRValue2;
    QCheckBox *checkBoxHex2;
    ComboBox *comboBoxRValue2;
    QLabel *labelCustom3;
    ComboBox *comboBoxLValue3;
    QComboBox *comboBoxOperator3;
    TextBox *textBoxRValue3;
    QCheckBox *checkBoxHex3;
    ComboBox *comboBoxRValue3;
    QLabel *labelCustom4;
    ComboBox *comboBoxLValue4;
    QComboBox *comboBoxOperator4;
    TextBox *textBoxRValue4;
    QCheckBox *checkBoxHex4;
    ComboBox *comboBoxRValue4;
    QLabel *labelCustom5;
    ComboBox *comboBoxLValue5;
    QComboBox *comboBoxOperator5;
    TextBox *textBoxRValue5;
    QCheckBox *checkBoxHex5;
    ComboBox *comboBoxRValue5;
    QLabel *labelCustom6;
    ComboBox *comboBoxLValue6;
    QComboBox *comboBoxOperator6;
    TextBox *textBoxRValue6;
    QCheckBox *checkBoxHex6;
    ComboBox *comboBoxRValue6;
    QLabel *labelCustom7;
    ComboBox *comboBoxLValue7;
    QComboBox *comboBoxOperator7;
    TextBox *textBoxRValue7;
    QCheckBox *checkBoxHex7;
    ComboBox *comboBoxRValue7;
    QLabel *labelCustom8;
    ComboBox *comboBoxLValue8;
    QComboBox *comboBoxOperator8;
    TextBox *textBoxRValue8;
    QCheckBox *checkBoxHex8;
    ComboBox *comboBoxRValue8;
    QLabel *labelCustom9;
    ComboBox *comboBoxLValue9;
    QComboBox *comboBoxOperator9;
    TextBox *textBoxRValue9;
    QCheckBox *checkBoxHex9;
    ComboBox *comboBoxRValue9;
    QLabel *labelCustom10;
    ComboBox *comboBoxLValue10;
    QComboBox *comboBoxOperator10;
    TextBox *textBoxRValue10;
    QCheckBox *checkBoxHex10;
    ComboBox *comboBoxRValue10;
    TableView *tableView;

    void setupUi(QWidget *Researcher)
    {
        if (Researcher->objectName().isEmpty())
            Researcher->setObjectName("Researcher");
        Researcher->resize(870, 670);
        Researcher->setWindowTitle(QString::fromUtf8("Researcher"));
        gridLayout_7 = new QGridLayout(Researcher);
        gridLayout_7->setObjectName("gridLayout_7");
        rngSelection = new QTabWidget(Researcher);
        rngSelection->setObjectName("rngSelection");
        tab32Bit = new QWidget();
        tab32Bit->setObjectName("tab32Bit");
        gridLayout = new QGridLayout(tab32Bit);
        gridLayout->setObjectName("gridLayout");
        comboBoxRNG32Bit = new QComboBox(tab32Bit);
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->addItem(QString());
        comboBoxRNG32Bit->setObjectName("comboBoxRNG32Bit");

        gridLayout->addWidget(comboBoxRNG32Bit, 0, 0, 1, 2);

        label32BitSeed = new QLabel(tab32Bit);
        label32BitSeed->setObjectName("label32BitSeed");

        gridLayout->addWidget(label32BitSeed, 1, 0, 1, 1);

        textBox32BitSeed = new TextBox(tab32Bit);
        textBox32BitSeed->setObjectName("textBox32BitSeed");

        gridLayout->addWidget(textBox32BitSeed, 1, 1, 1, 1);

        rngSelection->addTab(tab32Bit, QString());
        tab64Bit = new QWidget();
        tab64Bit->setObjectName("tab64Bit");
        gridLayout_2 = new QGridLayout(tab64Bit);
        gridLayout_2->setObjectName("gridLayout_2");
        comboBoxRNG64Bit = new QComboBox(tab64Bit);
        comboBoxRNG64Bit->addItem(QString());
        comboBoxRNG64Bit->addItem(QString());
        comboBoxRNG64Bit->addItem(QString());
        comboBoxRNG64Bit->addItem(QString());
        comboBoxRNG64Bit->addItem(QString());
        comboBoxRNG64Bit->setObjectName("comboBoxRNG64Bit");

        gridLayout_2->addWidget(comboBoxRNG64Bit, 0, 0, 1, 2);

        label64BitSeed = new QLabel(tab64Bit);
        label64BitSeed->setObjectName("label64BitSeed");

        gridLayout_2->addWidget(label64BitSeed, 1, 0, 1, 1);

        textBox64BitSeed = new TextBox(tab64Bit);
        textBox64BitSeed->setObjectName("textBox64BitSeed");

        gridLayout_2->addWidget(textBox64BitSeed, 1, 1, 1, 1);

        rngSelection->addTab(tab64Bit, QString());
        tabTiny = new QWidget();
        tabTiny->setObjectName("tabTiny");
        gridLayout_3 = new QGridLayout(tabTiny);
        gridLayout_3->setObjectName("gridLayout_3");
        labelTinyMTSeed0 = new QLabel(tabTiny);
        labelTinyMTSeed0->setObjectName("labelTinyMTSeed0");
        labelTinyMTSeed0->setText(QString::fromUtf8("Seed 0"));

        gridLayout_3->addWidget(labelTinyMTSeed0, 0, 0, 1, 1);

        textBoxTinyMTSeed0 = new TextBox(tabTiny);
        textBoxTinyMTSeed0->setObjectName("textBoxTinyMTSeed0");

        gridLayout_3->addWidget(textBoxTinyMTSeed0, 0, 1, 1, 1);

        labelTinyMTSeed1 = new QLabel(tabTiny);
        labelTinyMTSeed1->setObjectName("labelTinyMTSeed1");
        labelTinyMTSeed1->setText(QString::fromUtf8("Seed 1"));

        gridLayout_3->addWidget(labelTinyMTSeed1, 0, 2, 1, 1);

        textBoxTinyMTSeed1 = new TextBox(tabTiny);
        textBoxTinyMTSeed1->setObjectName("textBoxTinyMTSeed1");

        gridLayout_3->addWidget(textBoxTinyMTSeed1, 0, 3, 1, 1);

        labelTinyMTSeed2 = new QLabel(tabTiny);
        labelTinyMTSeed2->setObjectName("labelTinyMTSeed2");
        labelTinyMTSeed2->setText(QString::fromUtf8("Seed 2"));

        gridLayout_3->addWidget(labelTinyMTSeed2, 1, 0, 1, 1);

        textBoxTinyMTSeed2 = new TextBox(tabTiny);
        textBoxTinyMTSeed2->setObjectName("textBoxTinyMTSeed2");

        gridLayout_3->addWidget(textBoxTinyMTSeed2, 1, 1, 1, 1);

        labelTinyMTSeed3 = new QLabel(tabTiny);
        labelTinyMTSeed3->setObjectName("labelTinyMTSeed3");
        labelTinyMTSeed3->setText(QString::fromUtf8("Seed 3"));

        gridLayout_3->addWidget(labelTinyMTSeed3, 1, 2, 1, 1);

        textBoxTinyMTSeed3 = new TextBox(tabTiny);
        textBoxTinyMTSeed3->setObjectName("textBoxTinyMTSeed3");

        gridLayout_3->addWidget(textBoxTinyMTSeed3, 1, 3, 1, 1);

        rngSelection->addTab(tabTiny, QString());
        tabXorshift = new QWidget();
        tabXorshift->setObjectName("tabXorshift");
        gridLayout_8 = new QGridLayout(tabXorshift);
        gridLayout_8->setObjectName("gridLayout_8");
        labelXorshiftSeed0 = new QLabel(tabXorshift);
        labelXorshiftSeed0->setObjectName("labelXorshiftSeed0");

        gridLayout_8->addWidget(labelXorshiftSeed0, 0, 0, 1, 1);

        textBoxXorshiftSeed0 = new TextBox(tabXorshift);
        textBoxXorshiftSeed0->setObjectName("textBoxXorshiftSeed0");

        gridLayout_8->addWidget(textBoxXorshiftSeed0, 0, 1, 1, 1);

        labelXorshiftSeed1 = new QLabel(tabXorshift);
        labelXorshiftSeed1->setObjectName("labelXorshiftSeed1");

        gridLayout_8->addWidget(labelXorshiftSeed1, 1, 0, 1, 1);

        textBoxXorshiftSeed1 = new TextBox(tabXorshift);
        textBoxXorshiftSeed1->setObjectName("textBoxXorshiftSeed1");

        gridLayout_8->addWidget(textBoxXorshiftSeed1, 1, 1, 1, 1);

        rngSelection->addTab(tabXorshift, QString());

        gridLayout_7->addWidget(rngSelection, 0, 0, 1, 1);

        groupBoxParameters = new QGroupBox(Researcher);
        groupBoxParameters->setObjectName("groupBoxParameters");
        gridLayout_6 = new QGridLayout(groupBoxParameters);
        gridLayout_6->setObjectName("gridLayout_6");
        labelInitialAdvances = new QLabel(groupBoxParameters);
        labelInitialAdvances->setObjectName("labelInitialAdvances");

        gridLayout_6->addWidget(labelInitialAdvances, 0, 0, 1, 1);

        textBoxInitialAdvances = new TextBox(groupBoxParameters);
        textBoxInitialAdvances->setObjectName("textBoxInitialAdvances");
        textBoxInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout_6->addWidget(textBoxInitialAdvances, 0, 1, 1, 1);

        labelMaxAdvances = new QLabel(groupBoxParameters);
        labelMaxAdvances->setObjectName("labelMaxAdvances");

        gridLayout_6->addWidget(labelMaxAdvances, 1, 0, 1, 1);

        textBoxMaxAdvances = new TextBox(groupBoxParameters);
        textBoxMaxAdvances->setObjectName("textBoxMaxAdvances");
        textBoxMaxAdvances->setText(QString::fromUtf8("1000"));

        gridLayout_6->addWidget(textBoxMaxAdvances, 1, 1, 1, 1);

        pushButtonGenerate = new QPushButton(groupBoxParameters);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        gridLayout_6->addWidget(pushButtonGenerate, 2, 0, 1, 2);


        gridLayout_7->addWidget(groupBoxParameters, 1, 0, 1, 1);

        groupBoxSearch = new QGroupBox(Researcher);
        groupBoxSearch->setObjectName("groupBoxSearch");
        gridLayout_4 = new QGridLayout(groupBoxSearch);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBoxSearch = new QCheckBox(groupBoxSearch);
        checkBoxSearch->setObjectName("checkBoxSearch");

        gridLayout_4->addWidget(checkBoxSearch, 0, 0, 1, 1);

        textBoxSearch = new TextBox(groupBoxSearch);
        textBoxSearch->setObjectName("textBoxSearch");

        gridLayout_4->addWidget(textBoxSearch, 0, 1, 1, 2);

        comboBoxSearch = new ComboBox(groupBoxSearch);
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->addItem(QString());
        comboBoxSearch->setObjectName("comboBoxSearch");

        gridLayout_4->addWidget(comboBoxSearch, 0, 3, 1, 1);

        pushButtonSearch = new QPushButton(groupBoxSearch);
        pushButtonSearch->setObjectName("pushButtonSearch");

        gridLayout_4->addWidget(pushButtonSearch, 1, 0, 1, 2);

        pushButtonNext = new QPushButton(groupBoxSearch);
        pushButtonNext->setObjectName("pushButtonNext");

        gridLayout_4->addWidget(pushButtonNext, 1, 2, 1, 2);


        gridLayout_7->addWidget(groupBoxSearch, 2, 0, 1, 1);

        groupBoxCustoms = new QGroupBox(Researcher);
        groupBoxCustoms->setObjectName("groupBoxCustoms");
        gridLayout_5 = new QGridLayout(groupBoxCustoms);
        gridLayout_5->setObjectName("gridLayout_5");
        labelCustom1 = new QLabel(groupBoxCustoms);
        labelCustom1->setObjectName("labelCustom1");

        gridLayout_5->addWidget(labelCustom1, 0, 0, 1, 1);

        comboBoxLValue1 = new ComboBox(groupBoxCustoms);
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->addItem(QString());
        comboBoxLValue1->setObjectName("comboBoxLValue1");

        gridLayout_5->addWidget(comboBoxLValue1, 0, 1, 1, 1);

        comboBoxOperator1 = new QComboBox(groupBoxCustoms);
        comboBoxOperator1->setObjectName("comboBoxOperator1");

        gridLayout_5->addWidget(comboBoxOperator1, 0, 2, 1, 2);

        textBoxRValue1 = new TextBox(groupBoxCustoms);
        textBoxRValue1->setObjectName("textBoxRValue1");

        gridLayout_5->addWidget(textBoxRValue1, 0, 4, 1, 1);

        checkBoxHex1 = new QCheckBox(groupBoxCustoms);
        checkBoxHex1->setObjectName("checkBoxHex1");

        gridLayout_5->addWidget(checkBoxHex1, 0, 5, 1, 1);

        labelCustom2 = new QLabel(groupBoxCustoms);
        labelCustom2->setObjectName("labelCustom2");

        gridLayout_5->addWidget(labelCustom2, 1, 0, 1, 1);

        comboBoxLValue2 = new ComboBox(groupBoxCustoms);
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->addItem(QString());
        comboBoxLValue2->setObjectName("comboBoxLValue2");

        gridLayout_5->addWidget(comboBoxLValue2, 1, 1, 1, 1);

        comboBoxOperator2 = new QComboBox(groupBoxCustoms);
        comboBoxOperator2->setObjectName("comboBoxOperator2");

        gridLayout_5->addWidget(comboBoxOperator2, 1, 2, 1, 2);

        textBoxRValue2 = new TextBox(groupBoxCustoms);
        textBoxRValue2->setObjectName("textBoxRValue2");

        gridLayout_5->addWidget(textBoxRValue2, 1, 4, 1, 1);

        checkBoxHex2 = new QCheckBox(groupBoxCustoms);
        checkBoxHex2->setObjectName("checkBoxHex2");

        gridLayout_5->addWidget(checkBoxHex2, 1, 5, 1, 1);

        comboBoxRValue2 = new ComboBox(groupBoxCustoms);
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->addItem(QString());
        comboBoxRValue2->setObjectName("comboBoxRValue2");

        gridLayout_5->addWidget(comboBoxRValue2, 1, 6, 1, 1);

        labelCustom3 = new QLabel(groupBoxCustoms);
        labelCustom3->setObjectName("labelCustom3");

        gridLayout_5->addWidget(labelCustom3, 2, 0, 1, 1);

        comboBoxLValue3 = new ComboBox(groupBoxCustoms);
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->addItem(QString());
        comboBoxLValue3->setObjectName("comboBoxLValue3");

        gridLayout_5->addWidget(comboBoxLValue3, 2, 1, 1, 1);

        comboBoxOperator3 = new QComboBox(groupBoxCustoms);
        comboBoxOperator3->setObjectName("comboBoxOperator3");

        gridLayout_5->addWidget(comboBoxOperator3, 2, 2, 1, 2);

        textBoxRValue3 = new TextBox(groupBoxCustoms);
        textBoxRValue3->setObjectName("textBoxRValue3");

        gridLayout_5->addWidget(textBoxRValue3, 2, 4, 1, 1);

        checkBoxHex3 = new QCheckBox(groupBoxCustoms);
        checkBoxHex3->setObjectName("checkBoxHex3");

        gridLayout_5->addWidget(checkBoxHex3, 2, 5, 1, 1);

        comboBoxRValue3 = new ComboBox(groupBoxCustoms);
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->addItem(QString());
        comboBoxRValue3->setObjectName("comboBoxRValue3");

        gridLayout_5->addWidget(comboBoxRValue3, 2, 6, 1, 1);

        labelCustom4 = new QLabel(groupBoxCustoms);
        labelCustom4->setObjectName("labelCustom4");

        gridLayout_5->addWidget(labelCustom4, 3, 0, 1, 1);

        comboBoxLValue4 = new ComboBox(groupBoxCustoms);
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->addItem(QString());
        comboBoxLValue4->setObjectName("comboBoxLValue4");

        gridLayout_5->addWidget(comboBoxLValue4, 3, 1, 1, 1);

        comboBoxOperator4 = new QComboBox(groupBoxCustoms);
        comboBoxOperator4->setObjectName("comboBoxOperator4");

        gridLayout_5->addWidget(comboBoxOperator4, 3, 2, 1, 2);

        textBoxRValue4 = new TextBox(groupBoxCustoms);
        textBoxRValue4->setObjectName("textBoxRValue4");

        gridLayout_5->addWidget(textBoxRValue4, 3, 4, 1, 1);

        checkBoxHex4 = new QCheckBox(groupBoxCustoms);
        checkBoxHex4->setObjectName("checkBoxHex4");

        gridLayout_5->addWidget(checkBoxHex4, 3, 5, 1, 1);

        comboBoxRValue4 = new ComboBox(groupBoxCustoms);
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->addItem(QString());
        comboBoxRValue4->setObjectName("comboBoxRValue4");

        gridLayout_5->addWidget(comboBoxRValue4, 3, 6, 1, 1);

        labelCustom5 = new QLabel(groupBoxCustoms);
        labelCustom5->setObjectName("labelCustom5");

        gridLayout_5->addWidget(labelCustom5, 4, 0, 1, 1);

        comboBoxLValue5 = new ComboBox(groupBoxCustoms);
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->addItem(QString());
        comboBoxLValue5->setObjectName("comboBoxLValue5");

        gridLayout_5->addWidget(comboBoxLValue5, 4, 1, 1, 1);

        comboBoxOperator5 = new QComboBox(groupBoxCustoms);
        comboBoxOperator5->setObjectName("comboBoxOperator5");

        gridLayout_5->addWidget(comboBoxOperator5, 4, 2, 1, 2);

        textBoxRValue5 = new TextBox(groupBoxCustoms);
        textBoxRValue5->setObjectName("textBoxRValue5");

        gridLayout_5->addWidget(textBoxRValue5, 4, 4, 1, 1);

        checkBoxHex5 = new QCheckBox(groupBoxCustoms);
        checkBoxHex5->setObjectName("checkBoxHex5");

        gridLayout_5->addWidget(checkBoxHex5, 4, 5, 1, 1);

        comboBoxRValue5 = new ComboBox(groupBoxCustoms);
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->addItem(QString());
        comboBoxRValue5->setObjectName("comboBoxRValue5");

        gridLayout_5->addWidget(comboBoxRValue5, 4, 6, 1, 1);

        labelCustom6 = new QLabel(groupBoxCustoms);
        labelCustom6->setObjectName("labelCustom6");

        gridLayout_5->addWidget(labelCustom6, 5, 0, 1, 1);

        comboBoxLValue6 = new ComboBox(groupBoxCustoms);
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->addItem(QString());
        comboBoxLValue6->setObjectName("comboBoxLValue6");

        gridLayout_5->addWidget(comboBoxLValue6, 5, 1, 1, 1);

        comboBoxOperator6 = new QComboBox(groupBoxCustoms);
        comboBoxOperator6->setObjectName("comboBoxOperator6");

        gridLayout_5->addWidget(comboBoxOperator6, 5, 2, 1, 2);

        textBoxRValue6 = new TextBox(groupBoxCustoms);
        textBoxRValue6->setObjectName("textBoxRValue6");

        gridLayout_5->addWidget(textBoxRValue6, 5, 4, 1, 1);

        checkBoxHex6 = new QCheckBox(groupBoxCustoms);
        checkBoxHex6->setObjectName("checkBoxHex6");

        gridLayout_5->addWidget(checkBoxHex6, 5, 5, 1, 1);

        comboBoxRValue6 = new ComboBox(groupBoxCustoms);
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->addItem(QString());
        comboBoxRValue6->setObjectName("comboBoxRValue6");

        gridLayout_5->addWidget(comboBoxRValue6, 5, 6, 1, 1);

        labelCustom7 = new QLabel(groupBoxCustoms);
        labelCustom7->setObjectName("labelCustom7");

        gridLayout_5->addWidget(labelCustom7, 6, 0, 1, 1);

        comboBoxLValue7 = new ComboBox(groupBoxCustoms);
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->addItem(QString());
        comboBoxLValue7->setObjectName("comboBoxLValue7");

        gridLayout_5->addWidget(comboBoxLValue7, 6, 1, 1, 1);

        comboBoxOperator7 = new QComboBox(groupBoxCustoms);
        comboBoxOperator7->setObjectName("comboBoxOperator7");

        gridLayout_5->addWidget(comboBoxOperator7, 6, 2, 1, 2);

        textBoxRValue7 = new TextBox(groupBoxCustoms);
        textBoxRValue7->setObjectName("textBoxRValue7");

        gridLayout_5->addWidget(textBoxRValue7, 6, 4, 1, 1);

        checkBoxHex7 = new QCheckBox(groupBoxCustoms);
        checkBoxHex7->setObjectName("checkBoxHex7");

        gridLayout_5->addWidget(checkBoxHex7, 6, 5, 1, 1);

        comboBoxRValue7 = new ComboBox(groupBoxCustoms);
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->addItem(QString());
        comboBoxRValue7->setObjectName("comboBoxRValue7");

        gridLayout_5->addWidget(comboBoxRValue7, 6, 6, 1, 1);

        labelCustom8 = new QLabel(groupBoxCustoms);
        labelCustom8->setObjectName("labelCustom8");

        gridLayout_5->addWidget(labelCustom8, 7, 0, 1, 1);

        comboBoxLValue8 = new ComboBox(groupBoxCustoms);
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->addItem(QString());
        comboBoxLValue8->setObjectName("comboBoxLValue8");

        gridLayout_5->addWidget(comboBoxLValue8, 7, 1, 1, 1);

        comboBoxOperator8 = new QComboBox(groupBoxCustoms);
        comboBoxOperator8->setObjectName("comboBoxOperator8");

        gridLayout_5->addWidget(comboBoxOperator8, 7, 2, 1, 2);

        textBoxRValue8 = new TextBox(groupBoxCustoms);
        textBoxRValue8->setObjectName("textBoxRValue8");

        gridLayout_5->addWidget(textBoxRValue8, 7, 4, 1, 1);

        checkBoxHex8 = new QCheckBox(groupBoxCustoms);
        checkBoxHex8->setObjectName("checkBoxHex8");

        gridLayout_5->addWidget(checkBoxHex8, 7, 5, 1, 1);

        comboBoxRValue8 = new ComboBox(groupBoxCustoms);
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->addItem(QString());
        comboBoxRValue8->setObjectName("comboBoxRValue8");

        gridLayout_5->addWidget(comboBoxRValue8, 7, 6, 1, 1);

        labelCustom9 = new QLabel(groupBoxCustoms);
        labelCustom9->setObjectName("labelCustom9");

        gridLayout_5->addWidget(labelCustom9, 8, 0, 1, 1);

        comboBoxLValue9 = new ComboBox(groupBoxCustoms);
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->addItem(QString());
        comboBoxLValue9->setObjectName("comboBoxLValue9");

        gridLayout_5->addWidget(comboBoxLValue9, 8, 1, 1, 1);

        comboBoxOperator9 = new QComboBox(groupBoxCustoms);
        comboBoxOperator9->setObjectName("comboBoxOperator9");

        gridLayout_5->addWidget(comboBoxOperator9, 8, 2, 1, 2);

        textBoxRValue9 = new TextBox(groupBoxCustoms);
        textBoxRValue9->setObjectName("textBoxRValue9");

        gridLayout_5->addWidget(textBoxRValue9, 8, 4, 1, 1);

        checkBoxHex9 = new QCheckBox(groupBoxCustoms);
        checkBoxHex9->setObjectName("checkBoxHex9");

        gridLayout_5->addWidget(checkBoxHex9, 8, 5, 1, 1);

        comboBoxRValue9 = new ComboBox(groupBoxCustoms);
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->addItem(QString());
        comboBoxRValue9->setObjectName("comboBoxRValue9");

        gridLayout_5->addWidget(comboBoxRValue9, 8, 6, 1, 1);

        labelCustom10 = new QLabel(groupBoxCustoms);
        labelCustom10->setObjectName("labelCustom10");

        gridLayout_5->addWidget(labelCustom10, 9, 0, 1, 1);

        comboBoxLValue10 = new ComboBox(groupBoxCustoms);
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->addItem(QString());
        comboBoxLValue10->setObjectName("comboBoxLValue10");

        gridLayout_5->addWidget(comboBoxLValue10, 9, 1, 1, 1);

        comboBoxOperator10 = new QComboBox(groupBoxCustoms);
        comboBoxOperator10->setObjectName("comboBoxOperator10");

        gridLayout_5->addWidget(comboBoxOperator10, 9, 2, 1, 2);

        textBoxRValue10 = new TextBox(groupBoxCustoms);
        textBoxRValue10->setObjectName("textBoxRValue10");

        gridLayout_5->addWidget(textBoxRValue10, 9, 4, 1, 1);

        checkBoxHex10 = new QCheckBox(groupBoxCustoms);
        checkBoxHex10->setObjectName("checkBoxHex10");

        gridLayout_5->addWidget(checkBoxHex10, 9, 5, 1, 1);

        comboBoxRValue10 = new ComboBox(groupBoxCustoms);
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->addItem(QString());
        comboBoxRValue10->setObjectName("comboBoxRValue10");

        gridLayout_5->addWidget(comboBoxRValue10, 9, 6, 1, 1);


        gridLayout_7->addWidget(groupBoxCustoms, 0, 1, 4, 1);

        tableView = new TableView(Researcher);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(tableView, 4, 0, 1, 2);

        QWidget::setTabOrder(rngSelection, comboBoxRNG32Bit);
        QWidget::setTabOrder(comboBoxRNG32Bit, textBox32BitSeed);
        QWidget::setTabOrder(textBox32BitSeed, comboBoxRNG64Bit);
        QWidget::setTabOrder(comboBoxRNG64Bit, textBox64BitSeed);
        QWidget::setTabOrder(textBox64BitSeed, textBoxTinyMTSeed0);
        QWidget::setTabOrder(textBoxTinyMTSeed0, textBoxTinyMTSeed1);
        QWidget::setTabOrder(textBoxTinyMTSeed1, textBoxTinyMTSeed2);
        QWidget::setTabOrder(textBoxTinyMTSeed2, textBoxTinyMTSeed3);
        QWidget::setTabOrder(textBoxTinyMTSeed3, textBoxXorshiftSeed0);
        QWidget::setTabOrder(textBoxXorshiftSeed0, textBoxXorshiftSeed1);
        QWidget::setTabOrder(textBoxXorshiftSeed1, textBoxInitialAdvances);
        QWidget::setTabOrder(textBoxInitialAdvances, textBoxMaxAdvances);
        QWidget::setTabOrder(textBoxMaxAdvances, pushButtonGenerate);
        QWidget::setTabOrder(pushButtonGenerate, checkBoxSearch);
        QWidget::setTabOrder(checkBoxSearch, textBoxSearch);
        QWidget::setTabOrder(textBoxSearch, comboBoxSearch);
        QWidget::setTabOrder(comboBoxSearch, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonNext);
        QWidget::setTabOrder(pushButtonNext, comboBoxLValue1);
        QWidget::setTabOrder(comboBoxLValue1, comboBoxOperator1);
        QWidget::setTabOrder(comboBoxOperator1, textBoxRValue1);
        QWidget::setTabOrder(textBoxRValue1, checkBoxHex1);
        QWidget::setTabOrder(checkBoxHex1, comboBoxLValue2);
        QWidget::setTabOrder(comboBoxLValue2, comboBoxOperator2);
        QWidget::setTabOrder(comboBoxOperator2, textBoxRValue2);
        QWidget::setTabOrder(textBoxRValue2, checkBoxHex2);
        QWidget::setTabOrder(checkBoxHex2, comboBoxRValue2);
        QWidget::setTabOrder(comboBoxRValue2, comboBoxLValue3);
        QWidget::setTabOrder(comboBoxLValue3, comboBoxOperator3);
        QWidget::setTabOrder(comboBoxOperator3, textBoxRValue3);
        QWidget::setTabOrder(textBoxRValue3, checkBoxHex3);
        QWidget::setTabOrder(checkBoxHex3, comboBoxRValue3);
        QWidget::setTabOrder(comboBoxRValue3, comboBoxLValue4);
        QWidget::setTabOrder(comboBoxLValue4, comboBoxOperator4);
        QWidget::setTabOrder(comboBoxOperator4, textBoxRValue4);
        QWidget::setTabOrder(textBoxRValue4, checkBoxHex4);
        QWidget::setTabOrder(checkBoxHex4, comboBoxRValue4);
        QWidget::setTabOrder(comboBoxRValue4, comboBoxLValue5);
        QWidget::setTabOrder(comboBoxLValue5, comboBoxOperator5);
        QWidget::setTabOrder(comboBoxOperator5, textBoxRValue5);
        QWidget::setTabOrder(textBoxRValue5, checkBoxHex5);
        QWidget::setTabOrder(checkBoxHex5, comboBoxRValue5);
        QWidget::setTabOrder(comboBoxRValue5, comboBoxLValue6);
        QWidget::setTabOrder(comboBoxLValue6, comboBoxOperator6);
        QWidget::setTabOrder(comboBoxOperator6, textBoxRValue6);
        QWidget::setTabOrder(textBoxRValue6, checkBoxHex6);
        QWidget::setTabOrder(checkBoxHex6, comboBoxRValue6);
        QWidget::setTabOrder(comboBoxRValue6, comboBoxLValue7);
        QWidget::setTabOrder(comboBoxLValue7, comboBoxOperator7);
        QWidget::setTabOrder(comboBoxOperator7, textBoxRValue7);
        QWidget::setTabOrder(textBoxRValue7, checkBoxHex7);
        QWidget::setTabOrder(checkBoxHex7, comboBoxRValue7);
        QWidget::setTabOrder(comboBoxRValue7, comboBoxLValue8);
        QWidget::setTabOrder(comboBoxLValue8, comboBoxOperator8);
        QWidget::setTabOrder(comboBoxOperator8, textBoxRValue8);
        QWidget::setTabOrder(textBoxRValue8, checkBoxHex8);
        QWidget::setTabOrder(checkBoxHex8, comboBoxRValue8);
        QWidget::setTabOrder(comboBoxRValue8, comboBoxLValue9);
        QWidget::setTabOrder(comboBoxLValue9, comboBoxOperator9);
        QWidget::setTabOrder(comboBoxOperator9, textBoxRValue9);
        QWidget::setTabOrder(textBoxRValue9, checkBoxHex9);
        QWidget::setTabOrder(checkBoxHex9, comboBoxRValue9);
        QWidget::setTabOrder(comboBoxRValue9, comboBoxLValue10);
        QWidget::setTabOrder(comboBoxLValue10, comboBoxOperator10);
        QWidget::setTabOrder(comboBoxOperator10, textBoxRValue10);
        QWidget::setTabOrder(textBoxRValue10, checkBoxHex10);
        QWidget::setTabOrder(checkBoxHex10, comboBoxRValue10);
        QWidget::setTabOrder(comboBoxRValue10, tableView);

        retranslateUi(Researcher);

        QMetaObject::connectSlotsByName(Researcher);
    } // setupUi

    void retranslateUi(QWidget *Researcher)
    {
        comboBoxRNG32Bit->setItemText(0, QCoreApplication::translate("Researcher", "LCRNG", nullptr));
        comboBoxRNG32Bit->setItemText(1, QCoreApplication::translate("Researcher", "LCRNG[R]", nullptr));
        comboBoxRNG32Bit->setItemText(2, QCoreApplication::translate("Researcher", "XDRNG", nullptr));
        comboBoxRNG32Bit->setItemText(3, QCoreApplication::translate("Researcher", "XDRNG[R]", nullptr));
        comboBoxRNG32Bit->setItemText(4, QCoreApplication::translate("Researcher", "ARNG", nullptr));
        comboBoxRNG32Bit->setItemText(5, QCoreApplication::translate("Researcher", "ARNG[R]", nullptr));
        comboBoxRNG32Bit->setItemText(6, QCoreApplication::translate("Researcher", "Mersenne Twister", nullptr));

        label32BitSeed->setText(QCoreApplication::translate("Researcher", "Seed", nullptr));
        rngSelection->setTabText(rngSelection->indexOf(tab32Bit), QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRNG64Bit->setItemText(0, QCoreApplication::translate("Researcher", "BWRNG", nullptr));
        comboBoxRNG64Bit->setItemText(1, QCoreApplication::translate("Researcher", "BWRNG[R]", nullptr));
        comboBoxRNG64Bit->setItemText(2, QCoreApplication::translate("Researcher", "SFMT", nullptr));
        comboBoxRNG64Bit->setItemText(3, QCoreApplication::translate("Researcher", "Xoroshiro", nullptr));
        comboBoxRNG64Bit->setItemText(4, QCoreApplication::translate("Researcher", "Xoroshiro (BDSP)", nullptr));

        label64BitSeed->setText(QCoreApplication::translate("Researcher", "Seed", nullptr));
        rngSelection->setTabText(rngSelection->indexOf(tab64Bit), QCoreApplication::translate("Researcher", "64Bit", nullptr));
        rngSelection->setTabText(rngSelection->indexOf(tabTiny), QCoreApplication::translate("Researcher", "TinyMT", nullptr));
        labelXorshiftSeed0->setText(QCoreApplication::translate("Researcher", "Seed 0", nullptr));
        labelXorshiftSeed1->setText(QCoreApplication::translate("Researcher", "Seed 1", nullptr));
        rngSelection->setTabText(rngSelection->indexOf(tabXorshift), QCoreApplication::translate("Researcher", "Xorshift", nullptr));
        groupBoxParameters->setTitle(QCoreApplication::translate("Researcher", "Parameters", nullptr));
        labelInitialAdvances->setText(QCoreApplication::translate("Researcher", "Initial Advances", nullptr));
        labelMaxAdvances->setText(QCoreApplication::translate("Researcher", "Max Advances", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Researcher", "Generate", nullptr));
        groupBoxSearch->setTitle(QCoreApplication::translate("Researcher", "Search", nullptr));
        checkBoxSearch->setText(QCoreApplication::translate("Researcher", "Value (Hex)", nullptr));
        comboBoxSearch->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxSearch->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxSearch->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxSearch->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxSearch->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxSearch->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxSearch->setItemText(6, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxSearch->setItemText(7, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxSearch->setItemText(8, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxSearch->setItemText(9, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxSearch->setItemText(10, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxSearch->setItemText(11, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxSearch->setItemText(12, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxSearch->setItemText(13, QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxSearch->setItemText(14, QCoreApplication::translate("Researcher", "Custom 9", nullptr));
        comboBoxSearch->setItemText(15, QCoreApplication::translate("Researcher", "Custom 10", nullptr));

        pushButtonSearch->setText(QCoreApplication::translate("Researcher", "Search", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("Researcher", "Next", nullptr));
        groupBoxCustoms->setTitle(QCoreApplication::translate("Researcher", "Customs", nullptr));
        labelCustom1->setText(QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue1->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue1->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue1->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue1->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue1->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue1->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue1->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue1->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue1->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue1->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue1->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue1->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));

        checkBoxHex1->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        labelCustom2->setText(QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue2->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue2->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue2->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue2->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue2->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue2->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue2->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue2->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue2->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue2->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue2->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue2->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue2->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue2->setItemText(13, QCoreApplication::translate("Researcher", "Previous 1", nullptr));

        checkBoxHex2->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue2->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue2->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue2->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue2->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue2->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue2->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue2->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue2->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue2->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue2->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue2->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue2->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue2->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue2->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue2->setItemText(14, QCoreApplication::translate("Researcher", "Previous 1", nullptr));

        labelCustom3->setText(QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue3->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue3->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue3->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue3->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue3->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue3->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue3->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue3->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue3->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue3->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue3->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue3->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue3->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue3->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue3->setItemText(14, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue3->setItemText(15, QCoreApplication::translate("Researcher", "Previous 2", nullptr));

        checkBoxHex3->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue3->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue3->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue3->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue3->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue3->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue3->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue3->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue3->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue3->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue3->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue3->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue3->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue3->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue3->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue3->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue3->setItemText(15, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue3->setItemText(16, QCoreApplication::translate("Researcher", "Previous 2", nullptr));

        labelCustom4->setText(QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue4->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue4->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue4->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue4->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue4->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue4->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue4->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue4->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue4->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue4->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue4->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue4->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue4->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue4->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue4->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue4->setItemText(15, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue4->setItemText(16, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue4->setItemText(17, QCoreApplication::translate("Researcher", "Previous 3", nullptr));

        checkBoxHex4->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue4->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue4->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue4->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue4->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue4->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue4->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue4->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue4->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue4->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue4->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue4->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue4->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue4->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue4->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue4->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue4->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue4->setItemText(16, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue4->setItemText(17, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue4->setItemText(18, QCoreApplication::translate("Researcher", "Previous 3", nullptr));

        labelCustom5->setText(QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue5->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue5->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue5->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue5->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue5->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue5->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue5->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue5->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue5->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue5->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue5->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue5->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue5->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue5->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue5->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue5->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue5->setItemText(16, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue5->setItemText(17, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue5->setItemText(18, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue5->setItemText(19, QCoreApplication::translate("Researcher", "Previous 4", nullptr));

        checkBoxHex5->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue5->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue5->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue5->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue5->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue5->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue5->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue5->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue5->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue5->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue5->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue5->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue5->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue5->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue5->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue5->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue5->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue5->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue5->setItemText(17, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue5->setItemText(18, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue5->setItemText(19, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue5->setItemText(20, QCoreApplication::translate("Researcher", "Previous 4", nullptr));

        labelCustom6->setText(QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxLValue6->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue6->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue6->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue6->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue6->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue6->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue6->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue6->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue6->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue6->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue6->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue6->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue6->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue6->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue6->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue6->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue6->setItemText(16, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue6->setItemText(17, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue6->setItemText(18, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue6->setItemText(19, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue6->setItemText(20, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxLValue6->setItemText(21, QCoreApplication::translate("Researcher", "Previous 5", nullptr));

        checkBoxHex6->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue6->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue6->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue6->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue6->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue6->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue6->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue6->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue6->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue6->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue6->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue6->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue6->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue6->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue6->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue6->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue6->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue6->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue6->setItemText(17, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxRValue6->setItemText(18, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue6->setItemText(19, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue6->setItemText(20, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue6->setItemText(21, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxRValue6->setItemText(22, QCoreApplication::translate("Researcher", "Previous 5", nullptr));

        labelCustom7->setText(QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxLValue7->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue7->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue7->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue7->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue7->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue7->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue7->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue7->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue7->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue7->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue7->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue7->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue7->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue7->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue7->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue7->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue7->setItemText(16, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue7->setItemText(17, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxLValue7->setItemText(18, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue7->setItemText(19, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue7->setItemText(20, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue7->setItemText(21, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxLValue7->setItemText(22, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxLValue7->setItemText(23, QCoreApplication::translate("Researcher", "Previous 6", nullptr));

        checkBoxHex7->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue7->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue7->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue7->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue7->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue7->setItemText(4, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue7->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue7->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue7->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue7->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue7->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue7->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue7->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue7->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue7->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue7->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue7->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue7->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue7->setItemText(17, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxRValue7->setItemText(18, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxRValue7->setItemText(19, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue7->setItemText(20, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue7->setItemText(21, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue7->setItemText(22, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxRValue7->setItemText(23, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxRValue7->setItemText(24, QCoreApplication::translate("Researcher", "Previous 6", nullptr));

        labelCustom8->setText(QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxLValue8->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue8->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue8->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue8->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue8->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue8->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue8->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue8->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue8->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue8->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue8->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue8->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue8->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue8->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue8->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue8->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue8->setItemText(16, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue8->setItemText(17, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxLValue8->setItemText(18, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxLValue8->setItemText(19, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue8->setItemText(20, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue8->setItemText(21, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue8->setItemText(22, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxLValue8->setItemText(23, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxLValue8->setItemText(24, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxLValue8->setItemText(25, QCoreApplication::translate("Researcher", "Previous 7", nullptr));

        checkBoxHex8->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue8->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue8->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue8->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue8->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue8->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue8->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue8->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue8->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue8->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue8->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue8->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue8->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue8->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue8->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue8->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue8->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue8->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue8->setItemText(17, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxRValue8->setItemText(18, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxRValue8->setItemText(19, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxRValue8->setItemText(20, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue8->setItemText(21, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue8->setItemText(22, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue8->setItemText(23, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxRValue8->setItemText(24, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxRValue8->setItemText(25, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxRValue8->setItemText(26, QCoreApplication::translate("Researcher", "Previous 7", nullptr));

        labelCustom9->setText(QCoreApplication::translate("Researcher", "Custom 9", nullptr));
        comboBoxLValue9->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue9->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue9->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue9->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue9->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue9->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue9->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue9->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue9->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue9->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue9->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue9->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue9->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue9->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue9->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue9->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue9->setItemText(16, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue9->setItemText(17, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxLValue9->setItemText(18, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxLValue9->setItemText(19, QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxLValue9->setItemText(20, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue9->setItemText(21, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue9->setItemText(22, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue9->setItemText(23, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxLValue9->setItemText(24, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxLValue9->setItemText(25, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxLValue9->setItemText(26, QCoreApplication::translate("Researcher", "Previous 7", nullptr));
        comboBoxLValue9->setItemText(27, QCoreApplication::translate("Researcher", "Previous 8", nullptr));

        checkBoxHex9->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue9->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue9->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue9->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue9->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue9->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue9->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue9->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue9->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue9->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue9->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue9->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue9->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue9->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue9->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue9->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue9->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue9->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue9->setItemText(17, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxRValue9->setItemText(18, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxRValue9->setItemText(19, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxRValue9->setItemText(20, QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxRValue9->setItemText(21, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue9->setItemText(22, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue9->setItemText(23, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue9->setItemText(24, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxRValue9->setItemText(25, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxRValue9->setItemText(26, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxRValue9->setItemText(27, QCoreApplication::translate("Researcher", "Previous 7", nullptr));
        comboBoxRValue9->setItemText(28, QCoreApplication::translate("Researcher", "Previous 8", nullptr));

        labelCustom10->setText(QCoreApplication::translate("Researcher", "Custom 10", nullptr));
        comboBoxLValue10->setItemText(0, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxLValue10->setItemText(1, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxLValue10->setItemText(2, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxLValue10->setItemText(3, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxLValue10->setItemText(4, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxLValue10->setItemText(5, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxLValue10->setItemText(6, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxLValue10->setItemText(7, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxLValue10->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxLValue10->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxLValue10->setItemText(10, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxLValue10->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxLValue10->setItemText(12, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxLValue10->setItemText(13, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxLValue10->setItemText(14, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxLValue10->setItemText(15, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxLValue10->setItemText(16, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxLValue10->setItemText(17, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxLValue10->setItemText(18, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxLValue10->setItemText(19, QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxLValue10->setItemText(20, QCoreApplication::translate("Researcher", "Custom 9", nullptr));
        comboBoxLValue10->setItemText(21, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxLValue10->setItemText(22, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxLValue10->setItemText(23, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxLValue10->setItemText(24, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxLValue10->setItemText(25, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxLValue10->setItemText(26, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxLValue10->setItemText(27, QCoreApplication::translate("Researcher", "Previous 7", nullptr));
        comboBoxLValue10->setItemText(28, QCoreApplication::translate("Researcher", "Previous 8", nullptr));
        comboBoxLValue10->setItemText(29, QCoreApplication::translate("Researcher", "Previous 9", nullptr));

        checkBoxHex10->setText(QCoreApplication::translate("Researcher", "Hex", nullptr));
        comboBoxRValue10->setItemText(0, QCoreApplication::translate("Researcher", "None", nullptr));
        comboBoxRValue10->setItemText(1, QCoreApplication::translate("Researcher", "64Bit", nullptr));
        comboBoxRValue10->setItemText(2, QCoreApplication::translate("Researcher", "32Bit", nullptr));
        comboBoxRValue10->setItemText(3, QCoreApplication::translate("Researcher", "32Bit High", nullptr));
        comboBoxRValue10->setItemText(4, QCoreApplication::translate("Researcher", "32Bit Low", nullptr));
        comboBoxRValue10->setItemText(5, QCoreApplication::translate("Researcher", "16Bit High", nullptr));
        comboBoxRValue10->setItemText(6, QCoreApplication::translate("Researcher", "16Bit Low", nullptr));
        comboBoxRValue10->setItemText(7, QCoreApplication::translate("Researcher", "Previous 64Bit", nullptr));
        comboBoxRValue10->setItemText(8, QCoreApplication::translate("Researcher", "Previous 32Bit", nullptr));
        comboBoxRValue10->setItemText(9, QCoreApplication::translate("Researcher", "Previous 32Bit High", nullptr));
        comboBoxRValue10->setItemText(10, QCoreApplication::translate("Researcher", "Previous 32Bit Low", nullptr));
        comboBoxRValue10->setItemText(11, QCoreApplication::translate("Researcher", "Previous 16Bit High", nullptr));
        comboBoxRValue10->setItemText(12, QCoreApplication::translate("Researcher", "Previous 16Bit Low", nullptr));
        comboBoxRValue10->setItemText(13, QCoreApplication::translate("Researcher", "Custom 1", nullptr));
        comboBoxRValue10->setItemText(14, QCoreApplication::translate("Researcher", "Custom 2", nullptr));
        comboBoxRValue10->setItemText(15, QCoreApplication::translate("Researcher", "Custom 3", nullptr));
        comboBoxRValue10->setItemText(16, QCoreApplication::translate("Researcher", "Custom 4", nullptr));
        comboBoxRValue10->setItemText(17, QCoreApplication::translate("Researcher", "Custom 5", nullptr));
        comboBoxRValue10->setItemText(18, QCoreApplication::translate("Researcher", "Custom 6", nullptr));
        comboBoxRValue10->setItemText(19, QCoreApplication::translate("Researcher", "Custom 7", nullptr));
        comboBoxRValue10->setItemText(20, QCoreApplication::translate("Researcher", "Custom 8", nullptr));
        comboBoxRValue10->setItemText(21, QCoreApplication::translate("Researcher", "Custom 9", nullptr));
        comboBoxRValue10->setItemText(22, QCoreApplication::translate("Researcher", "Previous 1", nullptr));
        comboBoxRValue10->setItemText(23, QCoreApplication::translate("Researcher", "Previous 2", nullptr));
        comboBoxRValue10->setItemText(24, QCoreApplication::translate("Researcher", "Previous 3", nullptr));
        comboBoxRValue10->setItemText(25, QCoreApplication::translate("Researcher", "Previous 4", nullptr));
        comboBoxRValue10->setItemText(26, QCoreApplication::translate("Researcher", "Previous 5", nullptr));
        comboBoxRValue10->setItemText(27, QCoreApplication::translate("Researcher", "Previous 6", nullptr));
        comboBoxRValue10->setItemText(28, QCoreApplication::translate("Researcher", "Previous 7", nullptr));
        comboBoxRValue10->setItemText(29, QCoreApplication::translate("Researcher", "Previous 8", nullptr));
        comboBoxRValue10->setItemText(30, QCoreApplication::translate("Researcher", "Previous 9", nullptr));

        (void)Researcher;
    } // retranslateUi

};

namespace Ui {
    class Researcher: public Ui_Researcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESEARCHER_H
