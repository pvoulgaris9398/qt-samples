#include <QApplication>
#include <QTextEdit>
#include <QPushButton>
#include <QObject>
#include <QVBoxLayout>
#include "notepad.h"
#include <QtGui>

int main(int argv, char **args)
{
    QApplication app(argv, args);

    Notepad window;
    window.show();
    return app.exec();
}
