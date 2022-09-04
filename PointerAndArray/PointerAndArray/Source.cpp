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

	cout << name << endl;	//char���� �迭�� �Ϻ������� ��ü �迭�� ����
	cout << &name << endl;
	cout << *name << endl;

	int *ptr = array;
	cout << ptr << endl;   // array ��  ptr�� ���� (������(array)�� �����͸�)
	cout << *ptr << endl;	// ptr�� ������ ����� de-referencing -> �ش� �ּҸ� ã�ư� -> 9
	cout << &ptr << endl;	// array�� ������ ptr�� �ּ�

	return 0;
}