#pragma once
#include "PaymentMethodStrategy.h"
class Checkout
{
	PaymentMethodStrategy* paymentmethodstrategy;
public:
	Checkout(PaymentMethodStrategy*);
	void processPayment(double amount);
};

