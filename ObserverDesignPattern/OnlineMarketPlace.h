#pragma 
#include "offer.h"
#include "customer.h"
#include "product.h"
#include "jobSeeker.h"
#include "shippingCompany.h"
#include <list>
#include "eventTypes.h"
#include <map>
class OnlineMarketPlace
{
	std::map<eventTypes,std::list<subscriber*>> subscribers;
	std::list<product*> products;
	std::list<offer*> offers;

public:
	OnlineMarketPlace();
	void AddNewProduct(product* product);
	void AddNewOffers(offer* offer);
	void AddNewJob(std::string jobTitle);
	void subscribe(eventTypes, subscriber*);
	void unsubscribe(eventTypes, subscriber*);
	void notifySubscriber(eventTypes, std::string);

};

