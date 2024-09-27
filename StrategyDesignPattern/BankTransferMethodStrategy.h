#pragma once
#include "PaymentMethodStrategy.h"
class BankTransferMethodStrategy:public PaymentMethodStrategy
{
	void ProcessPayment(double amount);

};

