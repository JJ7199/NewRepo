#include <iostream>
using namespace std;

void countDown(int count) //recursion�� �� ��� ���� ������ �� ���� ���־����
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}
int fibonacci(int num)
{
	if (num == 1) return 0;

	else if (num == 2) return 1;


}

int main()
{
	
	cout << sumTo(5) << endl;;
	return 0;
}