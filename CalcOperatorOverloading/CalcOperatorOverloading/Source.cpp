#include <iostream>

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; } //�⺻���� �ִ� ���� : instance�� ���鶧 �Ķ���͸� �ȳ־��
	int getCents() const { return m_cents; }

	//Cents operator + ���� m_cents�� ���� access�� �� �ְ� ��
	//Cents(c1.getCents() + c2.getCents()) -> Cents(c1.m_cents + c2.m_cents)
	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return Cents(c1.m_cents + c2.m_cents);
	}
	//friend�� �� �Ͱ� ����
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
};


Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents()); //class Cents�� ��ȯ
}

int main()
{
	Cents c1(6);
	Cents c2(8);

	std::cout << add(c1, c2).getCents() << std::endl; //��� �����ڰ� �ʿ��ؼ� getCents�� �ʿ�
	std::cout << (c1+c2).getCents() << std::endl;
	return 0;
}