#pragma once
class PaymentMethodStrategy
{
public:
	virtual void ProcessPayment(double amount) = 0;
};
