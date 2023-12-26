#pragma once

#include <QDialog>
#include "ui_product_main.h"
#include "prod_add.h"
#include "prod_display.h"
#include "prod_check.h"
#include "prod_update.h"
#include "prod_delete.h"

class product_main : public QDialog, public Ui::product_mainClass
{
	Q_OBJECT

public:
	product_main(QWidget *parent = nullptr);
	~product_main();
	void add_func();
	void display_func();
	void check_func();
	void update_func();
	void delete_func();
	void exit_func();
private:
	 
};
