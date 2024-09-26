#include "OnlineMarketPlace.h"
using namespace std;

int main()
{
	OnlineMarketPlace onlineMarketPlace;
	//create and add new users
	user* ahmed = new user("ahmed", true, true);
	user* salah = new user("salah", false, true);
	user* moo   = new user("moo", true, false);
	user* adel  = new user("adel", false, false);

	onlineMarketPlace.AddNewUser(ahmed);
	onlineMarketPlace.AddNewUser(salah);
	onlineMarketPlace.AddNewUser(moo);
	onlineMarketPlace.AddNewUser(adel);
	//create and add new product and offer
	product* p1 = new product("Iphone", 1000);
	offer* of1 = new offer("There is a 50% sale on all items");

	onlineMarketPlace.AddNewProduct(p1);
	onlineMarketPlace.AddNewOffers(of1);

	cout << "----------------------------------------------------"<<endl;
	//adel subscribed to offers and products and salah unsubscribed
	adel->subscribeToProducts();
	adel->subscribeToOffers();
	salah->unsubscribeToOffers();

	//another product and offer is added
	product* p2 =new product("Samsung", 1000);
	offer* of2= new offer("There is a 90% sale on all items");

	onlineMarketPlace.AddNewProduct(p2);
	onlineMarketPlace.AddNewOffers(of2);

}

