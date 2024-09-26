#pragma once
#include <iostream>
#include <string>
#include "offer.h"
#include "product.h"
class user
{
	std::string name;
	bool isSubscribedToProducts;
	bool isSubscribedToOffers;
public:
	user(std::string name, bool isSubscribedToProducts,
		bool isSubscribedToOffers);
	void subscribeToProducts();
	void subscribeToOffers();
	void unsubscribeToProducts();
	void unsubscribeToOffers();
	bool isSubscribedToProduct();
	bool isSubscribedToOffer();
	void notifyuser(product* product);
	void notifyuser(offer* offer);

};

