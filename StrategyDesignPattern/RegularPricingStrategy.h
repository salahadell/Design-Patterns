#pragma once
#include "PricingStrategy.h"

class RegularPricingStrategy :public PricingStrategy
{
public:
	RegularPricingStrategy();
	double CalculateProductPrice(double price);
};

