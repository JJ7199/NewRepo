#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } //오버라이딩된 함수가 호출됨 파라미터가 다르면 안됨
};

class B : public A
{
public:
	void print() override { cout << "B" << endl; } //override된거라고 명명
};

class C : public B
{
public:
	void print() final { cout << "C" << endl; } //voerride 막음
};

class D : public C
{
public:
	void print1() { cout << "D" << endl; }
};

int main()
{
	A a;

	B b;

	C c;

	D d;

	A& ref = b; //A인거처럼 작동 clas A에 ref를 두었기때문에 (포인터로해도 같음)
	ref.print(1);




	return 0;
}