#pragma once

#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

//#include "posts.h"
//#include "workers.h"
#include "header/clients.h"
//#include "orders.h"
//#include "reports.h"
//#include "taxes.h"
//#include "getdata.h"
#include "header/db.h"

namespace Ui {
	class MainMenu;
}

class MainMenu : public QMainWindow
{
	Q_OBJECT
	DB* db;
	Tax taxes;

public:
	explicit MainMenu(QWidget *parent = nullptr);
	~MainMenu();
	DBData* data;

private slots:
	void on_b_clients_clicked();

	void on_b_workers_clicked();

	void on_b_schedule_clicked();

	void on_b_report_clicked();

	void get_data();

	bool is_connect();

private:
	Ui::MainMenu *ui;
};

#endif // MAINMENU_H

