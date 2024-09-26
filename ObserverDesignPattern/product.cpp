#include "product.h"

product::product(std::string name, double price) {
	this->name = name;
	this->price = price;
}
std::string product::getProductName() {
	return this->name;
}
double product::getProductPrice() {
	return this->price;
}
