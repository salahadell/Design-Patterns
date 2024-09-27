#pragma once
#include <iostream>
#include <string>
#include "PricingStrategy.h"

class Product
{
	std::string name;
	double price;
	PricingStrategy* pricingStrategy;

public:
	Product(std::string name, double price, PricingStrategy* pricingStrategy);
	double CalculateProductPrice() const;

};

