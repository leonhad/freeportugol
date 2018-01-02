/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Fri 5. Jun 17:52:57 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionSaveAll;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionCompile;
    QAction *actionRun;
    QAction *actionStartDebugging;
    QAction *actionStopDebugger;
    QAction *actionStepOver;
    QAction *actionStepInto;
    QAction *actionStepOut;
    QAction *actionToggleBreakpoint;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelectAll;
    QAction *actionTileHorizontal;
    QAction *actionCascade;
    QAction *actionTile_Vertical;
    QAction *actionNext;
    QAction *actionPrevious;
    QAction *actionOptions;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuBuild;
    QMenu *menuDebug;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(728, 605);
        MainWindowClass->setMinimumSize(QSize(300, 0));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/images/PortugolIDE.png")), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        actionNew = new QAction(MainWindowClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/images/file.png")), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/images/Folder.png")), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8(":/images/disk.png")), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSaveAs = new QAction(MainWindowClass);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionSaveAs->setIcon(icon3);
        actionSaveAll = new QAction(MainWindowClass);
        actionSaveAll->setObjectName(QString::fromUtf8("actionSaveAll"));
        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8(":/images/disk_multiple.png")), QIcon::Normal, QIcon::Off);
        actionSaveAll->setIcon(icon4);
        actionClose = new QAction(MainWindowClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon5;
        icon5.addPixmap(QPixmap(QString::fromUtf8(":/images/close_window.png")), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionCloseAll = new QAction(MainWindowClass);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        QIcon icon6;
        icon6.addPixmap(QPixmap(QString::fromUtf8(":/images/close_all_windows.png")), QIcon::Normal, QIcon::Off);
        actionCloseAll->setIcon(icon6);
        actionPrint = new QAction(MainWindowClass);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon7;
        icon7.addPixmap(QPixmap(QString::fromUtf8(":/images/printer.png")), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon7);
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon8;
        icon8.addPixmap(QPixmap(QString::fromUtf8(":/images/door_in.png")), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon8);
        actionAbout = new QAction(MainWindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon9;
        icon9.addPixmap(QPixmap(QString::fromUtf8(":/images/help.png")), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon9);
        actionCompile = new QAction(MainWindowClass);
        actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
        QIcon icon10;
        icon10.addPixmap(QPixmap(QString::fromUtf8(":/images/cog.png")), QIcon::Normal, QIcon::Off);
        actionCompile->setIcon(icon10);
        actionRun = new QAction(MainWindowClass);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon11;
        icon11.addPixmap(QPixmap(QString::fromUtf8(":/images/resultset_next.png")), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon11);
        actionStartDebugging = new QAction(MainWindowClass);
        actionStartDebugging->setObjectName(QString::fromUtf8("actionStartDebugging"));
        QIcon icon12;
        icon12.addPixmap(QPixmap(QString::fromUtf8(":/images/bug.png")), QIcon::Normal, QIcon::Off);
        actionStartDebugging->setIcon(icon12);
        actionStopDebugger = new QAction(MainWindowClass);
        actionStopDebugger->setObjectName(QString::fromUtf8("actionStopDebugger"));
        QIcon icon13;
        icon13.addPixmap(QPixmap(QString::fromUtf8(":/images/stop.png")), QIcon::Normal, QIcon::Off);
        actionStopDebugger->setIcon(icon13);
        actionStepOver = new QAction(MainWindowClass);
        actionStepOver->setObjectName(QString::fromUtf8("actionStepOver"));
        QIcon icon14;
        icon14.addPixmap(QPixmap(QString::fromUtf8(":/images/step_over.png")), QIcon::Normal, QIcon::Off);
        actionStepOver->setIcon(icon14);
        actionStepInto = new QAction(MainWindowClass);
        actionStepInto->setObjectName(QString::fromUtf8("actionStepInto"));
        QIcon icon15;
        icon15.addPixmap(QPixmap(QString::fromUtf8(":/images/step_in.png")), QIcon::Normal, QIcon::Off);
        actionStepInto->setIcon(icon15);
        actionStepOut = new QAction(MainWindowClass);
        actionStepOut->setObjectName(QString::fromUtf8("actionStepOut"));
        QIcon icon16;
        icon16.addPixmap(QPixmap(QString::fromUtf8(":/images/step_out.png")), QIcon::Normal, QIcon::Off);
        actionStepOut->setIcon(icon16);
        actionToggleBreakpoint = new QAction(MainWindowClass);
        actionToggleBreakpoint->setObjectName(QString::fromUtf8("actionToggleBreakpoint"));
        QIcon icon17;
        icon17.addPixmap(QPixmap(QString::fromUtf8(":/images/tag_blue.png")), QIcon::Normal, QIcon::Off);
        actionToggleBreakpoint->setIcon(icon17);
        actionUndo = new QAction(MainWindowClass);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon18;
        icon18.addPixmap(QPixmap(QString::fromUtf8(":/images/undo.png")), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon18);
        actionRedo = new QAction(MainWindowClass);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon19;
        icon19.addPixmap(QPixmap(QString::fromUtf8(":/images/redo.png")), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon19);
        actionCut = new QAction(MainWindowClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon20;
        icon20.addPixmap(QPixmap(QString::fromUtf8(":/images/cut.png")), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon20);
        actionCopy = new QAction(MainWindowClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon21;
        icon21.addPixmap(QPixmap(QString::fromUtf8(":/images/page_copy.png")), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon21);
        actionPaste = new QAction(MainWindowClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon22;
        icon22.addPixmap(QPixmap(QString::fromUtf8(":/images/page_paste.png")), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon22);
        actionDelete = new QAction(MainWindowClass);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelectAll = new QAction(MainWindowClass);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        actionTileHorizontal = new QAction(MainWindowClass);
        actionTileHorizontal->setObjectName(QString::fromUtf8("actionTileHorizontal"));
        QIcon icon23;
        icon23.addPixmap(QPixmap(QString::fromUtf8(":/images/application_tile_horizontal.png")), QIcon::Normal, QIcon::Off);
        actionTileHorizontal->setIcon(icon23);
        actionCascade = new QAction(MainWindowClass);
        actionCascade->setObjectName(QString::fromUtf8("actionCascade"));
        QIcon icon24;
        icon24.addPixmap(QPixmap(QString::fromUtf8(":/images/application_cascade.png")), QIcon::Normal, QIcon::Off);
        actionCascade->setIcon(icon24);
        actionTile_Vertical = new QAction(MainWindowClass);
        actionTile_Vertical->setObjectName(QString::fromUtf8("actionTile_Vertical"));
        QIcon icon25;
        icon25.addPixmap(QPixmap(QString::fromUtf8(":/images/application_tile_vertical.png")), QIcon::Normal, QIcon::Off);
        actionTile_Vertical->setIcon(icon25);
        actionNext = new QAction(MainWindowClass);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        actionPrevious = new QAction(MainWindowClass);
        actionPrevious->setObjectName(QString::fromUtf8("actionPrevious"));
        actionOptions = new QAction(MainWindowClass);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon26;
        icon26.addPixmap(QPixmap(QString::fromUtf8(":/images/options.png")), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon26);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveAll);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionCloseAll);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAll);
        menuBuild->addAction(actionCompile);
        menuBuild->addSeparator();
        menuBuild->addAction(actionRun);
        menuDebug->addAction(actionStartDebugging);
        menuDebug->addAction(actionStopDebugger);
        menuDebug->addSeparator();
        menuDebug->addAction(actionStepOver);
        menuDebug->addAction(actionStepInto);
        menuDebug->addAction(actionStepOut);
        menuDebug->addSeparator();
        menuDebug->addAction(actionToggleBreakpoint);
        menuTools->addAction(actionOptions);
        menuWindow->addAction(actionCascade);
        menuWindow->addAction(actionTileHorizontal);
        menuWindow->addAction(actionTile_Vertical);
        menuWindow->addSeparator();
        menuWindow->addAction(actionNext);
        menuWindow->addAction(actionPrevious);
        menu_Help->addAction(actionAbout);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "PortugolIDE", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindowClass", "&New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindowClass", "Create a new file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindowClass", "&Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindowClass", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("MainWindowClass", "Save &as...", 0, QApplication::UnicodeUTF8));
        actionSaveAll->setText(QApplication::translate("MainWindowClass", "Save &All", 0, QApplication::UnicodeUTF8));
        actionSaveAll->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindowClass", "&Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionCloseAll->setText(QApplication::translate("MainWindowClass", "Close A&ll", 0, QApplication::UnicodeUTF8));
        actionCloseAll->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Shift+W", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("MainWindowClass", "&Print...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindowClass", "Print the current document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrint->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindowClass", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowClass", "&About...", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("MainWindowClass", "F1", 0, QApplication::UnicodeUTF8));
        actionCompile->setText(QApplication::translate("MainWindowClass", "&Compile", 0, QApplication::UnicodeUTF8));
        actionCompile->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionRun->setText(QApplication::translate("MainWindowClass", "&Run", 0, QApplication::UnicodeUTF8));
        actionRun->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionStartDebugging->setText(QApplication::translate("MainWindowClass", "&Start Debugging", 0, QApplication::UnicodeUTF8));
        actionStartDebugging->setShortcut(QApplication::translate("MainWindowClass", "F5", 0, QApplication::UnicodeUTF8));
        actionStopDebugger->setText(QApplication::translate("MainWindowClass", "S&top Debugger", 0, QApplication::UnicodeUTF8));
        actionStopDebugger->setShortcut(QApplication::translate("MainWindowClass", "Shift+F5", 0, QApplication::UnicodeUTF8));
        actionStepOver->setText(QApplication::translate("MainWindowClass", "Step &Over", 0, QApplication::UnicodeUTF8));
        actionStepOver->setShortcut(QApplication::translate("MainWindowClass", "F8", 0, QApplication::UnicodeUTF8));
        actionStepInto->setText(QApplication::translate("MainWindowClass", "Step &Into", 0, QApplication::UnicodeUTF8));
        actionStepInto->setShortcut(QApplication::translate("MainWindowClass", "F7", 0, QApplication::UnicodeUTF8));
        actionStepOut->setText(QApplication::translate("MainWindowClass", "Step O&ut", 0, QApplication::UnicodeUTF8));
        actionStepOut->setShortcut(QApplication::translate("MainWindowClass", "F6", 0, QApplication::UnicodeUTF8));
        actionToggleBreakpoint->setText(QApplication::translate("MainWindowClass", "Toggle &Breakpoint", 0, QApplication::UnicodeUTF8));
        actionToggleBreakpoint->setShortcut(QApplication::translate("MainWindowClass", "F9", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindowClass", "&Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindowClass", "&Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindowClass", "&Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindowClass", "C&opy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindowClass", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindowClass", "&Delete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("MainWindowClass", "Del", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setText(QApplication::translate("MainWindowClass", "&Select All", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionTileHorizontal->setText(QApplication::translate("MainWindowClass", "Tile &Horizontal", 0, QApplication::UnicodeUTF8));
        actionCascade->setText(QApplication::translate("MainWindowClass", "&Cascade", 0, QApplication::UnicodeUTF8));
        actionTile_Vertical->setText(QApplication::translate("MainWindowClass", "Tile &Vertical", 0, QApplication::UnicodeUTF8));
        actionNext->setText(QApplication::translate("MainWindowClass", "&Next", 0, QApplication::UnicodeUTF8));
        actionPrevious->setText(QApplication::translate("MainWindowClass", "&Previous", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindowClass", "&Options", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindowClass", "&Edit", 0, QApplication::UnicodeUTF8));
        menuBuild->setTitle(QApplication::translate("MainWindowClass", "&Build", 0, QApplication::UnicodeUTF8));
        menuDebug->setTitle(QApplication::translate("MainWindowClass", "&Debug", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindowClass", "&Tools", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("MainWindowClass", "&Window", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindowClass", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
