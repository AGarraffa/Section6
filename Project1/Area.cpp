//write a simple program that calculates area

#include <iostream>

using namespace std;

int main() {

	cout << "Please enter a length: ";
	double length{ 0 };
	cin >> length;

	cout << "Please enter a width: ";
	double width{ 0 };
	cin >> width;

	double area{ length * width };
	cout << "Area: " << area << endl;

	return 0;
}