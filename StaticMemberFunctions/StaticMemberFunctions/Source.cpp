#include <iostream>
using namespace std;

class Something
{
public:
	class _init //inner class
	{
	public:
		_init()
		{
			s_value = 1234; // static 변수 초기화 가능 (간접적으로(
		}
	};

private:
	static int s_value; //static member 변수는 initializtion을 할 수 없음
	static _init s_initializer;//inner class 선언

public:
	static int getValue()
	{
		return s_value;
	}
};

int Something::s_value; // static은 cpp에 선언되어야함 not header.
Something::_init Something::s_initializer;//inner class instance 정의

int main()
{
	//cout << Something::s_value << endl;
	//메모리에 정적(static)으로 존재하기때문에 instance를 생성하지 않고도 접근가능 // s_value가 private이면 접근 불가
	cout << Something::getValue() << endl;
	Something st1;
	

	cout << st1.getValue() << endl;
	//cout << st1.s_value << endl; // s_value가 private이면 접근 불가
	
	
	return 0;
}

//static function 주의점 this pointer 못씀

