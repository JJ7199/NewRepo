#include <iostream>
#include <fstream> //file 입출력을 위한 헤더
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
	}//ostream 이 있기 때문에 연쇄가 가능하다!!!

	//const Point& point ->  Point& point why? : 입력을 받아서 바꾸어 주어야함으로
	friend std::istream& operator >> (std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;

		return in;
	}
};

int main()
{
	ofstream of("out.txt"); //file 생성

	Point p1;
	Point p2;

	cin >> p1 >> p2;
	
	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl; //file에 outstream 하기

	of.close(); //file 닫고 나가기


	return 0;
}