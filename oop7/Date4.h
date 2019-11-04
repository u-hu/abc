//date4.h:�й��졢�������졢����������������� 
#include <iostream>

using namespace std;
//---------------------��������������붨�塿--------------------------------- 
class Date
{
private:
	int year, month, day;     			//���ݳ�ԱĬ��Ϊ��˽������ 
public:                                //��һ��Ϊ��ͨ���캯������ 

	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date); 			//�������캯������ 
	~Date();
	int  GetYear();
	int  GetMonth();
	int  GetDay();
	void  Display();                   //��ͨ��Ա������������ݳ�Ա��ֵ 
};
//---------------------���캯����������������--------------------------------- 
Date::Date(int y, int m, int d)  		 //��ͨ�вι��캯���Ķ��� 
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}


Date::Date(const Date &date)		     //�������캯���Ķ��� 
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}


Date::~Date()
{
	cout << "Destructor called.\n";
	getchar();
}
//-------------------��ͨ�����Ķ���----------------------------------------- 
int Date::GetYear()                   //���г�Ա��������ȡyear����ֵ 
{
	return year;
}
int Date::GetMonth()                  //���г�Ա��������ȡmonth����ֵ 
{
	return month;
}
int Date::GetDay()                    //���г�Ա��������ȡday����ֵ 
{
	return day;
}
void Date::Display()           		//��������Ķ��� 
{
	cout << year << "-" << month << "-" << day << endl;
}