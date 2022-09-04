#include <iostream>
using namespace std;

class Base
{
public:
	void func1() { cout << "Base_func1" << endl; }; //�������� function pointer�� ���İ��� ����
	virtual void func2() { cout << "Base_func2" << endl; };
};

class Der : public Base
{
public:
	virtual void func1() { cout << "Der_func1" << endl; };
	void func2() { cout << "Der_func2" << endl; };
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;
	Der d;
	Base b;
	Base* ptr_b = &d; //�ڽ� class ��ô�ϴ� �θ� Ŭ����
	(*ptr_b).func1();
	(*ptr_b).func2();

	cout << typeid(b).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(ptr_b).name() << endl;
	cout << typeid(*ptr_b).name() << endl;
}