@echo off
set /p shareloc="�����ļ���·��:"
set /p userlim="ͬʱ�û�������:"
net share AEOS-ShareFile=%shareloc% /grant:everyone,FULL /users:%userlim%
echo ��װ�ɹ�!
pause