///character Toggle

#include<stdio.h>


char CharToggle(char c)
{
  if((c>='A')&& (c<='Z'))
  { 
    return c+32;
  }
  else if((c>='a')&&(c<='z'))
  {
	  return c-32;
  }
  
}
	
int main()
	{
	char ch='\0';
	char CRet='\0';
	
	printf("enter character\n");
	scanf("%c",&ch);
	CRet=CharToggle(ch);
	
	printf("Toggle letter is :%c\n",CRet);
	
	
    return 0;
}
		