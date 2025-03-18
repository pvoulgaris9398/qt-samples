#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char **argv)
{
    QCoreApplication a(argc, argv);

    QTcpSocket socket;
    socket.connectToHost("127.0.0.1", 12345);

    if (socket.waitForConnected(3000))
    {
        qDebug() << "Connected!";
        socket.write("Hello from the client!");
        socket.waitForBytesWritten();
        socket.waitForReadyRead(3000);
        qDebug() << "Reply from server: " << socket.readAll();
        socket.disconnectFromHost();
    }
    else
    {
        qDebug() << "Connection failed!";
    }

    return a.exec();
}