#include <QApplication>
#include <QtGui>
#include <QTextEdit>
#include <QDebug>
#include <QPushButton>
#include <QVBoxLayout>
#include <QObject>

int main(int argc, char **argv)
{
	// Creates an instance of QApplication
	QApplication a(argc, argv);

    QTextEdit textEdit;
    QPushButton quitButton("Quit");

    //https://ftp.nmr.mgh.harvard.edu/pub/dist/freesurfer/tutorial_versions/freesurfer/lib/qt/qt_doc/html/gettingstartedqt.html
    //QObject::connect(&quitButton, SIGNAL(clicked()), a, SLOT(quit()));

    QVBoxLayout layout;

    layout.addWidget(&textEdit);
    layout.addWidget(&quitButton);

    QWidget window;
    window.setLayout(&layout);

    window.show();

    qDebug() << "test-1";

	// Run the app
	return a.exec();

}
