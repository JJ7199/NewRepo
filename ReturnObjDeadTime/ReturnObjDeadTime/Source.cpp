#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:

	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New copy: " << this << endl;
	}

	~SoSimple()
	{
		cout << "Destroy Obj" << this << endl;
	}
};

SoSimple SimpleFunctionObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl; //파라미터의 어드레스
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunctionObj(obj);

	cout << endl;

	SoSimple tempRef = SimpleFunctionObj(obj);
	cout << "return Obj " << &tempRef << endl;
	
	return 0;

}