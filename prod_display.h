#pragma once

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

class prod_display : public QDialog, public Ui::prod_displayClass
{
	Q_OBJECT

public:
	prod_display(QWidget *parent = nullptr);
	~prod_display();
	void show_Item();
//	void 	populate_table();
//	void appendRowToTable(QTableWidget* tableWidget, int item_id, const QString& item_name, const QString& date, int quantity);

private:
	 
};
