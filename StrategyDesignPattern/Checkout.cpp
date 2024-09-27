#include "Checkout.h"
#include <iostream>
void Checkout::processPayment(double amount, Paymentmethods Paymentmethod) {

	if (Paymentmethod == VISA)
	{
	std::cout << "PROCESSING VISA PAYMENT AND ADDING FEES"<<std::endl;
	}
	else if (Paymentmethod == PAYPAL)
	{
		std::cout << "PROCESSING PAYPAL PAYMENT AND ADDING FEES" << std::endl;

	}
	else if (Paymentmethod == BANKTRANSFER)
	{
		std::cout << "PROCESSING BANKTRANSFER PAYMENT" << std::endl;

	}

}
