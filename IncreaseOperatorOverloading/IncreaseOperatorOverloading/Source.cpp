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
		return *this; //자기 자신(dereferencing)을 return 한다
	}

	//post일 때는 안에 아무거나 넣기
	//reference는 지역변수를 return할 수 없다 
	//local variable은 end function과 함께 사라짐으로
	//referencing을 할 수 없다.
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