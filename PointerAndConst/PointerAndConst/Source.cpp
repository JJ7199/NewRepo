#include <iostream>

using namespace std;

int main()
{
	int value1 = 5;
	const int *ptr = &value1;

	//*ptr = 7; -> error

	cout << ptr << " : value1's address" << endl;
	cout << &ptr <<" : ptr's adress" << endl;
	cout << *ptr << endl;

	int value2 = 7;

	ptr = &value2;

	cout << &value2 << " : value2's address" << endl;
	cout << ptr << " : value2's address" << endl;
	cout << &ptr << " : ptr's adress" << endl;
	cout << *ptr << endl;

	
}