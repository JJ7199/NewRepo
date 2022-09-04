#include <iostream>

using namespace std;

void doSomething(int* array);

int main()
{
	int length;

	cin >> length;

	int* array = new int[length]();

	array[0] = 1;
	array[1] = 2;

	doSomething(array);

	for (int i = 0; i < length; ++i)
	{
		cout << "in main : " << (uintptr_t) & array[i] << endl;
		cout << "in main : " << (uintptr_t) & array << endl;
		cout << array[i] << endl;
	}
	

	delete[]array;
}

void doSomething(int array[])
{
	array[3] = 15;
	cout << "in function : " << (uintptr_t) & array[3] << endl;
	cout << "in function : " << (uintptr_t) & array << endl;

	cout << array[3] << endl;
}
