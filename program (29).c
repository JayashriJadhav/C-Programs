
#include<stdio.h>  

int CountEven(int);
int main()
{
	int iValue=0,iRet=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);   
	
	printf("number of even digits are:%d\n",iRet);
	return 0;
}


int CountEven(int iNo)
{
	
	
	int iCnt=0;
	int iDigit=0;
	
	if(iNo==0)
	{
		return 1;       //filter
    }		
	if(iNo<0)
	{
		iNo=-iNo;       //updater
	}		
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{	
		  iCnt++;
		} 
		iNo=iNo/10;
	}

	return iCnt;
}