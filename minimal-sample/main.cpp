#include <QtWidgets>
#include "mainWidget.h"

int main(int argc, char *argv[])
{
	// Creates an instance of QApplication
	QApplication a(argc, argv);

	// This is our MainWidget class containing our GUI and functionality
	MainWidget w;
	w.show(); // Show main window

	// Run the app
	return a.exec();

}
