#pragma once
#include <string>
class subscriber
{
public:
	virtual void notify(std::string)=0;
};

