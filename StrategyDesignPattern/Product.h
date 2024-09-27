#pragma once
#include <iostream>
#include <string>
#include "MembershipTypes.h"

class Product
{
	std::string name;
	double price;

public:
	Product(std::string name, double price);
	double CalculateProductPrice(MembershipTypes) const;

};

