#include "Calc.h"

inline Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc& Calc::add(int value) //add라는 function이 Calc의 member이다.
{ 
	m_value += value;
	return *this; // return *this; 자기 자신을 de_referencing 한걸 반환
}

Calc& Calc::sub(int value)
{ 
	m_value -= value;
	return *this; 
}

Calc& Calc::mult(int value) 
{ 
	m_value *= value;
	return *this;
}

inline void Calc::print()
{
	using namespace std;

	cout << m_value << endl;
}
