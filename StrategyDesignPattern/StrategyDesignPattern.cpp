#include <iostream>
#include"Product.h"
#include"Checkout.h"

using namespace std;

int main() {

	Product Mobile = Product("mobile", 1000);
	Product Jacket = Product("jacket", 200);
	Product Shirt = Product("shirt", 100);

	double MobileCost = Mobile.CalculateProductPrice(REGULAR);
	double JacketCost = Jacket.CalculateProductPrice(GOLD);
	double ShirtCost = Shirt.CalculateProductPrice(PREMIUM);

	cout << MobileCost<<endl;
	cout << JacketCost << endl;
	cout << ShirtCost << endl;

	Checkout MobileCheckout;
	Checkout JacketCheckout;
	Checkout ShirtCheckout;

	MobileCheckout.processPayment(MobileCost,VISA);
	JacketCheckout.processPayment(JacketCost, PAYPAL);
	ShirtCheckout.processPayment(ShirtCost, BANKTRANSFER);


	return 0;
}