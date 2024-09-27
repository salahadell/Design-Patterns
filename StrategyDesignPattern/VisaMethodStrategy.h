#pragma once
#include "PaymentMethodStrategy.h"

class VisaMethodStrategy:public PaymentMethodStrategy
{
   void ProcessPayment(double amount);

};

