#pragma once

#include <QDialog>
#include "ui_prod_delete.h"
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

class prod_delete : public QDialog, public Ui::prod_deleteClass
{
	Q_OBJECT

public:
	prod_delete(QWidget *parent = nullptr);
	~prod_delete();
	void remove_Item();

private:
	 
};
