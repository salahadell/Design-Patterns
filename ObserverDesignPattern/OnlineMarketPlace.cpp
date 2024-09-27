#include "OnlineMarketPlace.h"

OnlineMarketPlace::OnlineMarketPlace() 
{
	this->subscribers.emplace(NewProduct, std::list<subscriber*>{});
	this->subscribers.emplace(NewOffer, std::list<subscriber*>{});
	this->subscribers.emplace(NewJobPos, std::list<subscriber*>{});

}
void OnlineMarketPlace::subscribe(eventTypes eventType, subscriber* Subscriber)
{
	subscribers[eventType].emplace_back(Subscriber);
}
void OnlineMarketPlace::unsubscribe(eventTypes eventType, subscriber* Subscriber)
{
	subscribers[eventType].remove(Subscriber);

}
void OnlineMarketPlace::AddNewProduct(product* product) 
{
	this->products.push_back(product);
	/*
	for each product added you have to iterate only over all the users who subscribed to products notifications
	*/ 
	notifySubscriber(NewProduct, product->getProductName() + " is added");

}
void OnlineMarketPlace::AddNewOffers(offer* offer)
{
	this->offers.push_back(offer);
	/*
	for each offer added you have to iterate only over all the users who subscribed to offers notifications
	*/
	notifySubscriber(NewOffer, offer->getMessage());

}
void OnlineMarketPlace::AddNewJob(std::string jobTitle)
{
	/*
	for each job added you have to iterate only over all the users who subscribed to job notifications
	*/
	notifySubscriber(NewJobPos, jobTitle + " is available");

}
void OnlineMarketPlace::notifySubscriber(eventTypes eventType,std::string message)
{
	/*
	for each event added you have to iterate only over all the users who subscribed to this event notifications
	*/
	for (subscriber* s : subscribers[eventType])
	{
		s->notify(message);
	}

}
