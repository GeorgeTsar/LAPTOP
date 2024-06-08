#pragma once
class HDD  // Header file - файл дизайна
{
	char* model;
	double price;
public:
	HDD() = default;
	HDD(const char* mod);
	HDD(const char* mod, double pr);

	~HDD();
	HDD(const HDD& b);  // copy constructor

	void set_model(const char* mod);
	void set_price(double pr);

	const char* get_model()const;
	double get_price()const;

	void print()const;

};

