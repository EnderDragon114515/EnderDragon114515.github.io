#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	system("title AEOS Loader v1.4");
	system("cls");
	cout<<"AEOS Loader v1.4"<<endl;
	cout<<"==================="<<endl;
	cout<<"ѡ�����ϵͳ:"<<endl;
	cout<<"1.AEOS Server v1.4"<<endl;
	char input;
	input=_getch();
	if(input=='1')
	{
		system("color 1f");
		system("cls");
		cout<<"AEOS Server v1.4"<<endl;
		cout<<"(C)Copyright 2022~2023 LF5 Synergies"<<endl;
		cout<<"Detected Windows NT 7.1 or higher excuting"<<endl;
		cout<<"Loading Core Service";
		for(int i=1;i<=25;i++)
		{
			_sleep(100);
			cout<<". ";
		}
		system("color 0f");
		system("cls");
		system("title AEOS Server v1.4");
		cout<<"�밴��Ctrl+L��½AEOS..."<<endl;
		while(1)
		{
			int a=_getch();
			if(a==12)
			{
				break;
			} 
		}
		while(1)
		{
			system("cls");
			cout<<"��½AEOS"<<endl;
			cout<<"==========="<<endl;
			cout<<"�û���:";
			string str;
			cin>>str;
			if(str=="admin")
			{
				cout<<"��½�ɹ�!���ڼ����û������ļ�...";
				_sleep(3000);
				system("cls"); 
				return 0;
			}
			else
			{
				cout<<"����:����û�������"<<endl;
				cout<<"�밴��������µ�¼...";
				_getch();
			}
		}
	}
	main();
	return 0;
}
