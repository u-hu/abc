//example_3_5.cpp��Բ�������ʽ��Ӧ�þ��� 
 #include"Date1.h"
 int main()
 {
	 	 Date today, *t;
	     today.SetDate(2006, 10, 17);      		//ͨ��������Բ����ʽ���ʳ�Ա���� 
	     cout << "One day is:";
		 cout << today.GetDay() << "-" << today.GetMonth() << "-" << today.GetYear() << endl;               			//������ڵ���Ϣ 
	     t = &today;
	     (*t).SetDate(2007, 12, 18);       		//ͨ��ָ����Բ����ʽ���ʳ�Ա���� 
	     cout << "the other day is:";
	     (*t).Display();                			//������ڵ���Ϣ 
		 system("pause");
	 	 return 0;
	 }