#include <iostream>
using namespace std;

class Something
{
public:
	class _init //inner class
	{
	public:
		_init()
		{
			s_value = 1234; // static ���� �ʱ�ȭ ���� (����������(
		}
	};

private:
	static int s_value; //static member ������ initializtion�� �� �� ����
	static _init s_initializer;//inner class ����

public:
	static int getValue()
	{
		return s_value;
	}
};

int Something::s_value; // static�� cpp�� ����Ǿ���� not header.
Something::_init Something::s_initializer;//inner class instance ����

int main()
{
	//cout << Something::s_value << endl;
	//�޸𸮿� ����(static)���� �����ϱ⶧���� instance�� �������� �ʰ� ���ٰ��� // s_value�� private�̸� ���� �Ұ�
	cout << Something::getValue() << endl;
	Something st1;
	

	cout << st1.getValue() << endl;
	//cout << st1.s_value << endl; // s_value�� private�̸� ���� �Ұ�
	
	
	return 0;
}

//static function ������ this pointer ����

