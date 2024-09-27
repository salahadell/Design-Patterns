#include "OnlineMarketPlace.h"
using namespace std;

int main()
{
	OnlineMarketPlace onlineMarketPlace;
	//create and add new subscribers
	subscriber* ahmed = new customer("ahmed");
	subscriber* salah = new customer("salah");
	subscriber* moo   = new customer("moo");

	//create new job seeker
	subscriber* adel  = new jobSeeker("adel");
	//add new shipping company
	subscriber* DHL = new shippingCompany("dhl");

	onlineMarketPlace.subscribe(NewProduct,ahmed);
	onlineMarketPlace.subscribe(NewOffer, ahmed);
	onlineMarketPlace.subscribe(NewOffer, salah);
	onlineMarketPlace.subscribe(NewProduct, moo);

	onlineMarketPlace.subscribe(NewJobPos, adel);

	onlineMarketPlace.subscribe(NewProduct, DHL);

	//create and add new product and offer
	product* p1 = new product("Iphone", 1000);
	offer* of1 = new offer("There is a 50% sale on all items");

	onlineMarketPlace.AddNewProduct(p1);
	onlineMarketPlace.AddNewOffers(of1);
	//add new job position
	onlineMarketPlace.AddNewJob("SW ENGINEER");

	cout << "----------------------------------------------------"<<endl;
	//salah unsubscribed
	onlineMarketPlace.unsubscribe(NewOffer,salah);

	//another product and offer is added
	product* p2 =new product("Samsung", 1000);
	offer* of2= new offer("There is a 90% sale on all items");

	onlineMarketPlace.AddNewProduct(p2);
	onlineMarketPlace.AddNewOffers(of2);

	//add new job position
	onlineMarketPlace.AddNewJob("EMBEDDED SW ENGINEER");


}

