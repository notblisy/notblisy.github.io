/********************************************************************************
** Form generated from reading UI file 'SearchCalls.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCALLS_H
#define UI_SEARCHCALLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SearchCalls
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonK;
    QPushButton *pushButtonE;
    QPushButton *pushButtonP;
    QLineEdit *lineEditCalls;
    QLabel *labelPossibleResults;
    QRadioButton *radioButtonElm;
    QRadioButton *radioButtonIrwin;
    QLabel *labelKResponse;
    QLabel *labelEResponse;
    QLabel *labelPResponse;
    QPushButton *pushButtonOkay;
    QPushButton *pushButtonCancel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SearchCalls)
    {
        if (SearchCalls->objectName().isEmpty())
            SearchCalls->setObjectName("SearchCalls");
        SearchCalls->resize(530, 300);
        gridLayout = new QGridLayout(SearchCalls);
        gridLayout->setObjectName("gridLayout");
        pushButtonK = new QPushButton(SearchCalls);
        pushButtonK->setObjectName("pushButtonK");
        pushButtonK->setText(QString::fromUtf8("K"));

        gridLayout->addWidget(pushButtonK, 0, 0, 1, 2);

        pushButtonE = new QPushButton(SearchCalls);
        pushButtonE->setObjectName("pushButtonE");
        pushButtonE->setText(QString::fromUtf8("E"));

        gridLayout->addWidget(pushButtonE, 0, 2, 1, 2);

        pushButtonP = new QPushButton(SearchCalls);
        pushButtonP->setObjectName("pushButtonP");
        pushButtonP->setText(QString::fromUtf8("P"));

        gridLayout->addWidget(pushButtonP, 0, 4, 1, 2);

        lineEditCalls = new QLineEdit(SearchCalls);
        lineEditCalls->setObjectName("lineEditCalls");

        gridLayout->addWidget(lineEditCalls, 1, 0, 1, 6);

        labelPossibleResults = new QLabel(SearchCalls);
        labelPossibleResults->setObjectName("labelPossibleResults");

        gridLayout->addWidget(labelPossibleResults, 2, 0, 1, 2);

        radioButtonElm = new QRadioButton(SearchCalls);
        buttonGroup = new QButtonGroup(SearchCalls);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonElm);
        radioButtonElm->setObjectName("radioButtonElm");

        gridLayout->addWidget(radioButtonElm, 3, 0, 1, 1);

        radioButtonIrwin = new QRadioButton(SearchCalls);
        buttonGroup->addButton(radioButtonIrwin);
        radioButtonIrwin->setObjectName("radioButtonIrwin");
        radioButtonIrwin->setChecked(true);

        gridLayout->addWidget(radioButtonIrwin, 3, 1, 1, 1);

        labelKResponse = new QLabel(SearchCalls);
        labelKResponse->setObjectName("labelKResponse");
        labelKResponse->setWordWrap(true);

        gridLayout->addWidget(labelKResponse, 4, 0, 1, 6);

        labelEResponse = new QLabel(SearchCalls);
        labelEResponse->setObjectName("labelEResponse");
        labelEResponse->setScaledContents(false);
        labelEResponse->setWordWrap(true);

        gridLayout->addWidget(labelEResponse, 5, 0, 1, 6);

        labelPResponse = new QLabel(SearchCalls);
        labelPResponse->setObjectName("labelPResponse");
        labelPResponse->setWordWrap(true);

        gridLayout->addWidget(labelPResponse, 6, 0, 1, 6);

        pushButtonOkay = new QPushButton(SearchCalls);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 7, 4, 1, 1);

        pushButtonCancel = new QPushButton(SearchCalls);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 7, 5, 1, 1);


        retranslateUi(SearchCalls);

        QMetaObject::connectSlotsByName(SearchCalls);
    } // setupUi

    void retranslateUi(QDialog *SearchCalls)
    {
        SearchCalls->setWindowTitle(QCoreApplication::translate("SearchCalls", "Search Calls", nullptr));
        labelPossibleResults->setText(QCoreApplication::translate("SearchCalls", "Possible Results:", nullptr));
        radioButtonElm->setText(QCoreApplication::translate("SearchCalls", "Elm", nullptr));
        radioButtonIrwin->setText(QCoreApplication::translate("SearchCalls", "Irwin", nullptr));
        labelKResponse->setText(QCoreApplication::translate("SearchCalls", "K - I'm so glad you called! I was just about to call you, too! I guess we must be a good match!", nullptr));
        labelEResponse->setText(QCoreApplication::translate("SearchCalls", "E - Hearing about your escapades rocks my soul! It sure does!", nullptr));
        labelPResponse->setText(QCoreApplication::translate("SearchCalls", "P - How are you? What are you doing? Where are you? How many Badges do you have now? How much money have you saved? How's your mom? Have you got lots of Pok\303\251mon? Is it going to be sunny tomorrow? Arrgh, there's so much I want to chat about! This is going nowhere!", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("SearchCalls", "Ok", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SearchCalls", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchCalls: public Ui_SearchCalls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCALLS_H
