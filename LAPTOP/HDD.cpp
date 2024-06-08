#include "HDD.h"     // ���� ����������
#include <iostream>
using namespace std;

HDD::HDD(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

HDD::HDD(const char* mod, double pr) :HDD(mod)  // �������������
{
	price = pr;
}

HDD::~HDD()  // ����������
{
	delete[]model;
	price = 0;
}

HDD::HDD(const HDD& b)  // ��������������� ������������ �����������
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, b.model);
	price = b.price;
	cout << "HDD copy constructor\n";
}

void HDD::set_model(const char* mod)
{
	if (this->model != nullptr)
	{
		delete[] model;  // �������� ���������� ������
	}
	this->model = new char[strlen(mod) + 1];  // �������������� ��������� �� ����� �������
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void HDD::set_price(double pr)
{
	if (pr > 1000)
	{
		price = pr;
	}
}

const char* HDD::get_model() const
{
	return model;
}

double HDD::get_price() const
{
	return price;
}

void HDD::print() const
{
	cout << "HDD model - " << model << "\tprice = " << price << endl;
}

