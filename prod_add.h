#pragma once

#include "ui_prod_add.h"
#include <QDialog>

#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iomanip> 

//class product_main : public QDialog, public Ui::product_mainClass

//product_main(QWidget *parent = nullptr);


class prod_add : public QDialog, public Ui::prod_addClass
{
	Q_OBJECT

public:
	prod_add(QWidget *parent = nullptr);
	~prod_add();
	void add_Item();

private:
	 
};
