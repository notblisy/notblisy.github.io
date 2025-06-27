/********************************************************************************
** Form generated from reading UI file 'Static3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIC3_H
#define UI_STATIC3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "Form/Controls/ComboBox.hpp"
#include "Form/Controls/Filter.hpp"
#include "Form/Controls/TableView.hpp"
#include "Form/Controls/TextBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Static3
{
public:
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QFormLayout *formLayout;
    QGroupBox *groupBoxProfile;
    QGridLayout *gridLayout_4;
    QFrame *line;
    QGridLayout *gridLayout_5;
    QLabel *labelProfile;
    QLabel *labelProfileGame;
    QLabel *labelProfileTID;
    QComboBox *comboBoxProfiles;
    QLabel *labelProfileTIDValue;
    QLabel *labelProfileSID;
    QLabel *labelProfileSIDValue;
    QLabel *labelProfileGameValue;
    QPushButton *pushButtonProfileManager;
    QToolButton *closebutton;
    QTabWidget *tabRNGSelector;
    QWidget *tabStatic;
    QFormLayout *formLayout_2;
    Filter *filterGenerator;
    QPushButton *pushButtonGenerate;
    QGridLayout *gridLayout;
    ComboBox *comboBoxGeneratorCategory;
    ComboBox *comboBoxGeneratorMethod;
    QLabel *labelGeneratorMethod;
    QLabel *labelGeneratorLevel;
    QSpinBox *spinBoxGeneratorLevel;
    QLabel *labelGeneratorCategory;
    QLabel *labelGeneratorInitialAdvances;
    TextBox *textBoxGeneratorSeed;
    TextBox *textBoxGeneratorOffset;
    QLabel *labelGeneratorPokemon;
    QLabel *labelGeneratorOffset;
    ComboBox *comboBoxGeneratorPokemon;
    QLabel *labelGeneratorMaxAdvances;
    QLabel *labelGeneratorSeed;
    TextBox *textBoxGeneratorInitialAdvances;
    TextBox *textBoxGeneratorMaxAdvances;
    QWidget *tabSpreadSearcher;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxSearcherRNGInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelSearcherMethod;
    ComboBox *comboBoxSearcherMethod;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBoxSearcherSettings;
    QGridLayout *gridLayout_10;
    QLabel *labelSearcherCategory;
    ComboBox *comboBoxSearcherCategory;
    QLabel *labelSearcherPokemon;
    ComboBox *comboBoxSearcherPokemon;
    QFrame *line_3;
    QLabel *labelSearcherLevel;
    QSpinBox *spinBoxSearcherLevel;
    QGroupBox *groupBoxSearcherFilters;
    QGridLayout *gridLayout_3;
    Filter *filterSearcher;
    QProgressBar *progressBar;
    TableView *tableViewSearcher;
    TableView *tableViewGenerator;

    void setupUi(QWidget *Static3)
    {
        if (Static3->objectName().isEmpty())
            Static3->setObjectName("Static3");
        Static3->resize(468, 691);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pokefinder.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Static3->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(Static3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        scrollArea = new QScrollArea(Static3);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 455, 856));
        formLayout = new QFormLayout(scrollAreaWidgetContents_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::RowWrapPolicy::WrapAllRows);
        groupBoxProfile = new QGroupBox(scrollAreaWidgetContents_2);
        groupBoxProfile->setObjectName("groupBoxProfile");
        gridLayout_4 = new QGridLayout(groupBoxProfile);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        line = new QFrame(groupBoxProfile);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line, 1, 4, 2, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, -1, -1);
        labelProfile = new QLabel(groupBoxProfile);
        labelProfile->setObjectName("labelProfile");

        gridLayout_5->addWidget(labelProfile, 0, 0, 1, 1);

        labelProfileGame = new QLabel(groupBoxProfile);
        labelProfileGame->setObjectName("labelProfileGame");

        gridLayout_5->addWidget(labelProfileGame, 0, 4, 1, 1);

        labelProfileTID = new QLabel(groupBoxProfile);
        labelProfileTID->setObjectName("labelProfileTID");

        gridLayout_5->addWidget(labelProfileTID, 0, 2, 1, 1);

        comboBoxProfiles = new QComboBox(groupBoxProfile);
        comboBoxProfiles->setObjectName("comboBoxProfiles");

        gridLayout_5->addWidget(comboBoxProfiles, 0, 1, 1, 1);

        labelProfileTIDValue = new QLabel(groupBoxProfile);
        labelProfileTIDValue->setObjectName("labelProfileTIDValue");

        gridLayout_5->addWidget(labelProfileTIDValue, 1, 2, 1, 1);

        labelProfileSID = new QLabel(groupBoxProfile);
        labelProfileSID->setObjectName("labelProfileSID");

        gridLayout_5->addWidget(labelProfileSID, 0, 3, 1, 1);

        labelProfileSIDValue = new QLabel(groupBoxProfile);
        labelProfileSIDValue->setObjectName("labelProfileSIDValue");

        gridLayout_5->addWidget(labelProfileSIDValue, 1, 3, 1, 1);

        labelProfileGameValue = new QLabel(groupBoxProfile);
        labelProfileGameValue->setObjectName("labelProfileGameValue");

        gridLayout_5->addWidget(labelProfileGameValue, 1, 4, 1, 1);

        pushButtonProfileManager = new QPushButton(groupBoxProfile);
        pushButtonProfileManager->setObjectName("pushButtonProfileManager");

        gridLayout_5->addWidget(pushButtonProfileManager, 1, 1, 1, 1);

        closebutton = new QToolButton(groupBoxProfile);
        closebutton->setObjectName("closebutton");

        gridLayout_5->addWidget(closebutton, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, groupBoxProfile);

        tabRNGSelector = new QTabWidget(scrollAreaWidgetContents_2);
        tabRNGSelector->setObjectName("tabRNGSelector");
        tabStatic = new QWidget();
        tabStatic->setObjectName("tabStatic");
        formLayout_2 = new QFormLayout(tabStatic);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName("formLayout_2");
        filterGenerator = new Filter(tabStatic);
        filterGenerator->setObjectName("filterGenerator");

        formLayout_2->setWidget(17, QFormLayout::ItemRole::LabelRole, filterGenerator);

        pushButtonGenerate = new QPushButton(tabStatic);
        pushButtonGenerate->setObjectName("pushButtonGenerate");

        formLayout_2->setWidget(19, QFormLayout::ItemRole::LabelRole, pushButtonGenerate);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, -1, -1);
        comboBoxGeneratorCategory = new ComboBox(tabStatic);
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->addItem(QString());
        comboBoxGeneratorCategory->setObjectName("comboBoxGeneratorCategory");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxGeneratorCategory->sizePolicy().hasHeightForWidth());
        comboBoxGeneratorCategory->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxGeneratorCategory, 5, 1, 1, 1);

        comboBoxGeneratorMethod = new ComboBox(tabStatic);
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->addItem(QString());
        comboBoxGeneratorMethod->setObjectName("comboBoxGeneratorMethod");
        sizePolicy1.setHeightForWidth(comboBoxGeneratorMethod->sizePolicy().hasHeightForWidth());
        comboBoxGeneratorMethod->setSizePolicy(sizePolicy1);
        comboBoxGeneratorMethod->setEditable(false);

        gridLayout->addWidget(comboBoxGeneratorMethod, 0, 1, 1, 1);

        labelGeneratorMethod = new QLabel(tabStatic);
        labelGeneratorMethod->setObjectName("labelGeneratorMethod");

        gridLayout->addWidget(labelGeneratorMethod, 0, 0, 1, 1);

        labelGeneratorLevel = new QLabel(tabStatic);
        labelGeneratorLevel->setObjectName("labelGeneratorLevel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelGeneratorLevel->sizePolicy().hasHeightForWidth());
        labelGeneratorLevel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorLevel, 7, 0, 1, 1);

        spinBoxGeneratorLevel = new QSpinBox(tabStatic);
        spinBoxGeneratorLevel->setObjectName("spinBoxGeneratorLevel");
        spinBoxGeneratorLevel->setEnabled(false);
        sizePolicy1.setHeightForWidth(spinBoxGeneratorLevel->sizePolicy().hasHeightForWidth());
        spinBoxGeneratorLevel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spinBoxGeneratorLevel, 7, 1, 1, 1);

        labelGeneratorCategory = new QLabel(tabStatic);
        labelGeneratorCategory->setObjectName("labelGeneratorCategory");
        sizePolicy2.setHeightForWidth(labelGeneratorCategory->sizePolicy().hasHeightForWidth());
        labelGeneratorCategory->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorCategory, 5, 0, 1, 1);

        labelGeneratorInitialAdvances = new QLabel(tabStatic);
        labelGeneratorInitialAdvances->setObjectName("labelGeneratorInitialAdvances");
        sizePolicy2.setHeightForWidth(labelGeneratorInitialAdvances->sizePolicy().hasHeightForWidth());
        labelGeneratorInitialAdvances->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorInitialAdvances, 2, 0, 1, 1);

        textBoxGeneratorSeed = new TextBox(tabStatic);
        textBoxGeneratorSeed->setObjectName("textBoxGeneratorSeed");
        sizePolicy1.setHeightForWidth(textBoxGeneratorSeed->sizePolicy().hasHeightForWidth());
        textBoxGeneratorSeed->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textBoxGeneratorSeed, 1, 1, 1, 1);

        textBoxGeneratorOffset = new TextBox(tabStatic);
        textBoxGeneratorOffset->setObjectName("textBoxGeneratorOffset");
        sizePolicy1.setHeightForWidth(textBoxGeneratorOffset->sizePolicy().hasHeightForWidth());
        textBoxGeneratorOffset->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textBoxGeneratorOffset, 3, 1, 1, 1);

        labelGeneratorPokemon = new QLabel(tabStatic);
        labelGeneratorPokemon->setObjectName("labelGeneratorPokemon");
        sizePolicy2.setHeightForWidth(labelGeneratorPokemon->sizePolicy().hasHeightForWidth());
        labelGeneratorPokemon->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorPokemon, 6, 0, 1, 1);

        labelGeneratorOffset = new QLabel(tabStatic);
        labelGeneratorOffset->setObjectName("labelGeneratorOffset");
        sizePolicy2.setHeightForWidth(labelGeneratorOffset->sizePolicy().hasHeightForWidth());
        labelGeneratorOffset->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorOffset, 3, 0, 1, 1);

        comboBoxGeneratorPokemon = new ComboBox(tabStatic);
        comboBoxGeneratorPokemon->setObjectName("comboBoxGeneratorPokemon");
        sizePolicy1.setHeightForWidth(comboBoxGeneratorPokemon->sizePolicy().hasHeightForWidth());
        comboBoxGeneratorPokemon->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxGeneratorPokemon, 6, 1, 1, 1);

        labelGeneratorMaxAdvances = new QLabel(tabStatic);
        labelGeneratorMaxAdvances->setObjectName("labelGeneratorMaxAdvances");
        sizePolicy2.setHeightForWidth(labelGeneratorMaxAdvances->sizePolicy().hasHeightForWidth());
        labelGeneratorMaxAdvances->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGeneratorMaxAdvances, 4, 0, 1, 1);

        labelGeneratorSeed = new QLabel(tabStatic);
        labelGeneratorSeed->setObjectName("labelGeneratorSeed");
        sizePolicy2.setHeightForWidth(labelGeneratorSeed->sizePolicy().hasHeightForWidth());
        labelGeneratorSeed->setSizePolicy(sizePolicy2);
        labelGeneratorSeed->setMaximumSize(QSize(25, 22));

        gridLayout->addWidget(labelGeneratorSeed, 1, 0, 1, 1);

        textBoxGeneratorInitialAdvances = new TextBox(tabStatic);
        textBoxGeneratorInitialAdvances->setObjectName("textBoxGeneratorInitialAdvances");
        sizePolicy1.setHeightForWidth(textBoxGeneratorInitialAdvances->sizePolicy().hasHeightForWidth());
        textBoxGeneratorInitialAdvances->setSizePolicy(sizePolicy1);
        textBoxGeneratorInitialAdvances->setText(QString::fromUtf8("0"));

        gridLayout->addWidget(textBoxGeneratorInitialAdvances, 2, 1, 1, 1);

        textBoxGeneratorMaxAdvances = new TextBox(tabStatic);
        textBoxGeneratorMaxAdvances->setObjectName("textBoxGeneratorMaxAdvances");
        sizePolicy1.setHeightForWidth(textBoxGeneratorMaxAdvances->sizePolicy().hasHeightForWidth());
        textBoxGeneratorMaxAdvances->setSizePolicy(sizePolicy1);
        textBoxGeneratorMaxAdvances->setText(QString::fromUtf8("100000"));

        gridLayout->addWidget(textBoxGeneratorMaxAdvances, 4, 1, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::ItemRole::LabelRole, gridLayout);

        tabRNGSelector->addTab(tabStatic, QString());
        tabSpreadSearcher = new QWidget();
        tabSpreadSearcher->setObjectName("tabSpreadSearcher");
        gridLayout_9 = new QGridLayout(tabSpreadSearcher);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        groupBoxSearcherRNGInfo = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherRNGInfo->setObjectName("groupBoxSearcherRNGInfo");
        gridLayout_2 = new QGridLayout(groupBoxSearcherRNGInfo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSearcherMethod = new QLabel(groupBoxSearcherRNGInfo);
        labelSearcherMethod->setObjectName("labelSearcherMethod");

        gridLayout_2->addWidget(labelSearcherMethod, 0, 0, 1, 1);

        comboBoxSearcherMethod = new ComboBox(groupBoxSearcherRNGInfo);
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->addItem(QString());
        comboBoxSearcherMethod->setObjectName("comboBoxSearcherMethod");

        gridLayout_2->addWidget(comboBoxSearcherMethod, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSearch = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(groupBoxSearcherRNGInfo);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setEnabled(false);

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);


        gridLayout_9->addWidget(groupBoxSearcherRNGInfo, 0, 0, 1, 1);

        groupBoxSearcherSettings = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherSettings->setObjectName("groupBoxSearcherSettings");
        gridLayout_10 = new QGridLayout(groupBoxSearcherSettings);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName("gridLayout_10");
        labelSearcherCategory = new QLabel(groupBoxSearcherSettings);
        labelSearcherCategory->setObjectName("labelSearcherCategory");

        gridLayout_10->addWidget(labelSearcherCategory, 0, 0, 1, 1);

        comboBoxSearcherCategory = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->addItem(QString());
        comboBoxSearcherCategory->setObjectName("comboBoxSearcherCategory");

        gridLayout_10->addWidget(comboBoxSearcherCategory, 0, 1, 1, 2);

        labelSearcherPokemon = new QLabel(groupBoxSearcherSettings);
        labelSearcherPokemon->setObjectName("labelSearcherPokemon");

        gridLayout_10->addWidget(labelSearcherPokemon, 1, 0, 1, 1);

        comboBoxSearcherPokemon = new ComboBox(groupBoxSearcherSettings);
        comboBoxSearcherPokemon->setObjectName("comboBoxSearcherPokemon");

        gridLayout_10->addWidget(comboBoxSearcherPokemon, 1, 1, 1, 2);

        line_3 = new QFrame(groupBoxSearcherSettings);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_10->addWidget(line_3, 2, 0, 1, 3);

        labelSearcherLevel = new QLabel(groupBoxSearcherSettings);
        labelSearcherLevel->setObjectName("labelSearcherLevel");

        gridLayout_10->addWidget(labelSearcherLevel, 3, 0, 1, 1);

        spinBoxSearcherLevel = new QSpinBox(groupBoxSearcherSettings);
        spinBoxSearcherLevel->setObjectName("spinBoxSearcherLevel");
        spinBoxSearcherLevel->setEnabled(false);

        gridLayout_10->addWidget(spinBoxSearcherLevel, 3, 1, 1, 2);


        gridLayout_9->addWidget(groupBoxSearcherSettings, 0, 1, 1, 1);

        groupBoxSearcherFilters = new QGroupBox(tabSpreadSearcher);
        groupBoxSearcherFilters->setObjectName("groupBoxSearcherFilters");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxSearcherFilters->sizePolicy().hasHeightForWidth());
        groupBoxSearcherFilters->setSizePolicy(sizePolicy3);
        gridLayout_3 = new QGridLayout(groupBoxSearcherFilters);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        filterSearcher = new Filter(groupBoxSearcherFilters);
        filterSearcher->setObjectName("filterSearcher");

        gridLayout_3->addWidget(filterSearcher, 0, 0, 2, 1);


        gridLayout_9->addWidget(groupBoxSearcherFilters, 0, 2, 1, 1);

        progressBar = new QProgressBar(tabSpreadSearcher);
        progressBar->setObjectName("progressBar");

        gridLayout_9->addWidget(progressBar, 1, 0, 1, 3);

        tableViewSearcher = new TableView(tabSpreadSearcher);
        tableViewSearcher->setObjectName("tableViewSearcher");
        tableViewSearcher->setSortingEnabled(true);

        gridLayout_9->addWidget(tableViewSearcher, 2, 0, 1, 3);

        tabRNGSelector->addTab(tabSpreadSearcher, QString());

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, tabRNGSelector);

        tableViewGenerator = new TableView(scrollAreaWidgetContents_2);
        tableViewGenerator->setObjectName("tableViewGenerator");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableViewGenerator->sizePolicy().hasHeightForWidth());
        tableViewGenerator->setSizePolicy(sizePolicy4);
        tableViewGenerator->setMinimumSize(QSize(0, 300));
        tableViewGenerator->setMaximumSize(QSize(16777215, 16777215));
        tableViewGenerator->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableViewGenerator->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        tableViewGenerator->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        tableViewGenerator->setUpdateThreshold(10);
        tableViewGenerator->verticalHeader()->setMinimumSectionSize(0);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, tableViewGenerator);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_7->addWidget(scrollArea, 0, 1, 1, 2);

        QWidget::setTabOrder(comboBoxSearcherMethod, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, comboBoxSearcherCategory);
        QWidget::setTabOrder(comboBoxSearcherCategory, comboBoxSearcherPokemon);
        QWidget::setTabOrder(comboBoxSearcherPokemon, spinBoxSearcherLevel);
        QWidget::setTabOrder(spinBoxSearcherLevel, tableViewSearcher);

        retranslateUi(Static3);

        tabRNGSelector->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Static3);
    } // setupUi

    void retranslateUi(QWidget *Static3)
    {
        Static3->setWindowTitle(QCoreApplication::translate("Static3", "Gen 3 Static", nullptr));
        groupBoxProfile->setTitle(QCoreApplication::translate("Static3", "Profile", nullptr));
        labelProfile->setText(QCoreApplication::translate("Static3", "Profile", nullptr));
        labelProfileGame->setText(QCoreApplication::translate("Static3", "Game", nullptr));
        labelProfileTID->setText(QCoreApplication::translate("Static3", "TID", nullptr));
        labelProfileSID->setText(QCoreApplication::translate("Static3", "SID", nullptr));
        pushButtonProfileManager->setText(QCoreApplication::translate("Static3", "Manager", nullptr));
        closebutton->setText(QCoreApplication::translate("Static3", "X", nullptr));
        pushButtonGenerate->setText(QCoreApplication::translate("Static3", "Generate", nullptr));
        comboBoxGeneratorCategory->setItemText(0, QCoreApplication::translate("Static3", "Starters", nullptr));
        comboBoxGeneratorCategory->setItemText(1, QCoreApplication::translate("Static3", "Fossils", nullptr));
        comboBoxGeneratorCategory->setItemText(2, QCoreApplication::translate("Static3", "Gifts", nullptr));
        comboBoxGeneratorCategory->setItemText(3, QCoreApplication::translate("Static3", "Game Corner", nullptr));
        comboBoxGeneratorCategory->setItemText(4, QCoreApplication::translate("Static3", "Stationary", nullptr));
        comboBoxGeneratorCategory->setItemText(5, QCoreApplication::translate("Static3", "Legends", nullptr));
        comboBoxGeneratorCategory->setItemText(6, QCoreApplication::translate("Static3", "Events", nullptr));
        comboBoxGeneratorCategory->setItemText(7, QCoreApplication::translate("Static3", "Roamers", nullptr));

        comboBoxGeneratorMethod->setItemText(0, QCoreApplication::translate("Static3", "Method 1", nullptr));
        comboBoxGeneratorMethod->setItemText(1, QCoreApplication::translate("Static3", "Method 4", nullptr));

        labelGeneratorMethod->setText(QCoreApplication::translate("Static3", "Method", nullptr));
        labelGeneratorLevel->setText(QCoreApplication::translate("Static3", "Level", nullptr));
        labelGeneratorCategory->setText(QCoreApplication::translate("Static3", "Category", nullptr));
        labelGeneratorInitialAdvances->setText(QCoreApplication::translate("Static3", "Initial Advances", nullptr));
        labelGeneratorPokemon->setText(QCoreApplication::translate("Static3", "Pokemon", nullptr));
        labelGeneratorOffset->setText(QCoreApplication::translate("Static3", "Offset", nullptr));
        labelGeneratorMaxAdvances->setText(QCoreApplication::translate("Static3", "Max Advances", nullptr));
        labelGeneratorSeed->setText(QCoreApplication::translate("Static3", "Seed", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabStatic), QCoreApplication::translate("Static3", "Generator", nullptr));
        groupBoxSearcherRNGInfo->setTitle(QCoreApplication::translate("Static3", "RNG Info", nullptr));
        labelSearcherMethod->setText(QCoreApplication::translate("Static3", "Method", nullptr));
        comboBoxSearcherMethod->setItemText(0, QCoreApplication::translate("Static3", "Method 1", nullptr));
        comboBoxSearcherMethod->setItemText(1, QCoreApplication::translate("Static3", "Method 4", nullptr));

        pushButtonSearch->setText(QCoreApplication::translate("Static3", "Search", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Static3", "Cancel", nullptr));
        groupBoxSearcherSettings->setTitle(QCoreApplication::translate("Static3", "Settings", nullptr));
        labelSearcherCategory->setText(QCoreApplication::translate("Static3", "Category", nullptr));
        comboBoxSearcherCategory->setItemText(0, QCoreApplication::translate("Static3", "Starters", nullptr));
        comboBoxSearcherCategory->setItemText(1, QCoreApplication::translate("Static3", "Fossils", nullptr));
        comboBoxSearcherCategory->setItemText(2, QCoreApplication::translate("Static3", "Gifts", nullptr));
        comboBoxSearcherCategory->setItemText(3, QCoreApplication::translate("Static3", "Game Corner", nullptr));
        comboBoxSearcherCategory->setItemText(4, QCoreApplication::translate("Static3", "Stationary", nullptr));
        comboBoxSearcherCategory->setItemText(5, QCoreApplication::translate("Static3", "Legends", nullptr));
        comboBoxSearcherCategory->setItemText(6, QCoreApplication::translate("Static3", "Events", nullptr));
        comboBoxSearcherCategory->setItemText(7, QCoreApplication::translate("Static3", "Roamers", nullptr));

        labelSearcherPokemon->setText(QCoreApplication::translate("Static3", "Pokemon", nullptr));
        labelSearcherLevel->setText(QCoreApplication::translate("Static3", "Level", nullptr));
        groupBoxSearcherFilters->setTitle(QCoreApplication::translate("Static3", "Filters", nullptr));
        tabRNGSelector->setTabText(tabRNGSelector->indexOf(tabSpreadSearcher), QCoreApplication::translate("Static3", "Searcher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Static3: public Ui_Static3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIC3_H
