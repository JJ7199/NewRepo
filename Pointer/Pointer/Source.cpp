#include <iostream>

using namespace std;

int main()
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl;  //& : address of operator
	cout << (int)&x << endl;

	// de-reference operator 

	cout << *(&x) << endl; // & : x�� �ּҷ� ���ٰ� * : ���� �鿩�� �� -> &�� * �� ������ �Ҹ��ϴ°�ó�� ����

	int *ptr_x = &x;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;




	
	return 0;
}