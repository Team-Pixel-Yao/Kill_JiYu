#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(void)
{
	while(1)
	{
		system("taskkill /f /im studentmain.exe");//����taskkill����������ĳЩ������������У������������һ��Ϊstudentmain.exe,�ɳ��Ը�ΪStudent.exe)
		Sleep(500);//��ֹĳЩ�����������Զ�������Ϊ�������ܣ�ÿ0.5���ɱһ�� 
	}
}
