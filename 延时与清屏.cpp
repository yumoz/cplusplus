#include<stdlib.h>//���� 
#include<stdio.h>  
#include<windows.h> //��ʱ 
int main()
{
	int a,i;
	a=1000;
	for(i=0;i<5;i++)
	{
		
	printf("����\t");
	
	Sleep(a);
	system("CLS");
	printf("��\n"); 
	Sleep(a);
//	system("PAUSE");
	system("CLS");
//	system("PAUSE");
	printf("�ȿ�");
	Sleep(a);
	system("CLS") ;
	}
	
	return 0;
}

//��������
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("hello world!\n");
	printf("hello world!\n");
	printf("hello world!\n");
	system("PAUSE");
	system("CLS");
	system("PAUSE");
	return 0;
}
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("asdhui");
	printf("asdhui");
	printf("asdhui");
	printf("Y/N");
	scanf("%d",&c);
	if(c=='Y'||c=='y')
	{
		clrscr();
	}
	
}*/
