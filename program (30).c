
#include<stdio.h>  

int EvenSum(int);
int main()
{
	int iValue=0,iRet=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=EvenSum(iValue);   
	
	printf("Sum of even digits are:%d\n",iRet);
	return 0;
}


int EvenSum(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	
		
	if(iNo<0)
	{
		iNo=-iNo;       //updater
	}		
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{	
		 iSum=iSum+iDigit;
		}
		iNo=iNo/10;
	}

	return iSum;
}