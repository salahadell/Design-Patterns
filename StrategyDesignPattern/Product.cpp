#include "Product.h"
Product::Product(std::string name, double price, PricingStrategy* pricingStrategy) {
	this->name = name;
	this->price = price;
	this->pricingStrategy = pricingStrategy;

}

double Product::CalculateProductPrice() const {

	return pricingStrategy->CalculateProductPrice(price);
	
}
