#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{	
	srand(time(NULL));
	
	//int die = (rand() % 6) + 1;
	
	for (int i = 0; i < 10; i++)
	{
		int die = (rand() % 6) + 1;
		cout << die << endl;
	}
	system("pause");
	return 0;
}