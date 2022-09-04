#include <iostream>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& num_in, const int& den_in) // constructor : 실행을 하려고 만든게 아님 ...자동 실행...
	{
		m_numerator = num_in;
		m_denominator = den_in;
		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{
	Fraction frac(1,3); // constructor에 parameter가 없으면 () 생략

	frac.print();

	return 0;
}