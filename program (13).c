//input:5
//output: 15
//with updater


#include<stdio.h>

int Addition(int ivalue)
{
	int isum=0;
	int icnt=0;
	
	if(ivalue<0)       //updater
	{
		ivalue=-ivalue;
    }		
	
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		isum=isum+icnt;
    }
   
   return isum;   
 

}

int main()
{
	int ino=0,iRet=0;
	
	printf("enter number");
	scanf("%d",&ino);

    iRet=Addition(ino);   
	
	printf("Addition is:%d\n",iRet);


  return 0;
}
