#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; } // m_cents�� �ٲ��� �ʴ� �Լ����� const ���
};

//Cents Ŭ������ return ���ִ� �Լ�
Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}


int main()
{
	// add�� Cents�� return���ֱ⶧���� getCents��� ����
	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}

// casting ���� ������