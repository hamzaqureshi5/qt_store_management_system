#pragma once

#include <QDialog>
#include "ui_prod_update.h"

class prod_update : public QDialog, public Ui::prod_updateClass
{
	Q_OBJECT

public:
	prod_update(QWidget *parent = nullptr);
	~prod_update();

private:
	 
};
