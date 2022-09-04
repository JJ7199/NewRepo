#include <iostream>
#include <array>
using namespace std;

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}


bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}


int func()
{
	return 5;
}

int goo()
{
	return 9;
}

void printNumbers(const array<int, 10>& my_array, bool(*check_fcn)(const int&))
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true)
		{ 
			cout << element;
		}
	}
	cout << endl;
}
int main()
{
	//int(*fcnptr)() = func; // 함수의 주소를 가져옴(func 만 치기)-> 함수 포인터

	//cout << fcnptr() << endl;

	//fcnptr = goo;

	//cout << fcnptr() << endl;
	array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printNumbers(my_array, isEven);
	printNumbers(my_array, isOdd);

	return 0;
}