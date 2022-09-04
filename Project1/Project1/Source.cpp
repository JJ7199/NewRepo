#include <iostream>

using namespace std;

int main()
{
	//int monster[10000000]; //static으로 할당시 stack 에 들어감

	int* ptr = new (std::nothrow) int{7}; // var = 7

	if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	delete ptr; //메모리 반납
	ptr = nullptr;// delete ptr과 같이 다님

	cout << "after delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;

	}
		
	return 0;
}

