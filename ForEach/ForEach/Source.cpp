#include <iostream>
#include <limits>
#include <vector>

using namespace std;
int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	
	/*
	//change array values
	for (auto& number : fibonacci)
		number *= 10;

	//output
	for (const auto &number : fibonacci) //for안에서는 fibobacci를 변경하지 않겠다.
		cout << number << " ";
	cout << endl;
	*/

	int max_number = std::numeric_limits<int>::lowest();
	
	for (const auto &n : fibonacci)
		max_number = std::max(max_number, n); // find max

	cout << max_number << endl;
	return 0;
}