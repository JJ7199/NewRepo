#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } //오버라이딩된 함수가 호출됨
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
};

int main()
{
	A a;

	B b;

	C c;

	D d;

	A& ref = c; //A인거처럼 작동 clas A에 ref를 두었기때문에 (포인터로해도 같음)
	ref.print();




	return 0;
}