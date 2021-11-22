//factorial number
//input: 1
//output: 1

//input: 3
//output: 6
//factorial number with datatype modifier




#include<stdio.h>

unsigned long int factorial(int ivalue)
{
	unsigned long int ifact=1;
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
	int ino=0;
	unsigned long int iRet=0;
	
	printf("enter number");
	scanf("%d",&ino);

    iRet=factorial(ino);   
	
	printf("factorial is:%ld\n",iRet);


  return 0;
}




