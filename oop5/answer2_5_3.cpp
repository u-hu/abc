#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int a=0,b=0,i;
	cout << "�����룺";
	ptr = new int[20];
	for (i = 0; i < 20; i++)
	{
		
		cin >> ptr[i];
		if (ptr[i] < 0)
			a++;
		if (ptr[i] > 0)
			b++;
	}
	cout << "��������Ϊ��" << a << endl;
	cout << "��������Ϊ��" << b << endl;
	delete[]ptr;
	system("pause");
	return 0;
}