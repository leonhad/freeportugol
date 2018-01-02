#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMdiSubWindow>
#include <QMainWindow>
#include <QCloseEvent>
#include "ui_mainwindow.h"
#include "highlighter.h"

// Cache definitions
class PortugolFile;

/**
 * Classe responsável pela janela principal do sistema
 */
class MainWindow : public QMainWindow, private Ui::MainWindowClass
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

private slots:
    void newFile();
    void saveFile();
    void saveFileAs();
    void openFile();
    void closeWindow();
    void closeAllWindows();

    void cut();
    void copy();
    void paste();

protected:
    void closeEvent(QCloseEvent *event);

private:
    PortugolFile *activeChild();
    QMdiSubWindow *findChild(const QString &fileName);
    void readSettings();
    void writeSettings();

    Highlighter *highlighter;
};

#endif // MAINWINDOW_H
