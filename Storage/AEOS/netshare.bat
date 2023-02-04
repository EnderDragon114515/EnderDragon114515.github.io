@echo off
set /p shareloc="共享文件夹路径:"
set /p userlim="同时用户访问数:"
net share AEOS-ShareFile=%shareloc% /grant:everyone,FULL /users:%userlim%
echo 安装成功!
pause