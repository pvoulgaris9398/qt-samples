#include <QtWidgets>
#include "mainwidget.h"
#include <QDebug>
#include <QStandardItemModel>

int main(int argc, char **argv)
{
	// Creates an instance of QApplication
	QApplication a(argc, argv);

    qDebug() << "testing";

    QStandardItemModel model(11, 3);

    model.setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
    model.setHorizontalHeaderItem(1, new QStandardItem(QString("Age")));
    model.setHorizontalHeaderItem(2, new QStandardItem(QString("Salary")));

    QTableView tableView;

    tableView.setModel(&model);

    tableView.show();

	// This is our MainWidget class containing our GUI and functionality
    //MainWidget w;
    //QWidget w;
    //w.resize(750, 450);
    //w.setWindowTitle("Qt Sample App - First Pass!");
    //w.show(); // Show main window

	// Run the app
	return a.exec();
}
