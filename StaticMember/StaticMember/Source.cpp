#include <iostream>
using namespace std;

class Something
{
public:
	static int m_value; //static member 변수는 initializtion을 할 수 없음
};

int Something::m_value = 1; // static은 cpp에 선언되어야함 not header.

int main()
{
	cout << &Something::m_value << " " << Something::m_value << endl;
	//메모리에 정적(static)으로 존재하기때문에 instance를 생성하지 않고도 접근가능
	Something st1;
	Something st2;

	st1.m_value = 2;

	cout << &st1.m_value << " " << st1.m_value << endl;
	cout << &st2.m_value << " " << st2.m_value << endl;
	return 0;
}