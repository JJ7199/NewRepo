/*this 는 class의 주소를 나타내기도함 : 파이썬의 self와도 같음(자기자신을 가르킴)
	operator중 ( -> )은 구조체나 클래스를 동적 할당한 개체가 public으로 선언된
	member_variable or memeber_func에 접근하기위한 operator이다*/
#include <iostream>

using namespace std;

#include "Calc.h"

int main()
{
	Calc cal(10);

	cal.add(10).sub(1).mult(2).print(); //chainning_member_functions 연쇄 호출
	/*Calc cal(10);

	cal.add(10);
	cal.sub(1);
	cal.mult(2);

	cal.print();*/
}