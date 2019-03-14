#include "SerialPortlxy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SerialPortlxy *w = new SerialPortlxy;
	w->show();
	return a.exec();
}
