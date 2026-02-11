//Implementation file for RetailItem Class
#include "RetailItem.h"
#include <iostream>;

using namespace std;

//The specifications were no grander than inline functions
//so I defined them in the header.

//Default constructor with fancy delegation
RetailItem::RetailItem() : RetailItem("", 0, 0.0)
{ };

//Constructor with arguments defined
RetailItem::RetailItem(string d, int u, double p)
{
	//I didn't do it here, but is it more acceptable to use setter functions
	//in the construction for the sake of safety?
	description = d;
	unitsOnHand = u;
	price = p;
}
