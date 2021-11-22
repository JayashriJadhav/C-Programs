#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
  if((c>='A')&& (c<='Z'))
  { 
    return true;
  }
  else
  {
    return false;
	}
	}
	
	int main()
	{
	char ch='\0';
	bool bRet=false;
	
	printf("enter character\n");
	scanf("%c",&ch);
	bRet=CheckCapital(ch);
	
	if(bRet==true)
	{
      printf("it is capital");
	  }
	  else
	  {
	  printf("it is not capital");
	  }
	  return 0;
	  }
	