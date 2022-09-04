//Program to convert a Fahrenheit temperature to a Celsius temperature.
#include <iostream>

void initializeScreen();

double celsius(double fahrenheit);

void showResults(double fDegrees, double cDegrees);

int main()
{
	using namespace std;
	double fTemperrature, cTemperature;

	initializeScreen();

	cout << "I will convert a fahrenheit temperature"
		<< " to Celcius.\n"
		<< "Enter a temperature in Fahrenheit: ";
	cin >> fTemperrature;

	cTemperature = celsius(fTemperrature);

	showResults(fTemperrature, cTemperature);

	return 0;
}

//Definition uses iostream:
void initializeScreen()
{
	using namespace std;
	cout << endl;
	return;
}

double celsius(double fahrenheit)
{
	return ((5, 0 / 9.0) * (fahrenheit - 32));
}

void showResults(double fDegrees, double cDegrees)
{
	using namespace std;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << fDegrees
		<< " degrees Fahrenheit is equivalent to \n"
		<< cDegrees << " degrees Celsius. \n";
	return;
}