#include <iostream>

using namespace std;

int main()
{
	//int monster[10000000]; //static���� �Ҵ�� stack �� ��

	int* ptr = new (std::nothrow) int{7}; // var = 7

	if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	delete ptr; //�޸� �ݳ�
	ptr = nullptr;// delete ptr�� ���� �ٴ�

	cout << "after delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;

	}
		
	return 0;
}

