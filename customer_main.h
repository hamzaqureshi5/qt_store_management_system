#pragma once

#include <QDialog>
#include "ui_customer_main.h"
#include <QDialog>
#include "ui_prod_display.h"
#include <QStandardItemModel>
#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iomanip> 
#include <QTableView>
#include "CartClass.h"
#include"qmessagebox.h"
#include <QFont>

class customer_main : public QDialog, public Ui::customer_mainClass
{
	Q_OBJECT

public:
	customer_main(QWidget *parent = nullptr);
	~customer_main();
	void electronics_cart_add();
	void grocery_cart_add();
	void clothing_cart_add();
	void electronics_cart_view();
	void grocery_cart_view();
	void clothing_cart_view();

	void show_Item();
	void appendRowToTable(QTableWidget* tableWidget, const QString& item_id, const QString& item_name, const QString& date, const QString& quantity);


private:
	 
};
