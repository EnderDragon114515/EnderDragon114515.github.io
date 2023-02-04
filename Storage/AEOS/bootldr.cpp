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
	cout<<"选择操作系统:"<<endl;
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
		cout<<"请按下Ctrl+L登陆AEOS..."<<endl;
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
			cout<<"登陆AEOS"<<endl;
			cout<<"==========="<<endl;
			cout<<"用户名:";
			string str;
			cin>>str;
			if(str=="admin")
			{
				cout<<"登陆成功!正在加载用户配置文件...";
				_sleep(3000);
				system("cls"); 
				return 0;
			}
			else
			{
				cout<<"错误:这个用户不存在"<<endl;
				cout<<"请按任意键重新登录...";
				_getch();
			}
		}
	}
	main();
	return 0;
}
