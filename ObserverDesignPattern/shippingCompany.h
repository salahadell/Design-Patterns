#pragma once
#include <iostream>
#include <string>
#include "subscriber.h"


class shippingCompany :public subscriber
{
	std::string name;
public:
	shippingCompany(std::string name);
	void notify(std::string);

};

