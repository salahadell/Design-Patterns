#pragma 
#include "offer.h"
#include "user.h"
#include "product.h"
#include <list>
class OnlineMarketPlace
{
	std::list<user*> users;
	std::list<product*> products;
	std::list<offer*> offers;

public:
	OnlineMarketPlace();
	void AddNewUser(user* user);
	void AddNewProduct(product* product);
	void AddNewOffers(offer* offer);
};

