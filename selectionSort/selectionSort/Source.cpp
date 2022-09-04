#include <iostream>

using namespace std;

void printArray(const int array[], int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << array[index] << " ";
	}

	cout << endl;
}

void selectionSort(int array[], int length)
{
	for (int index = 0; index < length; index++)
	{
		int smallestIndex = index;
		for (int i = index + 1; i < length; i++)
		{
			smallestIndex = (array[smallestIndex] > array[i]) ? i : smallestIndex;
		}
		//swap two values in the array
		int temp = array[smallestIndex];
		array[smallestIndex] = array[index];
		array[index] = temp;
	}
}

int main()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	
	printArray(array, length);
	
	selectionSort(array, length);

	printArray(array, length);
}