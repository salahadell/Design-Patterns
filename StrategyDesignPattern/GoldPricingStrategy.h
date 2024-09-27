#pragma once
#include "PricingStrategy.h"

class GoldPricingStrategy :public PricingStrategy
{
public:
	GoldPricingStrategy();
	double CalculateProductPrice(double price);
};

