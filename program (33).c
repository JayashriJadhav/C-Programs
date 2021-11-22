#include<stdio.h> 
#include<stdbool.h>

bool CheckPalindrome(int);
int main()
{
	int iValue=0;
	bool bRet=false;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPalindrome(iValue);  

    if(bRet==true)
	{ 
     printf("number is palindrome\n");
	}
	else
    {
     	printf("number is not palindrome\n");	
	}
	return 0;
}


bool CheckPalindrome(int iNo)
{
	
	int iDigit=0;
	int iRev=0;
	int iTemp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(iRev==iTemp)
	{
		return true;
	}
    else
	{
		return false;
	}	
    
}