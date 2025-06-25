/********************************************************************************
** Form generated from reading UI file 'SpindaPainter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINDAPAINTER_H
#define UI_SPINDAPAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_SpindaPainter
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPID;
    TextBox *textBoxPID;
    QSpacerItem *horizontalSpacer;
    QLabel *labelInfo;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *SpindaPainter)
    {
        if (SpindaPainter->objectName().isEmpty())
            SpindaPainter->setObjectName("SpindaPainter");
        SpindaPainter->resize(700, 700);
        gridLayout = new QGridLayout(SpindaPainter);
        gridLayout->setObjectName("gridLayout");
        labelPID = new QLabel(SpindaPainter);
        labelPID->setObjectName("labelPID");

        gridLayout->addWidget(labelPID, 0, 0, 1, 1);

        textBoxPID = new TextBox(SpindaPainter);
        textBoxPID->setObjectName("textBoxPID");
        textBoxPID->setText(QString::fromUtf8("0"));

        gridLayout->addWidget(textBoxPID, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        labelInfo = new QLabel(SpindaPainter);
        labelInfo->setObjectName("labelInfo");

        gridLayout->addWidget(labelInfo, 0, 3, 1, 1);

        graphicsView = new QGraphicsView(SpindaPainter);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 1, 0, 1, 4);


        retranslateUi(SpindaPainter);

        QMetaObject::connectSlotsByName(SpindaPainter);
    } // setupUi

    void retranslateUi(QWidget *SpindaPainter)
    {
        SpindaPainter->setWindowTitle(QCoreApplication::translate("SpindaPainter", "Spinda Painter", nullptr));
        labelPID->setText(QCoreApplication::translate("SpindaPainter", "PID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpindaPainter: public Ui_SpindaPainter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINDAPAINTER_H
