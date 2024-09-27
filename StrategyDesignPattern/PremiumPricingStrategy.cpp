#include "PremiumPricingStrategy.h"

PremiumPricingStrategy::PremiumPricingStrategy() {}
double PremiumPricingStrategy::CalculateProductPrice(double price) {

	return price * 0.8; //20% discount


}