/********************************************************************************
** Form generated from reading UI file 'SearchCoinFlips.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCOINFLIPS_H
#define UI_SEARCHCOINFLIPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SearchCoinFlips
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonHeads;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEditFlips;
    QLabel *labelPossibleResults;
    QPushButton *pushButtonOkay;
    QPushButton *pushButtonTails;
    QToolButton *closebutton;

    void setupUi(QDialog *SearchCoinFlips)
    {
        if (SearchCoinFlips->objectName().isEmpty())
            SearchCoinFlips->setObjectName("SearchCoinFlips");
        SearchCoinFlips->resize(370, 166);
        gridLayout = new QGridLayout(SearchCoinFlips);
        gridLayout->setObjectName("gridLayout");
        pushButtonHeads = new QPushButton(SearchCoinFlips);
        pushButtonHeads->setObjectName("pushButtonHeads");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/heads.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonHeads->setIcon(icon);
        pushButtonHeads->setIconSize(QSize(66, 60));

        gridLayout->addWidget(pushButtonHeads, 1, 0, 1, 1);

        pushButtonCancel = new QPushButton(SearchCoinFlips);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 4, 3, 1, 1);

        lineEditFlips = new QLineEdit(SearchCoinFlips);
        lineEditFlips->setObjectName("lineEditFlips");

        gridLayout->addWidget(lineEditFlips, 2, 0, 1, 4);

        labelPossibleResults = new QLabel(SearchCoinFlips);
        labelPossibleResults->setObjectName("labelPossibleResults");

        gridLayout->addWidget(labelPossibleResults, 3, 0, 1, 2);

        pushButtonOkay = new QPushButton(SearchCoinFlips);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 4, 2, 1, 1);

        pushButtonTails = new QPushButton(SearchCoinFlips);
        pushButtonTails->setObjectName("pushButtonTails");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/tails.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonTails->setIcon(icon1);
        pushButtonTails->setIconSize(QSize(66, 60));

        gridLayout->addWidget(pushButtonTails, 1, 1, 1, 1);

        closebutton = new QToolButton(SearchCoinFlips);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 4, 0, 1, 1);


        retranslateUi(SearchCoinFlips);

        QMetaObject::connectSlotsByName(SearchCoinFlips);
    } // setupUi

    void retranslateUi(QDialog *SearchCoinFlips)
    {
        SearchCoinFlips->setWindowTitle(QCoreApplication::translate("SearchCoinFlips", "Search Coin Flips", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SearchCoinFlips", "Cancel", nullptr));
        labelPossibleResults->setText(QCoreApplication::translate("SearchCoinFlips", "Possible Results:", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("SearchCoinFlips", "Ok", nullptr));
        closebutton->setText(QCoreApplication::translate("SearchCoinFlips", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchCoinFlips: public Ui_SearchCoinFlips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCOINFLIPS_H
