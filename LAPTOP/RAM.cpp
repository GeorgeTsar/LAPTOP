#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

RAM::RAM(const char* mod, double pr) :RAM(mod)  // Делегирование
{
	price = pr;
}

RAM::~RAM()  // Деструктор
{
	delete[]model;
	price = 0;
}

RAM::RAM(const RAM& b)  // Переопределение конструктора копирования
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, b.model);
	price = b.price;
	cout << "HDD copy constructor\n";
}

void RAM::set_model(const char* mod)
{
	if (this->model != nullptr)
	{
		delete[] model;  // Удаление предыдущей строки
	}
	this->model = new char[strlen(mod) + 1];  // Перенаправляем указатель на новый участок
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void RAM::set_price(double pr)
{
	if (pr > 1000)
	{
		price = pr;
	}
}

const char* RAM::get_model() const
{
	return model;
}

double RAM::get_price() const
{
	return price;
}

void RAM::print() const
{
	cout << "HDD model - " << model << "\tprice = " << price << endl;
}


