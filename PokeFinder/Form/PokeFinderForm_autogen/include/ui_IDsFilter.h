/********************************************************************************
** Form generated from reading UI file 'IDsFilter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDSFILTER_H
#define UI_IDSFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IDsFilter
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonTID;
    QRadioButton *radioButtonSID;
    QRadioButton *radioButtonTIDSID;
    QRadioButton *radioButtonPID;
    QRadioButton *radioButtonTIDPID;
    QRadioButton *radioButtonTSV;
    QRadioButton *radioButtonDisplayTID;
    QPlainTextEdit *plainTextEdit;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *IDsFilter)
    {
        if (IDsFilter->objectName().isEmpty())
            IDsFilter->setObjectName("IDsFilter");
        IDsFilter->resize(179, 210);
        horizontalLayout = new QHBoxLayout(IDsFilter);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButtonTID = new QRadioButton(IDsFilter);
        buttonGroup = new QButtonGroup(IDsFilter);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonTID);
        radioButtonTID->setObjectName("radioButtonTID");
        radioButtonTID->setChecked(true);

        verticalLayout->addWidget(radioButtonTID);

        radioButtonSID = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonSID);
        radioButtonSID->setObjectName("radioButtonSID");

        verticalLayout->addWidget(radioButtonSID);

        radioButtonTIDSID = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonTIDSID);
        radioButtonTIDSID->setObjectName("radioButtonTIDSID");

        verticalLayout->addWidget(radioButtonTIDSID);

        radioButtonPID = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonPID);
        radioButtonPID->setObjectName("radioButtonPID");

        verticalLayout->addWidget(radioButtonPID);

        radioButtonTIDPID = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonTIDPID);
        radioButtonTIDPID->setObjectName("radioButtonTIDPID");

        verticalLayout->addWidget(radioButtonTIDPID);

        radioButtonTSV = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonTSV);
        radioButtonTSV->setObjectName("radioButtonTSV");

        verticalLayout->addWidget(radioButtonTSV);

        radioButtonDisplayTID = new QRadioButton(IDsFilter);
        buttonGroup->addButton(radioButtonDisplayTID);
        radioButtonDisplayTID->setObjectName("radioButtonDisplayTID");

        verticalLayout->addWidget(radioButtonDisplayTID);


        horizontalLayout->addLayout(verticalLayout);

        plainTextEdit = new QPlainTextEdit(IDsFilter);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);

        QWidget::setTabOrder(radioButtonTID, radioButtonSID);
        QWidget::setTabOrder(radioButtonSID, radioButtonTIDSID);
        QWidget::setTabOrder(radioButtonTIDSID, radioButtonPID);
        QWidget::setTabOrder(radioButtonPID, radioButtonTIDPID);
        QWidget::setTabOrder(radioButtonTIDPID, radioButtonTSV);
        QWidget::setTabOrder(radioButtonTSV, radioButtonDisplayTID);
        QWidget::setTabOrder(radioButtonDisplayTID, plainTextEdit);

        retranslateUi(IDsFilter);

        QMetaObject::connectSlotsByName(IDsFilter);
    } // setupUi

    void retranslateUi(QWidget *IDsFilter)
    {
        radioButtonTID->setText(QCoreApplication::translate("IDsFilter", "TID", nullptr));
        radioButtonSID->setText(QCoreApplication::translate("IDsFilter", "SID", nullptr));
        radioButtonTIDSID->setText(QCoreApplication::translate("IDsFilter", "TID/SID", nullptr));
        radioButtonPID->setText(QCoreApplication::translate("IDsFilter", "PID", nullptr));
        radioButtonTIDPID->setText(QCoreApplication::translate("IDsFilter", "TID/PID", nullptr));
        radioButtonTSV->setText(QCoreApplication::translate("IDsFilter", "TSV", nullptr));
        radioButtonDisplayTID->setText(QCoreApplication::translate("IDsFilter", "Display TID", nullptr));
        (void)IDsFilter;
    } // retranslateUi

};

namespace Ui {
    class IDsFilter: public Ui_IDsFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDSFILTER_H
