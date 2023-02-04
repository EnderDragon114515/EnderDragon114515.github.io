#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
string dir=" C:\\",cmd="dir";
int main()
{
	system("bootldr");
	system("cls");
	cout<<"AEOS Server 1.4简体中文版"<<endl;
	cout<<"============================="<<endl;
	cout<<"输入help显示帮助信息"<<endl;
	while(1)
	{
		for(int i=1;i<=dir.size();i++)
		{
			cout<<dir[i];
		}
		cout<<">";
		string str;
		cin>>str;
		if(str=="about")
		{
			cout<<"AEOS Server 1.4 简体中文版"<<endl;
			cout<<"(C)Copyright LF5 Synergies"<<endl;
		}
		else if(str=="server")
		{
			cin>>str;
			if(str=="?")
			{
				cout<<"用法:server [要执行的操作]"<<endl;
				cout<<"目前支持的操作有:"<<endl;
				cout<<"msg   对目标计算机发送信息"<<endl;
				cout<<"file  连接目标计算机的共享磁盘"<<endl;
				cout<<"inst  安装共享磁盘(需要管理员权限)"<<endl;
				cout<<"del   卸载共享磁盘(需要管理员权限)"<<endl;
			}
			else if(str=="msg")
			{
				cout<<"目标计算机";
				system("message.bat");
			}
			else if(str=="file")
			{
                cout<<"目标计算机";
                system("openshare.bat");     
            }
            else if(str=="inst")
            {
                 system("netshare.bat");
            }
            else if(str=="del")
            {
                 system("rmshare.bat");
            }
			else
			{
                cout<<"错误:不存在的操作"<<endl; 
            }
		}
		else if(str=="exec")
		{
			getline(cin,str);
			if(str==" ?")
			{
				cout<<"用法:exec [程序名]"<<endl;
			}
			else
			{
				system(str.data());	
			}
		}
		else if(str=="reboot")
		{
			main();
		}
		else if(str=="shutdown")
		{
			cout<<"正在终止服务..."<<endl;
			cout<<"正在注销登录..."<<endl;
			cout<<"正在发送ACPI信号..."<<endl;
			_sleep(3000);
			cout<<"错误:信号发送失败"<<endl;
			cout<<"AEOS已关机,现可以关闭电源了"<<endl;
			while(1)
			{
				_getch();
			}
		}
		else if(str=="ls")
		{
			system(strcat(((char*)cmd.data()),((char*)(dir.data()))));
		}
		else if(str=="cd")
		{
			getline(cin,dir);
		}
		else if(str=="help")
		{
			cout<<"当前版本可用指令有:"<<endl;
			cout<<"about      关于AEOS"<<endl;
			cout<<"help       显示帮助"<<endl;
			cout<<"exec       启动程序"<<endl;
			cout<<"shutdown   关闭AEOS"<<endl;
			cout<<"reboot     重启AEOS"<<endl;
			cout<<"ls         显示文件"<<endl;
			cout<<"cd         切换目录"<<endl;
		}
		else
		{
			cout<<"'"<<str<<"':命令不存在"<<endl;
		}
	}
	return 0;
}
