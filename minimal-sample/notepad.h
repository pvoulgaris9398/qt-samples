#ifndef _NOTEPAD_H
#define _NOTEPAD_H

#include <QMainWindow>
#include <QTextEdit>
#include <QAction>
#include <QMenu>

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void open();
    void save();
    void quit();

private:
    QTextEdit *textEdit;

    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;

    QMenu *fileMenu;
};

#endif // _NOTEPAD_H
