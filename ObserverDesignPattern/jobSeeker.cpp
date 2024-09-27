#include "jobSeeker.h"
jobSeeker::jobSeeker(std::string name)
{
	this->name = name;

}
void jobSeeker::notify(std::string message)
{
	std::cout << "jobSeeker " + name + " notified that " + message << std::endl;
}