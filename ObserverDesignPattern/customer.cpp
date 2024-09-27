#include "customer.h"
customer::customer(std::string name)
{
	this->name = name;

}
void customer::notify(std::string message)
{
	std::cout << "customer " + name + " notified that " + message << std::endl;
}