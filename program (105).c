#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
	char *start=NULL;
	char *end=NULL;
	bool flag=true;
	start=str;
	end=str;
	while(*end!='\0')    //54 address la yava mnun ha loop
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		if(*start!=*end)
		{
			flag=false;
			break;
		}
		start++;
		end--;
	}
	return flag;
}
		
int main()
{
	char Arr[30];
	bool bRet=false;
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CheckPalindrome(Arr);   //CheckPalindrome(50)
	if(bRet==true)
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is not palindrome\n");
	}
	
	return 0;
}
		
	
	
	

	

