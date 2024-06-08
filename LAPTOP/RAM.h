#pragma once
class RAM
{
	char* model;
	double price;
public:
	RAM() = default;
	RAM(const char* mod);
	RAM(const char* mod, double pr);

	~RAM();
	RAM(const RAM& b);  // copy constructor

	void set_model(const char* mod);
	void set_price(double pr);

	const char* get_model()const;
	double get_price()const;

	void print()const;

};

