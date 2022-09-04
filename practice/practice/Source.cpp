#include <iostream>
using namespace std;


int& function(const int& a, const int& b)
{
	int temp;
	temp = a + b;

	return temp;
}

int main()
{
	int* ptr_num = &function(8, 9);
	int* ptr;

	return 0;
}