#include <iostream>
#include <cstddef>

void doSomething(double* ptr)// memory ���� �ٽ� ���簡 ��
{
	std::cout << "address of pointer variable in doSomething " << &ptr << std::endl;

	if (ptr != nullptr)
	{
		std::cout << *ptr << std::endl;
	}
	else
	{
		std::cout << "Null ptr, do nothing" << std::endl;
	}
}
int main()
{
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	ptr = &d;

	doSomething(&d);
	doSomething(ptr);


	std::nullptr_t nptr; //null pointer �� ����ϴ� ���

	std::cout << "address of pointer variable in main " << &ptr << std::endl;

	return 0;
	
}