#include"hm8_3.h"
#include<iostream>
using namespace std;
int main()
{
	double a = 3;
	double b = 9;
	Point array_stack[3] = { Point(),Point(1,3),Point(array_stack[1]) };
	Point *array_heap = new Point[3];
	array_heap[0] = Point();
	array_heap[1] = Point(2, 4);
	array_heap[2] = Point(array_heap[1]);
	for (int i = 0; i < 3; i++)
	{
		cout << "横坐标：" << array_stack[i].GetX() << endl;
		cout << "纵坐标：" << array_stack[i].GetY() << endl;
		cout << "横坐标：" << array_heap[i].GetX() << endl;
		cout << "纵坐标：" << array_heap[i].GetY() << endl;
	}
	
	array_stack[1].SetX(3);
	array_stack[1].SetY(6);
	array_stack[1].SwapAxis(a,b);

	cout <<"两点间距离："<< GetLength(array_stack[1], array_heap[1])<< endl;
	delete[]array_heap;
	system("pause");
	return 0;
}