#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(PortugolIDE);

    QApplication app(argc, argv);

    QString locale = QLocale::system().name();

//    QTranslator qtTranslator;
//    qtTranslator.load("qt_" + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
//    app.installTranslator(&qtTranslator);

    QTranslator translator;
    translator.load("PortugolIDE_" + locale);
    app.installTranslator(&translator);

    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
