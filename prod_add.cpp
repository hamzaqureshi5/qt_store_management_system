#include "prod_add.h"
#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iomanip> 
#include<qmessagebox.h>
//product_main::product_main(QWidget *parent): QDialog(parent)
prod_add::prod_add(QWidget *parent): QDialog(parent)
{
	setupUi(this);
	connect(add_button, &QPushButton::clicked, this, &prod_add::add_Item);
}

prod_add::~prod_add()
{}


void prod_add::add_Item()
{
//	system("cls");
	std::fstream file;
//	int quantity;
	std::string item_name, date, item_id, type, quantity;
	//cout << "\n\n\t\t\t\t ADD New Item";
	//cout << "is item grocery,electronics or clothing ?";
	//cin >> type;
	//cout << "\n\n Item ID(0,1,2,3,4,5,...) : ";
	//cin >> item_id;
	//cout << "\n\n\t\t\t Item Name : ";
	//cin >> item_name;
	//cout << "\n\n Price : ";
	//cin >> date;
	//cout << "\n\n\t\t\t quantity : ";
	//cin >> quantity;

	type=this->comboBox->currentText().toStdString();
	item_id = this->id->text().toStdString();
	item_name = this->name->text().toStdString();
	date = this->price->text().toStdString();
	quantity = this->qty->text().toStdString();

	if (type == "Grocery")
	{
		file.open("Grocery.txt", std::ios::out | std::ios::app);
		file << " " << item_id << " " << item_name << " " << date << " " << quantity << "\n";
		file.close();
	}

	else if (type == "Clothing") 
	{
		file.open("Clothing.txt", std::ios::out | std::ios::app);
		file << " " << item_id << " " << item_name << " " << date << " " << quantity << "\n";
		file.close();
	}
	else if (type == "Electronics") 
	{
		file.open("Electronics.txt", std::ios::out | std::ios::app);
		file << " " << item_id << " " << item_name << " " << date << " " << quantity << "\n";
		file.close();
	}

	QMessageBox msgBox;
	msgBox.setWindowIcon(QIcon("icon.png"));
	msgBox.setText("Data Added");
	msgBox.setInformativeText("Data Added Sucessfully.");
	msgBox.setIcon(QMessageBox::Information);
	msgBox.exec();

}
