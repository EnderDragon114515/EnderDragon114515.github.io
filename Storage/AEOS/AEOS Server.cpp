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
	cout<<"AEOS Server 1.4�������İ�"<<endl;
	cout<<"============================="<<endl;
	cout<<"����help��ʾ������Ϣ"<<endl;
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
			cout<<"AEOS Server 1.4 �������İ�"<<endl;
			cout<<"(C)Copyright LF5 Synergies"<<endl;
		}
		else if(str=="server")
		{
			cin>>str;
			if(str=="?")
			{
				cout<<"�÷�:server [Ҫִ�еĲ���]"<<endl;
				cout<<"Ŀǰ֧�ֵĲ�����:"<<endl;
				cout<<"msg   ��Ŀ������������Ϣ"<<endl;
				cout<<"file  ����Ŀ�������Ĺ������"<<endl;
				cout<<"inst  ��װ�������(��Ҫ����ԱȨ��)"<<endl;
				cout<<"del   ж�ع������(��Ҫ����ԱȨ��)"<<endl;
			}
			else if(str=="msg")
			{
				cout<<"Ŀ������";
				system("message.bat");
			}
			else if(str=="file")
			{
                cout<<"Ŀ������";
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
                cout<<"����:�����ڵĲ���"<<endl; 
            }
		}
		else if(str=="exec")
		{
			getline(cin,str);
			if(str==" ?")
			{
				cout<<"�÷�:exec [������]"<<endl;
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
			cout<<"������ֹ����..."<<endl;
			cout<<"����ע����¼..."<<endl;
			cout<<"���ڷ���ACPI�ź�..."<<endl;
			_sleep(3000);
			cout<<"����:�źŷ���ʧ��"<<endl;
			cout<<"AEOS�ѹػ�,�ֿ��Թرյ�Դ��"<<endl;
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
			cout<<"��ǰ�汾����ָ����:"<<endl;
			cout<<"about      ����AEOS"<<endl;
			cout<<"help       ��ʾ����"<<endl;
			cout<<"exec       ��������"<<endl;
			cout<<"shutdown   �ر�AEOS"<<endl;
			cout<<"reboot     ����AEOS"<<endl;
			cout<<"ls         ��ʾ�ļ�"<<endl;
			cout<<"cd         �л�Ŀ¼"<<endl;
		}
		else
		{
			cout<<"'"<<str<<"':�������"<<endl;
		}
	}
	return 0;
}
