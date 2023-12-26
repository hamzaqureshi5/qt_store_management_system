#include "product_main.h"

product_main::product_main(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	connect(add_item, &QPushButton::clicked, this, &product_main::add_func);
	connect(display, &QPushButton::clicked, this, &product_main::display_func);
	connect(check, &QPushButton::clicked, this, &product_main::check_func);
	connect(update_2, &QPushButton::clicked, this, &product_main::update_func);
	connect(delete_2, &QPushButton::clicked, this, &product_main::delete_func);
	connect(exit_button, &QPushButton::clicked, this, &product_main::exit_func);
}

product_main::~product_main()
{

}

void product_main::add_func()
{
//	this->close();

	prod_add prod_cls;
	prod_cls.setModal(true);
	prod_cls.exec();

}

void product_main::display_func()
{
//	this->close();

	prod_display prod_cls;
	prod_cls.setModal(true);
	prod_cls.exec();

}
void product_main::check_func()
{
//	this->close();

	prod_check prod_cls;
	prod_cls.setModal(true);
	prod_cls.exec();

}
void product_main::update_func()
{
//	this->close();

	prod_update prod_cls;
	prod_cls.setModal(true);
	prod_cls.exec();

}
void product_main::delete_func()
{
//	this->close();

	prod_delete prod_cls;
	prod_cls.setModal(true);
	prod_cls.exec();

}
void product_main::exit_func()
{
	this->close();

}
