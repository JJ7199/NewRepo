#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		:m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const //virtual의 역할 자식 클래스의 것인 거처럼 역할을 수행함 : 다형성!!!
	{
		cout << m_name << " ???" << endl;
	}

};

class Cat :public Animal
{
public:
	Cat(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow" << endl;
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
		cout << m_name << " Woof " << endl;
	}
};

int main()
{
	//Animal animal("my aniaml");

	//Cat cat("my cat");
	//Dog dog("my dog");

	//animal.speak();
	//cat.speak();
	//dog.speak();

	//Animal* ptr_aniaml1 = &cat;
	//Animal* ptr_aniaml2 = &dog;

	//ptr_aniaml1->speak();
	//ptr_aniaml2->speak(); //자기 자신이 부모 클래스인 줄 암

	Cat cats[] = {Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5")};
	Dog dog[] = { Dog("dog1"), Dog("dog2") };

	for (int i = 0; i < 5; ++i)
		cats[i].speak();

	for (int i = 0; i < 2; ++i)
		dog[i].speak();

	Animal* my_animal[] = { &cats[0], &cats[1], &cats[2],&cats[3],&cats[4],&dog[0], &dog[1] };

	for (int i = 0; i < 7; ++i)
		my_animal[i]->speak();

	return 0;
}