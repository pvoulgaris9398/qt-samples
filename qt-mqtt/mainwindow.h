#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include <QMainWindow>
// #include <QMqttClient>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    // exlicit
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setClientPort(int p);

private slots:
    void on_buttonConnect_clicked();
    void on_buttonQuit_clicked();
    void updateLogStateChange();

    void brokerDisconnected();

    void on_buttonPublish_clicked();

    void on_buttonSubscribed_clicked();

private:
    Ui::MainWindow *ui;
    // QMqttClient *m_client;
};

#endif // _MAINWINDOW_H