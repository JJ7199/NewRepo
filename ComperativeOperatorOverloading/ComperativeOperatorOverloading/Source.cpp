#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
		:m_cents(cents)
	{}

	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; } //return a reference of the m_cents(address) -> using like setCents

	Cents operator - () const //단항연산자 오버로딩
	{
		return Cents(-m_cents);
	}

	bool operator !() const//단항연산자 오버로딩
	{
		return (m_cents == 0) ? true : false;
	}
	bool operator == (const Cents& c2) //비교연산자 오버로딩 
	{
		return this->m_cents == c2.m_cents;
	}

	bool operator < (const Cents& c2) //sorting할 때는 < 가 필요함
	{
		return this->m_cents < c2.m_cents;
	}

	friend bool operator == (const Cents& c1, const Cents& c2) //비교연산자 오버로딩 with friend
	{
		return c1.m_cents == c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;

		return out;
	}
};

int main()
{
	/* 비교연산자 예제
	Cents c1(6);
	Cents c2(5);
	c1.getCents() = 5;

	cout << c1 << endl;

	if (c1 == c2)
		cout << "equal" << endl;

	cout << std::boolalpha;*/ 

	vector<Cents> arr(20);
	
	srand(time(0)); //시드를 바꿔 full random

	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	//sorting

	sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;


	return 0;
}