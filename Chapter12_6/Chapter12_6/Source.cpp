#include <iostream>
using namespace std;

class Base
{
public:
	void func1() { cout << "Base_func1" << endl; }; //포인터임 function pointer를 거쳐가는 형식
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
	Base* ptr_b = &d; //자식 class 인척하는 부모 클래스
	(*ptr_b).func1();
	(*ptr_b).func2();

	cout << typeid(b).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(ptr_b).name() << endl;
	cout << typeid(*ptr_b).name() << endl;
}