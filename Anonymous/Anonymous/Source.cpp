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

	A(1).print(); // R valueó�� ���� ����ٰ� �ٷ� �����

	

	/*
	A().print(); //���� �Ұ�
	A().print(); //���ο� ��ü�� �������
	*/
	return 0;
}