#pragma once

#include <QDialog>
#include "ui_prod_check.h"
#include <QDialog>
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
#include<qmessagebox.h>
class prod_check : public QDialog, public Ui::prod_checkClass
{
	Q_OBJECT

public:
	prod_check(QWidget *parent = nullptr);
	~prod_check();
	void check_Item();
	void prod_check::appendRowToTable(QTableWidget* tableWidget, const QString& item_id, const QString& item_name, const QString& date, const QString& quantity);


private:
	 
};
