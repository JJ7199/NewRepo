#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Frined : name, address, age, height, weight....
class Friend
{
public:
	string m_name;
	string m_address;
	int age;
	double height;
	double weight;

	void print()
	{
		cout << m_name << " " << m_address << " " << age << " " << height << " " << weight << endl;
	}
};

int main()
{

	Friend jj{ "jack jack", "uptown", 33, 176, 68 };

	jj.print();

	vector<Friend> my_freinds;
	my_freinds.resize(2);


	return 0;
}