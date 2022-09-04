#pragma once

#include <vector>
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;

	//�����ͷ� �����ϸ� ����ȭ�ϴ� ȿ���� ����
	Teacher *teacher;
	std::vector<Student*> students; //�ּҸ� �������� 
	

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