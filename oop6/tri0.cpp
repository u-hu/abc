#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{

private:
	float a, b, c;

public:
	void SetTriangle(float x, float y, float z);
	int Judge();
	float Perimeter();
	float Area();
	void Sort();
	void Display();
};

void Triangle::SetTriangle(float x, float y, float z)
{
	a = x;
	b = y;
	c = z;
}
//初始化

int Triangle::Judge()
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
		return 1;
	else
		return 0;

}
//能否构成三角形

float Triangle::Perimeter()
{
	return (a + b + c);
}
//周长

float Triangle::Area()
{
	float p;
	p = (a + b + c) / 2;
	return(sqrt(p*(p - a)*(p - b)*(p - c)));
}
//面积

void Triangle::Sort()
{
	float t,p;
	if (a > c)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		t = a;
		a = c;
		c = t;
	}
	p = a * a + b * b - c * c;
	if (p > 0)
		cout << "这是一个锐角三角形" << endl;
	if (p == 0)
		cout << "这是一个直角三角形" << endl;
	if (p < 0)
		cout << "这是一个钝角三角形" << endl;
}
//类型

void Triangle::Display()
{
	//cout<<sizeof((malloc));
	cout << "调用该函数的对象的this指针是：";
	cout << this << endl;
	cout << "当前对象a成员的起始地址：";
	cout << &this->a << endl;
	cout << "当前对象b成员的起始地址：";
	cout << &this->b << endl;
	cout << "当前对象c成员的起始地址：";
	cout << &this->c << endl;
}
int main()
{
	Triangle tri1;
	float x, y, z;
	cout << "请输入三角形的三条边：";
	cin >> x >> y >> z;
	tri1.SetTriangle(x, y, z);
	if (tri1.Judge() == 0)
	{
		cout << "此三边不能构成三角形" << endl;
	}
	else
	{
		cout << "此三边能构成三角形" << endl;
		cout << "此三角形的周长是：" << tri1.Perimeter() << endl;
		cout << "此三角形的面积是：" << tri1.Area() << endl;
		tri1.Sort();
	}
	cout << "tri1字节大小："<<sizeof(tri1) << endl;
	tri1.Display();
	Triangle tri2;
	tri2.SetTriangle(6, 8, 10);
	tri2.Display();
	system("pause"); 
	return 0;
}

