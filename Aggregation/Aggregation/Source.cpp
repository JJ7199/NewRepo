#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main()
{
	using namespace std;

	Student *st1 = new Student("JJ", 0);
	Student *st2 = new Student("SS", 0);
	Student *st3 = new Student("AA", 1);

	Teacher *teacher = new Teacher("prof.Hong");
	Teacher *teacher1 = new Teacher("prof.k");

	Lecture lec1("Intruduction to computer Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(st1);
	lec1.registerStudent(st2);
	lec1.registerStudent(st3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher);
	lec2.registerStudent(st2);

	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}
	delete st1;
	delete st2;
	delete st3;

	delete teacher;
	delete teacher1;
	return 0;
}