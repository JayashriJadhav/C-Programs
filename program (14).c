//factorial number
//input: 1
//output: 1

//input: 3
//output: 6

#include<stdio.h>

int factorial(int ivalue)
{
	int ifact=1;
	int icnt=0;
	
	if(ivalue<0)       //updater
	{
		ivalue=-ivalue;
    }		
	
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		ifact=ifact*icnt;
    }
   
   return ifact;   
 

}

int main()
{
	int ino=0,iRet=0;
	
	printf("enter number");
	scanf("%d",&ino);

    iRet=factorial(ino);   
	
	printf("factorial is:%d\n",iRet);


  return 0;
}




