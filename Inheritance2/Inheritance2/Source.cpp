#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("Jack jack");
	std.setName("JJ");
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr. J");
	teacher1.setName("Dr.S");

	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
}