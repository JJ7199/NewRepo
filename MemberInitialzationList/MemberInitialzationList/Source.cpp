#include <iostream>
using namespace std;

class Something
{
private:
	int		m_i;
	double	m_d;
	char	m_c;

public:
	Something()
		: m_i(1), m_d(3.14), m_c('a')
	{

	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
	}
};

int main()
{
	Something som;
	som.print();
}