#include <QtWidgets>
#include "mainwidget.h"

int main(int argc, char **argv)
{
	// Creates an instance of QApplication
	QApplication a(argc, argv);

	// This is our MainWidget class containing our GUI and functionality
	MainWidget w;
	// QWidget w;
	w.resize(750, 450);
	w.setWindowTitle("Qt Sample App - First Pass!");
	w.show(); // Show main window

	// Run the app
	return a.exec();
}
