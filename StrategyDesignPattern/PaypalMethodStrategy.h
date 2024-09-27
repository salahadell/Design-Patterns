#pragma once
#include "PaymentMethodStrategy.h"

class PaypalMethodStrategy:public PaymentMethodStrategy
{
 void ProcessPayment(double amount);

};

