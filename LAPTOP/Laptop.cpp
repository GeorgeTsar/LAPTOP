#include "Laptop.h"
#include<iostream>
using namespace std;

Laptop::Laptop(const char* mod, HDD hd, RAM rm):hdd(hd), ram(rm)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
	price = hdd.get_price() + ram.get_price() + 2000;
	++existing_details;
}

Laptop::~Laptop()
{
}

double Laptop::get_price() const
{
	return 0.0;
}

void Laptop::print() const
{
}

void Laptop::number_of_details()
{
	cout << "Number of details: " << existing_details << endl;
}

