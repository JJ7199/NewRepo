//Determines which of two pizza sizes is the best buy.

#include <iostream>
using namespace std;
double unitPrice(int diameter, double price);

int main()
{
	int diameterSmall, diameterLarge;
	double unitPriceSmall, priceSmall, unitPriceLarge, priceLarge;

	cout << "Welcome to the Pizza Consumers Union. \n";
	cout << "Enter diameter of a small pizza (in iches): ";
	cin >> diameterSmall;
	cout << "Enter the price of a small pizza: $";
	cin >> priceSmall;
	cout << "Enter diameter of a large pizza (in inces): ";
	cin >> diameterLarge;
	cout << "Enter the price of a large pizza: $";
	cin >> priceLarge;

	unitPriceSmall = unitPrice(diameterSmall, priceSmall);
	unitPriceLarge = unitPrice(diameterLarge, priceLarge);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Small pizza: \n"
		<< "Diameter = " << diameterSmall << " inches\n"
		<< "Price = $" << priceSmall
		<< " per square inch = $" << unitPriceSmall << endl
		<< "Large pizza: \n"
		<< "Diameter = " << priceLarge
		<< " {er square inchj = $" << unitPriceLarge << endl;

	if (unitPriceLarge < unitPriceSmall)
		cout << "The large one is the better buy. \n";
	else
		cout << "The small one is the better buy. \n";

	cout << "Boun Appetito!\n";

	return 0;
}
double unitPrice(int diameter, double price)
{
	const double PI = 3.14159;
	double radius, area;

	radius = diameter / static_cast<double>(2);
	area = PI * radius * radius;
	return (price / area);
}
