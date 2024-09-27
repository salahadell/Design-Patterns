#include "GoldPricingStrategy.h"

GoldPricingStrategy::GoldPricingStrategy() {}

double GoldPricingStrategy::CalculateProductPrice(double price) {

	return price * 0.9; //10% discount


}