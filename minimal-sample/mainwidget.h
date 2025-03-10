#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QProcess>

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

private slots:
    void onButtonReleased();
    void onCaptureProcessOutput();

private:
    QPushButton * button_;
    QTextBrowser *textBrowser_;
    QLabel *label_; //test
    QTextEdit *editor_;
    QProcess process_;
};

#endif // MAINWIDGET_H
