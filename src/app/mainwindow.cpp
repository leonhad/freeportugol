#include "mainwindow.h"
#include "portugolfile.h"
#include "ui_mainwindow.h"
#include "constants.h"
#include <cstdlib>
#include <QMdiSubWindow>
#include <QFileDialog>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);

    connect(actionExit, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(actionNew, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(actionSave, SIGNAL(triggered()), this, SLOT(saveFile()));
    connect(actionSaveAs, SIGNAL(triggered()), this, SLOT(saveFileAs()));
    connect(actionOpen, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(actionClose, SIGNAL(triggered()), this, SLOT(closeWindow()));
    connect(actionCloseAll, SIGNAL(triggered()), this, SLOT(closeAllWindows()));

    connect(actionCut, SIGNAL(triggered()), this, SLOT(cut()));
    connect(actionCopy, SIGNAL(triggered()), this, SLOT(copy()));
    connect(actionPaste, SIGNAL(triggered()), this, SLOT(paste()));

    readSettings();
}

MainWindow::~MainWindow()
{
}

void MainWindow::readSettings()
{
    QSettings settings("LEDTI", PROGRAM_NAME);
    QPoint pos = settings.value("pos", QPoint(200, 200)).toPoint();
    QSize size = settings.value("size", QSize(400, 400)).toSize();
    move(pos);
    resize(size);
}

void MainWindow::writeSettings()
{
    QSettings settings("LEDTI", PROGRAM_NAME);
    settings.setValue("pos", pos());
    settings.setValue("size", size());
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    mdiArea->closeAllSubWindows();
    if (activeChild()) {
        event->ignore();
    } else {
        writeSettings();
        event->accept();
    }
}

void MainWindow::newFile()
{
    PortugolFile *child = new PortugolFile();
    mdiArea->addSubWindow(child);

    highlighter = new Highlighter(child->document());
    child->newFile();
    child->show();
}

void MainWindow::saveFile()
{
    PortugolFile *activeWindow = activeChild();
    if (activeWindow && activeWindow->save()) {
        QMainWindow::statusBar()->showMessage(tr("File saved"), 2000);
    }
}

void MainWindow::saveFileAs()
{
    PortugolFile *activeWindow = activeChild();
    if (activeWindow && activeWindow->saveAs()) {
        QMainWindow::statusBar()->showMessage(tr("File saved"), 2000);
    }
}

void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, QString(), QString(), tr("Portugol File (*.pr)"));
    if (!fileName.isEmpty()) {
        QMdiSubWindow *existing = findChild(fileName);
        if (existing) {
            mdiArea->setActiveSubWindow(existing);
            return;
        }

        PortugolFile *child = new PortugolFile();
        mdiArea->addSubWindow(child);
        if (child->loadFile(fileName)) {
            QMainWindow::statusBar()->showMessage(tr("File loaded"), 2000);
            child->show();
        } else {
            child->close();
        }
    }
}

void MainWindow::cut()
{
    if (activeChild()) {
        activeChild()->cut();
    }
}

 void MainWindow::copy()
 {
     if (activeChild()) {
         activeChild()->copy();
     }
 }

 void MainWindow::paste()
 {
     if (activeChild()) {
         activeChild()->paste();
     }
 }

 void MainWindow::closeWindow()
 {
     if (QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow()) {
         activeSubWindow->close();
     }
 }

 void MainWindow::closeAllWindows()
 {
     foreach (QMdiSubWindow *window, mdiArea->subWindowList()) {
        window->close();
    }
 }

PortugolFile *MainWindow::activeChild()
{
    if (QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow())
        return qobject_cast<PortugolFile *>(activeSubWindow->widget());
    return NULL;
}

QMdiSubWindow *MainWindow::findChild(const QString &fileName)
{
    QString canonicalFilePath = QFileInfo(fileName).canonicalFilePath();

    foreach (QMdiSubWindow *window, mdiArea->subWindowList()) {
        register PortugolFile *mdiChild = qobject_cast<PortugolFile *>(window->widget());
        if (mdiChild->currentFile() == canonicalFilePath)
            return window;
    }
    return 0;
}
