// Write a function to calculate cleaning costs. Use constants for the price/room ($30) and the sales tax (6%).

/*Pseudocode:
* Prompt the user for the number of rooms
* display the price/room
* display the subtotal (rooms times cost)
* display the tax (constant 6%)
* display the total (subtotal + tax)
* display expiration time (constant)
*/
#include <iostream>

using namespace std;

int main() {

	cout << "Welcome to C++ Carpet Cleaning! Where quality is c++!\n\nPlease enter how many rooms you would like cleaned: ";

	int rooms{ 0 };
	cin >> rooms;

	cout << "\nEstimate for carpet cleaning\n-----------------------------------------------------------------------------------------------------------------------\nNumber of rooms: " << rooms << endl;
	
	const double pricePerRoom{ 30 }; 
	double subTotal{ rooms * pricePerRoom };
	const double taxRate{ 0.06 };
	double totalTax{ taxRate * subTotal };
	double total{ subTotal + totalTax };
	const int expiration{ 30 };

	cout << "Price per room: $" << pricePerRoom << endl;
	cout << "Cost: $" << subTotal << endl;
	cout << "Tax: $" << totalTax << endl;
	cout << "========================================================================================================================\n";
	cout << "\nEstimate Total: $" << total << endl;
	cout << "This estimate is valid for " << expiration << " days.\n";


	return 0;
}