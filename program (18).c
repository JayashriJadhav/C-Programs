
#include<stdio.h>
typedef unsigned long int UINT;
 
 UINT factorial(int ivalue)
{
	UINT ifact=1;
	int icnt=0;
	
	if(ivalue<0)       //updater
	{
		ivalue=-ivalue;
    }		
	
	/*
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		ifact=ifact*icnt;
    }
   */
   icnt=1;
   while(icnt<=ivalue)
   {
	   ifact=ifact*icnt;
	   icnt++;
   }   
   return ifact;   
}

int main()
{
	int ino=0;
	UINT iRet=0;
	
	printf("enter number");
	scanf("%d",&ino);

    iRet=factorial(ino);   
	
	printf("factorial is:%d\n",iRet);


  return 0;
}




