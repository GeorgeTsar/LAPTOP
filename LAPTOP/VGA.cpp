#include "VGA.h"
#include <iostream>
using namespace std;

VGA::VGA(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

VGA::VGA(const char* mod, double pr) :VGA(mod)  // Делегирование
{
	price = pr;
}

VGA::~VGA()  // Деструктор
{
	delete[]model;
	price = 0;
}

VGA::VGA(const VGA& b)  // Переопределение конструктора копирования
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, b.model);
	price = b.price;
	cout << "VGA copy constructor\n";
}

void VGA::set_model(const char* mod)
{
	if (this->model != nullptr)
	{
		delete[] model;  // Удаление предыдущей строки
	}
	this->model = new char[strlen(mod) + 1];  // Перенаправляем указатель на новый участок
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void VGA::set_price(double pr)
{
	if (pr > 1000)
	{
		price = pr;
	}
}

const char* VGA::get_model() const
{
	return model;
}

double VGA::get_price() const
{
	return price;
}

void VGA::print() const
{
	cout << "VGA model - " << model << "\tprice = " << price << endl;
}


