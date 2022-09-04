#pragma once

#include<iostream>
//헤더 파일에는 using namespace 안하는게 좋음 
//why? include 되는 모든게 namespace 영향을 받음

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);
	// return *this; 자기 자신을 de_referencing 한걸 반환
	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	void print();
};