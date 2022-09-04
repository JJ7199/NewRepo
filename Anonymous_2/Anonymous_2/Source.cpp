#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; } // m_cents를 바꾸지 않는 함수여서 const 사용
};

//Cents 클래스를 return 해주는 함수
Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}


int main()
{
	// add가 Cents를 return해주기때문에 getCents사용 가능
	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}

// casting 과의 유사점