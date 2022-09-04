#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } //�������̵��� �Լ��� ȣ���
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

	A& ref = c; //A�ΰ�ó�� �۵� clas A�� ref�� �ξ��⶧���� (�����ͷ��ص� ����)
	ref.print();




	return 0;
}