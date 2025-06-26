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
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SearchCalls
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonP;
    QPushButton *pushButtonK;
    QRadioButton *radioButtonIrwin;
    QPushButton *pushButtonE;
    QLabel *labelEResponse;
    QLabel *labelPResponse;
    QLineEdit *lineEditCalls;
    QPushButton *pushButtonCancel;
    QLabel *labelPossibleResults;
    QLabel *labelKResponse;
    QRadioButton *radioButtonElm;
    QPushButton *pushButtonOkay;
    QToolButton *closebutton;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SearchCalls)
    {
        if (SearchCalls->objectName().isEmpty())
            SearchCalls->setObjectName("SearchCalls");
        SearchCalls->resize(530, 300);
        gridLayout = new QGridLayout(SearchCalls);
        gridLayout->setObjectName("gridLayout");
        pushButtonP = new QPushButton(SearchCalls);
        pushButtonP->setObjectName("pushButtonP");
        pushButtonP->setText(QString::fromUtf8("P"));

        gridLayout->addWidget(pushButtonP, 1, 4, 1, 2);

        pushButtonK = new QPushButton(SearchCalls);
        pushButtonK->setObjectName("pushButtonK");
        pushButtonK->setText(QString::fromUtf8("K"));

        gridLayout->addWidget(pushButtonK, 1, 0, 1, 2);

        radioButtonIrwin = new QRadioButton(SearchCalls);
        buttonGroup = new QButtonGroup(SearchCalls);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonIrwin);
        radioButtonIrwin->setObjectName("radioButtonIrwin");
        radioButtonIrwin->setChecked(true);

        gridLayout->addWidget(radioButtonIrwin, 4, 1, 1, 1);

        pushButtonE = new QPushButton(SearchCalls);
        pushButtonE->setObjectName("pushButtonE");
        pushButtonE->setText(QString::fromUtf8("E"));

        gridLayout->addWidget(pushButtonE, 1, 2, 1, 2);

        labelEResponse = new QLabel(SearchCalls);
        labelEResponse->setObjectName("labelEResponse");
        labelEResponse->setScaledContents(false);
        labelEResponse->setWordWrap(true);

        gridLayout->addWidget(labelEResponse, 6, 0, 1, 6);

        labelPResponse = new QLabel(SearchCalls);
        labelPResponse->setObjectName("labelPResponse");
        labelPResponse->setWordWrap(true);

        gridLayout->addWidget(labelPResponse, 7, 0, 1, 6);

        lineEditCalls = new QLineEdit(SearchCalls);
        lineEditCalls->setObjectName("lineEditCalls");

        gridLayout->addWidget(lineEditCalls, 2, 0, 1, 6);

        pushButtonCancel = new QPushButton(SearchCalls);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 8, 5, 1, 1);

        labelPossibleResults = new QLabel(SearchCalls);
        labelPossibleResults->setObjectName("labelPossibleResults");

        gridLayout->addWidget(labelPossibleResults, 3, 0, 1, 2);

        labelKResponse = new QLabel(SearchCalls);
        labelKResponse->setObjectName("labelKResponse");
        labelKResponse->setWordWrap(true);

        gridLayout->addWidget(labelKResponse, 5, 0, 1, 6);

        radioButtonElm = new QRadioButton(SearchCalls);
        buttonGroup->addButton(radioButtonElm);
        radioButtonElm->setObjectName("radioButtonElm");

        gridLayout->addWidget(radioButtonElm, 4, 0, 1, 1);

        pushButtonOkay = new QPushButton(SearchCalls);
        pushButtonOkay->setObjectName("pushButtonOkay");

        gridLayout->addWidget(pushButtonOkay, 8, 4, 1, 1);

        closebutton = new QToolButton(SearchCalls);
        closebutton->setObjectName("closebutton");

        gridLayout->addWidget(closebutton, 0, 0, 1, 1);


        retranslateUi(SearchCalls);

        QMetaObject::connectSlotsByName(SearchCalls);
    } // setupUi

    void retranslateUi(QDialog *SearchCalls)
    {
        SearchCalls->setWindowTitle(QCoreApplication::translate("SearchCalls", "Search Calls", nullptr));
        radioButtonIrwin->setText(QCoreApplication::translate("SearchCalls", "Irwin", nullptr));
        labelEResponse->setText(QCoreApplication::translate("SearchCalls", "E - Hearing about your escapades rocks my soul! It sure does!", nullptr));
        labelPResponse->setText(QCoreApplication::translate("SearchCalls", "P - How are you? What are you doing? Where are you? How many Badges do you have now? How much money have you saved? How's your mom? Have you got lots of Pok\303\251mon? Is it going to be sunny tomorrow? Arrgh, there's so much I want to chat about! This is going nowhere!", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SearchCalls", "Cancel", nullptr));
        labelPossibleResults->setText(QCoreApplication::translate("SearchCalls", "Possible Results:", nullptr));
        labelKResponse->setText(QCoreApplication::translate("SearchCalls", "K - I'm so glad you called! I was just about to call you, too! I guess we must be a good match!", nullptr));
        radioButtonElm->setText(QCoreApplication::translate("SearchCalls", "Elm", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("SearchCalls", "Ok", nullptr));
        closebutton->setText(QCoreApplication::translate("SearchCalls", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchCalls: public Ui_SearchCalls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCALLS_H
