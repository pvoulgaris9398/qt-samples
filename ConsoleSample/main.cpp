#include <QCoreApplication>

//QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    QScopedPointer<QWidget> widget(new CustomWidget());
    widget->resize(240,120);
    widget->show();

    return a.exec();

    /*
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    QString s1("Cleopatra");
    QString s2("Marc Antony");
    QString s3("at Actium");

    QString s = s1 + " and " + s2 + " " + s3 + "!";
    cout << s << Qt::endl;
*/

    //QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    //return a.exec();
}
