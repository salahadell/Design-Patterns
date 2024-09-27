#include "Product.h"
Product::Product(std::string name, double price) {
	this->name = name;
	this->price = price;
}

double Product::CalculateProductPrice(MembershipTypes membershiptype) const {

	if (membershiptype == REGULAR)
	{
		return this->price;
	}
	else if (membershiptype == GOLD)
	{
		return this->price * 0.9; //10% discount

	}
	else if (membershiptype == PREMIUM)
	{
		return this->price * 0.8; //20% discount

	}
}
