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

	//pure virtual function 부모 클래스에서는 뭘 할지 모르겠지만 자식 클래스에서는 사용해라
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
	//Animal ani("Hi"); pure virtual function이 있으므로 instance를 생성 불가능
	//pure function은 override가 강제된다.

	Cow cow("dd");


}


