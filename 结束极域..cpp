#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(void)
{
	while(1)
	{
		system("taskkill /f /im studentmain.exe");//调用taskkill结束极域（在某些其他控制软件中，软件进程名不一定为studentmain.exe,可尝试改为Student.exe)
		Sleep(500);//防止某些软件结束后会自动重启，为保留性能，每0.5秒查杀一次 
	}
}
