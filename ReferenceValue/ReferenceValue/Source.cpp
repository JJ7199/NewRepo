#include <iostream>

using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
	cout << &x << endl;
	// �Ķ���Ϳ� �����ͷ� ������ ������ ���簡 �Ͼ���� reference�� ������ ������ ���簡 �Ͼ�� ����
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