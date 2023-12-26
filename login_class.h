#pragma once

#include <QDialog>
#include "ui_login_class.h"

class login_class : public QDialog, public Ui::login_classClass
{
	Q_OBJECT

public:
	login_class(QWidget *parent = nullptr);
	~login_class();
	void login_func();

private:
	 
};
