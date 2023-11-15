// create another carpet cleaning app with variable prices for small and large rooms.

#include <iostream>

using namespace std;

int main() {

	cout << "Welcome to C++ carpet cleaners! Where C++ means quality!\n\nPlease enter the number of large rooms you would like cleaned: ";

	int largeRooms{ 0 };
	cin >> largeRooms;

	cout << "Please enter the amount of small rooms: ";
	
	int smallRooms{ 0 };
	cin >> smallRooms;

	const double largeRoomPrice{ 35 };
	const double smallRoomPrice{ 25 };

	double largeRoomCost{ largeRooms * largeRoomPrice };
	double smallRoomCost{ smallRooms * smallRoomPrice };

	cout << "\nEstimate for carpet cleaning\n-----------------------------------------------------------------------------------------------------------------------\n";
	cout << "Charges:\n";
	cout << largeRooms << " large rooms at $" << largeRoomPrice << " per room\n";
	cout << "      $" << largeRoomCost << endl;
	cout << smallRooms << " small rooms at $" << smallRoomPrice << " per room\n";
	cout << "      $" << smallRoomCost << endl;

	double subTotal{ largeRoomCost + smallRoomCost };
	cout << "SubTotal: $" << subTotal << endl;

	const double taxRate{ 0.06 };
	double salesTax{ subTotal * taxRate };
	cout << "Sales Tax: $" << salesTax << endl;
	cout << "========================================================================================================================\n";

	
	double totalCost{ subTotal + salesTax };
	cout << "Estimate Total: $" << totalCost << endl;

	const int validDays{ 30 };
	cout << "This offer is valid for " << validDays << " days\n";

	return 0;
}