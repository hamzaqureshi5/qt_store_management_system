#include "prod_display.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFile>
#include <QTextStream>
#include <QStringList>



prod_display::prod_display(QWidget *parent): QDialog(parent)
{
	setupUi(this);
//	populate_table();
//	this->tableWidget->selectColumn(4);
//	QStandardItemModel model;
	// Set the headers for the table
	show_Item();
//	this->showMaximized();

}

prod_display::~prod_display()
{

}



void appendRowToTable(QTableWidget* tableWidget, const QString& item_id, const QString& item_name, const QString& date, const QString& quantity) {
	int row = tableWidget->rowCount();
	tableWidget->insertRow(row);

	// Assuming your data format is item_id, item_name, date, quantity
	QTableWidgetItem* idItem = new QTableWidgetItem(item_id);
	QTableWidgetItem* nameItem = new QTableWidgetItem(item_name);
	QTableWidgetItem* dateItem = new QTableWidgetItem(date);
	QTableWidgetItem* quantityItem = new QTableWidgetItem(quantity);

	tableWidget->setItem(row, 0, idItem);
	tableWidget->setItem(row, 1, nameItem);
	tableWidget->setItem(row, 2, dateItem);
	tableWidget->setItem(row, 3, quantityItem);
}

void prod_display::show_Item()
{
//	system("cls");
	std::fstream file;
//	int quantity;
	std::string item_name, item_id, date, quantity;

//	cout << "\n\n\t\t\t\tShow All Items";
//	cout << "\n\n Item ID   Item        Price        quantity\n\n";
	file.open("Clothing.txt", std::ios::in);
	if (!file)
	{

	}
//		cout << "\n\n";
	else
	{

		file >> item_id >> item_name >> date >> quantity;
		while (!file.eof())
		{
			appendRowToTable(this->cloth_tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
//			cout << "    " << item_id << "      " << item_name << "        " << date << "\t      " << quantity << "\n\n";
			file >> item_id >> item_name >> date >> quantity;
		}
		file.close();
	}
	file.open("Grocery.txt", std::ios::in);
	if (!file)
	{
	}
//		cout << "\n\n";
	else
	{

		file >> item_id >> item_name >> date >> quantity;
		while (!file.eof())
		{
//			cout << "    " << item_id << "      " << item_name << "        " << date << "\t      " << quantity << "\n\n";
			appendRowToTable(this->groc_tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
			file >> item_id >> item_name >> date >> quantity;
		}
		file.close();
	}
	file.open("Electronics.txt", std::ios::in);
	if (!file)
	{
//		cout << "\n\n";
	}
	else
	{

		file >> item_id >> item_name >> date >> quantity;
		while (!file.eof())
		{
//			cout << "    " << item_id << "      " << item_name << "        " << date << "\t      " << quantity << "\n\n";
			appendRowToTable(this->elect_tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
			file >> item_id >> item_name >> date >> quantity;
		}
		file.close();
	}
//	system("pause");
}

