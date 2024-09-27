#pragma once
#include "PaymentMethodStrategy.h"
class CashTransferMethodStrategy:public PaymentMethodStrategy
{
   void ProcessPayment(double amount);

};

