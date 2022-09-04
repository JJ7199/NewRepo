#include <iostream>

using namespace std;
void doSomething(int array[])
{
	cout << &array << endl;
	cout << &array[0] << endl;
	cout << *array << endl;
}
int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	cout << &array << endl;
	cout << &(array[0]) << endl;
	cout << *array << endl;

	doSomething(array);

	char name[] = "jackjack";

	cout << name << endl;	//char또한 배열의 일부이지만 전체 배열이 나옴
	cout << &name << endl;
	cout << *name << endl;

	int *ptr = array;
	cout << ptr << endl;   // array 를  ptr에 저장 (포인터(array)에 포인터를)
	cout << *ptr << endl;	// ptr에 무엇이 들었나 de-referencing -> 해당 주소를 찾아감 -> 9
	cout << &ptr << endl;	// array를 저장한 ptr의 주소

	return 0;
}