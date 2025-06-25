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

QT_BEGIN_NAMESPACE

class Ui_RoamerMap
{
public:
    QGridLayout *gridLayout;
    QLabel *labelMap;
    QLabel *labelEnteiImage;
    QLabel *labelEntei;
    QLabel *labelRaikouImage;
    QLabel *labelRaikou;
    QLabel *labelLatiasImage;
    QLabel *labelLatiosImage;
    QLabel *labelLatiasLatios;

    void setupUi(QDialog *RoamerMap)
    {
        if (RoamerMap->objectName().isEmpty())
            RoamerMap->setObjectName("RoamerMap");
        RoamerMap->resize(540, 340);
        RoamerMap->setMinimumSize(QSize(540, 340));
        RoamerMap->setMaximumSize(QSize(540, 340));
        gridLayout = new QGridLayout(RoamerMap);
        gridLayout->setObjectName("gridLayout");
        labelMap = new QLabel(RoamerMap);
        labelMap->setObjectName("labelMap");
        labelMap->setPixmap(QPixmap(QString::fromUtf8(":/images/roamers.png")));

        gridLayout->addWidget(labelMap, 0, 0, 1, 7);

        labelEnteiImage = new QLabel(RoamerMap);
        labelEnteiImage->setObjectName("labelEnteiImage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelEnteiImage->sizePolicy().hasHeightForWidth());
        labelEnteiImage->setSizePolicy(sizePolicy);
        labelEnteiImage->setPixmap(QPixmap(QString::fromUtf8(":/images/entei.png")));

        gridLayout->addWidget(labelEnteiImage, 1, 0, 1, 1);

        labelEntei = new QLabel(RoamerMap);
        labelEntei->setObjectName("labelEntei");
        sizePolicy.setHeightForWidth(labelEntei->sizePolicy().hasHeightForWidth());
        labelEntei->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelEntei, 1, 1, 1, 1);

        labelRaikouImage = new QLabel(RoamerMap);
        labelRaikouImage->setObjectName("labelRaikouImage");
        sizePolicy.setHeightForWidth(labelRaikouImage->sizePolicy().hasHeightForWidth());
        labelRaikouImage->setSizePolicy(sizePolicy);
        labelRaikouImage->setPixmap(QPixmap(QString::fromUtf8(":/images/raikou.png")));

        gridLayout->addWidget(labelRaikouImage, 1, 2, 1, 1);

        labelRaikou = new QLabel(RoamerMap);
        labelRaikou->setObjectName("labelRaikou");
        sizePolicy.setHeightForWidth(labelRaikou->sizePolicy().hasHeightForWidth());
        labelRaikou->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelRaikou, 1, 3, 1, 1);

        labelLatiasImage = new QLabel(RoamerMap);
        labelLatiasImage->setObjectName("labelLatiasImage");
        sizePolicy.setHeightForWidth(labelLatiasImage->sizePolicy().hasHeightForWidth());
        labelLatiasImage->setSizePolicy(sizePolicy);
        labelLatiasImage->setPixmap(QPixmap(QString::fromUtf8(":/images/latias.png")));

        gridLayout->addWidget(labelLatiasImage, 1, 4, 1, 1);

        labelLatiosImage = new QLabel(RoamerMap);
        labelLatiosImage->setObjectName("labelLatiosImage");
        sizePolicy.setHeightForWidth(labelLatiosImage->sizePolicy().hasHeightForWidth());
        labelLatiosImage->setSizePolicy(sizePolicy);
        labelLatiosImage->setPixmap(QPixmap(QString::fromUtf8(":/images/latios.png")));

        gridLayout->addWidget(labelLatiosImage, 1, 5, 1, 1);

        labelLatiasLatios = new QLabel(RoamerMap);
        labelLatiasLatios->setObjectName("labelLatiasLatios");
        sizePolicy.setHeightForWidth(labelLatiasLatios->sizePolicy().hasHeightForWidth());
        labelLatiasLatios->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelLatiasLatios, 1, 6, 1, 1);


        retranslateUi(RoamerMap);

        QMetaObject::connectSlotsByName(RoamerMap);
    } // setupUi

    void retranslateUi(QDialog *RoamerMap)
    {
        RoamerMap->setWindowTitle(QCoreApplication::translate("RoamerMap", "Roamer Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoamerMap: public Ui_RoamerMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROAMERMAP_H
