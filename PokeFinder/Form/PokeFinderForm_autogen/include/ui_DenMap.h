/********************************************************************************
** Form generated from reading UI file 'DenMap.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENMAP_H
#define UI_DENMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DenMap
{
public:
    QGridLayout *gridLayout;
    QLabel *labelMap;
    QComboBox *comboBoxLocation;
    QComboBox *comboBoxDen;

    void setupUi(QWidget *DenMap)
    {
        if (DenMap->objectName().isEmpty())
            DenMap->setObjectName("DenMap");
        DenMap->resize(245, 610);
        gridLayout = new QGridLayout(DenMap);
        gridLayout->setObjectName("gridLayout");
        labelMap = new QLabel(DenMap);
        labelMap->setObjectName("labelMap");
        labelMap->setMinimumSize(QSize(227, 532));
        labelMap->setScaledContents(true);

        gridLayout->addWidget(labelMap, 0, 0, 1, 1);

        comboBoxLocation = new QComboBox(DenMap);
        comboBoxLocation->addItem(QString());
        comboBoxLocation->addItem(QString());
        comboBoxLocation->addItem(QString());
        comboBoxLocation->setObjectName("comboBoxLocation");

        gridLayout->addWidget(comboBoxLocation, 1, 0, 1, 1);

        comboBoxDen = new QComboBox(DenMap);
        comboBoxDen->setObjectName("comboBoxDen");

        gridLayout->addWidget(comboBoxDen, 2, 0, 1, 1);


        retranslateUi(DenMap);

        QMetaObject::connectSlotsByName(DenMap);
    } // setupUi

    void retranslateUi(QWidget *DenMap)
    {
        DenMap->setWindowTitle(QCoreApplication::translate("DenMap", "Den Map", nullptr));
        comboBoxLocation->setItemText(0, QCoreApplication::translate("DenMap", "Wild Area", nullptr));
        comboBoxLocation->setItemText(1, QCoreApplication::translate("DenMap", "Isle of Armor", nullptr));
        comboBoxLocation->setItemText(2, QCoreApplication::translate("DenMap", "Crown Tundra", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DenMap: public Ui_DenMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENMAP_H
