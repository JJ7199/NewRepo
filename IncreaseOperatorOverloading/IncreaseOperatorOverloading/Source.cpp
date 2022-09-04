#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0)
		:m_digit(digit)
	{}

	//prefix
	Digit& operator ++ ()
	{
		++m_digit;
		return *this; //�ڱ� �ڽ�(dereferencing)�� return �Ѵ�
	}

	//post�� ���� �ȿ� �ƹ��ų� �ֱ�
	//reference�� ���������� return�� �� ���� 
	//local variable�� end function�� �Բ� ���������
	//referencing�� �� �� ����.
	Digit operator ++ (int)
	{
		Digit temp(m_digit);

		++(*this);

		return temp;
	}

	friend ostream& operator << (ostream& out, const Digit& digit)
	{
		out << digit.m_digit;

		return out;
	}
};

int main()
{
	Digit d(10);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}