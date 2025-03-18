#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char **argv)
{
    QCoreApplication a(argc, argv);

    QTcpServer server;

    if (!server.listen(QHostAddress::Any, 12345))
    {
        qDebug() << "Server could not start!";
    }

    qDebug() << "Server started...";

    QObject::connect(&server, &QTcpServer::newConnection, [&]()
                     { QTcpSocket *clientConnection = server.nextPendingConnection();
                        QObject::connect(clientConnection, &QAbstractSocket::disconnected, clientConnection, &QObject::deleteLater);
                        QObject::connect(clientConnection, &QIODevice::readyRead, [clientConnection]()
                        {
                            QByteArray data = clientConnection->readAll();
                            qDebug()<< "Data received: " << data;
                            clientConnection->write("Hello from the server!");
                            clientConnection->flush();
                        }); });

    return a.exec();
}
