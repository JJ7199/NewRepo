#include <iostream>
using namespace std;

int main()
{
	float metricTon;
	float metricTon_per_ounce = 35273.92;
	float metricTonOfCereal;

	while (true)
	{
		cout << "Enter the cereal of ton \n";
		cin >> metricTon;

		metricTonOfCereal = metricTon * metricTon_per_ounce;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "cereal's meteric ton is "
			<< metricTonOfCereal << " ounces" << endl;
		
	}
	


}