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
	int* getlist() //array ��ü�� ��������
	{
		return m_list;
	}*/

	int& operator [] (const int index) 
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}// reference�� return ���ִ� ���� : �о���� ���� �а� ���� �ٲ��ֱ� ����
	//�� m_list[]�� �׻� �ּҸ� ������ �ִ� lvalue���� ������!

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}//const list�� �д� ���� ������ �����ε�
	//��ȣ ���� const�� member�� �ٲ��� �ʰڴٴ� ����
	
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