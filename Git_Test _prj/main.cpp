#include "stdafx.h"
#include "Git_Test_prj.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Git_Test_prj w;
	w.show();
	return a.exec();
}
