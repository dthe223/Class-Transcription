/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionCopy;
    QAction *actionSelect_All;
    QAction *actionFind;
    QAction *actionPreferences;
    QAction *actionAdd_Classes;
    QAction *actionEdit_Classes;
    QAction *actionAbout;
    QAction *actionDocumentation;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *mainTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QComboBox *classComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *startPauseBtn;
    QPushButton *stopBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *micBtn;
    QWidget *logTab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pathLabel;
    QPushButton *browsePathBtn;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuMy_Classes;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(712, 370);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionAdd_Classes = new QAction(MainWindow);
        actionAdd_Classes->setObjectName(QStringLiteral("actionAdd_Classes"));
        actionEdit_Classes = new QAction(MainWindow);
        actionEdit_Classes->setObjectName(QStringLiteral("actionEdit_Classes"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QStringLiteral("actionDocumentation"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 711, 321));
        mainTab = new QWidget();
        mainTab->setObjectName(QStringLiteral("mainTab"));
        verticalLayoutWidget = new QWidget(mainTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 701, 281));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 697, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        classComboBox = new QComboBox(verticalLayoutWidget);
        classComboBox->setObjectName(QStringLiteral("classComboBox"));

        horizontalLayout->addWidget(classComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startPauseBtn = new QPushButton(verticalLayoutWidget);
        startPauseBtn->setObjectName(QStringLiteral("startPauseBtn"));
        startPauseBtn->setStyleSheet(QLatin1String(".QPushButton {\n"
"	box-sizing: border-box;\n"
"	display:block;\n"
"	width:20px;\n"
"	height:20px;\n"
"	padding-top: 14px;\n"
"	padding-left: 8px;\n"
"	line-height: 20px;\n"
"	border: 2px solid #fff;\n"
"	border-radius:16%;\n"
"	color:#4caf50;\n"
"	text-align:center;\n"
"	text-decoration:none;\n"
"	background-color: #4caf50;\n"
"	font-size:10px;\n"
"	font-weight:bold;\n"
"	transition: all 0.3s ease;\n"
"}\n"
".QPushButton:hover {\n"
"	background-color: #1b5e20;\n"
"	box-shadow: 0px 0px 10px rgba(255,255,100,1);\n"
"	text-shadow: 0px 0px 10px rgba(255,255,100,1);\n"
"}"));

        horizontalLayout->addWidget(startPauseBtn);

        stopBtn = new QPushButton(verticalLayoutWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));
        stopBtn->setStyleSheet(QLatin1String(".QPushButton {\n"
"	box-sizing: border-box;\n"
"	display:block;\n"
"	width:20px;\n"
"	height:20px;\n"
"	padding-top: 14px;\n"
"	padding-left: 8px;\n"
"	line-height: 20px;\n"
"	border: 2px solid #fff;\n"
"	border-radius:16%;\n"
"	color:#4caf50;\n"
"	text-align:center;\n"
"	text-decoration:none;\n"
"	background-color: #e53935;\n"
"	font-size:10px;\n"
"	font-weight:bold;\n"
"	transition: all 0.3s ease;\n"
"}\n"
".QPushButton:hover {\n"
"	background-color: #b71c1c;\n"
"	box-shadow: 0px 0px 10px rgba(255,255,100,1);\n"
"	text-shadow: 0px 0px 10px rgba(255,255,100,1);\n"
"}"));

        horizontalLayout->addWidget(stopBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        micBtn = new QPushButton(verticalLayoutWidget);
        micBtn->setObjectName(QStringLiteral("micBtn"));

        horizontalLayout->addWidget(micBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(mainTab, QString());
        logTab = new QWidget();
        logTab->setObjectName(QStringLiteral("logTab"));
        verticalLayoutWidget_2 = new QWidget(logTab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 701, 281));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(verticalLayoutWidget_2);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 697, 244));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pathLabel = new QLabel(verticalLayoutWidget_2);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));

        horizontalLayout_2->addWidget(pathLabel);

        browsePathBtn = new QPushButton(verticalLayoutWidget_2);
        browsePathBtn->setObjectName(QStringLiteral("browsePathBtn"));

        horizontalLayout_2->addWidget(browsePathBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget->addTab(logTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuMy_Classes = new QMenu(menuBar);
        menuMy_Classes->setObjectName(QStringLiteral("menuMy_Classes"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuMy_Classes->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionFind);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuMy_Classes->addSeparator();
        menuMy_Classes->addAction(actionAdd_Classes);
        menuMy_Classes->addAction(actionEdit_Classes);
        menuMy_Classes->addSeparator();
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionDocumentation);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", Q_NULLPTR));
        actionFind->setText(QApplication::translate("MainWindow", "Find", Q_NULLPTR));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", Q_NULLPTR));
        actionAdd_Classes->setText(QApplication::translate("MainWindow", "Add Classes", Q_NULLPTR));
        actionEdit_Classes->setText(QApplication::translate("MainWindow", "Edit Classes", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionDocumentation->setText(QApplication::translate("MainWindow", "Documentation", Q_NULLPTR));
        startPauseBtn->setText(QString());
        stopBtn->setText(QString());
        micBtn->setText(QApplication::translate("MainWindow", "Microphone", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mainTab), QApplication::translate("MainWindow", "Main", Q_NULLPTR));
        pathLabel->setText(QApplication::translate("MainWindow", "path/to/save/file.txt", Q_NULLPTR));
        browsePathBtn->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(logTab), QApplication::translate("MainWindow", "Log", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuMy_Classes->setTitle(QApplication::translate("MainWindow", "My Classes", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
