#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

class QPushButton;
class QTextBrowser;
class QLabel;
class QTextEdit;

// This is the declaration of our MainWidget class
// The definition/implementation is in mainwidget.cpp
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0); // Constructor
    ~MainWidget();                            // Destructor

private:
    QPushButton *button_;
    QTextBrowser *textBrowser_;
    QLabel *label_;
    QTextEdit *editor_;
};

#endif // MAINWIDGET_H
