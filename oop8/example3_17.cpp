//example3_17.cpp�ļ�: ���õ�ʹ��ʾ��������ͷ�ļ�Date4.h 
#include "Date4.h"
//--------------------------------------------------------------------- 
 
Date DateA(2010, 1, 1);
Date DateB(2010, 5, 1);              //�������ι��캯��������������
 
Date &pDate;
pDate = DateA;                 //pDateΪ����DateA�ı�������ʼ�����ò������ù��캯��

 //----------------�������DateA��DateB������pDate��ֵ------------------ 
void f()
{
	DateA.Display();
	DateB.Display();
	pDate.Display();
}
 //--------------------����������---------------------------------------- 
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;               //�൱��DateA=DateB��pDate����DateA�ı�����δ�ı�ΪDateB�ı��� 
	cout << "after pDate=DateB,  DateA,DateB,pDate:" << endl;

	f();                        //�˴������DateA��DateB��pDateֵһ����� 
	pDate = Date(2010, 10, 1);  //������pDate��ֵ�����޸ģ��൱�� DateA = Date(100,200);  
	cout << "after pDate=Date(2010, 10, 1),  DateA,DateB,pDate:" << endl;

	f();                 	     //�˴������DateA��pDateֵһ����ȣ���DateB����ԭֵ 
	system("pause");
	return 0;
}