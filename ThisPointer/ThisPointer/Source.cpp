/*this �� class�� �ּҸ� ��Ÿ���⵵�� : ���̽��� self�͵� ����(�ڱ��ڽ��� ����Ŵ)
	operator�� ( -> )�� ����ü�� Ŭ������ ���� �Ҵ��� ��ü�� public���� �����
	member_variable or memeber_func�� �����ϱ����� operator�̴�*/
#include <iostream>

using namespace std;

#include "Calc.h"

int main()
{
	Calc cal(10);

	cal.add(10).sub(1).mult(2).print(); //chainning_member_functions ���� ȣ��
	/*Calc cal(10);

	cal.add(10);
	cal.sub(1);
	cal.mult(2);

	cal.print();*/
}