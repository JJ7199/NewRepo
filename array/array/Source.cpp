#include <iostream>
using namespace std;

int main()
{
	int num_students;

	cin >> num_students;

	int* students_scores;

	students_scores = new int[num_students];

	for (int i = 0; i < num_students; i++)
	{
		students_scores[i] = i;
		cout <<(long long) & students_scores[i] << " / " << students_scores[i] << endl;
	}

	
}