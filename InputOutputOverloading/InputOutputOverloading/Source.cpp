#include <iostream>
#include <fstream> //file ������� ���� ���
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0, double z = 0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void print()
	{
		cout << m_x << " " << m_y << " " << m_z << endl;
	}*/
	friend std::ostream& operator << (std::ostream &out, const Point& point)
	{
		//call (m_x, m_y, m_z) with using an instance of the class
		out << point.m_x << ", " << point.m_y << ", " << point.m_z; 

		return out;
	}//ostream �� �ֱ� ������ ���Ⱑ �����ϴ�!!!

	//const Point& point ->  Point& point why? : �Է��� �޾Ƽ� �ٲپ� �־��������
	friend std::istream& operator >> (std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;

		return in;
	}
};

int main()
{
	ofstream of("out.txt"); //file ����

	Point p1;
	Point p2;

	cin >> p1 >> p2;
	
	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl; //file�� outstream �ϱ�

	of.close(); //file �ݰ� ������


	return 0;
}