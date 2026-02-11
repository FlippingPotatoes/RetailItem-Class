//Defines a RetailItem class and demonstrates it
#include "RetailItem.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Defines the RetailItems within an array
	RetailItem items[] = { {"Jacket", 12, 59.95}, {"Designer Jeans", 40, 34.95}, {"Shirt", 20, 24.95}};
	
	//Formatting the table
	cout << left << setw(20) << "Description"
		<< setw(20) << "Units On Hand"
		<< "Price" << endl;

	//Prints the items onto the table
	for (RetailItem item : items)
	{
		cout << left << setw(20) << item.getDescription() 
			 << setw(20) << item.getUnitsOnHand() 
			 << "$" << item.getPrice() << endl;
	}

	cout << "\nA Program by Spencer Curtis\n";

	return 0;
}