#pragma once
class VGA
{
	char* model;
	double price;
public:
	VGA() = default;
	VGA(const char* mod);
	VGA(const char* mod, double pr);

	~VGA();
	VGA(const VGA& b);  // copy constructor

	void set_model(const char* mod);
	void set_price(double pr);

	const char* get_model()const;
	double get_price()const;

	void print()const;
};