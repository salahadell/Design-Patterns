#include "user.h"

user::user(std::string name, bool isSubscribedToProducts,
	bool isSubscribedToOffers) 
{
	this->name = name;
	this->isSubscribedToProducts = isSubscribedToProducts;
	this->isSubscribedToOffers = isSubscribedToOffers;

}
bool user::isSubscribedToProduct() 
{
	return this->isSubscribedToProducts;
}
bool user::isSubscribedToOffer() 
{
	return this->isSubscribedToOffers;
}
void user::subscribeToProducts() 
{
	this->isSubscribedToProducts = true;
}
void user::unsubscribeToProducts()
{
	this->isSubscribedToProducts = false;
}
void user::subscribeToOffers()
{
	this->isSubscribedToOffers = true;
}
void user::unsubscribeToOffers()
{
	this->isSubscribedToOffers = false;
}
void user::notifyuser(product* product) 
{
	std::cout << "user " + name + " notified that product " + product->getProductName() + " is added" <<std::endl;
}
void user::notifyuser(offer* offer)
{
	std::cout << "user " + name + " notified that " + offer->getMessage() << std::endl;

}