#pragma once
class PricingStrategy
{
public:
	virtual double CalculateProductPrice(double price) = 0;
};

