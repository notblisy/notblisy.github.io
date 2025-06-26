/********************************************************************************
** Form generated from reading UI file 'RoamerMap.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROAMERMAP_H
#define UI_ROAMERMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RoamerMap
{
public:
    QGridLayout *gridLayout;
    QLabel *labelEntei;
    QLabel *labelRaikou;
    QLabel *labelLatiosImage;
    QLabel *labelLatiasLatios;
    QLabel *labelLatiasImage;
    QLabel *labelMap;
    QLabel *labelEnteiImage;
    QLabel *labelRaikouImage;
    QToolButton *closebutton;

    void setupUi(QDialog *RoamerMap)
    {
        if (RoamerMap->objectName().isEmpty())
            RoamerMap->setObjectName("RoamerMap");
        RoamerMap->resize(540, 340);
        RoamerMap->setMinimumSize(QSize(540, 340));
        RoamerMap->setMaximumSize(QSize(540, 340));
        gridLayout = new QGridLayout(RoamerMap);
        gridLayout->setObjectName("gridLayout");
        labelEntei = new QLabel(RoamerMap);
        labelEntei->setObjectName("labelEntei");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelEntei->sizePolicy().hasHeightForWidth());
        labelEntei->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelEntei, 2, 2, 1, 1);

        labelRaikou = new QLabel(RoamerMap);
        labelRaikou->setObjectName("labelRaikou");
        sizePolicy.setHeightForWidth(labelRaikou->sizePolicy().hasHeightForWidth());
        labelRaikou->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelRaikou, 2, 4, 1, 1);

        labelLatiosImage = new QLabel(RoamerMap);
        labelLatiosImage->setObjectName("labelLatiosImage");
        sizePolicy.setHeightForWidth(labelLatiosImage->sizePolicy().hasHeightForWidth());
        labelLatiosImage->setSizePolicy(sizePolicy);
        labelLatiosImage->setPixmap(QPixmap(QString::fromUtf8(":/images/latios.png")));

        gridLayout->addWidget(labelLatiosImage, 2, 6, 1, 1);

        labelLatiasLatios = new QLabel(RoamerMap);
        labelLatiasLatios->setObjectName("labelLatiasLatios");
        sizePolicy.setHeightForWidth(labelLatiasLatios->sizePolicy().hasHeightForWidth());
        labelLatiasLatios->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelLatiasLatios, 2, 7, 1, 1);

        labelLatiasImage = new QLabel(RoamerMap);
        labelLatiasImage->setObjectName("labelLatiasImage");
        sizePolicy.setHeightForWidth(labelLatiasImage->sizePolicy().hasHeightForWidth());
        labelLatiasImage->setSizePolicy(sizePolicy);
        labelLatiasImage->setPixmap(QPixmap(QString::fromUtf8(":/images/latias.png")));

        gridLayout->addWidget(labelLatiasImage, 2, 5, 1, 1);

        labelMap = new QLabel(RoamerMap);
        labelMap->setObjectName("labelMap");
        labelMap->setPixmap(QPixmap(QString::fromUtf8(":/images/roamers.png")));

        gridLayout->addWidget(labelMap, 1, 1, 1, 7);

        labelEnteiImage = new QLabel(RoamerMap);
        labelEnteiImage->setObjectName("labelEnteiImage");
        sizePolicy.setHeightForWidth(labelEnteiImage->sizePolicy().hasHeightForWidth());
        labelEnteiImage->setSizePolicy(sizePolicy);
        labelEnteiImage->setPixmap(QPixmap(QString::fromUtf8(":/images/entei.png")));

        gridLayout->addWidget(labelEnteiImage, 2, 1, 1, 1);

        labelRaikouImage = new QLabel(RoamerMap);
        labelRaikouImage->setObjectName("labelRaikouImage");
        sizePolicy.setHeightForWidth(labelRaikouImage->sizePolicy().hasHeightForWidth());
        labelRaikouImage->setSizePolicy(sizePolicy);
        labelRaikouImage->setPixmap(QPixmap(QString::fromUtf8(":/images/raikou.png")));

        gridLayout->addWidget(labelRaikouImage, 2, 3, 1, 1);

        closebutton = new QToolButton(RoamerMap);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 1, 1, 1);


        retranslateUi(RoamerMap);

        QMetaObject::connectSlotsByName(RoamerMap);
    } // setupUi

    void retranslateUi(QDialog *RoamerMap)
    {
        RoamerMap->setWindowTitle(QCoreApplication::translate("RoamerMap", "Roamer Map", nullptr));
        closebutton->setText(QCoreApplication::translate("RoamerMap", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoamerMap: public Ui_RoamerMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROAMERMAP_H
