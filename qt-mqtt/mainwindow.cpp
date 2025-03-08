#include "mainwindow.h"
// #include "ui_mainwindow.h"

#include <QtCore/QDateTime>
// #include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>
#include <QApplication>

using namespace Qt::StringLiterals;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) //,
                                                              // ui(new MainWindow)
{
    // ui->setupUi(this);
    //  m_client = new QMQttClient(this);
    //  m_client->setHostname(ui->lineEditHost->text());
    //  m_client->setPort(static_cast<quint16>(ui->spinBoxPort->value()));

    // connect(m_client, &QMqttClient::stateChanged, this, &mainWindow::updateLogStateChange);
    // connect(m_client, &QMqttClient::disconnected, this, &mainWindow::brokerDisconnected);

    // connect(m_client, &QMqttClient::messageReceived, this,
    //         [this](const QByteArray &message,
    //                const QMQttTopicName &topic)
    //         {
    //             const QString content = QDateTime::currentDateTime().toString() + " Received Topic: "_L1 + topic.name() + " Message: "_L1 + message + u'\n';
    //             ui->editLog->insertPlainText(content);
    //         });

    // connect(m_client, &QMQttClient::pingResponseReceived, this,
    //         [this]()
    //         {
    //             const QString content = QDateTime::currentDateTime().toString() + "PingResponse\n"_L1;
    //             ui->editLog->insertPlainText(content);
    //         });

    // connect(ui->lineEditHost, &QLineEdit::textChanged, m_client, &QMqttClient::setHostname);
    // connect(ui->spinBoxPort, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::setClientPort);
    updateLogStateChange();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonConnect_clicked()
{
    qDebug() << "on_buttonConnect_clicked";
    // if (m_client->state() == QMqttClient::Disconnected)
    // {
    //     ui->lineEditHost->setEnabled(false);
    //     ui->spinBoxPort->setEnabled(false);
    //     ui->buttonConnect->setText(tr("Disconnect"));
    //     m_client->connectToHost();
    // }
    // else
    // {
    //     ui->lineEditHost->setEnabled(true);
    //     ui->spinBoxPort->setEnabled(true);
    //     ui->buttonConnect->setText(tr("Connect"));
    //     m_client->disconnectFromHost();
    // }
}

void MainWindow::on_buttonQuit_clicked()
{
    qDebug() << "on_buttonQuit_clicked";
    QApplication::quit();
}

void MainWindow::updateLogStateChange()
{
    // const QString content = QDateTime::currentDateTime().toString() + ": State Change"_L1 + QString::number(m_client->state()) + u'\n';
    qDebug() << "updateLogStateChange";
    // ui->editLog->insertPlainText(content);
}

void MainWindow::brokerDisconnected()
{
    qDebug() << "brokerDisconnected";
    // ui->lineEditHost->setEnabled(true);
    // ui->spinBoxPort->setEnabled(true);
    // ui->buttonConnect->setText(tr("Connect"));
}

void MainWindow::setClientPort(int p)
{
    qDebug() << "setClientPort";
    // m_client->setPort(static_cast<quint16>(p));
}

void MainWindow::on_buttonPublish_clicked()
{
    qDebug() << "on_buttonPublish_clicked";
    // if (m_client->publish(ui->lineEditTopic->text(), ui->lineEditMessage->text().toUtf8()) == -1)
    //     QMessageBox::critical(this, u"Error"_s, u"Could not publish message"_s);
}

void MainWindow::on_buttonSubscribed_clicked()
{
    qDebug() << "on_buttonSubscribe_clicked";
    // auto subscription = m_client->subscribe(ui->lineEditTopic->text());
    // if (!subscription)
    // {
    //     QMessageBox::critical(this, u"Error"_s,
    //                           u"Could not subscribe. Is there a valid connection?"_s);
    //     return;
    // }
}