#pragma once
#include <iostream>
#include <string>
#include "subscriber.h"


class customer:public subscriber
{
	std::string name;
public:
	customer(std::string name);
	void notify(std::string);

};

