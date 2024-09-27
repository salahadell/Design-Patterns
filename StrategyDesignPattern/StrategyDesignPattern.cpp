#include <iostream>
#include"Product.h"
#include"Checkout.h"
#include "RegularPricingStrategy.h"
#include "GoldPricingStrategy.h"
#include "PremiumPricingStrategy.h"
#include "VisaMethodStrategy.h"
#include "PaypalMethodStrategy.h"
#include "BankTransferMethodStrategy.h"
#include "PremiumPlusPricingStrategy.h"
#include "CashTransferMethodStrategy.h"


using namespace std;

int main() {

	Product Mobile = Product("mobile", 1000,new RegularPricingStrategy());
	Product Jacket = Product("jacket", 200, new GoldPricingStrategy());
	Product Shirt = Product("shirt", 100, new PremiumPricingStrategy());
	Product Fridge = Product("fridge", 100, new PremiumPlusPricingStrategy());

	double MobileCost = Mobile.CalculateProductPrice();
	double JacketCost = Jacket.CalculateProductPrice();
	double ShirtCost = Shirt.CalculateProductPrice();
	double FridgeCost = Fridge.CalculateProductPrice();

	cout << MobileCost<<endl;
	cout << JacketCost << endl;
	cout << ShirtCost << endl;
	cout << FridgeCost << endl;


	Checkout MobileCheckout(new VisaMethodStrategy());
	Checkout JacketCheckout(new PaypalMethodStrategy());
	Checkout ShirtCheckout(new BankTransferMethodStrategy());
	Checkout FridgeCheckout(new CashTransferMethodStrategy());

	MobileCheckout.processPayment(MobileCost);
	JacketCheckout.processPayment(JacketCost);
	ShirtCheckout.processPayment(ShirtCost);
	FridgeCheckout.processPayment(FridgeCost);


	return 0;
}