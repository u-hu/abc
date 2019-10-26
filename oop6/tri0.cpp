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
//��ʼ��

int Triangle::Judge()
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
		return 1;
	else
		return 0;

}
//�ܷ񹹳�������

float Triangle::Perimeter()
{
	return (a + b + c);
}
//�ܳ�

float Triangle::Area()
{
	float p;
	p = (a + b + c) / 2;
	return(sqrt(p*(p - a)*(p - b)*(p - c)));
}
//���

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
		cout << "����һ�����������" << endl;
	if (p == 0)
		cout << "����һ��ֱ��������" << endl;
	if (p < 0)
		cout << "����һ���۽�������" << endl;
}
//����

void Triangle::Display()
{
	//cout<<sizeof((malloc));
	cout << "���øú����Ķ����thisָ���ǣ�";
	cout << this << endl;
	cout << "��ǰ����a��Ա����ʼ��ַ��";
	cout << &this->a << endl;
	cout << "��ǰ����b��Ա����ʼ��ַ��";
	cout << &this->b << endl;
	cout << "��ǰ����c��Ա����ʼ��ַ��";
	cout << &this->c << endl;
}
int main()
{
	Triangle tri1;
	float x, y, z;
	cout << "�����������ε������ߣ�";
	cin >> x >> y >> z;
	tri1.SetTriangle(x, y, z);
	if (tri1.Judge() == 0)
	{
		cout << "�����߲��ܹ���������" << endl;
	}
	else
	{
		cout << "�������ܹ���������" << endl;
		cout << "�������ε��ܳ��ǣ�" << tri1.Perimeter() << endl;
		cout << "�������ε�����ǣ�" << tri1.Area() << endl;
		tri1.Sort();
	}
	cout << "tri1�ֽڴ�С��"<<sizeof(tri1) << endl;
	tri1.Display();
	Triangle tri2;
	tri2.SetTriangle(6, 8, 10);
	tri2.Display();
	system("pause"); 
	return 0;
}

