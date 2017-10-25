#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Git_Test_prj.h"

class Git_Test_prj : public QMainWindow
{
	Q_OBJECT

public:
	Git_Test_prj(QWidget *parent = Q_NULLPTR);

private:
	Ui::Git_Test_prjClass ui;
};
