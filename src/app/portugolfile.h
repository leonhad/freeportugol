#ifndef PORTUGOLFILE_H
#define PORTUGOLFILE_H

#include <QTextEdit>

class PortugolFile : public QTextEdit
{
    Q_OBJECT

public:
    PortugolFile();

    void newFile();
    bool loadFile(const QString &fileName);
    bool save();
    bool saveAs();
    bool saveFile(const QString &fileName);
    QString userFriendlyCurrentFile();
    QString currentFile() { return curFile; }

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void documentWasModified();

private:
    bool maybeSave();
    void setCurrentFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);

    QString curFile;
    bool isUntitled;
};

#endif // PORTUGOLFILE_H
