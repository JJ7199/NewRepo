#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; };

	//pure virtual function �θ� Ŭ���������� �� ���� �𸣰����� �ڽ� Ŭ���������� ����ض�
	virtual void speak() const = 0;
};

//void Animal::speak() const //the body of the virtual function
//{
//	cout << m_name << " ??? " << endl;
//}

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Woof" << endl;
	}
};
class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Moooo" << endl;
	}
};

int main()
{
	//Animal ani("Hi"); pure virtual function�� �����Ƿ� instance�� ���� �Ұ���
	//pure function�� override�� �����ȴ�.

	Cow cow("dd");


}


