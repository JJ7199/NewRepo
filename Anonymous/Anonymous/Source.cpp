#include <iostream>

using namespace std;

class A
{
private:
	const int m_value;

public:
	A(const int& input)
		: m_value(input)
	{
		cout << "constructor" << endl;
	}
	~A()
	{
		cout << "destructor" << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A a(1);
	a.print();

	A(1).print(); // R value처럼 사용됨 생겼다가 바로 사라짐

	

	/*
	A().print(); //재사용 불가
	A().print(); //새로운 개체가 만들어짐
	*/
	return 0;
}