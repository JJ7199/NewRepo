#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } //�������̵��� �Լ��� ȣ��� �Ķ���Ͱ� �ٸ��� �ȵ�
};

class B : public A
{
public:
	void print() override { cout << "B" << endl; } //override�ȰŶ�� ���
};

class C : public B
{
public:
	void print() final { cout << "C" << endl; } //voerride ����
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

	A& ref = b; //A�ΰ�ó�� �۵� clas A�� ref�� �ξ��⶧���� (�����ͷ��ص� ����)
	ref.print(1);




	return 0;
}