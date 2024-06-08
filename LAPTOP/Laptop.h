#pragma once
#include "HDD.h"  
#include "RAM.h" 

class Laptop
{
	HDD hdd;
	RAM ram;
	double price;
	static char* model;
	static int existing_details;
public:
	Laptop() = default;
	Laptop(const char* mod, HDD hd, RAM rm);

	~Laptop();

	double get_price()const;
	void print()const;

	static void number_of_details();

};
