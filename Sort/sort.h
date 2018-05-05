#ifndef SORT_H
#define SORT_H

#include <QtWidgets/QMainWindow>
#include "iostream"
#include "ui_sort.h"
#include "Sorting.h"
#include "qfile.h"
#define array_number  40
using namespace std;

class Sort : public QMainWindow
{
	Q_OBJECT

public:

	Sort(QWidget *parent = 0);
	~Sort();
	//int *array_number = new in;
	int Number[array_number];//原始数列,只在生成数列时改变
	Sorting *My_Sort = new Sorting();

private:
	Ui::SortClass ui;
private slots:

	int OnBt_start();
	int OnBt_create();


};

#endif // SORT_H
