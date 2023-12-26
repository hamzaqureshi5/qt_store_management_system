#include "login_class.h"
#include "product_main.h"
#include<QMessageBox>
login_class::login_class(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	connect(pushButton, &QPushButton::clicked, this, &login_class::login_func);


}

login_class::~login_class()
{}

void login_class::login_func()
{
//	if (1)
	if (this->lineEdit->text() == "admin" && this->lineEdit_2->text() == "admin")
	{
		this->close();
		product_main cls;
		cls.setModal(true);
		cls.exec();
	}
	else
	{
		QMessageBox msgBox;
		msgBox.setWindowIcon(QIcon("icon.png"));
		msgBox.setText("Incorrect password");
		msgBox.setInformativeText("Please enter the correct password.");
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.exec();
	}

}
