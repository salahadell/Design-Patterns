#pragma once
#include <string>
class product
{
	std::string name;
	double price;

public:
	product(std::string name,double price);
	std::string getProductName();
	double getProductPrice();
};

