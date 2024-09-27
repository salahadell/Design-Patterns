#include "shippingCompany.h"
shippingCompany::shippingCompany(std::string name)
{
	this->name = name;

}
void shippingCompany::notify(std::string message)
{
	std::cout << "shippingCompany " + name + " notified that " + message << std::endl;
}