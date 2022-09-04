#include <iostream>

using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
	cout << &x << endl;
	// 파라미터에 포인터로 넣으면 변수의 복사가 일어나지만 reference로 넣으면 변수의 복사가 일어나지 않음
}
void doSomething_1(int* x)
{
	cout << "pointer : " << x << endl;
	cout << "pointer adress : " << &x << endl;
}
int main()
{
	int x = 5;
	int& ref_x = x;

	int* ptr = &x;

	const int &ref = 3;
	doSomething(3);
	doSomething_1(ptr);
	
	cout << ptr << endl;
	cout << &ptr << endl;

	return 0;
}