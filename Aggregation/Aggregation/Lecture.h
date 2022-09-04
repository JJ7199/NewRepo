#pragma once

#include <vector>
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;

	//포인터로 공유하면 동기화하는 효과를 가짐
	Teacher *teacher;
	std::vector<Student*> students; //주소를 가져오기 
	

public:
	Lecture(const std::string& name_in)
		:m_name(name_in)
	{}
	~Lecture()
	{

	}

	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}

	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << " Study... " << std::endl << std::endl;

		for (auto& e : students)
			(*e).setIntel((*e).getIntel() + 1);
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lec)
	{
		out << "Lecture name : " << lec.m_name << std::endl;

		out << *lec.teacher  << std::endl;

		for (auto element : lec.students)
			out << *element << std::endl;

		return out;
		return out;
	}

};