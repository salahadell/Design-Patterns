#include "OnlineMarketPlace.h"

OnlineMarketPlace::OnlineMarketPlace() 
{
}
void OnlineMarketPlace::AddNewUser(user* user)
{
	this->users.push_back(user);
}
void OnlineMarketPlace::AddNewProduct(product* product) 
{
	this->products.push_back(product);
	/*
	for each product added you have to iterate over all the users to check if they subscribed
	which is not efficient as you suppose to iterate only over the users who subscribed 
	to products notifications
	*/ 
	for(user* u:users)
	{
		if (u->isSubscribedToProduct())
		{
			u->notifyuser(product);
		}
	}

}
void OnlineMarketPlace::AddNewOffers(offer* offer)
{
	this->offers.push_back(offer);
	/*
	for each offer added you have to iterate over all the users to check if they subscribed
	which is not efficient as you suppose to iterate only over the users who subscribed
	to offers notifications
	*/
	for (user* u : users)
	{
		if (u->isSubscribedToOffer())
		{
			u->notifyuser(offer);
		}
	}
}
