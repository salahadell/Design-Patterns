#pragma once
#include <iostream>
#include <string>
#include "subscriber.h"


class jobSeeker :public subscriber
{
	std::string name;
public:
	jobSeeker(std::string name);
	void notify(std::string);

};

