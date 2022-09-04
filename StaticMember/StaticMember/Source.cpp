#include <iostream>
using namespace std;

class Something
{
public:
	static int m_value; //static member ������ initializtion�� �� �� ����
};

int Something::m_value = 1; // static�� cpp�� ����Ǿ���� not header.

int main()
{
	cout << &Something::m_value << " " << Something::m_value << endl;
	//�޸𸮿� ����(static)���� �����ϱ⶧���� instance�� �������� �ʰ� ���ٰ���
	Something st1;
	Something st2;

	st1.m_value = 2;

	cout << &st1.m_value << " " << st1.m_value << endl;
	cout << &st2.m_value << " " << st2.m_value << endl;
	return 0;
}