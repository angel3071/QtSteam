/********************************************************************************
** Form generated from reading UI file 'qtsteammainwindow.ui'
**
** Created: Wed Jan 4 01:53:21 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSTEAMMAINWINDOW_H
#define UI_QTSTEAMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSteamMainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExit;
    QAction *actionClear;
    QAction *actionClear_All;
    QAction *actionNew_Row;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *substancesGroupBox;
    QHBoxLayout *horizontalLayout;
    QToolBox *substancesToolBox;
    QWidget *waterPag;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *waterSiButton;
    QRadioButton *waterEUButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *waterHcomboBox;
    QComboBox *waterTcomboBox;
    QLabel *label_2;
    QComboBox *waterPcomboBox;
    QLabel *label_5;
    QComboBox *waterScomboBox;
    QLabel *label_3;
    QComboBox *waterUcomboBox;
    QLabel *label;
    QLabel *label_6;
    QComboBox *waterVcomboBox;
    QWidget *r134aPag;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *anotherPag;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *actualCell;
    QLineEdit *actualCellContent;
    QTabWidget *sheetTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *principalSheet;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *commandLine;
    QPushButton *calculateButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QtSteamMainWindow)
    {
        if (QtSteamMainWindow->objectName().isEmpty())
            QtSteamMainWindow->setObjectName(QString::fromUtf8("QtSteamMainWindow"));
        QtSteamMainWindow->resize(950, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Bullet Bill.png"), QSize(), QIcon::Normal, QIcon::Off);
        QtSteamMainWindow->setWindowIcon(icon);
        actionNew = new QAction(QtSteamMainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionSave = new QAction(QtSteamMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionOpen = new QAction(QtSteamMainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        actionUndo = new QAction(QtSteamMainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/edit-undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(QtSteamMainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/edit-redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionExit = new QAction(QtSteamMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/window-close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        actionClear = new QAction(QtSteamMainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/edit-clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon7);
        actionClear_All = new QAction(QtSteamMainWindow);
        actionClear_All->setObjectName(QString::fromUtf8("actionClear_All"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_All->setIcon(icon8);
        actionNew_Row = new QAction(QtSteamMainWindow);
        actionNew_Row->setObjectName(QString::fromUtf8("actionNew_Row"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Row->setIcon(icon9);
        centralwidget = new QWidget(QtSteamMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        substancesGroupBox = new QGroupBox(centralwidget);
        substancesGroupBox->setObjectName(QString::fromUtf8("substancesGroupBox"));
        substancesGroupBox->setMinimumSize(QSize(151, 0));
        substancesGroupBox->setMaximumSize(QSize(151, 16777215));
        horizontalLayout = new QHBoxLayout(substancesGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        substancesToolBox = new QToolBox(substancesGroupBox);
        substancesToolBox->setObjectName(QString::fromUtf8("substancesToolBox"));
        waterPag = new QWidget();
        waterPag->setObjectName(QString::fromUtf8("waterPag"));
        waterPag->setGeometry(QRect(0, 0, 127, 443));
        verticalLayout_4 = new QVBoxLayout(waterPag);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        waterSiButton = new QRadioButton(waterPag);
        waterSiButton->setObjectName(QString::fromUtf8("waterSiButton"));
        waterSiButton->setChecked(true);

        verticalLayout_2->addWidget(waterSiButton);

        waterEUButton = new QRadioButton(waterPag);
        waterEUButton->setObjectName(QString::fromUtf8("waterEUButton"));

        verticalLayout_2->addWidget(waterEUButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(waterPag);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        waterHcomboBox = new QComboBox(waterPag);
        waterHcomboBox->setObjectName(QString::fromUtf8("waterHcomboBox"));

        gridLayout->addWidget(waterHcomboBox, 3, 1, 1, 1);

        waterTcomboBox = new QComboBox(waterPag);
        waterTcomboBox->setObjectName(QString::fromUtf8("waterTcomboBox"));

        gridLayout->addWidget(waterTcomboBox, 0, 1, 1, 1);

        label_2 = new QLabel(waterPag);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        waterPcomboBox = new QComboBox(waterPag);
        waterPcomboBox->setObjectName(QString::fromUtf8("waterPcomboBox"));

        gridLayout->addWidget(waterPcomboBox, 1, 1, 1, 1);

        label_5 = new QLabel(waterPag);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        waterScomboBox = new QComboBox(waterPag);
        waterScomboBox->setObjectName(QString::fromUtf8("waterScomboBox"));

        gridLayout->addWidget(waterScomboBox, 4, 1, 1, 1);

        label_3 = new QLabel(waterPag);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        waterUcomboBox = new QComboBox(waterPag);
        waterUcomboBox->setObjectName(QString::fromUtf8("waterUcomboBox"));

        gridLayout->addWidget(waterUcomboBox, 2, 1, 1, 1);

        label = new QLabel(waterPag);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(waterPag);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        waterVcomboBox = new QComboBox(waterPag);
        waterVcomboBox->setObjectName(QString::fromUtf8("waterVcomboBox"));

        gridLayout->addWidget(waterVcomboBox, 5, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        substancesToolBox->addItem(waterPag, QString::fromUtf8("Water"));
        r134aPag = new QWidget();
        r134aPag->setObjectName(QString::fromUtf8("r134aPag"));
        r134aPag->setGeometry(QRect(0, 0, 127, 443));
        verticalLayout_6 = new QVBoxLayout(r134aPag);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 371, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        substancesToolBox->addItem(r134aPag, QString::fromUtf8("R134a"));
        anotherPag = new QWidget();
        anotherPag->setObjectName(QString::fromUtf8("anotherPag"));
        anotherPag->setGeometry(QRect(0, 0, 127, 443));
        verticalLayout_5 = new QVBoxLayout(anotherPag);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 371, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        substancesToolBox->addItem(anotherPag, QString::fromUtf8("Another"));

        horizontalLayout->addWidget(substancesToolBox);


        horizontalLayout_4->addWidget(substancesGroupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        actualCell = new QLabel(centralwidget);
        actualCell->setObjectName(QString::fromUtf8("actualCell"));
        actualCell->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(actualCell);

        actualCellContent = new QLineEdit(centralwidget);
        actualCellContent->setObjectName(QString::fromUtf8("actualCellContent"));

        horizontalLayout_3->addWidget(actualCellContent);


        verticalLayout->addLayout(horizontalLayout_3);

        sheetTabWidget = new QTabWidget(centralwidget);
        sheetTabWidget->setObjectName(QString::fromUtf8("sheetTabWidget"));
        sheetTabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        principalSheet = new QTableWidget(tab);
        principalSheet->setObjectName(QString::fromUtf8("principalSheet"));
        principalSheet->setSortingEnabled(false);
        principalSheet->setWordWrap(true);
        principalSheet->setCornerButtonEnabled(true);

        verticalLayout_7->addWidget(principalSheet);

        sheetTabWidget->addTab(tab, QString());

        verticalLayout->addWidget(sheetTabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        commandLine = new QLineEdit(centralwidget);
        commandLine->setObjectName(QString::fromUtf8("commandLine"));

        horizontalLayout_2->addWidget(commandLine);

        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        calculateButton->setIcon(icon10);

        horizontalLayout_2->addWidget(calculateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        QtSteamMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QtSteamMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 21));
        menubar->setNativeMenuBar(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        QtSteamMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QtSteamMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QtSteamMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QtSteamMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBar->setFloatable(true);
        QtSteamMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionNew_Row);
        toolBar->addAction(actionClear);
        toolBar->addAction(actionClear_All);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(QtSteamMainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), QtSteamMainWindow, SLOT(close()));

        substancesToolBox->setCurrentIndex(0);
        sheetTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QtSteamMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QtSteamMainWindow)
    {
        QtSteamMainWindow->setWindowTitle(QApplication::translate("QtSteamMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("QtSteamMainWindow", "New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("QtSteamMainWindow", "To open a new sheet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("QtSteamMainWindow", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("QtSteamMainWindow", "To save the actual sheet in a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("QtSteamMainWindow", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("QtSteamMainWindow", "Open a saved sheet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("QtSteamMainWindow", "Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("QtSteamMainWindow", "Undo an action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("QtSteamMainWindow", "Redo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("QtSteamMainWindow", "Redo an action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("QtSteamMainWindow", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("QtSteamMainWindow", "Exit from the application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("QtSteamMainWindow", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("QtSteamMainWindow", "Clear the selected box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClear->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionClear_All->setText(QApplication::translate("QtSteamMainWindow", "Clear All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClear_All->setToolTip(QApplication::translate("QtSteamMainWindow", "Clear the selected row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClear_All->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionNew_Row->setText(QApplication::translate("QtSteamMainWindow", "New Row", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew_Row->setToolTip(QApplication::translate("QtSteamMainWindow", "Insert a new row at the end of the table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNew_Row->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+Shift+N", 0, QApplication::UnicodeUTF8));
        substancesGroupBox->setTitle(QApplication::translate("QtSteamMainWindow", "Substance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        substancesToolBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        waterSiButton->setText(QApplication::translate("QtSteamMainWindow", "SI Units", 0, QApplication::UnicodeUTF8));
        waterEUButton->setText(QApplication::translate("QtSteamMainWindow", "English Units", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QtSteamMainWindow", "h", 0, QApplication::UnicodeUTF8));
        waterHcomboBox->clear();
        waterHcomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "kJ / kg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "cal / g", 0, QApplication::UnicodeUTF8)
        );
        waterTcomboBox->clear();
        waterTcomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "\302\272C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "K", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("QtSteamMainWindow", "P", 0, QApplication::UnicodeUTF8));
        waterPcomboBox->clear();
        waterPcomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "Pa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "kPa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "MPa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "Bar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "Atm", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("QtSteamMainWindow", "s", 0, QApplication::UnicodeUTF8));
        waterScomboBox->clear();
        waterScomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "kJ / kgK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "cal / g\302\272C", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("QtSteamMainWindow", "u", 0, QApplication::UnicodeUTF8));
        waterUcomboBox->clear();
        waterUcomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "kJ / kg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "cal / g", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("QtSteamMainWindow", "T", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QtSteamMainWindow", "v", 0, QApplication::UnicodeUTF8));
        waterVcomboBox->clear();
        waterVcomboBox->insertItems(0, QStringList()
         << QApplication::translate("QtSteamMainWindow", "v: m\302\263 / kg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QtSteamMainWindow", "\317\201: kg / m\302\263", 0, QApplication::UnicodeUTF8)
        );
        substancesToolBox->setItemText(substancesToolBox->indexOf(waterPag), QApplication::translate("QtSteamMainWindow", "Water", 0, QApplication::UnicodeUTF8));
        substancesToolBox->setItemToolTip(substancesToolBox->indexOf(waterPag), QApplication::translate("QtSteamMainWindow", "Steam Water", 0, QApplication::UnicodeUTF8));
        substancesToolBox->setItemText(substancesToolBox->indexOf(r134aPag), QApplication::translate("QtSteamMainWindow", "R134a", 0, QApplication::UnicodeUTF8));
        substancesToolBox->setItemToolTip(substancesToolBox->indexOf(r134aPag), QApplication::translate("QtSteamMainWindow", "Under construccion", 0, QApplication::UnicodeUTF8));
        substancesToolBox->setItemText(substancesToolBox->indexOf(anotherPag), QApplication::translate("QtSteamMainWindow", "Another", 0, QApplication::UnicodeUTF8));
        substancesToolBox->setItemToolTip(substancesToolBox->indexOf(anotherPag), QApplication::translate("QtSteamMainWindow", "In plans...", 0, QApplication::UnicodeUTF8));
        actualCell->setText(QString());
        sheetTabWidget->setTabText(sheetTabWidget->indexOf(tab), QApplication::translate("QtSteamMainWindow", "No saved...", 0, QApplication::UnicodeUTF8));
        commandLine->setPlaceholderText(QApplication::translate("QtSteamMainWindow", "Command Line", 0, QApplication::UnicodeUTF8));
        calculateButton->setText(QApplication::translate("QtSteamMainWindow", "Calculate", 0, QApplication::UnicodeUTF8));
        calculateButton->setShortcut(QApplication::translate("QtSteamMainWindow", "Ctrl+Return", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("QtSteamMainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("QtSteamMainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("QtSteamMainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtSteamMainWindow: public Ui_QtSteamMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSTEAMMAINWINDOW_H
