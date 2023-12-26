#include "QtWidgetsApplication.h"
//#include "product_main.h"
//#include "login_class.h"

QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
	connect(pushButton_2, &QPushButton::clicked, this, &QtWidgetsApplication::customer_func);
	connect(product, &QPushButton::clicked, this, &QtWidgetsApplication::product_func);

}

QtWidgetsApplication::~QtWidgetsApplication()
{}


void QtWidgetsApplication::customer_func()
{
	customer_main cls;
	cls.setModal(true);
	cls.exec();
}

void QtWidgetsApplication::product_func()
{
	login_class cls;
	cls.setModal(true);
	cls.exec();
}
