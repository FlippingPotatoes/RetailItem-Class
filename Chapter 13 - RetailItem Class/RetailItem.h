#pragma once
#include <iostream>
using namespace std;

#ifndef RETAIL_ITEM_H
#define RETAIL_ITEM_H

class RetailItem
{
	private:
		string description;		//Description of the item
		int unitsOnHand;		//Number of units on hand
		double price;			//Unit price of the item
	public:
		//Constructors
		//Default constructor
		RetailItem();
		//Constructor with arguments
		RetailItem(string, int, double);

		//The inline functions controlling the accessors and mutators
		//mutator to set the description
		void setDescription(string d)
			{ description = d; }

		//mutator to set the unitsOnHand
		void setUnitsOnHand(int u)
			{ unitsOnHand = u; }

		//mutator to set the price
		void setPrice(double p)
			{ price = p; }

		//accessor to get the description
		string getDescription() const
			{ return description; }

		//accessor to get the unitsOnHand
		int getUnitsOnHand() const
			{ return unitsOnHand; }

		//accessor to get the price
		double getPrice() const
			{ return price; }

};

#endif