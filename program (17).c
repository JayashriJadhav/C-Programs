#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);

int main()
{
	 int ino=0;
	 bool bRet=false;
	 
	 printf("enter number\n");
	 sacnf("%d",&ino);
	 
	 bRet=CheckEven(ino);
	 if(bRet