/// uppercase to lowecase

#include<stdio.h>


char CapitalToSmall(char c)
{
  if((c>='A')&& (c<='Z'))
  { 
    return c+32;
  }
 
}
	
int main()
	{
	char ch='\0';
	char CRet='\0';
	
	printf("enter character\n");
	scanf("%c",&ch);
	CRet=CapitalToSmall(ch);
	
	printf("small letter is :%c\n",CRet);
	
	
    return 0;
}
		