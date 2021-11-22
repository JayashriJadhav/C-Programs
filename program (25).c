
#include<stdio.h>  

int Display(int);
int main()
{
	int iValue=0,iRet=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);   
	
	printf("Addition is:%d\n",iRet);
	return 0;
}


int Display(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo       //updater
	}		
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}

	return iSum;
}