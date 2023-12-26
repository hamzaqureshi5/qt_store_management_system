#include "prod_delete.h"

prod_delete::prod_delete(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	connect(pushButton, &QPushButton::clicked, this, &prod_delete::remove_Item);

}

prod_delete::~prod_delete()
{}


void prod_delete::remove_Item()
{
//	system("cls");
	std::fstream file, file1;
	int quantity, count = 0;
	std::string item_id, item_idd, item_name, date;
//	cout << "\n\n\t\t\t\tDelete Item Record";
//	cout << "\n\n Item ID : ";
//	cin >> item_id;
	item_id = this->lineEdit->text().toStdString();


	file1.open("Clothing1.txt", std::ios::app | std::ios::out);
	file.open("Clothing.txt", std::ios::in);
	if (!file) {}
//		cout << "\n\n ";
	else
	{
		file >> item_idd >> item_name >> date >> quantity;
		while (!file.eof())
		{
			if (item_id == item_idd)
			{
				QMessageBox msgBox;
				msgBox.setText("Product Deleted Sucessfully");
				msgBox.setInformativeText("");
				msgBox.setIcon(QMessageBox::Warning);
				msgBox.exec();


	//			system("cls");
	//			cout << "\n\n\t\t\t\tDelete Item Record";
	//			cout << "\n\n One Item is Deleted Successfully...";
				count++;
			}
			else
				file1 << " " << item_idd << " " << item_name << " " << date << " " << quantity << "\n";
			file >> item_idd >> item_name >> date >> quantity;
		}
		file.close();
		file1.close();
		remove("Clothing.txt");
		rename("Clothing1.txt", "Clothing.txt");

		if (count == 0) {}
	//		cout << "\n\n Item ID Not Found...";
	}
	count = 0;
	file1.open("Grocery1.txt", std::ios::app | std::ios::out);
	file.open("Grocery.txt", std::ios::in);
	if (!file)
	{
	}
//		cout << "\n\n";
	else
	{
		file >> item_idd >> item_name >> date >> quantity;
		while (!file.eof())
		{
			if (item_id == item_idd)
			{
				QMessageBox msgBox;
				msgBox.setText("Product Deleted Sucessfully");
				msgBox.setInformativeText("");
				msgBox.setIcon(QMessageBox::Warning);
				msgBox.exec();

				//				system("cls");
//				cout << "\n\n\t\t\t\tDelete Item Record";
//				cout << "\n\n One Item is Deleted Successfully...";
				count++;
			}
			else
				file1 << " " << item_idd << " " << item_name << " " << date << " " << quantity << "\n";
			file >> item_idd >> item_name >> date >> quantity;
		}
		file.close();
		file1.close();
		remove("Grocery.txt");
		rename("Grocery1.txt", "Grocery.txt");

		if (count == 0)
		{
			//			cout << "\n\n";

		}
	}
	count = 0;
	file1.open("Electronics1.txt", std::ios::app | std::ios::out);
	file.open("Electronics.txt", std::ios::in);
	if (!file)
	{
//		cout << "\n\n File Openning Error...";

	}
	else
	{
		file >> item_idd >> item_name >> date >> quantity;
		while (!file.eof())
		{
			if (item_id == item_idd)
			{
				QMessageBox msgBox;
				msgBox.setText("Product Deleted Sucessfully");
				msgBox.setInformativeText("");
				msgBox.setIcon(QMessageBox::Warning);
				msgBox.exec();

//				system("cls");
//				cout << "\n\n\t\t\t\tDelete Item Record";
//				cout << "\n\n One Item is Deleted Successfully...";
				count++;
			}
			else
				file1 << " " << item_idd << " " << item_name << " " << date << " " << quantity << "\n";
			file >> item_idd >> item_name >> date >> quantity;
		}
		file.close();
		file1.close();
		remove("Electronics.txt");
		rename("Electronics1.txt", "Electronics.txt");
		//system("pause");
		if (count == 0)
		{ 
	//		cout << "\n\n";
		}
	}


}
