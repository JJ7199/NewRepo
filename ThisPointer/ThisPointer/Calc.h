#pragma once

#include<iostream>
//��� ���Ͽ��� using namespace ���ϴ°� ���� 
//why? include �Ǵ� ���� namespace ������ ����

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);
	// return *this; �ڱ� �ڽ��� de_referencing �Ѱ� ��ȯ
	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	void print();
};