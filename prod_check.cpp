#include "prod_check.h"

prod_check::prod_check(QWidget *parent)	: QDialog(parent)
{
	setupUi(this);
	connect(pushButton, &QPushButton::clicked, this, &prod_check::check_Item);
}

prod_check::~prod_check()
{}

void prod_check::appendRowToTable(QTableWidget* tableWidget, const QString& item_id, const QString& item_name, const QString& date, const QString& quantity) {
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


void prod_check::check_Item() 
{
//	system("cls");
	std::fstream file;
	//int quantity, count = 0;
	int count = 0;
	std::string item_id, item_name, date, item_idd, quantity;

//	cout << "\n\n\t\t\t\tCheck Specific Item";
//	cout << "\n\n Item ID : ";
//	cin >> item_idd;
	item_idd = this->lineEdit->text().toStdString();
	// Check Clothing.txt
	file.open("Clothing.txt", std::ios::in);
	if (!file) 
	{
		//QMessageBox msgBox;
		//msgBox.setText("File Not Found ");
		//msgBox.setInformativeText("");
		//msgBox.setIcon(QMessageBox::Warning);
		//msgBox.exec();

//		cout << "\n\n File Opening Error...";
	}
	else 
	{
		file >> item_id >> item_name >> date >> quantity;
		while (!file.eof()) 
		{
			if (item_idd == item_id) 
			{
				//system("cls");
				//cout << "\n\n\t\t\t\tCheck Specific Item";
				//cout << "\n\n Item ID : " << item_id;
				//cout << "\n\n\t\t\tName : " << item_name;
				//cout << "\n\n Price : " << date;
				//cout << "\n\n\t\t\tquantity : " << quantity;
				appendRowToTable(this->tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
				count++;
				break;
			}
			file >> item_id >> item_name >> date >> quantity;
		}

		file.close();
	}

	// Check Grocery.txt if Clothing.txt did not find the item
	if (count == 0) 
	{
		file.open("Grocery.txt", std::ios::in);
		if (!file) 
		{
			//QMessageBox msgBox;
			//msgBox.setText("File Not Found ");
			//msgBox.setInformativeText("");
			//msgBox.setIcon(QMessageBox::Warning);
			//msgBox.exec();
		}
		else 
		{

			file >> item_id >> item_name >> date >> quantity;
			while (!file.eof()) 
			{
				if (item_idd == item_id) 
				{
					//system("cls");
					//cout << "\n\n\t\t\t\tCheck Specific Item";
					//cout << "\n\n Item ID : " << item_id;
					//cout << "\n\n\t\t\tName : " << item_name;
					//cout << "\n\n Date : " << date;
					appendRowToTable(this->tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
					//cout << "\n\n\t\t\tquantity : " << quantity;
					count++;
					break;
				}
				file >> item_id >> item_name >> date >> quantity;
			}
		}
		file.close();
	}

	// Check Clothing.txt if Grocery.txt also did not find the item
	if (count == 0) 
	{
		file.open("Electronics.txt", std::ios::in);
		if (!file) 
		{
//			cout << "\n\n";
			//QMessageBox msgBox;
			//msgBox.setText("File Not Found ");
			//msgBox.setInformativeText("");
			//msgBox.setIcon(QMessageBox::Warning);
			//msgBox.exec();

		}
		else 
		{

			file >> item_id >> item_name >> date >> quantity;
			while (!file.eof()) 
			{
				if (item_idd == item_id) 
				{
					//system("cls");
					//cout << "\n\n\t\t\t\tCheck Specific Item";
					//cout << "\n\n Item ID : " << item_id;
					//cout << "\n\n\t\t\tName : " << item_name;
					//cout << "\n\n Date : " << date;
					//cout << "\n\n\t\t\tquantity : " << quantity;
					appendRowToTable(this->tableWidget, QString::fromStdString(item_id), QString::fromStdString(item_name), QString::fromStdString(date), QString::fromStdString(quantity));
					count++;
					break;
				}
				file >> item_id >> item_name >> date >> quantity;
			}
		}
		file.close();
	}

	if (count == 0) 
	{
		QMessageBox msgBox;
		msgBox.setText("Item Not Found ");
		msgBox.setInformativeText("Please enter the correct ID or try another.");
		msgBox.setIcon(QMessageBox::Information);
		msgBox.exec();

		//cout << "\n\n";
		//cout << "Item not found" << endl;
	}

//	system("pause");
}
