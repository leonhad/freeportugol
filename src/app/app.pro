TARGET = PortugolIDE
TEMPLATE = app
DESTDIR = ../../bin

SOURCES += main.cpp \
    mainwindow.cpp \
    portugolfile.cpp \
    highlighter.cpp

HEADERS += mainwindow.h \
    portugolfile.h \
    constants.h \
    highlighter.h

FORMS += mainwindow.ui

TRANSLATIONS = PortugolIDE_pt.ts \
    PortugolIDE_pt_BR.ts \
    PortugolIDE_en.ts

RESOURCES += PortugolIDE.qrc
win32 {
RC_FILE = PortugolIDE.rc
}
macx {
ICON = PortugolIDE.icns
}
