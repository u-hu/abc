#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	double x, y;
public:
	Point(); 
	Point(double a, double b);
	Point(const Point& r);
	~Point();
	double GetX();                                   
	double GetY();                                   
	void SetX(double ax);                            
	void SetY(double bx);                            
	void SwapAxis(double &xa,double &yb);           
	friend double GetLength(Point& A, Point& B);    
};
Point::Point()
{
	cout << "�޲ι��캯��������" << endl;
	x = 0;
	y = 0;
}
Point::Point(double a, double b)
{
	cout << "�вι��캯��������" << endl;
	x = a;
	y = b;
}
Point::Point(const Point& r)
{
	cout << "�������캯��������" << endl;
	x = r.x;
	y = r.y;
}
Point::~Point()
{
	cout << "��������������" << endl;
}
double Point::GetX()
{
	return x;
}
double Point::GetY()
{
	return y;
}
void Point::SetX(double ax)
{
	x = ax;
}
void Point::SetY(double by)
{
	y = by;
}
void Point::SwapAxis(double &xa, double &yb)
{
	x = xa;
	y = yb;
}
double GetLength(Point &A, Point &B)
{
	double length = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
	return length;
}