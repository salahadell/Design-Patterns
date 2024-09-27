#pragma once
#include "PricingStrategy.h"

class PremiumPricingStrategy :public PricingStrategy
{
public:
	PremiumPricingStrategy();
	double CalculateProductPrice(double price);
};

