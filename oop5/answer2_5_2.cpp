#include<iostream>
using namespace std;
const double PI = 3.14;
int main()
{
	int r;
	double l, s;
	cout << "请输入圆的半径r=";
	cin >> r;
	l = 2 *PI *r;
	s = PI * r*r;
	cout << "请输出圆的周长l=" << l << "和面积s=" << s << endl;
	system("pause");
	return 0;

}