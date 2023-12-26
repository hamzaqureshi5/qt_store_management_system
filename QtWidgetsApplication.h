#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication.h"
#include "product_main.h"
#include "customer_main.h"
#include "login_class.h"

class QtWidgetsApplication : public QMainWindow, public Ui::QtWidgetsApplicationClass
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = nullptr);
    ~QtWidgetsApplication();
public slots: 
	void customer_func();
	void product_func();
private:
     
};
