#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10];

public:
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}
	int* getlist() //array 자체가 포인터임
	{
		return m_list;
	}*/

	int& operator [] (const int index) 
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}// reference로 return 해주는 이유 : 읽어들인 값을 읽고 값을 바꿔주기 위해
	//즉 m_list[]는 항상 주소를 가지고 있는 lvalue여야 함으로!

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}//const list를 읽는 참조 연산자 오버로딩
	//괄호 전에 const는 member를 바꾸지 않겠다는 의지
	
};

int main()
{
	IntList my_list;
	my_list[100] = 10;

	cout << my_list[100] << endl;
	/*my_list.setItem(3, 1);

	cout << my_list.getItem(3) << endl;

	my_list.getlist()[3] = 4;

	cout << my_list.getItem(3) << endl;*/

	return 0;
}