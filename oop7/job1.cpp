#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1415926;

//-------------------类的声明-------------------
class sphere
{

private:
	double radius;

public:
	sphere();
	sphere(double r);
	sphere(const sphere& other);

	~sphere();

	double surfaceArea();
	double volumeSpace();
	void display();

};

//-----------类的实现（构造函数+析构函数）---------
sphere::sphere()
{
	cout << "++无参构造函数被自动调用++" << endl;
}

sphere::sphere(double r)
{
	cout << "++有参构造函数被自动调用++" << endl;
	this->radius = r;

}

sphere::sphere(const sphere &r)
{
	cout << "++拷贝构造函数被自动调用++" << endl;

	this->radius = r.radius;

}

sphere::~sphere()
{
	cout << "--析构函数被自动调用--" << endl;
}


//------------类的实现（普通函数）-------------
double sphere::surfaceArea()
{

	double s = 4 * pi*pow(radius, 2);

	return s;

}

double sphere::volumeSpace()
{
	double v = 4.0 / 3 * pi*pow(radius, 3);


	return v;

}

void sphere::display()
{
	cout << "**********球体的统计信息**********" << endl;

	cout << "半径：" << radius << "表面积：" << surfaceArea() << "球体积：" << volumeSpace() << endl;

}

//------------------其他函数------------------
sphere function_1(sphere t)
{
	sphere s = t;

	return  s;

}

sphere& function_2(sphere& t)
{
	sphere s(t);

	return  t;

}

//=================主函数===================

int main()
{

	sphere Earth;

	sphere Mars(3.398);

	sphere Venus(Mars);

	sphere Saturn = Venus;

	Saturn = Mars;

	sphere *p = new sphere(2.44);


	Earth = function_1(Mars);

	Earth = function_2(Venus);

	Earth.display();

	p->display();

	delete p;

	system("pause");

}