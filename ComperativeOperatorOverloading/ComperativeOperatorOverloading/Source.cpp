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

	Cents operator - () const //���׿����� �����ε�
	{
		return Cents(-m_cents);
	}

	bool operator !() const//���׿����� �����ε�
	{
		return (m_cents == 0) ? true : false;
	}
	bool operator == (const Cents& c2) //�񱳿����� �����ε� 
	{
		return this->m_cents == c2.m_cents;
	}

	bool operator < (const Cents& c2) //sorting�� ���� < �� �ʿ���
	{
		return this->m_cents < c2.m_cents;
	}

	friend bool operator == (const Cents& c1, const Cents& c2) //�񱳿����� �����ε� with friend
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
	/* �񱳿����� ����
	Cents c1(6);
	Cents c2(5);
	c1.getCents() = 5;

	cout << c1 << endl;

	if (c1 == c2)
		cout << "equal" << endl;

	cout << std::boolalpha;*/ 

	vector<Cents> arr(20);
	
	srand(time(0)); //�õ带 �ٲ� full random

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