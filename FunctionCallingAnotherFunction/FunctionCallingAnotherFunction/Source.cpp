//progrma to demonstrate a function calling another function
#include <iostream>

//reads two input
void getInput(int& num1, int& num2);

//swap two input variables
void swapValues(int& var1, int& var2);

//order two input variables
void order(int& n1, int& n2);

//get the results
void giveResults(int output1, int output2);

int main()
{
	int num1, num2;

	getInput(num1, num2);
	order(num1, num2);
	giveResults(num1, num2);

	return 0;
}

void getInput(int& num1, int& num2)
{
	using namespace std;

	cout << "Enter Two integer : ";
	cin >> num1 >> num2;
}

void swapValues(int& var1, int& var2)
{
	int temp;

	temp = var1;
	var1 = var2;
	var2 = temp;
}

void order(int& n1, int& n2)
{
	if (n1 > n2)
		swapValues(n1, n2);
}

void giveResults(int output1, int output2)
{
	using namespace std;
	cout << "In increasing orde the numbers are ; "
		<< output1 << " " << output2 << endl;

}


