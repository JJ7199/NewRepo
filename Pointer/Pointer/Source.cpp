#include <iostream>

using namespace std;

int main()
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl;  //& : address of operator
	cout << (int)&x << endl;

	// de-reference operator 

	cout << *(&x) << endl; // & : x의 주소로 갔다가 * : 직접 들여다 봄 -> &와 * 가 만나면 소멸하는거처럼 보임

	int *ptr_x = &x;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;




	
	return 0;
}