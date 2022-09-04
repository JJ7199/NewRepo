#include <iostream>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& num_in, const int& den_in) // constructor : ������ �Ϸ��� ����� �ƴ� ...�ڵ� ����...
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
	Fraction frac(1,3); // constructor�� parameter�� ������ () ����

	frac.print();

	return 0;
}