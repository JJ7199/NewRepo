#include <iostream>

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; } //기본값을 넣는 이유 : instance를 만들때 파라미터를 안넣어도됨
	int getCents() const { return m_cents; }

	//Cents operator + 에서 m_cents를 직접 access할 수 있게 함
	//Cents(c1.getCents() + c2.getCents()) -> Cents(c1.m_cents + c2.m_cents)
	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return Cents(c1.m_cents + c2.m_cents);
	}
	//friend를 쓴 것과 동일
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
};


Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents()); //class Cents를 반환
}

int main()
{
	Cents c1(6);
	Cents c2(8);

	std::cout << add(c1, c2).getCents() << std::endl; //출력 연산자가 필요해서 getCents가 필요
	std::cout << (c1+c2).getCents() << std::endl;
	return 0;
}