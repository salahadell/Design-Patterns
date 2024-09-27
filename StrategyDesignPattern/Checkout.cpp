#include "Checkout.h"
#include <iostream>

Checkout::Checkout(PaymentMethodStrategy* paymentmethodstrategy) {

	this->paymentmethodstrategy = paymentmethodstrategy;
}
void Checkout::processPayment(double amount) {

	paymentmethodstrategy->ProcessPayment(amount);
}
