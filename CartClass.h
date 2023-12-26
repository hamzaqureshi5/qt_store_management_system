#pragma once

#include <QDialog>
#include "ui_CartClass.h"

class CartClass : public QDialog, public Ui::CartClassClass
{
	Q_OBJECT

public:
	CartClass(QWidget *parent = nullptr);
	~CartClass();

private:
	 
};
